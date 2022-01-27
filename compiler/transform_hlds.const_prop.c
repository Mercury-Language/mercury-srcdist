/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "libs.int_emu.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 144 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

#line 150 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

#line 153 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

#line 156 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

#line 159 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

#line 162 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

#line 165 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

#line 168 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1];

#line 171 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0;

#line 174 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1];

#line 177 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1;

#line 180 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1];

#line 183 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1];

#line 186 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2];

#line 189 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2];

#line 192 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2];

#line 195 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 198 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 200 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 203 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 206 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 208 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 210 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 213 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 216 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 218 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 221 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 224 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 226 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 228 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 547 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 547 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 547 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 547 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 547 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 502 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 502 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 502 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 502 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 502 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 284 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 284 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 284 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 264 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 264 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 264 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 264 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 264 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 264 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 264 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 80 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_27);

#line 690 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 690 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 690 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 71 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 71 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 71 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 765 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 765 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 765 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);

#line 754 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 754 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 754 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);

#line 726 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 726 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 726 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 726 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6);

#line 694 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 694 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 694 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 694 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 694 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 694 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 579 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 579 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 579 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 579 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 579 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 579 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 297 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 297 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 297 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 297 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 297 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 203 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 203 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 203 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 203 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 203 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 134 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 134 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 134 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 134 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 134 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 134 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 134 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 134 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 88 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 88 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_10,
#line 88 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_11,
#line 88 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_12,
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_13,
#line 88 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 88 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);

#line 80 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 80 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 80 "const_prop.m"
  MR_Box transform_hlds__const_prop__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__const_prop_scalar_common_2[1][7];


#line 215 "const_prop.m"
/* sealed */ struct transform_hlds__const_prop__vector_common_type_3_0_s {
#line 215 "const_prop.m"
  const MR_String transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0;
#line 215 "const_prop.m"
  const MR_Integer transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1;
#line 215 "const_prop.m"
};

static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[20];



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


static /* final */ const struct transform_hlds__const_prop__vector_common_type_3_0_s transform_hlds__const_prop_vector_common_3[20] = {
  /* row 0 */
  {
    (MR_String) "+",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "-",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "\\",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "floor_to_multiple_of_bits_per_int",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) 6
  },
  /* row 7 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 10 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 11 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 15 */
  {
    (MR_String) "*",
    (MR_Integer) 0
  },
  /* row 16 */
  {
    (MR_String) "+",
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "-",
    (MR_Integer) 2
  },
  /* row 18 */
  {
    (MR_String) "/",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    (MR_String) "unchecked_quotient",
    (MR_Integer) 4
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 659 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 667 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 676 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 684 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 691 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

#line 698 "transform_hlds.const_prop.c"
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

#line 713 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 718 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0
  }
};

#line 727 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 732 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = {
  (MR_Integer) 0
};

#line 737 "transform_hlds.const_prop.c"
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

#line 754 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 759 "transform_hlds.const_prop.c"
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

#line 774 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

#line 779 "transform_hlds.const_prop.c"
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

#line 794 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 799 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

#line 804 "transform_hlds.const_prop.c"
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

#line 818 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 824 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 830 "transform_hlds.const_prop.c"
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

#line 847 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 850 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 852 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 854 "transform_hlds.const_prop.c"
{
#line 856 "transform_hlds.const_prop.c"
  {
#line 858 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 861 "transform_hlds.const_prop.c"
    {
#line 863 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 866 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 868 "transform_hlds.const_prop.c"
  }
#line 870 "transform_hlds.const_prop.c"
}

#line 873 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 876 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 878 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 880 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 882 "transform_hlds.const_prop.c"
{
#line 884 "transform_hlds.const_prop.c"
  {
#line 886 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 889 "transform_hlds.const_prop.c"
    {
#line 891 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 894 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 896 "transform_hlds.const_prop.c"
  }
#line 898 "transform_hlds.const_prop.c"
}

#line 901 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 904 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 906 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 908 "transform_hlds.const_prop.c"
{
#line 910 "transform_hlds.const_prop.c"
  {
#line 912 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 915 "transform_hlds.const_prop.c"
    {
#line 917 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 920 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 922 "transform_hlds.const_prop.c"
  }
#line 924 "transform_hlds.const_prop.c"
}

#line 927 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 930 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 932 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 934 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 936 "transform_hlds.const_prop.c"
{
#line 938 "transform_hlds.const_prop.c"
  {
#line 940 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 943 "transform_hlds.const_prop.c"
    {
#line 945 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_val_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 948 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 950 "transform_hlds.const_prop.c"
  }
#line 952 "transform_hlds.const_prop.c"
}

#line 547 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 547 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 547 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 547 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 547 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 547 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 547 "const_prop.m"
{
#line 552 "const_prop.m"
  {
#line 552 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 552 "const_prop.m"
    MR_String transform_hlds__const_prop__OutputArgVal_16;
#line 552 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_19;
#line 552 "const_prop.m"
    MR_String transform_hlds__const_prop__YVal_22;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_29_29;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_30_30;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33;
#line 552 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_35_35;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_36_36;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 560 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 560 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 560 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 560 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;

#line 555 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "++") == 0))
#line 554 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 555 "const_prop.m"
    else
#line 555 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "append") == 0))
#line 555 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 555 "const_prop.m"
    else
#line 555 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 552 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
      {
#line 558 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 552 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
          {
#line 559 "const_prop.m"
            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 559 "const_prop.m"
            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 559 "const_prop.m"
            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 559 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 559 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
              {
#line 559 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 1)));
#line 559 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 2)));
#line 559 "const_prop.m"
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 3)));
#line 559 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 559 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                  {
#line 559 "const_prop.m"
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 0)));
#line 559 "const_prop.m"
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 1)));
#line 559 "const_prop.m"
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 0)));
#line 559 "const_prop.m"
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 1)));
#line 559 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 559 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                      {
#line 559 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 1)));
#line 559 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
                          {
#line 559 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
                              {
#line 560 "const_prop.m"
                                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 560 "const_prop.m"
                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 560 "const_prop.m"
                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 560 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 560 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 560 "const_prop.m"
                                  {
#line 560 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 1)));
#line 560 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 2)));
#line 560 "const_prop.m"
                                    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 3)));
#line 560 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 560 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 560 "const_prop.m"
                                      {
#line 560 "const_prop.m"
                                        transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 0)));
#line 560 "const_prop.m"
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 1)));
#line 560 "const_prop.m"
                                        transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 0)));
#line 560 "const_prop.m"
                                        transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 1)));
#line 560 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 560 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 560 "const_prop.m"
                                          {
#line 560 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 560 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
                                              {
#line 560 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 552 "const_prop.m"
                                                  {
#line 561 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 562 "const_prop.m"
                                                    {
#line 562 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                                                    }
#line 552 "const_prop.m"
                                                    {
#line 552 "const_prop.m"
                                                      MR_Word base;
#line 552 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 552 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 552 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 552 "const_prop.m"
                                                    }
#line 552 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 552 "const_prop.m"
                                                  }
#line 552 "const_prop.m"
                                              }
#line 560 "const_prop.m"
                                          }
#line 560 "const_prop.m"
                                      }
#line 560 "const_prop.m"
                                  }
#line 552 "const_prop.m"
                              }
#line 552 "const_prop.m"
                          }
#line 559 "const_prop.m"
                      }
#line 559 "const_prop.m"
                  }
#line 559 "const_prop.m"
              }
#line 552 "const_prop.m"
          }
#line 552 "const_prop.m"
      }
#line 552 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 552 "const_prop.m"
  }
#line 547 "const_prop.m"
}

#line 502 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 502 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 502 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 502 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 502 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 502 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 502 "const_prop.m"
{
#line 507 "const_prop.m"
  {
#line 507 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 507 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_16;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_127_127;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_130_130;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_133_133;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_136_136;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_139_139;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_140_140;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_141_141;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_142_142;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_143_143;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_144_144;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_145_145;
#line 507 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_146_146;
#line 507 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_147_147;
#line 507 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_148_148;
#line 525 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_128_128;
#line 525 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_129_129;
#line 526 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_131_131;
#line 526 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_132_132;
#line 525 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_134_134;
#line 525 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_135_135;
#line 526 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_137_137;
#line 526 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_138_138;
#line 515 "const_prop.m"
    MR_Integer transform_hlds__const_prop__lo_0;
#line 515 "const_prop.m"
    MR_Integer transform_hlds__const_prop__hi_1;
#line 515 "const_prop.m"
    MR_Integer transform_hlds__const_prop__mid_2;
#line 515 "const_prop.m"
    MR_Integer transform_hlds__const_prop__result_3;

#line 507 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
      {
#line 525 "const_prop.m"
        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 525 "const_prop.m"
        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 525 "const_prop.m"
        transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 526 "const_prop.m"
        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 526 "const_prop.m"
        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 526 "const_prop.m"
        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 525 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 525 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 525 "const_prop.m"
          {
#line 525 "const_prop.m"
            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 525 "const_prop.m"
            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 525 "const_prop.m"
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 526 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 526 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 526 "const_prop.m"
              {
#line 526 "const_prop.m"
                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 526 "const_prop.m"
                transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 2)));
#line 526 "const_prop.m"
                transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 3)));
#line 525 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 525 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 525 "const_prop.m"
                  {
#line 525 "const_prop.m"
                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 525 "const_prop.m"
                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 526 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 1)));
#line 526 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 526 "const_prop.m"
                      {
#line 526 "const_prop.m"
                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)));
#line 526 "const_prop.m"
                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 525 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
                          {
#line 525 "const_prop.m"
                            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 525 "const_prop.m"
                            transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 526 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
                              {
#line 526 "const_prop.m"
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)));
#line 526 "const_prop.m"
                                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 525 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
                                  {
#line 525 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 525 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 525 "const_prop.m"
                                      {
#line 525 "const_prop.m"
                                        transform_hlds__const_prop__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 526 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_145_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
                                          {
#line 526 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 526 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 526 "const_prop.m"
                                              {
#line 526 "const_prop.m"
                                                transform_hlds__const_prop__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 515 "const_prop.m"
                                                /* binary string jump switch */
#line 515 "const_prop.m"
                                                transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
#line 515 "const_prop.m"
                                                transform_hlds__const_prop__hi_1 = (MR_Integer) 4;
#line 515 "const_prop.m"
                                                do
#line 515 "const_prop.m"
                                                  {
#line 515 "const_prop.m"
                                                    transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
#line 515 "const_prop.m"
                                                    transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_10, ((&transform_hlds__const_prop_vector_common_3[15 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
#line 515 "const_prop.m"
                                                    if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
#line 515 "const_prop.m"
                                                      {
#line 515 "const_prop.m"
#line 515 "const_prop.m"
                                                        switch (((&transform_hlds__const_prop_vector_common_3[15 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
#line 515 "const_prop.m"
                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 515 "const_prop.m"
                                                          case (MR_Integer) 0:
#line 523 "const_prop.m"
                                                            {
#line 523 "const_prop.m"
                                                              /* case "*" */
#line 527 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 528 "const_prop.m"
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 * transform_hlds__const_prop__V_148_148);
#line 523 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 523 "const_prop.m"
                                                            }
#line 515 "const_prop.m"
                                                            break;
#line 515 "const_prop.m"
                                                          case (MR_Integer) 1:
#line 509 "const_prop.m"
                                                            {
#line 509 "const_prop.m"
                                                              /* case "+" */
#line 513 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 514 "const_prop.m"
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 + transform_hlds__const_prop__V_148_148);
#line 509 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 509 "const_prop.m"
                                                            }
#line 515 "const_prop.m"
                                                            break;
#line 515 "const_prop.m"
                                                          case (MR_Integer) 2:
#line 516 "const_prop.m"
                                                            {
#line 516 "const_prop.m"
                                                              /* case "-" */
#line 520 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 521 "const_prop.m"
                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 - transform_hlds__const_prop__V_148_148);
#line 516 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 516 "const_prop.m"
                                                            }
#line 515 "const_prop.m"
                                                            break;
#line 515 "const_prop.m"
                                                          case (MR_Integer) 3:
#line 530 "const_prop.m"
                                                            {
#line 530 "const_prop.m"
                                                              /* case "/" */
#line 534 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 535 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 535 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 530 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 530 "const_prop.m"
                                                                {
#line 536 "const_prop.m"
                                                                  {
#line 536 "const_prop.m"
                                                                    transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__V_147_147, transform_hlds__const_prop__V_148_148);
                                                                  }
#line 536 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 530 "const_prop.m"
                                                                }
#line 530 "const_prop.m"
                                                            }
#line 515 "const_prop.m"
                                                            break;
#line 515 "const_prop.m"
                                                          case (MR_Integer) 4:
#line 538 "const_prop.m"
                                                            {
#line 538 "const_prop.m"
                                                              /* case "unchecked_quotient" */
#line 542 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 543 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 543 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 538 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 538 "const_prop.m"
                                                                {
#line 544 "const_prop.m"
                                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 / transform_hlds__const_prop__V_148_148);
#line 544 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 538 "const_prop.m"
                                                                }
#line 538 "const_prop.m"
                                                            }
#line 515 "const_prop.m"
                                                            break;
#line 515 "const_prop.m"
                                                        }
#line 515 "const_prop.m"
                                                        /* jump out of search loop */
#line 515 "const_prop.m"
                                                        goto label_0;
#line 515 "const_prop.m"
                                                      }
#line 515 "const_prop.m"
                                                    else
#line 515 "const_prop.m"
                                                    if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
#line 515 "const_prop.m"
                                                      transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
#line 515 "const_prop.m"
                                                    else
#line 515 "const_prop.m"
                                                      transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
#line 515 "const_prop.m"
                                                  }
#line 515 "const_prop.m"
                                                while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
#line 515 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 515 "const_prop.m"
                                              label_0:;
#line 507 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 507 "const_prop.m"
                                                  {
#line 507 "const_prop.m"
                                                    {
#line 507 "const_prop.m"
                                                      MR_Word base;
#line 507 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 507 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 507 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_16);
#line 507 "const_prop.m"
                                                    }
#line 507 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 507 "const_prop.m"
                                                  }
#line 526 "const_prop.m"
                                              }
#line 507 "const_prop.m"
                                          }
#line 525 "const_prop.m"
                                      }
#line 507 "const_prop.m"
                                  }
#line 507 "const_prop.m"
                              }
#line 507 "const_prop.m"
                          }
#line 526 "const_prop.m"
                      }
#line 525 "const_prop.m"
                  }
#line 526 "const_prop.m"
              }
#line 525 "const_prop.m"
          }
#line 507 "const_prop.m"
      }
#line 507 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 507 "const_prop.m"
  }
#line 502 "const_prop.m"
}

#line 284 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 284 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 284 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 284 "const_prop.m"
{
#line 289 "const_prop.m"
  {
#line 289 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "count_codepoints") == 0);
#line 289 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_17;
#line 289 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CodePointCountX_18;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 289 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 292 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 292 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 292 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 292 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_16_16;

#line 289 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
      {
#line 291 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 289 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
          {
#line 292 "const_prop.m"
            transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 292 "const_prop.m"
            transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 292 "const_prop.m"
            transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 292 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 292 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 292 "const_prop.m"
              {
#line 292 "const_prop.m"
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 292 "const_prop.m"
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 2)));
#line 292 "const_prop.m"
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 3)));
#line 292 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 292 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 292 "const_prop.m"
                  {
#line 292 "const_prop.m"
                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 292 "const_prop.m"
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 292 "const_prop.m"
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 292 "const_prop.m"
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 292 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 292 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 292 "const_prop.m"
                      {
#line 292 "const_prop.m"
                        transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 292 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
                          {
#line 292 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
                              {
#line 293 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 294 "const_prop.m"
                                {
#line 294 "const_prop.m"
                                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                                }
#line 295 "const_prop.m"
                                {
#line 295 "const_prop.m"
                                  MR_Word base;
#line 295 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 295 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 295 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__CodePointCountX_18));
#line 295 "const_prop.m"
                                }
#line 295 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 289 "const_prop.m"
                              }
#line 289 "const_prop.m"
                          }
#line 292 "const_prop.m"
                      }
#line 292 "const_prop.m"
                  }
#line 292 "const_prop.m"
              }
#line 289 "const_prop.m"
          }
#line 289 "const_prop.m"
      }
#line 289 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 289 "const_prop.m"
  }
#line 284 "const_prop.m"
}

#line 264 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 264 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 264 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 264 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 264 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 264 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 264 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 264 "const_prop.m"
{
#line 269 "const_prop.m"
  {
#line 269 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 269 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_14;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_43_43;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_44_44;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_45_45;
#line 269 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_46_46;
#line 269 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_47_47;
#line 273 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 273 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39;
#line 273 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41;
#line 273 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_42_42;

#line 269 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 269 "const_prop.m"
      {
#line 273 "const_prop.m"
        transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 273 "const_prop.m"
        transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 273 "const_prop.m"
        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 273 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 273 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 273 "const_prop.m"
          {
#line 273 "const_prop.m"
            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 273 "const_prop.m"
            transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 273 "const_prop.m"
            transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 273 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 273 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 273 "const_prop.m"
              {
#line 273 "const_prop.m"
                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));
#line 273 "const_prop.m"
                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 273 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 269 "const_prop.m"
                  {
#line 273 "const_prop.m"
                    transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 0)));
#line 273 "const_prop.m"
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 1)));
#line 273 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 269 "const_prop.m"
                      {
#line 273 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 273 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 273 "const_prop.m"
                          {
#line 273 "const_prop.m"
                            transform_hlds__const_prop__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 1)));
#line 276 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 271 "const_prop.m"
                              {
#line 274 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 275 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_47_47;
#line 271 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 271 "const_prop.m"
                              }
#line 276 "const_prop.m"
                            else
#line 276 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 277 "const_prop.m"
                              {
#line 280 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 281 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__V_47_47);
#line 277 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 277 "const_prop.m"
                              }
#line 276 "const_prop.m"
                            else
#line 276 "const_prop.m"
                              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 269 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 269 "const_prop.m"
                              {
#line 269 "const_prop.m"
                                {
#line 269 "const_prop.m"
                                  MR_Word base;
#line 269 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 269 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 269 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_14);
#line 269 "const_prop.m"
                                }
#line 269 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 269 "const_prop.m"
                              }
#line 273 "const_prop.m"
                          }
#line 269 "const_prop.m"
                      }
#line 269 "const_prop.m"
                  }
#line 273 "const_prop.m"
              }
#line 273 "const_prop.m"
          }
#line 269 "const_prop.m"
      }
#line 269 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 269 "const_prop.m"
  }
#line 264 "const_prop.m"
}

#line 80 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 80 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_27)
#line 80 "const_prop.m"
{
#line 80 "const_prop.m"
  {
#line 80 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__HeadVar__4_28;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__Type_22;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_23;

#line 81 "const_prop.m"
    {
#line 81 "const_prop.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__const_prop__InstMap_13, transform_hlds__const_prop__HeadVar__3_27, &transform_hlds__const_prop__Inst_23);
    }
#line 82 "const_prop.m"
    {
#line 82 "const_prop.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__const_prop__VarTypes_12, transform_hlds__const_prop__HeadVar__3_27, &transform_hlds__const_prop__Type_22);
    }
#line 80 "const_prop.m"
    {
#line 80 "const_prop.m"
      transform_hlds__const_prop__HeadVar__4_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 0) = ((MR_Box) (transform_hlds__const_prop__HeadVar__3_27));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 1) = ((MR_Box) (transform_hlds__const_prop__Type_22));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_28, 2) = ((MR_Box) (transform_hlds__const_prop__Inst_23));
#line 80 "const_prop.m"
    }
#line 80 "const_prop.m"
    return transform_hlds__const_prop__HeadVar__4_28;
#line 80 "const_prop.m"
  }
#line 80 "const_prop.m"
}

#line 690 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 690 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 690 "const_prop.m"
{
#line 690 "const_prop.m"
  {
#line 690 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 690 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 690 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 690 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 690 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 1996 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 690 "const_prop.m"
    else
#line 690 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 690 "const_prop.m"
      {
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

#line 690 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 690 "const_prop.m"
          {
#line 690 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

#line 690 "const_prop.m"
            {
#line 690 "const_prop.m"
              parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_16_16, transform_hlds__const_prop__V_5_5);
#line 690 "const_prop.m"
              return;
            }
#line 690 "const_prop.m"
          }
#line 690 "const_prop.m"
        else
#line 2025 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
#line 690 "const_prop.m"
      }
#line 690 "const_prop.m"
    else
#line 690 "const_prop.m"
      {
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

#line 690 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2038 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
#line 690 "const_prop.m"
        else
#line 690 "const_prop.m"
          {
#line 690 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

#line 690 "const_prop.m"
            {
#line 690 "const_prop.m"
              transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_17_17, transform_hlds__const_prop__V_11_11);
#line 690 "const_prop.m"
              return;
            }
#line 690 "const_prop.m"
          }
#line 690 "const_prop.m"
      }
#line 690 "const_prop.m"
  }
#line 690 "const_prop.m"
}

#line 690 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 690 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 690 "const_prop.m"
{
#line 690 "const_prop.m"
  {
#line 690 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 690 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_7 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 690 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_8 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 690 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_7 == transform_hlds__const_prop__CastY_8);
#line 690 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 690 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 690 "const_prop.m"
    else
#line 690 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 690 "const_prop.m"
      {
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4;

#line 690 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 690 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 690 "const_prop.m"
          {
#line 690 "const_prop.m"
            transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 2106 "transform_hlds.const_prop.c"
            {
#line 2108 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__V_3_3, transform_hlds__const_prop__V_4_4);
            }
#line 690 "const_prop.m"
          }
#line 690 "const_prop.m"
      }
#line 690 "const_prop.m"
    else
#line 690 "const_prop.m"
      {
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
#line 690 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6;

#line 690 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 690 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 690 "const_prop.m"
          {
#line 690 "const_prop.m"
            transform_hlds__const_prop__V_6_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
#line 2132 "transform_hlds.const_prop.c"
            {
#line 2134 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_6_6);
            }
#line 690 "const_prop.m"
          }
#line 690 "const_prop.m"
      }
#line 690 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 690 "const_prop.m"
  }
#line 690 "const_prop.m"
}

#line 71 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 71 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 71 "const_prop.m"
{
#line 71 "const_prop.m"
  {
#line 71 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 71 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 71 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 71 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 71 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 2172 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "const_prop.m"
    else
#line 71 "const_prop.m"
      {
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 2)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_10_10;

#line 71 "const_prop.m"
        {
#line 71 "const_prop.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &transform_hlds__const_prop__V_10_10, ((MR_Box) (transform_hlds__const_prop__V_4_4)), ((MR_Box) (transform_hlds__const_prop__V_7_7)));
        }
#line 2198 "transform_hlds.const_prop.c"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_10_10 == (MR_Integer) 0);
#line 71 "const_prop.m"
        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 71 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 71 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_10_10;
#line 71 "const_prop.m"
        else
#line 71 "const_prop.m"
          {
#line 71 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11;

#line 71 "const_prop.m"
            {
#line 71 "const_prop.m"
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__const_prop__V_11_11, transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
            }
#line 2218 "transform_hlds.const_prop.c"
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_11_11 == (MR_Integer) 0);
#line 71 "const_prop.m"
            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 71 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 71 "const_prop.m"
              *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_11_11;
#line 71 "const_prop.m"
            else
#line 71 "const_prop.m"
              {
#line 71 "const_prop.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_6_6, transform_hlds__const_prop__V_9_9);
#line 71 "const_prop.m"
                return;
              }
#line 71 "const_prop.m"
          }
#line 71 "const_prop.m"
      }
#line 71 "const_prop.m"
  }
#line 71 "const_prop.m"
}

#line 71 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 71 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 71 "const_prop.m"
{
#line 71 "const_prop.m"
  {
#line 71 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 71 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_9 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 71 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_10 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 71 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_9 == transform_hlds__const_prop__CastY_10);
#line 71 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 71 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 71 "const_prop.m"
    else
#line 71 "const_prop.m"
      {
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 2)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));

#line 2285 "transform_hlds.const_prop.c"
        {
#line 2287 "transform_hlds.const_prop.c"
          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_3_3)), ((MR_Box) (transform_hlds__const_prop__V_6_6)));
        }
#line 71 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 71 "const_prop.m"
          {
#line 2294 "transform_hlds.const_prop.c"
            {
#line 2296 "transform_hlds.const_prop.c"
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__V_4_4, transform_hlds__const_prop__V_7_7);
            }
#line 71 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 2301 "transform_hlds.const_prop.c"
              {
#line 2303 "transform_hlds.const_prop.c"
                return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
              }
#line 71 "const_prop.m"
          }
#line 71 "const_prop.m"
      }
#line 71 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 71 "const_prop.m"
  }
#line 71 "const_prop.m"
}

#line 765 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 765 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 765 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 765 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14)
#line 765 "const_prop.m"
{
#line 768 "const_prop.m"
  {
#line 768 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_11;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_12;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__Goal_30;
#line 768 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 797 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 797 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 801 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 772 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 772 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;

#line 797 "const_prop.m"
    {
#line 797 "const_prop.m"
      hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_32_32, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__Goal_30);
    }
#line 801 "const_prop.m"
    *transform_hlds__const_prop__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 0)));
#line 801 "const_prop.m"
    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 1)));
#line 770 "const_prop.m"
    {
#line 770 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 771 "const_prop.m"
    {
#line 771 "const_prop.m"
      transform_hlds__const_prop__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "const_prop.m"
    }
#line 771 "const_prop.m"
    {
#line 771 "const_prop.m"
      transform_hlds__const_prop__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 0) = ((MR_Box) (transform_hlds__const_prop__V_18_18));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "const_prop.m"
    }
#line 771 "const_prop.m"
    {
#line 771 "const_prop.m"
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 771 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__V_17_17));
#line 771 "const_prop.m"
    }
#line 772 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 772 "const_prop.m"
    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 772 "const_prop.m"
    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 772 "const_prop.m"
    {
#line 772 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_21_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    }
#line 773 "const_prop.m"
    {
#line 773 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    }
#line 774 "const_prop.m"
    {
#line 774 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
#line 774 "const_prop.m"
      return;
    }
#line 768 "const_prop.m"
  }
#line 765 "const_prop.m"
}

#line 754 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 754 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 754 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 754 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13)
#line 754 "const_prop.m"
{
#line 757 "const_prop.m"
  {
#line 757 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_11;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_14_14;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__InputArgMode_30;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__UniMode_31;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 757 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 780 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 780 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 781 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 760 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 760 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 760 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 760 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;

#line 783 "const_prop.m"
    {
#line 783 "const_prop.m"
      transform_hlds__const_prop__OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 783 "const_prop.m"
    }
#line 784 "const_prop.m"
    {
#line 784 "const_prop.m"
      transform_hlds__const_prop__InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 0) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 784 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 784 "const_prop.m"
    }
#line 785 "const_prop.m"
    {
#line 785 "const_prop.m"
      transform_hlds__const_prop__UniMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
#line 785 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
#line 785 "const_prop.m"
    }
#line 787 "const_prop.m"
    {
#line 787 "const_prop.m"
      transform_hlds__const_prop__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_37_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 787 "const_prop.m"
    }
#line 787 "const_prop.m"
    {
#line 787 "const_prop.m"
      transform_hlds__const_prop__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 787 "const_prop.m"
    }
#line 787 "const_prop.m"
    {
#line 787 "const_prop.m"
      MR_Word base;
#line 787 "const_prop.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 787 "const_prop.m"
      *transform_hlds__const_prop__Goal_8 = base;
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__V_37_37));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UniMode_31));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__V_38_38));
#line 787 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
#line 787 "const_prop.m"
    }
#line 759 "const_prop.m"
    {
#line 759 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 760 "const_prop.m"
    transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 760 "const_prop.m"
    {
#line 760 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_14_14, transform_hlds__const_prop__V_15_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    }
#line 762 "const_prop.m"
    {
#line 762 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 763 "const_prop.m"
    {
#line 763 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
#line 763 "const_prop.m"
      return;
    }
#line 757 "const_prop.m"
  }
#line 754 "const_prop.m"
}

#line 726 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 726 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 726 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 726 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6)
#line 726 "const_prop.m"
{
#line 733 "const_prop.m"
  {
#line 733 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 730 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

#line 730 "const_prop.m"
    {
#line 730 "const_prop.m"
      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_15_15)), ((MR_Box) (transform_hlds__const_prop__V_34_34)));
    }
#line 733 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 732 "const_prop.m"
      {
#line 732 "const_prop.m"
        *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 732 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 732 "const_prop.m"
      }
#line 733 "const_prop.m"
    else
#line 748 "const_prop.m"
      {
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__XCtor_9;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__XArgVars_10;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__YCtor_13;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__YArgVars_14;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_19_19;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_22_22;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_23_23;
#line 734 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 734 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 734 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7;
#line 734 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8;
#line 735 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_31_31;
#line 735 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_32_32;
#line 735 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_11_11;
#line 735 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_12_12;
#line 737 "const_prop.m"
        MR_Word transform_hlds__const_prop__TypeInfo_38_38;

#line 734 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 734 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 734 "const_prop.m"
          {
#line 734 "const_prop.m"
            transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 1)));
#line 734 "const_prop.m"
            transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 2)));
#line 734 "const_prop.m"
            transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 3)));
#line 734 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 734 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 734 "const_prop.m"
              {
#line 734 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 0)));
#line 734 "const_prop.m"
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 1)));
#line 734 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 748 "const_prop.m"
                  {
#line 734 "const_prop.m"
                    transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 0)));
#line 734 "const_prop.m"
                    transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 1)));
#line 735 "const_prop.m"
                    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 735 "const_prop.m"
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 735 "const_prop.m"
                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
#line 735 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 735 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 735 "const_prop.m"
                      {
#line 735 "const_prop.m"
                        transform_hlds__const_prop__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 735 "const_prop.m"
                        transform_hlds__const_prop__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 2)));
#line 735 "const_prop.m"
                        transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 3)));
#line 735 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 735 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 735 "const_prop.m"
                          {
#line 735 "const_prop.m"
                            transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 735 "const_prop.m"
                            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 735 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 748 "const_prop.m"
                              {
#line 735 "const_prop.m"
                                transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)));
#line 735 "const_prop.m"
                                transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 737 "const_prop.m"
                                {
#line 737 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                }
#line 737 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 737 "const_prop.m"
                                  {
#line 2777 "transform_hlds.const_prop.c"
                                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 737 "const_prop.m"
                                    {
#line 737 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                                    }
#line 737 "const_prop.m"
                                  }
#line 739 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 738 "const_prop.m"
                                  {
#line 738 "const_prop.m"
                                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 738 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 738 "const_prop.m"
                                  }
#line 739 "const_prop.m"
                                else
#line 745 "const_prop.m"
                                  {
#line 740 "const_prop.m"
                                    {
#line 740 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                    }
#line 740 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 741 "const_prop.m"
                                    if (!(transform_hlds__const_prop__succeeded))
#line 741 "const_prop.m"
                                      {
#line 741 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 741 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_24_24;
#line 741 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_35_35;

#line 741 "const_prop.m"
                                        {
#line 741 "const_prop.m"
                                          transform_hlds__const_prop__V_24_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                                        }
#line 741 "const_prop.m"
                                        {
#line 741 "const_prop.m"
                                          transform_hlds__const_prop__V_35_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                                        }
#line 741 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == transform_hlds__const_prop__V_35_35);
#line 741 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 741 "const_prop.m"
                                      }
#line 745 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 745 "const_prop.m"
                                      {
#line 744 "const_prop.m"
                                        *transform_hlds__const_prop__Result_6 = (MR_Integer) 0;
#line 744 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 745 "const_prop.m"
                                      }
#line 745 "const_prop.m"
                                  }
#line 748 "const_prop.m"
                              }
#line 735 "const_prop.m"
                          }
#line 735 "const_prop.m"
                      }
#line 748 "const_prop.m"
                  }
#line 734 "const_prop.m"
              }
#line 734 "const_prop.m"
          }
#line 748 "const_prop.m"
      }
#line 733 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 733 "const_prop.m"
  }
#line 726 "const_prop.m"
}

#line 694 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 694 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 694 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 694 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 694 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 694 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 694 "const_prop.m"
{
#line 698 "const_prop.m"
  while (MR_TRUE)
#line 698 "const_prop.m"
    {
#line 698 "const_prop.m"
      /* tailcall optimized into a loop */
#line 698 "const_prop.m"
      {
#line 698 "const_prop.m"
        MR_bool transform_hlds__const_prop__succeeded;

#line 698 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 698 "const_prop.m"
          {
#line 698 "const_prop.m"
            MR_String transform_hlds__const_prop__V_8_8;
#line 698 "const_prop.m"
            MR_String transform_hlds__const_prop__V_9_9;
#line 698 "const_prop.m"
            MR_Integer transform_hlds__const_prop__V_10_10;

#line 698 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
#line 698 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 698 "const_prop.m"
              {
#line 698 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 698 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 698 "const_prop.m"
                  {
#line 699 "const_prop.m"
                    transform_hlds__const_prop__V_8_8 = (MR_String) "private_builtin";
#line 699 "const_prop.m"
                    transform_hlds__const_prop__V_9_9 = (MR_String) "typed_unify";
#line 699 "const_prop.m"
                    transform_hlds__const_prop__V_10_10 = (MR_Integer) 1;
#line 699 "const_prop.m"
                    /* direct tailcall eliminated */
#line 699 "const_prop.m"
                    {
#line 699 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__1__tmp_copy_1 = transform_hlds__const_prop__V_8_8;
#line 699 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__2__tmp_copy_2 = transform_hlds__const_prop__V_9_9;
#line 699 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__HeadVar__3__tmp_copy_3 = transform_hlds__const_prop__V_10_10;

#line 699 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__HeadVar__3__tmp_copy_3;
#line 699 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__HeadVar__2__tmp_copy_2;
#line 699 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__HeadVar__1__tmp_copy_1;
#line 699 "const_prop.m"
                    }
#line 699 "const_prop.m"
                    continue;
#line 698 "const_prop.m"
                  }
#line 698 "const_prop.m"
              }
#line 698 "const_prop.m"
          }
#line 698 "const_prop.m"
        else
#line 698 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 701 "const_prop.m"
          {
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfX_14;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfY_15;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__X_16;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__Y_17;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_19_19;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_20_20;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_21_21;
#line 701 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_22_22;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeInfo_36_57;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_36_36;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_55_55;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_46_46;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_47_47;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_48_48;
#line 730 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_49_49;

#line 701 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 701 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 701 "const_prop.m"
              {
#line 705 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 1);
#line 701 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 701 "const_prop.m"
                  {
#line 706 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 706 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 706 "const_prop.m"
                      {
#line 706 "const_prop.m"
                        transform_hlds__const_prop__TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 706 "const_prop.m"
                        transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 706 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 706 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 706 "const_prop.m"
                          {
#line 706 "const_prop.m"
                            transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)));
#line 706 "const_prop.m"
                            transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 706 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 706 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 706 "const_prop.m"
                              {
#line 706 "const_prop.m"
                                transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 706 "const_prop.m"
                                transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 706 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 706 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 706 "const_prop.m"
                                  {
#line 706 "const_prop.m"
                                    transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 706 "const_prop.m"
                                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 706 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 701 "const_prop.m"
                                      {
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 730 "const_prop.m"
                                        transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 3056 "transform_hlds.const_prop.c"
                                        transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
#line 730 "const_prop.m"
                                        {
#line 730 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__V_36_36)), ((MR_Box) (transform_hlds__const_prop__V_55_55)));
                                        }
#line 3063 "transform_hlds.const_prop.c"
                                        if (transform_hlds__const_prop__succeeded)
#line 3065 "transform_hlds.const_prop.c"
                                          {
#line 3067 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_23_23;
#line 3069 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 713 "const_prop.m"
                                            {
#line 713 "const_prop.m"
                                              transform_hlds__const_prop__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 713 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 1) = ((MR_Box) (transform_hlds__const_prop__V_24_24));
#line 713 "const_prop.m"
                                            }
#line 713 "const_prop.m"
                                            {
#line 713 "const_prop.m"
                                              MR_Word base;
#line 713 "const_prop.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "const_prop.m"
                                              *transform_hlds__const_prop__Result_5 = base;
#line 713 "const_prop.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_23_23));
#line 713 "const_prop.m"
                                            }
#line 3094 "transform_hlds.const_prop.c"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 3096 "transform_hlds.const_prop.c"
                                          }
#line 3098 "transform_hlds.const_prop.c"
                                        else
#line 3100 "transform_hlds.const_prop.c"
                                          {
#line 3102 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XCtor_30;
#line 3104 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XArgVars_31;
#line 3106 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YCtor_34;
#line 3108 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YArgVars_35;
#line 3110 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 3112 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_38_38;
#line 3114 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_39_39;
#line 3116 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_40_40;
#line 3118 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_41_41;
#line 3120 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_42_42;
#line 3122 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_43_43;
#line 3124 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_44_44;
#line 3126 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__Result0_65;
#line 734 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 734 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 734 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_28_28;
#line 734 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_29_29;
#line 735 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_52_52;
#line 735 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_53_53;
#line 735 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_32_32;
#line 735 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_33_33;
#line 737 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__TypeInfo_38_59;

#line 734 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 734 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 734 "const_prop.m"
                                              {
#line 734 "const_prop.m"
                                                transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 734 "const_prop.m"
                                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 734 "const_prop.m"
                                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 734 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 734 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 734 "const_prop.m"
                                                  {
#line 734 "const_prop.m"
                                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 0)));
#line 734 "const_prop.m"
                                                    transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 1)));
#line 734 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3171 "transform_hlds.const_prop.c"
                                                    if (transform_hlds__const_prop__succeeded)
#line 3173 "transform_hlds.const_prop.c"
                                                      {
#line 734 "const_prop.m"
                                                        transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));
#line 734 "const_prop.m"
                                                        transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 735 "const_prop.m"
                                                        transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 735 "const_prop.m"
                                                        transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 735 "const_prop.m"
                                                        transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 735 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 735 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 735 "const_prop.m"
                                                          {
#line 735 "const_prop.m"
                                                            transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
#line 735 "const_prop.m"
                                                            transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 2)));
#line 735 "const_prop.m"
                                                            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 3)));
#line 735 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 735 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 735 "const_prop.m"
                                                              {
#line 735 "const_prop.m"
                                                                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
#line 735 "const_prop.m"
                                                                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
#line 735 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3209 "transform_hlds.const_prop.c"
                                                                if (transform_hlds__const_prop__succeeded)
#line 3211 "transform_hlds.const_prop.c"
                                                                  {
#line 735 "const_prop.m"
                                                                    transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)));
#line 735 "const_prop.m"
                                                                    transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
#line 737 "const_prop.m"
                                                                    {
#line 737 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                    }
#line 737 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 737 "const_prop.m"
                                                                      {
#line 3226 "transform_hlds.const_prop.c"
                                                                        transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 737 "const_prop.m"
                                                                        {
#line 737 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                                                        }
#line 737 "const_prop.m"
                                                                      }
#line 739 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 738 "const_prop.m"
                                                                      {
#line 738 "const_prop.m"
                                                                        transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
#line 738 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 738 "const_prop.m"
                                                                      }
#line 739 "const_prop.m"
                                                                    else
#line 745 "const_prop.m"
                                                                      {
#line 740 "const_prop.m"
                                                                        {
#line 740 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                        }
#line 740 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 741 "const_prop.m"
                                                                        if (!(transform_hlds__const_prop__succeeded))
#line 741 "const_prop.m"
                                                                          {
#line 741 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 741 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_45_45;
#line 741 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_56_56;

#line 741 "const_prop.m"
                                                                            {
#line 741 "const_prop.m"
                                                                              transform_hlds__const_prop__V_45_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                                                            }
#line 741 "const_prop.m"
                                                                            {
#line 741 "const_prop.m"
                                                                              transform_hlds__const_prop__V_56_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                                                            }
#line 741 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == transform_hlds__const_prop__V_56_56);
#line 741 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 741 "const_prop.m"
                                                                          }
#line 745 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 745 "const_prop.m"
                                                                          {
#line 744 "const_prop.m"
                                                                            transform_hlds__const_prop__Result0_65 = (MR_Integer) 0;
#line 744 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 745 "const_prop.m"
                                                                          }
#line 745 "const_prop.m"
                                                                      }
#line 3295 "transform_hlds.const_prop.c"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 3297 "transform_hlds.const_prop.c"
                                                                      {
#line 711 "const_prop.m"
#line 711 "const_prop.m"
                                                                        switch (transform_hlds__const_prop__Result0_65) {
#line 711 "const_prop.m"
                                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 711 "const_prop.m"
                                                                          case (MR_Integer) 0:
#line 710 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "const_prop.m"
                                                                            break;
#line 711 "const_prop.m"
                                                                          case (MR_Integer) 1:
#line 712 "const_prop.m"
                                                                            {
#line 712 "const_prop.m"
                                                                              MR_Word transform_hlds__const_prop__V_61_61;
#line 712 "const_prop.m"
                                                                              MR_Word transform_hlds__const_prop__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 713 "const_prop.m"
                                                                              {
#line 713 "const_prop.m"
                                                                                transform_hlds__const_prop__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 713 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 1) = ((MR_Box) (transform_hlds__const_prop__V_62_62));
#line 713 "const_prop.m"
                                                                              }
#line 713 "const_prop.m"
                                                                              {
#line 713 "const_prop.m"
                                                                                MR_Word base;
#line 713 "const_prop.m"
                                                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = base;
#line 713 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_61_61));
#line 713 "const_prop.m"
                                                                              }
#line 712 "const_prop.m"
                                                                            }
#line 711 "const_prop.m"
                                                                            break;
#line 711 "const_prop.m"
                                                                        }
#line 711 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 3349 "transform_hlds.const_prop.c"
                                                                      }
#line 3351 "transform_hlds.const_prop.c"
                                                                  }
#line 735 "const_prop.m"
                                                              }
#line 735 "const_prop.m"
                                                          }
#line 3357 "transform_hlds.const_prop.c"
                                                      }
#line 734 "const_prop.m"
                                                  }
#line 734 "const_prop.m"
                                              }
#line 3363 "transform_hlds.const_prop.c"
                                          }
#line 701 "const_prop.m"
                                      }
#line 706 "const_prop.m"
                                  }
#line 706 "const_prop.m"
                              }
#line 706 "const_prop.m"
                          }
#line 706 "const_prop.m"
                      }
#line 701 "const_prop.m"
                  }
#line 701 "const_prop.m"
              }
#line 701 "const_prop.m"
          }
#line 698 "const_prop.m"
        else
#line 698 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 698 "const_prop.m"
        return transform_hlds__const_prop__succeeded;
#line 698 "const_prop.m"
      }
#line 698 "const_prop.m"
      break;
#line 698 "const_prop.m"
    }
#line 694 "const_prop.m"
}

#line 579 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 579 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 579 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 579 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 579 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 579 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 579 "const_prop.m"
{
#line 584 "const_prop.m"
  {
#line 584 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 584 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_246_246;
#line 584 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_247_247;
#line 584 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_252_252;
#line 584 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_253_253;

#line 584 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
      {
#line 624 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 624 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 624 "const_prop.m"
          {
#line 624 "const_prop.m"
            transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 624 "const_prop.m"
            transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 624 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 1)));
#line 624 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 624 "const_prop.m"
              {
#line 624 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)));
#line 624 "const_prop.m"
                transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 584 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "int") == 0))
#line 584 "const_prop.m"
                  {
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_263_263;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_269_269;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_275_275;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_280_280;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_281_281;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_284_284;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_285_285;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_288_288;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_289_289;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_292_292;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_293_293;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_295_295;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_297_297;
#line 586 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 586 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 587 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_264_264;
#line 587 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_265_265;
#line 586 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_270_270;
#line 586 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_271_271;
#line 587 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_276_276;
#line 587 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_277_277;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__lo_0;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__hi_1;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__mid_2;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__result_3;

#line 585 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                      {
#line 587 "const_prop.m"
                        transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 587 "const_prop.m"
                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 587 "const_prop.m"
                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 586 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 586 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 586 "const_prop.m"
                          {
#line 586 "const_prop.m"
                            transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
#line 586 "const_prop.m"
                            transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
#line 586 "const_prop.m"
                            transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
#line 587 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 587 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 587 "const_prop.m"
                              {
#line 587 "const_prop.m"
                                transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
#line 587 "const_prop.m"
                                transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
#line 587 "const_prop.m"
                                transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
#line 586 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 586 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 586 "const_prop.m"
                                  {
#line 586 "const_prop.m"
                                    transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 0)));
#line 586 "const_prop.m"
                                    transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 1)));
#line 587 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_275_275)) == (MR_mktag((MR_Integer) 1)));
#line 587 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 587 "const_prop.m"
                                      {
#line 587 "const_prop.m"
                                        transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 0)));
#line 587 "const_prop.m"
                                        transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 1)));
#line 586 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                          {
#line 586 "const_prop.m"
                                            transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 0)));
#line 586 "const_prop.m"
                                            transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 1)));
#line 587 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                              {
#line 587 "const_prop.m"
                                                transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
#line 587 "const_prop.m"
                                                transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 586 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                                  {
#line 586 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 586 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 586 "const_prop.m"
                                                      {
#line 586 "const_prop.m"
                                                        transform_hlds__const_prop__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 587 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                                          {
#line 587 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_293_293)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 587 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 587 "const_prop.m"
                                                              {
#line 587 "const_prop.m"
                                                                transform_hlds__const_prop__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
#line 584 "const_prop.m"
                                                                /* binary string jump switch */
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__hi_1 = (MR_Integer) 3;
#line 584 "const_prop.m"
                                                                do
#line 584 "const_prop.m"
                                                                  {
#line 584 "const_prop.m"
                                                                    transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
#line 584 "const_prop.m"
                                                                    transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_3[7 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
#line 584 "const_prop.m"
                                                                    if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
#line 584 "const_prop.m"
                                                                      {
#line 584 "const_prop.m"
#line 584 "const_prop.m"
                                                                        switch (((&transform_hlds__const_prop_vector_common_3[7 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
#line 584 "const_prop.m"
                                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 0:
#line 590 "const_prop.m"
                                                                            {
#line 590 "const_prop.m"
                                                                              /* case "<" */
#line 588 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 < transform_hlds__const_prop__V_297_297);
#line 590 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 589 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 590 "const_prop.m"
                                                                              else
#line 591 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 590 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 590 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 1:
#line 599 "const_prop.m"
                                                                            {
#line 599 "const_prop.m"
                                                                              /* case "=<" */
#line 597 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 <= transform_hlds__const_prop__V_297_297);
#line 599 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 598 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 599 "const_prop.m"
                                                                              else
#line 600 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 599 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 599 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 2:
#line 608 "const_prop.m"
                                                                            {
#line 608 "const_prop.m"
                                                                              /* case ">" */
#line 606 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 > transform_hlds__const_prop__V_297_297);
#line 608 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 607 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 608 "const_prop.m"
                                                                              else
#line 609 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 608 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 608 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 3:
#line 617 "const_prop.m"
                                                                            {
#line 617 "const_prop.m"
                                                                              /* case ">=" */
#line 615 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 >= transform_hlds__const_prop__V_297_297);
#line 617 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 616 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 617 "const_prop.m"
                                                                              else
#line 618 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 617 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 617 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                        }
#line 584 "const_prop.m"
                                                                        /* jump out of search loop */
#line 584 "const_prop.m"
                                                                        goto label_0;
#line 584 "const_prop.m"
                                                                      }
#line 584 "const_prop.m"
                                                                    else
#line 584 "const_prop.m"
                                                                    if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
#line 584 "const_prop.m"
                                                                      transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
#line 584 "const_prop.m"
                                                                    else
#line 584 "const_prop.m"
                                                                      transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
#line 584 "const_prop.m"
                                                                  }
#line 584 "const_prop.m"
                                                                while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 584 "const_prop.m"
                                                              label_0:;
#line 587 "const_prop.m"
                                                              }
#line 584 "const_prop.m"
                                                          }
#line 586 "const_prop.m"
                                                      }
#line 584 "const_prop.m"
                                                  }
#line 584 "const_prop.m"
                                              }
#line 584 "const_prop.m"
                                          }
#line 587 "const_prop.m"
                                      }
#line 586 "const_prop.m"
                                  }
#line 587 "const_prop.m"
                              }
#line 586 "const_prop.m"
                          }
#line 584 "const_prop.m"
                      }
#line 584 "const_prop.m"
                  }
#line 584 "const_prop.m"
                else
#line 584 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "float") == 0))
#line 584 "const_prop.m"
                  {
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_260_260;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_266_266;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_272_272;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_278_278;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_279_279;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_282_282;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_283_283;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_286_286;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_287_287;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_290_290;
#line 584 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_291_291;
#line 584 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_294_294;
#line 584 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_296_296;
#line 625 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 625 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 626 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_261_261;
#line 626 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_262_262;
#line 625 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_267_267;
#line 625 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_268_268;
#line 626 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_273_273;
#line 626 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_274_274;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__lo_4;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__hi_5;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__mid_6;
#line 584 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__result_7;

#line 624 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                      {
#line 626 "const_prop.m"
                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 626 "const_prop.m"
                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 626 "const_prop.m"
                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 625 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 625 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 625 "const_prop.m"
                          {
#line 625 "const_prop.m"
                            transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 625 "const_prop.m"
                            transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 2)));
#line 625 "const_prop.m"
                            transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 3)));
#line 626 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 626 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 626 "const_prop.m"
                              {
#line 626 "const_prop.m"
                                transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 626 "const_prop.m"
                                transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 2)));
#line 626 "const_prop.m"
                                transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 3)));
#line 625 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 625 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 625 "const_prop.m"
                                  {
#line 625 "const_prop.m"
                                    transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 625 "const_prop.m"
                                    transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 626 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 626 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 626 "const_prop.m"
                                      {
#line 626 "const_prop.m"
                                        transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 626 "const_prop.m"
                                        transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 625 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_278_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                          {
#line 625 "const_prop.m"
                                            transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 625 "const_prop.m"
                                            transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 626 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                              {
#line 626 "const_prop.m"
                                                transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 626 "const_prop.m"
                                                transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 625 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                                  {
#line 625 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_287_287)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 625 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 625 "const_prop.m"
                                                      {
#line 625 "const_prop.m"
                                                        transform_hlds__const_prop__V_294_294 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
#line 626 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 584 "const_prop.m"
                                                          {
#line 626 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 626 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 626 "const_prop.m"
                                                              {
#line 626 "const_prop.m"
                                                                transform_hlds__const_prop__V_296_296 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 584 "const_prop.m"
                                                                /* binary string jump switch */
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__lo_4 = (MR_Integer) 0;
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__hi_5 = (MR_Integer) 3;
#line 584 "const_prop.m"
                                                                do
#line 584 "const_prop.m"
                                                                  {
#line 584 "const_prop.m"
                                                                    transform_hlds__const_prop__mid_6 = (((transform_hlds__const_prop__lo_4 + transform_hlds__const_prop__hi_5)) / (MR_Integer) 2);
#line 584 "const_prop.m"
                                                                    transform_hlds__const_prop__result_7 = MR_strcmp(transform_hlds__const_prop__HeadVar__2_2, ((&transform_hlds__const_prop_vector_common_3[11 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
#line 584 "const_prop.m"
                                                                    if ((transform_hlds__const_prop__result_7 == (MR_Integer) 0))
#line 584 "const_prop.m"
                                                                      {
#line 584 "const_prop.m"
#line 584 "const_prop.m"
                                                                        switch (((&transform_hlds__const_prop_vector_common_3[11 + transform_hlds__const_prop__mid_6]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
#line 584 "const_prop.m"
                                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 0:
#line 629 "const_prop.m"
                                                                            {
#line 629 "const_prop.m"
                                                                              /* case "<" */
#line 627 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 < transform_hlds__const_prop__V_296_296);
#line 629 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 628 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 629 "const_prop.m"
                                                                              else
#line 630 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 629 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 629 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 1:
#line 638 "const_prop.m"
                                                                            {
#line 638 "const_prop.m"
                                                                              /* case "=<" */
#line 636 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 <= transform_hlds__const_prop__V_296_296);
#line 638 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 637 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 638 "const_prop.m"
                                                                              else
#line 639 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 638 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 638 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 2:
#line 647 "const_prop.m"
                                                                            {
#line 647 "const_prop.m"
                                                                              /* case ">" */
#line 645 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 > transform_hlds__const_prop__V_296_296);
#line 647 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 646 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 647 "const_prop.m"
                                                                              else
#line 648 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 647 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 647 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                          case (MR_Integer) 3:
#line 656 "const_prop.m"
                                                                            {
#line 656 "const_prop.m"
                                                                              /* case ">=" */
#line 654 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 >= transform_hlds__const_prop__V_296_296);
#line 656 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 655 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 656 "const_prop.m"
                                                                              else
#line 657 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 656 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 656 "const_prop.m"
                                                                            }
#line 584 "const_prop.m"
                                                                            break;
#line 584 "const_prop.m"
                                                                        }
#line 584 "const_prop.m"
                                                                        /* jump out of search loop */
#line 584 "const_prop.m"
                                                                        goto label_1;
#line 584 "const_prop.m"
                                                                      }
#line 584 "const_prop.m"
                                                                    else
#line 584 "const_prop.m"
                                                                    if ((transform_hlds__const_prop__result_7 < (MR_Integer) 0))
#line 584 "const_prop.m"
                                                                      transform_hlds__const_prop__hi_5 = (transform_hlds__const_prop__mid_6 - (MR_Integer) 1);
#line 584 "const_prop.m"
                                                                    else
#line 584 "const_prop.m"
                                                                      transform_hlds__const_prop__lo_4 = (transform_hlds__const_prop__mid_6 + (MR_Integer) 1);
#line 584 "const_prop.m"
                                                                  }
#line 584 "const_prop.m"
                                                                while ((transform_hlds__const_prop__lo_4 <= transform_hlds__const_prop__hi_5));
#line 584 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 584 "const_prop.m"
                                                              label_1:;
#line 626 "const_prop.m"
                                                              }
#line 584 "const_prop.m"
                                                          }
#line 625 "const_prop.m"
                                                      }
#line 584 "const_prop.m"
                                                  }
#line 584 "const_prop.m"
                                              }
#line 584 "const_prop.m"
                                          }
#line 626 "const_prop.m"
                                      }
#line 625 "const_prop.m"
                                  }
#line 626 "const_prop.m"
                              }
#line 625 "const_prop.m"
                          }
#line 584 "const_prop.m"
                      }
#line 584 "const_prop.m"
                  }
#line 584 "const_prop.m"
                else
#line 584 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 659 "const_prop.m"
                  {
#line 659 "const_prop.m"
                    MR_Word transform_hlds__const_prop__X_203;
#line 659 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Y_204;
#line 659 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Result0_205;
#line 659 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_208_208;
#line 659 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_209_209;

#line 659 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 659 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 659 "const_prop.m"
                      {
#line 664 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 664 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 664 "const_prop.m"
                          {
#line 664 "const_prop.m"
                            transform_hlds__const_prop__X_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)));
#line 664 "const_prop.m"
                            transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 664 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
#line 664 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 664 "const_prop.m"
                              {
#line 664 "const_prop.m"
                                transform_hlds__const_prop__Y_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
#line 664 "const_prop.m"
                                transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 664 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 659 "const_prop.m"
                                  {
#line 665 "const_prop.m"
                                    {
#line 665 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__V_247_247, transform_hlds__const_prop__V_253_253, &transform_hlds__const_prop__Result0_205);
                                    }
#line 659 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 669 "const_prop.m"
#line 669 "const_prop.m"
                                      switch (transform_hlds__const_prop__Result0_205) {
#line 669 "const_prop.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 669 "const_prop.m"
                                        case (MR_Integer) 0:
#line 667 "const_prop.m"
                                          {
#line 667 "const_prop.m"
                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 667 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 667 "const_prop.m"
                                          }
#line 669 "const_prop.m"
                                          break;
#line 669 "const_prop.m"
                                        case (MR_Integer) 1:
#line 670 "const_prop.m"
                                          {
#line 670 "const_prop.m"
                                            return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_203, transform_hlds__const_prop__Y_204, transform_hlds__const_prop__Result_5);
                                          }
#line 669 "const_prop.m"
                                          break;
#line 669 "const_prop.m"
                                      }
#line 659 "const_prop.m"
                                  }
#line 664 "const_prop.m"
                              }
#line 664 "const_prop.m"
                          }
#line 659 "const_prop.m"
                      }
#line 659 "const_prop.m"
                  }
#line 584 "const_prop.m"
                else
#line 584 "const_prop.m"
                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 624 "const_prop.m"
              }
#line 624 "const_prop.m"
          }
#line 584 "const_prop.m"
      }
#line 584 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 584 "const_prop.m"
  }
#line 579 "const_prop.m"
}

#line 297 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 297 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 297 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 297 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 297 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 297 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 297 "const_prop.m"
{
#line 302 "const_prop.m"
  {
#line 302 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 302 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_16;

#line 312 "const_prop.m"
    {
#line 312 "const_prop.m"
      MR_Integer transform_hlds__const_prop__case_num_0 = (MR_Integer) -1;

#line 312 "const_prop.m"
#line 312 "const_prop.m"
      switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 0)) {
#line 312 "const_prop.m"
        case (MR_Integer) 42:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "*"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 0;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 43:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "+"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 1;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 45:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "-"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 2;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 47:
#line 312 "const_prop.m"
#line 312 "const_prop.m"
          switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) {
#line 312 "const_prop.m"
            case (MR_Integer) 47:
#line 312 "const_prop.m"
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "//"))
#line 312 "const_prop.m"
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 3;
#line 312 "const_prop.m"
              break;
#line 312 "const_prop.m"
            case (MR_Integer) 92:
#line 312 "const_prop.m"
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "/\\"))
#line 312 "const_prop.m"
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 4;
#line 312 "const_prop.m"
              break;
#line 312 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 60:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "<<"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 5;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 62:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) ">>"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 6;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 92:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "\\/"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 7;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 109:
#line 312 "const_prop.m"
#line 312 "const_prop.m"
          switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) {
#line 312 "const_prop.m"
            case (MR_Integer) 105:
#line 312 "const_prop.m"
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "minus"))
#line 312 "const_prop.m"
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 8;
#line 312 "const_prop.m"
              break;
#line 312 "const_prop.m"
            case (MR_Integer) 111:
#line 312 "const_prop.m"
              if (MR_offset_streq(2, transform_hlds__const_prop__ProcName_10, (MR_String) "mod"))
#line 312 "const_prop.m"
                transform_hlds__const_prop__case_num_0 = (MR_Integer) 9;
#line 312 "const_prop.m"
              break;
#line 312 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 112:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "plus"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 10;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 114:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "rem"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 11;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 116:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "times"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 12;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 117:
#line 312 "const_prop.m"
          if (((((((((((((((((((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 9)) == (MR_Integer) 95))))
#line 312 "const_prop.m"
#line 312 "const_prop.m"
            switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 10)) {
#line 312 "const_prop.m"
              case (MR_Integer) 108:
#line 312 "const_prop.m"
                if (MR_offset_streq(11, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_left_shift"))
#line 312 "const_prop.m"
                  transform_hlds__const_prop__case_num_0 = (MR_Integer) 13;
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 113:
#line 312 "const_prop.m"
                if (MR_offset_streq(11, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient"))
#line 312 "const_prop.m"
                  transform_hlds__const_prop__case_num_0 = (MR_Integer) 14;
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 114:
#line 312 "const_prop.m"
#line 312 "const_prop.m"
                switch (MR_nth_code_unit(transform_hlds__const_prop__ProcName_10, 11)) {
#line 312 "const_prop.m"
                  case (MR_Integer) 101:
#line 312 "const_prop.m"
                    if (MR_offset_streq(12, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_rem"))
#line 312 "const_prop.m"
                      transform_hlds__const_prop__case_num_0 = (MR_Integer) 15;
#line 312 "const_prop.m"
                    break;
#line 312 "const_prop.m"
                  case (MR_Integer) 105:
#line 312 "const_prop.m"
                    if (MR_offset_streq(12, transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_right_shift"))
#line 312 "const_prop.m"
                      transform_hlds__const_prop__case_num_0 = (MR_Integer) 16;
#line 312 "const_prop.m"
                    break;
#line 312 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
            }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 120:
#line 312 "const_prop.m"
          if (MR_offset_streq(1, transform_hlds__const_prop__ProcName_10, (MR_String) "xor"))
#line 312 "const_prop.m"
            transform_hlds__const_prop__case_num_0 = (MR_Integer) 17;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
      }
#line 312 "const_prop.m"
#line 312 "const_prop.m"
      switch (transform_hlds__const_prop__case_num_0) {
#line 312 "const_prop.m"
        default:
#line 312 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 0:
#line 385 "const_prop.m"
          {
#line 385 "const_prop.m"
            /* case "*" */
#line 385 "const_prop.m"
            {
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_271_271;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_272_272;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_273_273;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_274_274;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_275_275;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_276_276;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_277_277;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_278_278;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_279_279;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_280_280;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_281_281;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_282_282;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_283_283;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_284_284;
#line 385 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_434;
#line 385 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_435;
#line 385 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_436;
#line 387 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_506_506;
#line 387 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_507_507;
#line 387 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_57_57;
#line 387 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_58_58;
#line 388 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_508_508;
#line 388 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_509_509;
#line 388 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_59_59;
#line 388 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_60_60;

#line 386 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 385 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                {
#line 387 "const_prop.m"
                  transform_hlds__const_prop__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 387 "const_prop.m"
                  transform_hlds__const_prop__V_507_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 387 "const_prop.m"
                  transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 387 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_271_271)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 387 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                    {
#line 387 "const_prop.m"
                      transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 1)));
#line 387 "const_prop.m"
                      transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 2)));
#line 387 "const_prop.m"
                      transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 3)));
#line 387 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 387 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                        {
#line 387 "const_prop.m"
                          transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 387 "const_prop.m"
                          transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 387 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_276_276 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                            {
#line 387 "const_prop.m"
                              transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 0)));
#line 387 "const_prop.m"
                              transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 1)));
#line 387 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_275_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                {
#line 387 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_274_274)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 387 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                    {
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__XVal_434 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                      transform_hlds__const_prop__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                      transform_hlds__const_prop__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                      transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 388 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_277_277)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 388 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                        {
#line 388 "const_prop.m"
                                          transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                          transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 2)));
#line 388 "const_prop.m"
                                          transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 3)));
#line 388 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_278_278)) == (MR_mktag((MR_Integer) 1)));
#line 388 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                            {
#line 388 "const_prop.m"
                                              transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                              transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                {
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                    {
#line 388 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_280_280)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 388 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                                        {
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_435 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 1)));
#line 389 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 390 "const_prop.m"
                                                          transform_hlds__const_prop__V_283_283 = (MR_Integer) 224;
#line 390 "const_prop.m"
                                                          transform_hlds__const_prop__V_284_284 = (MR_Integer) 0;
#line 390 "const_prop.m"
                                                          {
#line 390 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_283_283, transform_hlds__const_prop__V_284_284);
                                                          }
#line 385 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                            {
#line 391 "const_prop.m"
                                                              {
#line 391 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_436);
                                                              }
#line 392 "const_prop.m"
                                                              {
#line 392 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_436, transform_hlds__const_prop__XVal_434, transform_hlds__const_prop__YVal_435, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 385 "const_prop.m"
                                                            }
#line 388 "const_prop.m"
                                                        }
#line 385 "const_prop.m"
                                                    }
#line 385 "const_prop.m"
                                                }
#line 388 "const_prop.m"
                                            }
#line 388 "const_prop.m"
                                        }
#line 387 "const_prop.m"
                                    }
#line 385 "const_prop.m"
                                }
#line 385 "const_prop.m"
                            }
#line 387 "const_prop.m"
                        }
#line 387 "const_prop.m"
                    }
#line 385 "const_prop.m"
                }
#line 385 "const_prop.m"
            }
#line 385 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 1:
#line 312 "const_prop.m"
          {
#line 312 "const_prop.m"
            /* case "+" */
#line 312 "const_prop.m"
#line 312 "const_prop.m"
            switch (transform_hlds__const_prop__ModeNum_11) {
#line 312 "const_prop.m"
              default:
#line 312 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 0:
#line 313 "const_prop.m"
                {
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_384_384;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_385_385;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_386_386;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_387_387;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_388_388;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_389_389;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_390_390;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_391_391;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_392_392;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_393_393;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_394_394;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_395_395;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_396_396;
#line 313 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_411;
#line 313 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__YVal_412;
#line 313 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_413;
#line 315 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 315 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 315 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_24_24;
#line 315 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_25_25;
#line 316 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_476_476;
#line 316 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_477_477;
#line 316 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_26_26;
#line 316 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_27_27;

#line 315 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_383_383)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 315 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                    {
#line 315 "const_prop.m"
                      transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 1)));
#line 315 "const_prop.m"
                      transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 2)));
#line 315 "const_prop.m"
                      transform_hlds__const_prop__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_383_383, (MR_Integer) 3)));
#line 315 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_384_384)) == (MR_mktag((MR_Integer) 1)));
#line 315 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                        {
#line 315 "const_prop.m"
                          transform_hlds__const_prop__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_384_384, (MR_Integer) 0)));
#line 315 "const_prop.m"
                          transform_hlds__const_prop__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_384_384, (MR_Integer) 1)));
#line 315 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_388_388 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 313 "const_prop.m"
                            {
#line 315 "const_prop.m"
                              transform_hlds__const_prop__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_385_385, (MR_Integer) 0)));
#line 315 "const_prop.m"
                              transform_hlds__const_prop__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_385_385, (MR_Integer) 1)));
#line 315 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_387_387 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 313 "const_prop.m"
                                {
#line 315 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_386_386)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_386_386, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 315 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                    {
#line 315 "const_prop.m"
                                      transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_386_386, (MR_Integer) 1)));
#line 316 "const_prop.m"
                                      transform_hlds__const_prop__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 316 "const_prop.m"
                                      transform_hlds__const_prop__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 316 "const_prop.m"
                                      transform_hlds__const_prop__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 316 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_389_389)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 316 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
                                        {
#line 316 "const_prop.m"
                                          transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 1)));
#line 316 "const_prop.m"
                                          transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 2)));
#line 316 "const_prop.m"
                                          transform_hlds__const_prop__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_389_389, (MR_Integer) 3)));
#line 316 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_390_390)) == (MR_mktag((MR_Integer) 1)));
#line 316 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
                                            {
#line 316 "const_prop.m"
                                              transform_hlds__const_prop__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_390_390, (MR_Integer) 0)));
#line 316 "const_prop.m"
                                              transform_hlds__const_prop__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_390_390, (MR_Integer) 1)));
#line 316 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_394_394 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 313 "const_prop.m"
                                                {
#line 316 "const_prop.m"
                                                  transform_hlds__const_prop__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_391_391, (MR_Integer) 0)));
#line 316 "const_prop.m"
                                                  transform_hlds__const_prop__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_391_391, (MR_Integer) 1)));
#line 316 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_393_393 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 313 "const_prop.m"
                                                    {
#line 316 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_392_392)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_392_392, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 316 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
                                                        {
#line 316 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_392_392, (MR_Integer) 1)));
#line 317 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 318 "const_prop.m"
                                                          transform_hlds__const_prop__V_395_395 = (MR_Integer) 224;
#line 318 "const_prop.m"
                                                          transform_hlds__const_prop__V_396_396 = (MR_Integer) 0;
#line 318 "const_prop.m"
                                                          {
#line 318 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_395_395, transform_hlds__const_prop__V_396_396);
                                                          }
#line 313 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 313 "const_prop.m"
                                                            {
#line 319 "const_prop.m"
                                                              {
#line 319 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_413);
                                                              }
#line 320 "const_prop.m"
                                                              {
#line 320 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_413, transform_hlds__const_prop__XVal_411, transform_hlds__const_prop__YVal_412, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 313 "const_prop.m"
                                                            }
#line 316 "const_prop.m"
                                                        }
#line 313 "const_prop.m"
                                                    }
#line 313 "const_prop.m"
                                                }
#line 316 "const_prop.m"
                                            }
#line 316 "const_prop.m"
                                        }
#line 315 "const_prop.m"
                                    }
#line 313 "const_prop.m"
                                }
#line 313 "const_prop.m"
                            }
#line 315 "const_prop.m"
                        }
#line 315 "const_prop.m"
                    }
#line 313 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 1:
#line 322 "const_prop.m"
                {
#line 322 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__ZVal_32;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_370_370;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_371_371;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_372_372;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_373_373;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_374_374;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_375_375;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_376_376;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_377_377;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_378_378;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_379_379;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_380_380;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_381_381;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_382_382;
#line 322 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__YVal_414;
#line 322 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_415;
#line 324 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 324 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 324 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_28_28;
#line 324 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_29_29;
#line 325 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_480_480;
#line 325 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_481_481;
#line 325 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_30_30;
#line 325 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_31_31;

#line 324 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_369_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 324 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                    {
#line 324 "const_prop.m"
                      transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 1)));
#line 324 "const_prop.m"
                      transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 2)));
#line 324 "const_prop.m"
                      transform_hlds__const_prop__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 3)));
#line 324 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_370_370)) == (MR_mktag((MR_Integer) 1)));
#line 324 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                        {
#line 324 "const_prop.m"
                          transform_hlds__const_prop__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_370_370, (MR_Integer) 0)));
#line 324 "const_prop.m"
                          transform_hlds__const_prop__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_370_370, (MR_Integer) 1)));
#line 324 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_374_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                            {
#line 324 "const_prop.m"
                              transform_hlds__const_prop__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_371_371, (MR_Integer) 0)));
#line 324 "const_prop.m"
                              transform_hlds__const_prop__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_371_371, (MR_Integer) 1)));
#line 324 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_373_373 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                {
#line 324 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_372_372)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_372_372, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 324 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                                    {
#line 324 "const_prop.m"
                                      transform_hlds__const_prop__YVal_414 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_372_372, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_375_375)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                        {
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 2)));
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_375_375, (MR_Integer) 3)));
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_376_376)) == (MR_mktag((MR_Integer) 1)));
#line 325 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                            {
#line 325 "const_prop.m"
                                              transform_hlds__const_prop__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_376_376, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                              transform_hlds__const_prop__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_376_376, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_380_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                {
#line 325 "const_prop.m"
                                                  transform_hlds__const_prop__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_377_377, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                                  transform_hlds__const_prop__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_377_377, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_379_379 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                    {
#line 325 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_378_378)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_378_378, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 325 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                                        {
#line 325 "const_prop.m"
                                                          transform_hlds__const_prop__ZVal_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_378_378, (MR_Integer) 1)));
#line 326 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 327 "const_prop.m"
                                                          transform_hlds__const_prop__V_381_381 = (MR_Integer) 224;
#line 327 "const_prop.m"
                                                          transform_hlds__const_prop__V_382_382 = (MR_Integer) 0;
#line 327 "const_prop.m"
                                                          {
#line 327 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_381_381, transform_hlds__const_prop__V_382_382);
                                                          }
#line 322 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                            {
#line 328 "const_prop.m"
                                                              {
#line 328 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_415);
                                                              }
#line 329 "const_prop.m"
                                                              {
#line 329 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_415, transform_hlds__const_prop__ZVal_32, transform_hlds__const_prop__YVal_414, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 322 "const_prop.m"
                                                            }
#line 325 "const_prop.m"
                                                        }
#line 322 "const_prop.m"
                                                    }
#line 322 "const_prop.m"
                                                }
#line 325 "const_prop.m"
                                            }
#line 325 "const_prop.m"
                                        }
#line 324 "const_prop.m"
                                    }
#line 322 "const_prop.m"
                                }
#line 322 "const_prop.m"
                            }
#line 324 "const_prop.m"
                        }
#line 324 "const_prop.m"
                    }
#line 322 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 2:
#line 331 "const_prop.m"
                {
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_356_356;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_357_357;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_358_358;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_359_359;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_360_360;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_361_361;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_362_362;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_363_363;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_364_364;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_365_365;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_366_366;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_367_367;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_368_368;
#line 331 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_416;
#line 331 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_417;
#line 331 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__ZVal_418;
#line 333 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 333 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 333 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_33_33;
#line 333 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_34_34;
#line 334 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_484_484;
#line 334 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_485_485;
#line 334 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_35_35;
#line 334 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_36_36;

#line 333 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_355_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 333 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                    {
#line 333 "const_prop.m"
                      transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 1)));
#line 333 "const_prop.m"
                      transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 2)));
#line 333 "const_prop.m"
                      transform_hlds__const_prop__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 3)));
#line 333 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_356_356)) == (MR_mktag((MR_Integer) 1)));
#line 333 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                        {
#line 333 "const_prop.m"
                          transform_hlds__const_prop__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 0)));
#line 333 "const_prop.m"
                          transform_hlds__const_prop__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 1)));
#line 333 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_360_360 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                            {
#line 333 "const_prop.m"
                              transform_hlds__const_prop__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 0)));
#line 333 "const_prop.m"
                              transform_hlds__const_prop__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 1)));
#line 333 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_359_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                                {
#line 333 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_358_358)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 333 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                    {
#line 333 "const_prop.m"
                                      transform_hlds__const_prop__XVal_416 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 1)));
#line 334 "const_prop.m"
                                      transform_hlds__const_prop__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 334 "const_prop.m"
                                      transform_hlds__const_prop__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 334 "const_prop.m"
                                      transform_hlds__const_prop__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 334 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_361_361)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 334 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 334 "const_prop.m"
                                        {
#line 334 "const_prop.m"
                                          transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 1)));
#line 334 "const_prop.m"
                                          transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 2)));
#line 334 "const_prop.m"
                                          transform_hlds__const_prop__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 3)));
#line 334 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_362_362)) == (MR_mktag((MR_Integer) 1)));
#line 334 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 334 "const_prop.m"
                                            {
#line 334 "const_prop.m"
                                              transform_hlds__const_prop__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 0)));
#line 334 "const_prop.m"
                                              transform_hlds__const_prop__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 1)));
#line 334 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_366_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                                                {
#line 334 "const_prop.m"
                                                  transform_hlds__const_prop__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 0)));
#line 334 "const_prop.m"
                                                  transform_hlds__const_prop__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 1)));
#line 334 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_365_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                                                    {
#line 334 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_364_364)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 334 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 334 "const_prop.m"
                                                        {
#line 334 "const_prop.m"
                                                          transform_hlds__const_prop__ZVal_418 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 1)));
#line 335 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 336 "const_prop.m"
                                                          transform_hlds__const_prop__V_367_367 = (MR_Integer) 224;
#line 336 "const_prop.m"
                                                          transform_hlds__const_prop__V_368_368 = (MR_Integer) 0;
#line 336 "const_prop.m"
                                                          {
#line 336 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_367_367, transform_hlds__const_prop__V_368_368);
                                                          }
#line 331 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 331 "const_prop.m"
                                                            {
#line 337 "const_prop.m"
                                                              {
#line 337 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_417);
                                                              }
#line 338 "const_prop.m"
                                                              {
#line 338 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_417, transform_hlds__const_prop__ZVal_418, transform_hlds__const_prop__XVal_416, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 331 "const_prop.m"
                                                            }
#line 334 "const_prop.m"
                                                        }
#line 331 "const_prop.m"
                                                    }
#line 331 "const_prop.m"
                                                }
#line 334 "const_prop.m"
                                            }
#line 334 "const_prop.m"
                                        }
#line 333 "const_prop.m"
                                    }
#line 331 "const_prop.m"
                                }
#line 331 "const_prop.m"
                            }
#line 333 "const_prop.m"
                        }
#line 333 "const_prop.m"
                    }
#line 331 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
            }
#line 312 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 2:
#line 312 "const_prop.m"
          {
#line 312 "const_prop.m"
            /* case "-" */
#line 312 "const_prop.m"
#line 312 "const_prop.m"
            switch (transform_hlds__const_prop__ModeNum_11) {
#line 312 "const_prop.m"
              default:
#line 312 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 0:
#line 349 "const_prop.m"
                {
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_328_328;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_329_329;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_330_330;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_331_331;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_332_332;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_333_333;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_334_334;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_335_335;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_336_336;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_337_337;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_338_338;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_339_339;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_340_340;
#line 349 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_422;
#line 349 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__YVal_423;
#line 349 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_424;
#line 351 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 351 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 351 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_41_41;
#line 351 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_42_42;
#line 352 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_492_492;
#line 352 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_493_493;
#line 352 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_43_43;
#line 352 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_44_44;

#line 351 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_327_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 351 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 351 "const_prop.m"
                    {
#line 351 "const_prop.m"
                      transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 1)));
#line 351 "const_prop.m"
                      transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 2)));
#line 351 "const_prop.m"
                      transform_hlds__const_prop__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 3)));
#line 351 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_328_328)) == (MR_mktag((MR_Integer) 1)));
#line 351 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 351 "const_prop.m"
                        {
#line 351 "const_prop.m"
                          transform_hlds__const_prop__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_328_328, (MR_Integer) 0)));
#line 351 "const_prop.m"
                          transform_hlds__const_prop__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_328_328, (MR_Integer) 1)));
#line 351 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_332_332 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                            {
#line 351 "const_prop.m"
                              transform_hlds__const_prop__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_329_329, (MR_Integer) 0)));
#line 351 "const_prop.m"
                              transform_hlds__const_prop__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_329_329, (MR_Integer) 1)));
#line 351 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_331_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                {
#line 351 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_330_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 351 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 351 "const_prop.m"
                                    {
#line 351 "const_prop.m"
                                      transform_hlds__const_prop__XVal_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 1)));
#line 352 "const_prop.m"
                                      transform_hlds__const_prop__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 352 "const_prop.m"
                                      transform_hlds__const_prop__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 352 "const_prop.m"
                                      transform_hlds__const_prop__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 352 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_333_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 352 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
                                        {
#line 352 "const_prop.m"
                                          transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 1)));
#line 352 "const_prop.m"
                                          transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 2)));
#line 352 "const_prop.m"
                                          transform_hlds__const_prop__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 3)));
#line 352 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_334_334)) == (MR_mktag((MR_Integer) 1)));
#line 352 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
                                            {
#line 352 "const_prop.m"
                                              transform_hlds__const_prop__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_334_334, (MR_Integer) 0)));
#line 352 "const_prop.m"
                                              transform_hlds__const_prop__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_334_334, (MR_Integer) 1)));
#line 352 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_338_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                                {
#line 352 "const_prop.m"
                                                  transform_hlds__const_prop__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_335_335, (MR_Integer) 0)));
#line 352 "const_prop.m"
                                                  transform_hlds__const_prop__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_335_335, (MR_Integer) 1)));
#line 352 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_337_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                                    {
#line 352 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_336_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 352 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 352 "const_prop.m"
                                                        {
#line 352 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 1)));
#line 353 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 354 "const_prop.m"
                                                          transform_hlds__const_prop__V_339_339 = (MR_Integer) 224;
#line 354 "const_prop.m"
                                                          transform_hlds__const_prop__V_340_340 = (MR_Integer) 0;
#line 354 "const_prop.m"
                                                          {
#line 354 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_339_339, transform_hlds__const_prop__V_340_340);
                                                          }
#line 349 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                                            {
#line 355 "const_prop.m"
                                                              {
#line 355 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_424);
                                                              }
#line 356 "const_prop.m"
                                                              {
#line 356 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_424, transform_hlds__const_prop__XVal_422, transform_hlds__const_prop__YVal_423, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 349 "const_prop.m"
                                                            }
#line 352 "const_prop.m"
                                                        }
#line 349 "const_prop.m"
                                                    }
#line 349 "const_prop.m"
                                                }
#line 352 "const_prop.m"
                                            }
#line 352 "const_prop.m"
                                        }
#line 351 "const_prop.m"
                                    }
#line 349 "const_prop.m"
                                }
#line 349 "const_prop.m"
                            }
#line 351 "const_prop.m"
                        }
#line 351 "const_prop.m"
                    }
#line 349 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 1:
#line 358 "const_prop.m"
                {
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_314_314;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_315_315;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_316_316;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_317_317;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_318_318;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_319_319;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_320_320;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_321_321;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_322_322;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_323_323;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_324_324;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_325_325;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_326_326;
#line 358 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__YVal_425;
#line 358 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_426;
#line 358 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__ZVal_427;
#line 360 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 360 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 360 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_45_45;
#line 360 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_46_46;
#line 361 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_496_496;
#line 361 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_497_497;
#line 361 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_47_47;
#line 361 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_48_48;

#line 360 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_313_313)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 360 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                    {
#line 360 "const_prop.m"
                      transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 1)));
#line 360 "const_prop.m"
                      transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 2)));
#line 360 "const_prop.m"
                      transform_hlds__const_prop__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 3)));
#line 360 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_314_314)) == (MR_mktag((MR_Integer) 1)));
#line 360 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                        {
#line 360 "const_prop.m"
                          transform_hlds__const_prop__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 0)));
#line 360 "const_prop.m"
                          transform_hlds__const_prop__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 1)));
#line 360 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_318_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 358 "const_prop.m"
                            {
#line 360 "const_prop.m"
                              transform_hlds__const_prop__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 0)));
#line 360 "const_prop.m"
                              transform_hlds__const_prop__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 1)));
#line 360 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_317_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 358 "const_prop.m"
                                {
#line 360 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_316_316)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 360 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 360 "const_prop.m"
                                    {
#line 360 "const_prop.m"
                                      transform_hlds__const_prop__YVal_425 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 1)));
#line 361 "const_prop.m"
                                      transform_hlds__const_prop__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 361 "const_prop.m"
                                      transform_hlds__const_prop__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 361 "const_prop.m"
                                      transform_hlds__const_prop__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 361 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_319_319)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 361 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                        {
#line 361 "const_prop.m"
                                          transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 1)));
#line 361 "const_prop.m"
                                          transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 2)));
#line 361 "const_prop.m"
                                          transform_hlds__const_prop__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 3)));
#line 361 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_320_320)) == (MR_mktag((MR_Integer) 1)));
#line 361 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                            {
#line 361 "const_prop.m"
                                              transform_hlds__const_prop__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 0)));
#line 361 "const_prop.m"
                                              transform_hlds__const_prop__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 1)));
#line 361 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_324_324 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 358 "const_prop.m"
                                                {
#line 361 "const_prop.m"
                                                  transform_hlds__const_prop__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 0)));
#line 361 "const_prop.m"
                                                  transform_hlds__const_prop__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 1)));
#line 361 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_323_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 358 "const_prop.m"
                                                    {
#line 361 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_322_322)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 361 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                        {
#line 361 "const_prop.m"
                                                          transform_hlds__const_prop__ZVal_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 1)));
#line 362 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 363 "const_prop.m"
                                                          transform_hlds__const_prop__V_325_325 = (MR_Integer) 224;
#line 363 "const_prop.m"
                                                          transform_hlds__const_prop__V_326_326 = (MR_Integer) 0;
#line 363 "const_prop.m"
                                                          {
#line 363 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_325_325, transform_hlds__const_prop__V_326_326);
                                                          }
#line 358 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 358 "const_prop.m"
                                                            {
#line 364 "const_prop.m"
                                                              {
#line 364 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_426);
                                                              }
#line 365 "const_prop.m"
                                                              {
#line 365 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_426, transform_hlds__const_prop__YVal_425, transform_hlds__const_prop__ZVal_427, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 358 "const_prop.m"
                                                            }
#line 361 "const_prop.m"
                                                        }
#line 358 "const_prop.m"
                                                    }
#line 358 "const_prop.m"
                                                }
#line 361 "const_prop.m"
                                            }
#line 361 "const_prop.m"
                                        }
#line 360 "const_prop.m"
                                    }
#line 358 "const_prop.m"
                                }
#line 358 "const_prop.m"
                            }
#line 360 "const_prop.m"
                        }
#line 360 "const_prop.m"
                    }
#line 358 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
              case (MR_Integer) 2:
#line 367 "const_prop.m"
                {
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_300_300;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_301_301;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_302_302;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_303_303;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_304_304;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_305_305;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_306_306;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_307_307;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_308_308;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_309_309;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_310_310;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_311_311;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_312_312;
#line 367 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_428;
#line 367 "const_prop.m"
                  MR_Word transform_hlds__const_prop__BitsPerInt_429;
#line 367 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__ZVal_430;
#line 369 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 369 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 369 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_49_49;
#line 369 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_50_50;
#line 370 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_500_500;
#line 370 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_501_501;
#line 370 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_51_51;
#line 370 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_52_52;

#line 369 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_299_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 369 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                    {
#line 369 "const_prop.m"
                      transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 1)));
#line 369 "const_prop.m"
                      transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 2)));
#line 369 "const_prop.m"
                      transform_hlds__const_prop__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_299_299, (MR_Integer) 3)));
#line 369 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_300_300)) == (MR_mktag((MR_Integer) 1)));
#line 369 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                        {
#line 369 "const_prop.m"
                          transform_hlds__const_prop__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_300_300, (MR_Integer) 0)));
#line 369 "const_prop.m"
                          transform_hlds__const_prop__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_300_300, (MR_Integer) 1)));
#line 369 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_304_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                            {
#line 369 "const_prop.m"
                              transform_hlds__const_prop__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_301_301, (MR_Integer) 0)));
#line 369 "const_prop.m"
                              transform_hlds__const_prop__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_301_301, (MR_Integer) 1)));
#line 369 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_303_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                {
#line 369 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_302_302)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_302_302, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 369 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                    {
#line 369 "const_prop.m"
                                      transform_hlds__const_prop__XVal_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_302_302, (MR_Integer) 1)));
#line 370 "const_prop.m"
                                      transform_hlds__const_prop__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 370 "const_prop.m"
                                      transform_hlds__const_prop__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 370 "const_prop.m"
                                      transform_hlds__const_prop__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 370 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_305_305)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 370 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                                        {
#line 370 "const_prop.m"
                                          transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 1)));
#line 370 "const_prop.m"
                                          transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 2)));
#line 370 "const_prop.m"
                                          transform_hlds__const_prop__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_305_305, (MR_Integer) 3)));
#line 370 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_306_306)) == (MR_mktag((MR_Integer) 1)));
#line 370 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                                            {
#line 370 "const_prop.m"
                                              transform_hlds__const_prop__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_306_306, (MR_Integer) 0)));
#line 370 "const_prop.m"
                                              transform_hlds__const_prop__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_306_306, (MR_Integer) 1)));
#line 370 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_310_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                                {
#line 370 "const_prop.m"
                                                  transform_hlds__const_prop__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_307_307, (MR_Integer) 0)));
#line 370 "const_prop.m"
                                                  transform_hlds__const_prop__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_307_307, (MR_Integer) 1)));
#line 370 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_309_309 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                                    {
#line 370 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_308_308)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_308_308, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 370 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                                                        {
#line 370 "const_prop.m"
                                                          transform_hlds__const_prop__ZVal_430 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_308_308, (MR_Integer) 1)));
#line 371 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 372 "const_prop.m"
                                                          transform_hlds__const_prop__V_311_311 = (MR_Integer) 224;
#line 372 "const_prop.m"
                                                          transform_hlds__const_prop__V_312_312 = (MR_Integer) 0;
#line 372 "const_prop.m"
                                                          {
#line 372 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_311_311, transform_hlds__const_prop__V_312_312);
                                                          }
#line 367 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 367 "const_prop.m"
                                                            {
#line 373 "const_prop.m"
                                                              {
#line 373 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_429);
                                                              }
#line 374 "const_prop.m"
                                                              {
#line 374 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_429, transform_hlds__const_prop__XVal_428, transform_hlds__const_prop__ZVal_430, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 367 "const_prop.m"
                                                            }
#line 370 "const_prop.m"
                                                        }
#line 367 "const_prop.m"
                                                    }
#line 367 "const_prop.m"
                                                }
#line 370 "const_prop.m"
                                            }
#line 370 "const_prop.m"
                                        }
#line 369 "const_prop.m"
                                    }
#line 367 "const_prop.m"
                                }
#line 367 "const_prop.m"
                            }
#line 369 "const_prop.m"
                        }
#line 369 "const_prop.m"
                    }
#line 367 "const_prop.m"
                }
#line 312 "const_prop.m"
                break;
#line 312 "const_prop.m"
            }
#line 312 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 3:
#line 404 "const_prop.m"
          {
#line 404 "const_prop.m"
            /* case "//" */
#line 404 "const_prop.m"
            {
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_243_243;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_244_244;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_245_245;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_246_246;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_247_247;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_248_248;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_249_249;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_250_250;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_251_251;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_252_252;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_253_253;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_254_254;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_255_255;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_256_256;
#line 404 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_440;
#line 404 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_441;
#line 404 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_442;
#line 406 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_514_514;
#line 406 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_515_515;
#line 406 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_65_65;
#line 406 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_66_66;
#line 407 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_516_516;
#line 407 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_517_517;
#line 407 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_67_67;
#line 407 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_68_68;

#line 405 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 404 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                {
#line 406 "const_prop.m"
                  transform_hlds__const_prop__V_514_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 406 "const_prop.m"
                  transform_hlds__const_prop__V_515_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 406 "const_prop.m"
                  transform_hlds__const_prop__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 406 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_243_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 406 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                    {
#line 406 "const_prop.m"
                      transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 1)));
#line 406 "const_prop.m"
                      transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 2)));
#line 406 "const_prop.m"
                      transform_hlds__const_prop__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 3)));
#line 406 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_244_244)) == (MR_mktag((MR_Integer) 1)));
#line 406 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                        {
#line 406 "const_prop.m"
                          transform_hlds__const_prop__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_244_244, (MR_Integer) 0)));
#line 406 "const_prop.m"
                          transform_hlds__const_prop__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_244_244, (MR_Integer) 1)));
#line 406 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_248_248 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                            {
#line 406 "const_prop.m"
                              transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_245_245, (MR_Integer) 0)));
#line 406 "const_prop.m"
                              transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_245_245, (MR_Integer) 1)));
#line 406 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_247_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                {
#line 406 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 406 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 406 "const_prop.m"
                                    {
#line 406 "const_prop.m"
                                      transform_hlds__const_prop__XVal_440 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 407 "const_prop.m"
                                      transform_hlds__const_prop__V_516_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 407 "const_prop.m"
                                      transform_hlds__const_prop__V_517_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 407 "const_prop.m"
                                      transform_hlds__const_prop__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 407 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_249_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 407 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
                                        {
#line 407 "const_prop.m"
                                          transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 1)));
#line 407 "const_prop.m"
                                          transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 2)));
#line 407 "const_prop.m"
                                          transform_hlds__const_prop__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 3)));
#line 407 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 407 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
                                            {
#line 407 "const_prop.m"
                                              transform_hlds__const_prop__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_250_250, (MR_Integer) 0)));
#line 407 "const_prop.m"
                                              transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_250_250, (MR_Integer) 1)));
#line 407 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_254_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                {
#line 407 "const_prop.m"
                                                  transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_251_251, (MR_Integer) 0)));
#line 407 "const_prop.m"
                                                  transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_251_251, (MR_Integer) 1)));
#line 407 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_253_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                    {
#line 407 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 407 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
                                                        {
#line 407 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_441 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_441 == (MR_Integer) 0);
#line 408 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 404 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                            {
#line 409 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 410 "const_prop.m"
                                                              transform_hlds__const_prop__V_255_255 = (MR_Integer) 224;
#line 410 "const_prop.m"
                                                              transform_hlds__const_prop__V_256_256 = (MR_Integer) 0;
#line 410 "const_prop.m"
                                                              {
#line 410 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_255_255, transform_hlds__const_prop__V_256_256);
                                                              }
#line 404 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                                {
#line 411 "const_prop.m"
                                                                  {
#line 411 "const_prop.m"
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_442);
                                                                  }
#line 412 "const_prop.m"
                                                                  {
#line 412 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = libs__int_emu__quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_442, transform_hlds__const_prop__XVal_440, transform_hlds__const_prop__YVal_441, &transform_hlds__const_prop__OutputArgVal_16);
                                                                  }
#line 404 "const_prop.m"
                                                                }
#line 404 "const_prop.m"
                                                            }
#line 407 "const_prop.m"
                                                        }
#line 404 "const_prop.m"
                                                    }
#line 404 "const_prop.m"
                                                }
#line 407 "const_prop.m"
                                            }
#line 407 "const_prop.m"
                                        }
#line 406 "const_prop.m"
                                    }
#line 404 "const_prop.m"
                                }
#line 404 "const_prop.m"
                            }
#line 406 "const_prop.m"
                        }
#line 406 "const_prop.m"
                    }
#line 404 "const_prop.m"
                }
#line 404 "const_prop.m"
            }
#line 404 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 4:
#line 480 "const_prop.m"
          {
#line 480 "const_prop.m"
            /* case "/\" */
#line 480 "const_prop.m"
            {
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_133_133;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_134_134;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_135_135;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_136_136;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_137_137;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_138_138;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_139_139;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_140_140;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_141_141;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_142_142;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_143_143;
#line 480 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_144_144;
#line 480 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_464;
#line 480 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_465;
#line 482 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_546_546;
#line 482 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_547_547;
#line 482 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_97_97;
#line 482 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_98_98;
#line 483 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_548_548;
#line 483 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_549_549;
#line 483 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_99_99;
#line 483 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_100_100;

#line 481 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 480 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 480 "const_prop.m"
                {
#line 482 "const_prop.m"
                  transform_hlds__const_prop__V_546_546 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 482 "const_prop.m"
                  transform_hlds__const_prop__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 482 "const_prop.m"
                  transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 482 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 482 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                    {
#line 482 "const_prop.m"
                      transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 482 "const_prop.m"
                      transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 2)));
#line 482 "const_prop.m"
                      transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 3)));
#line 482 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_134_134)) == (MR_mktag((MR_Integer) 1)));
#line 482 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                        {
#line 482 "const_prop.m"
                          transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 0)));
#line 482 "const_prop.m"
                          transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 1)));
#line 482 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 480 "const_prop.m"
                            {
#line 482 "const_prop.m"
                              transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 0)));
#line 482 "const_prop.m"
                              transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 1)));
#line 482 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 480 "const_prop.m"
                                {
#line 482 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 482 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                                    {
#line 482 "const_prop.m"
                                      transform_hlds__const_prop__XVal_464 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 483 "const_prop.m"
                                      transform_hlds__const_prop__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 483 "const_prop.m"
                                      transform_hlds__const_prop__V_549_549 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 483 "const_prop.m"
                                      transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 483 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_139_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 483 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 483 "const_prop.m"
                                        {
#line 483 "const_prop.m"
                                          transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 1)));
#line 483 "const_prop.m"
                                          transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 2)));
#line 483 "const_prop.m"
                                          transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 3)));
#line 483 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_140_140)) == (MR_mktag((MR_Integer) 1)));
#line 483 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 483 "const_prop.m"
                                            {
#line 483 "const_prop.m"
                                              transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 483 "const_prop.m"
                                              transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 483 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 480 "const_prop.m"
                                                {
#line 483 "const_prop.m"
                                                  transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 0)));
#line 483 "const_prop.m"
                                                  transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 1)));
#line 483 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 480 "const_prop.m"
                                                    {
#line 483 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_142_142)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 483 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 483 "const_prop.m"
                                                        {
#line 483 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_465 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 484 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 485 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_464 & transform_hlds__const_prop__YVal_465);
#line 485 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 483 "const_prop.m"
                                                        }
#line 480 "const_prop.m"
                                                    }
#line 480 "const_prop.m"
                                                }
#line 483 "const_prop.m"
                                            }
#line 483 "const_prop.m"
                                        }
#line 482 "const_prop.m"
                                    }
#line 480 "const_prop.m"
                                }
#line 480 "const_prop.m"
                            }
#line 482 "const_prop.m"
                        }
#line 482 "const_prop.m"
                    }
#line 480 "const_prop.m"
                }
#line 480 "const_prop.m"
            }
#line 480 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 5:
#line 453 "const_prop.m"
          {
#line 453 "const_prop.m"
            /* case "<<" */
#line 453 "const_prop.m"
            {
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_173_173;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_174_174;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_175_175;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_176_176;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_177_177;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_178_178;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_179_179;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_180_180;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_181_181;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_182_182;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_183_183;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_184_184;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_185_185;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_186_186;
#line 453 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_455;
#line 453 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_456;
#line 453 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_457;
#line 455 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_534_534;
#line 455 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_535_535;
#line 455 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_85_85;
#line 455 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_86_86;
#line 456 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_536_536;
#line 456 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_537_537;
#line 456 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_87_87;
#line 456 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_88_88;

#line 454 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 453 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                {
#line 455 "const_prop.m"
                  transform_hlds__const_prop__V_534_534 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 455 "const_prop.m"
                  transform_hlds__const_prop__V_535_535 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 455 "const_prop.m"
                  transform_hlds__const_prop__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 455 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_173_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 455 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                    {
#line 455 "const_prop.m"
                      transform_hlds__const_prop__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 1)));
#line 455 "const_prop.m"
                      transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 2)));
#line 455 "const_prop.m"
                      transform_hlds__const_prop__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_173_173, (MR_Integer) 3)));
#line 455 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_174_174)) == (MR_mktag((MR_Integer) 1)));
#line 455 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                        {
#line 455 "const_prop.m"
                          transform_hlds__const_prop__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_174_174, (MR_Integer) 0)));
#line 455 "const_prop.m"
                          transform_hlds__const_prop__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_174_174, (MR_Integer) 1)));
#line 455 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                            {
#line 455 "const_prop.m"
                              transform_hlds__const_prop__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_175_175, (MR_Integer) 0)));
#line 455 "const_prop.m"
                              transform_hlds__const_prop__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_175_175, (MR_Integer) 1)));
#line 455 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_177_177 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                {
#line 455 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_176_176)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_176_176, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 455 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                                    {
#line 455 "const_prop.m"
                                      transform_hlds__const_prop__XVal_455 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_176_176, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                      transform_hlds__const_prop__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                      transform_hlds__const_prop__V_537_537 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                      transform_hlds__const_prop__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 456 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_179_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 456 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                        {
#line 456 "const_prop.m"
                                          transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                          transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 2)));
#line 456 "const_prop.m"
                                          transform_hlds__const_prop__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_179_179, (MR_Integer) 3)));
#line 456 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_180_180)) == (MR_mktag((MR_Integer) 1)));
#line 456 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                            {
#line 456 "const_prop.m"
                                              transform_hlds__const_prop__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_180_180, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                              transform_hlds__const_prop__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_180_180, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                                {
#line 456 "const_prop.m"
                                                  transform_hlds__const_prop__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_181_181, (MR_Integer) 0)));
#line 456 "const_prop.m"
                                                  transform_hlds__const_prop__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_181_181, (MR_Integer) 1)));
#line 456 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                                    {
#line 456 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_182_182)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_182_182, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 456 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                                        {
#line 456 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_456 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_182_182, (MR_Integer) 1)));
#line 457 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 458 "const_prop.m"
                                                          transform_hlds__const_prop__V_185_185 = (MR_Integer) 224;
#line 458 "const_prop.m"
                                                          transform_hlds__const_prop__V_186_186 = (MR_Integer) 0;
#line 458 "const_prop.m"
                                                          {
#line 458 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_185_185, transform_hlds__const_prop__V_186_186);
                                                          }
#line 453 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 453 "const_prop.m"
                                                            {
#line 459 "const_prop.m"
                                                              {
#line 459 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_457);
                                                              }
#line 460 "const_prop.m"
                                                              {
#line 460 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_457, transform_hlds__const_prop__XVal_455, transform_hlds__const_prop__YVal_456, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 453 "const_prop.m"
                                                            }
#line 456 "const_prop.m"
                                                        }
#line 453 "const_prop.m"
                                                    }
#line 453 "const_prop.m"
                                                }
#line 456 "const_prop.m"
                                            }
#line 456 "const_prop.m"
                                        }
#line 455 "const_prop.m"
                                    }
#line 453 "const_prop.m"
                                }
#line 453 "const_prop.m"
                            }
#line 455 "const_prop.m"
                        }
#line 455 "const_prop.m"
                    }
#line 453 "const_prop.m"
                }
#line 453 "const_prop.m"
            }
#line 453 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 6:
#line 471 "const_prop.m"
          {
#line 471 "const_prop.m"
            /* case ">>" */
#line 471 "const_prop.m"
            {
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_145_145;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_146_146;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_147_147;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_148_148;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_149_149;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_150_150;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_151_151;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_152_152;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_153_153;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_154_154;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_155_155;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_156_156;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_157_157;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_158_158;
#line 471 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_461;
#line 471 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_462;
#line 471 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_463;
#line 473 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_542_542;
#line 473 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_543_543;
#line 473 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_93_93;
#line 473 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_94_94;
#line 474 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_544_544;
#line 474 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_545_545;
#line 474 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_95_95;
#line 474 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_96_96;

#line 472 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 471 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                {
#line 473 "const_prop.m"
                  transform_hlds__const_prop__V_542_542 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 473 "const_prop.m"
                  transform_hlds__const_prop__V_543_543 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 473 "const_prop.m"
                  transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 473 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_145_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 473 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 473 "const_prop.m"
                    {
#line 473 "const_prop.m"
                      transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 1)));
#line 473 "const_prop.m"
                      transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 2)));
#line 473 "const_prop.m"
                      transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 3)));
#line 473 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 1)));
#line 473 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 473 "const_prop.m"
                        {
#line 473 "const_prop.m"
                          transform_hlds__const_prop__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)));
#line 473 "const_prop.m"
                          transform_hlds__const_prop__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 473 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_150_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                            {
#line 473 "const_prop.m"
                              transform_hlds__const_prop__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 0)));
#line 473 "const_prop.m"
                              transform_hlds__const_prop__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 1)));
#line 473 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                                {
#line 473 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_148_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 473 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 473 "const_prop.m"
                                    {
#line 473 "const_prop.m"
                                      transform_hlds__const_prop__XVal_461 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                      transform_hlds__const_prop__V_544_544 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 474 "const_prop.m"
                                      transform_hlds__const_prop__V_545_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                      transform_hlds__const_prop__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 474 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_151_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 474 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
                                        {
#line 474 "const_prop.m"
                                          transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                          transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 2)));
#line 474 "const_prop.m"
                                          transform_hlds__const_prop__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 3)));
#line 474 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_152_152)) == (MR_mktag((MR_Integer) 1)));
#line 474 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
                                            {
#line 474 "const_prop.m"
                                              transform_hlds__const_prop__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 0)));
#line 474 "const_prop.m"
                                              transform_hlds__const_prop__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                                                {
#line 474 "const_prop.m"
                                                  transform_hlds__const_prop__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 0)));
#line 474 "const_prop.m"
                                                  transform_hlds__const_prop__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                                                    {
#line 474 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_154_154)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 474 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
                                                        {
#line 474 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_462 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 1)));
#line 475 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 476 "const_prop.m"
                                                          transform_hlds__const_prop__V_157_157 = (MR_Integer) 224;
#line 476 "const_prop.m"
                                                          transform_hlds__const_prop__V_158_158 = (MR_Integer) 0;
#line 476 "const_prop.m"
                                                          {
#line 476 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_157_157, transform_hlds__const_prop__V_158_158);
                                                          }
#line 471 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                                                            {
#line 477 "const_prop.m"
                                                              {
#line 477 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_463);
                                                              }
#line 478 "const_prop.m"
                                                              {
#line 478 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_463, transform_hlds__const_prop__XVal_461, transform_hlds__const_prop__YVal_462, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 471 "const_prop.m"
                                                            }
#line 474 "const_prop.m"
                                                        }
#line 471 "const_prop.m"
                                                    }
#line 471 "const_prop.m"
                                                }
#line 474 "const_prop.m"
                                            }
#line 474 "const_prop.m"
                                        }
#line 473 "const_prop.m"
                                    }
#line 471 "const_prop.m"
                                }
#line 471 "const_prop.m"
                            }
#line 473 "const_prop.m"
                        }
#line 473 "const_prop.m"
                    }
#line 471 "const_prop.m"
                }
#line 471 "const_prop.m"
            }
#line 471 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 7:
#line 487 "const_prop.m"
          {
#line 487 "const_prop.m"
            /* case "\/" */
#line 487 "const_prop.m"
            {
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_121_121;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_122_122;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_123_123;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_124_124;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_125_125;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_126_126;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_127_127;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_128_128;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_129_129;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_130_130;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_131_131;
#line 487 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_132_132;
#line 487 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_466;
#line 487 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_467;
#line 489 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_550_550;
#line 489 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_551_551;
#line 489 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_101_101;
#line 489 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_102_102;
#line 490 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_552_552;
#line 490 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_553_553;
#line 490 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_103_103;
#line 490 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_104_104;

#line 488 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 487 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                {
#line 489 "const_prop.m"
                  transform_hlds__const_prop__V_550_550 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 489 "const_prop.m"
                  transform_hlds__const_prop__V_551_551 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 489 "const_prop.m"
                  transform_hlds__const_prop__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 489 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_121_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 489 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 489 "const_prop.m"
                    {
#line 489 "const_prop.m"
                      transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 1)));
#line 489 "const_prop.m"
                      transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 2)));
#line 489 "const_prop.m"
                      transform_hlds__const_prop__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 3)));
#line 489 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_122_122)) == (MR_mktag((MR_Integer) 1)));
#line 489 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 489 "const_prop.m"
                        {
#line 489 "const_prop.m"
                          transform_hlds__const_prop__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 0)));
#line 489 "const_prop.m"
                          transform_hlds__const_prop__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 1)));
#line 489 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_126_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                            {
#line 489 "const_prop.m"
                              transform_hlds__const_prop__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 0)));
#line 489 "const_prop.m"
                              transform_hlds__const_prop__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 1)));
#line 489 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                                {
#line 489 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_124_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 489 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 489 "const_prop.m"
                                    {
#line 489 "const_prop.m"
                                      transform_hlds__const_prop__XVal_466 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                      transform_hlds__const_prop__V_552_552 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 490 "const_prop.m"
                                      transform_hlds__const_prop__V_553_553 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                      transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 490 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 490 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 490 "const_prop.m"
                                        {
#line 490 "const_prop.m"
                                          transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                          transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 490 "const_prop.m"
                                          transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 490 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 490 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 490 "const_prop.m"
                                            {
#line 490 "const_prop.m"
                                              transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 0)));
#line 490 "const_prop.m"
                                              transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                                                {
#line 490 "const_prop.m"
                                                  transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 0)));
#line 490 "const_prop.m"
                                                  transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                                                    {
#line 490 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 490 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 490 "const_prop.m"
                                                        {
#line 490 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_467 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 491 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 492 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_466 | transform_hlds__const_prop__YVal_467);
#line 492 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 490 "const_prop.m"
                                                        }
#line 487 "const_prop.m"
                                                    }
#line 487 "const_prop.m"
                                                }
#line 490 "const_prop.m"
                                            }
#line 490 "const_prop.m"
                                        }
#line 489 "const_prop.m"
                                    }
#line 487 "const_prop.m"
                                }
#line 487 "const_prop.m"
                            }
#line 489 "const_prop.m"
                        }
#line 489 "const_prop.m"
                    }
#line 487 "const_prop.m"
                }
#line 487 "const_prop.m"
            }
#line 487 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 8:
#line 340 "const_prop.m"
          {
#line 340 "const_prop.m"
            /* case "minus" */
#line 340 "const_prop.m"
            {
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_341_341;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_342_342;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_343_343;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_344_344;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_345_345;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_346_346;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_347_347;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_348_348;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_349_349;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_350_350;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_351_351;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_352_352;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_353_353;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_354_354;
#line 340 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_419;
#line 340 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_420;
#line 340 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_421;
#line 342 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_486_486;
#line 342 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_487_487;
#line 342 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_37_37;
#line 342 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_38_38;
#line 343 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_488_488;
#line 343 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_489_489;
#line 343 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_39_39;
#line 343 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_40_40;

#line 341 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 340 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                {
#line 342 "const_prop.m"
                  transform_hlds__const_prop__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 342 "const_prop.m"
                  transform_hlds__const_prop__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 342 "const_prop.m"
                  transform_hlds__const_prop__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 342 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_341_341)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 342 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                    {
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 1)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 2)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_341_341, (MR_Integer) 3)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_342_342)) == (MR_mktag((MR_Integer) 1)));
#line 342 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                        {
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_342_342, (MR_Integer) 0)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_342_342, (MR_Integer) 1)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                            {
#line 342 "const_prop.m"
                              transform_hlds__const_prop__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_343_343, (MR_Integer) 0)));
#line 342 "const_prop.m"
                              transform_hlds__const_prop__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_343_343, (MR_Integer) 1)));
#line 342 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_345_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                {
#line 342 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_344_344)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_344_344, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 342 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                                    {
#line 342 "const_prop.m"
                                      transform_hlds__const_prop__XVal_419 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_344_344, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_347_347)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 343 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                        {
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 2)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_347_347, (MR_Integer) 3)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_348_348)) == (MR_mktag((MR_Integer) 1)));
#line 343 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                            {
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_348_348, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_348_348, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                                {
#line 343 "const_prop.m"
                                                  transform_hlds__const_prop__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_349_349, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                                  transform_hlds__const_prop__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_349_349, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_351_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                                    {
#line 343 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_350_350)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_350_350, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 343 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                                        {
#line 343 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_350_350, (MR_Integer) 1)));
#line 344 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 345 "const_prop.m"
                                                          transform_hlds__const_prop__V_353_353 = (MR_Integer) 224;
#line 345 "const_prop.m"
                                                          transform_hlds__const_prop__V_354_354 = (MR_Integer) 0;
#line 345 "const_prop.m"
                                                          {
#line 345 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_353_353, transform_hlds__const_prop__V_354_354);
                                                          }
#line 340 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                                            {
#line 346 "const_prop.m"
                                                              {
#line 346 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_421);
                                                              }
#line 347 "const_prop.m"
                                                              {
#line 347 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_421, transform_hlds__const_prop__XVal_419, transform_hlds__const_prop__YVal_420, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 340 "const_prop.m"
                                                            }
#line 343 "const_prop.m"
                                                        }
#line 340 "const_prop.m"
                                                    }
#line 340 "const_prop.m"
                                                }
#line 343 "const_prop.m"
                                            }
#line 343 "const_prop.m"
                                        }
#line 342 "const_prop.m"
                                    }
#line 340 "const_prop.m"
                                }
#line 340 "const_prop.m"
                            }
#line 342 "const_prop.m"
                        }
#line 342 "const_prop.m"
                    }
#line 340 "const_prop.m"
                }
#line 340 "const_prop.m"
            }
#line 340 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 9:
#line 414 "const_prop.m"
          {
#line 414 "const_prop.m"
            /* case "mod" */
#line 414 "const_prop.m"
            {
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_229_229;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_230_230;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_231_231;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_232_232;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_233_233;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_234_234;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_235_235;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_236_236;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_237_237;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_238_238;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_239_239;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_240_240;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_241_241;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_242_242;
#line 414 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_443;
#line 414 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_444;
#line 414 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_445;
#line 416 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_518_518;
#line 416 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_519_519;
#line 416 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_69_69;
#line 416 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_70_70;
#line 417 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_520_520;
#line 417 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_521_521;
#line 417 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_71_71;
#line 417 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_72_72;

#line 415 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 414 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                {
#line 416 "const_prop.m"
                  transform_hlds__const_prop__V_518_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 416 "const_prop.m"
                  transform_hlds__const_prop__V_519_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 416 "const_prop.m"
                  transform_hlds__const_prop__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 416 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_229_229)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 416 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
                    {
#line 416 "const_prop.m"
                      transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 1)));
#line 416 "const_prop.m"
                      transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 2)));
#line 416 "const_prop.m"
                      transform_hlds__const_prop__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 3)));
#line 416 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_230_230)) == (MR_mktag((MR_Integer) 1)));
#line 416 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
                        {
#line 416 "const_prop.m"
                          transform_hlds__const_prop__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 0)));
#line 416 "const_prop.m"
                          transform_hlds__const_prop__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 1)));
#line 416 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_234_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                            {
#line 416 "const_prop.m"
                              transform_hlds__const_prop__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 0)));
#line 416 "const_prop.m"
                              transform_hlds__const_prop__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 1)));
#line 416 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                {
#line 416 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_232_232)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 416 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
                                    {
#line 416 "const_prop.m"
                                      transform_hlds__const_prop__XVal_443 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                      transform_hlds__const_prop__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                      transform_hlds__const_prop__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                      transform_hlds__const_prop__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 417 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                        {
#line 417 "const_prop.m"
                                          transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                          transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                          transform_hlds__const_prop__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 3)));
#line 417 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_236_236)) == (MR_mktag((MR_Integer) 1)));
#line 417 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                            {
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                {
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_239_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                    {
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_238_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 417 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                                        {
#line 417 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_444 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_444 == (MR_Integer) 0);
#line 418 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 414 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                            {
#line 419 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 420 "const_prop.m"
                                                              transform_hlds__const_prop__V_241_241 = (MR_Integer) 224;
#line 420 "const_prop.m"
                                                              transform_hlds__const_prop__V_242_242 = (MR_Integer) 0;
#line 420 "const_prop.m"
                                                              {
#line 420 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_241_241, transform_hlds__const_prop__V_242_242);
                                                              }
#line 414 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                                {
#line 421 "const_prop.m"
                                                                  {
#line 421 "const_prop.m"
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_445);
                                                                  }
#line 422 "const_prop.m"
                                                                  {
#line 422 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = libs__int_emu__mod_4_p_0(transform_hlds__const_prop__BitsPerInt_445, transform_hlds__const_prop__XVal_443, transform_hlds__const_prop__YVal_444, &transform_hlds__const_prop__OutputArgVal_16);
                                                                  }
#line 414 "const_prop.m"
                                                                }
#line 414 "const_prop.m"
                                                            }
#line 417 "const_prop.m"
                                                        }
#line 414 "const_prop.m"
                                                    }
#line 414 "const_prop.m"
                                                }
#line 417 "const_prop.m"
                                            }
#line 417 "const_prop.m"
                                        }
#line 416 "const_prop.m"
                                    }
#line 414 "const_prop.m"
                                }
#line 414 "const_prop.m"
                            }
#line 416 "const_prop.m"
                        }
#line 416 "const_prop.m"
                    }
#line 414 "const_prop.m"
                }
#line 414 "const_prop.m"
            }
#line 414 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 10:
#line 304 "const_prop.m"
          {
#line 304 "const_prop.m"
            /* case "plus" */
#line 304 "const_prop.m"
            {
#line 304 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_19;
#line 304 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_22;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_23;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_397_397;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_398_398;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_399_399;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_400_400;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_401_401;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_402_402;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_403_403;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_404_404;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_405_405;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_406_406;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_407_407;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_408_408;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_409_409;
#line 304 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_410_410;
#line 306 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_470_470;
#line 306 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_471_471;
#line 306 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_17_17;
#line 306 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_18_18;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_472_472;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_473_473;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_20_20;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_21_21;

#line 305 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 304 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                {
#line 306 "const_prop.m"
                  transform_hlds__const_prop__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 306 "const_prop.m"
                  transform_hlds__const_prop__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 306 "const_prop.m"
                  transform_hlds__const_prop__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 306 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_397_397)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 306 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                    {
#line 306 "const_prop.m"
                      transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 1)));
#line 306 "const_prop.m"
                      transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 2)));
#line 306 "const_prop.m"
                      transform_hlds__const_prop__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_397_397, (MR_Integer) 3)));
#line 306 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_398_398)) == (MR_mktag((MR_Integer) 1)));
#line 306 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                        {
#line 306 "const_prop.m"
                          transform_hlds__const_prop__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_398_398, (MR_Integer) 0)));
#line 306 "const_prop.m"
                          transform_hlds__const_prop__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_398_398, (MR_Integer) 1)));
#line 306 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_402_402 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                            {
#line 306 "const_prop.m"
                              transform_hlds__const_prop__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_399_399, (MR_Integer) 0)));
#line 306 "const_prop.m"
                              transform_hlds__const_prop__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_399_399, (MR_Integer) 1)));
#line 306 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_401_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                {
#line 306 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_400_400)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_400_400, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 306 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                                    {
#line 306 "const_prop.m"
                                      transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_400_400, (MR_Integer) 1)));
#line 307 "const_prop.m"
                                      transform_hlds__const_prop__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 307 "const_prop.m"
                                      transform_hlds__const_prop__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 307 "const_prop.m"
                                      transform_hlds__const_prop__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 307 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_403_403)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 307 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                                        {
#line 307 "const_prop.m"
                                          transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 1)));
#line 307 "const_prop.m"
                                          transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 2)));
#line 307 "const_prop.m"
                                          transform_hlds__const_prop__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_403_403, (MR_Integer) 3)));
#line 307 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_404_404)) == (MR_mktag((MR_Integer) 1)));
#line 307 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                                            {
#line 307 "const_prop.m"
                                              transform_hlds__const_prop__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_404_404, (MR_Integer) 0)));
#line 307 "const_prop.m"
                                              transform_hlds__const_prop__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_404_404, (MR_Integer) 1)));
#line 307 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_408_408 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                                {
#line 307 "const_prop.m"
                                                  transform_hlds__const_prop__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_405_405, (MR_Integer) 0)));
#line 307 "const_prop.m"
                                                  transform_hlds__const_prop__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_405_405, (MR_Integer) 1)));
#line 307 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_407_407 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                                    {
#line 307 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_406_406)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_406_406, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 307 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                                                        {
#line 307 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_406_406, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 309 "const_prop.m"
                                                          transform_hlds__const_prop__V_409_409 = (MR_Integer) 224;
#line 309 "const_prop.m"
                                                          transform_hlds__const_prop__V_410_410 = (MR_Integer) 0;
#line 309 "const_prop.m"
                                                          {
#line 309 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_409_409, transform_hlds__const_prop__V_410_410);
                                                          }
#line 304 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 304 "const_prop.m"
                                                            {
#line 310 "const_prop.m"
                                                              {
#line 310 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_23);
                                                              }
#line 311 "const_prop.m"
                                                              {
#line 311 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_23, transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 304 "const_prop.m"
                                                            }
#line 307 "const_prop.m"
                                                        }
#line 304 "const_prop.m"
                                                    }
#line 304 "const_prop.m"
                                                }
#line 307 "const_prop.m"
                                            }
#line 307 "const_prop.m"
                                        }
#line 306 "const_prop.m"
                                    }
#line 304 "const_prop.m"
                                }
#line 304 "const_prop.m"
                            }
#line 306 "const_prop.m"
                        }
#line 306 "const_prop.m"
                    }
#line 304 "const_prop.m"
                }
#line 304 "const_prop.m"
            }
#line 304 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 11:
#line 424 "const_prop.m"
          {
#line 424 "const_prop.m"
            /* case "rem" */
#line 424 "const_prop.m"
            {
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_215_215;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_216_216;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_217_217;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_218_218;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_219_219;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_220_220;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_221_221;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_222_222;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_223_223;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_224_224;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_225_225;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_226_226;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_227_227;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_228_228;
#line 424 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_446;
#line 424 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_447;
#line 424 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_448;
#line 426 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_522_522;
#line 426 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_523_523;
#line 426 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_73_73;
#line 426 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_74_74;
#line 427 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_524_524;
#line 427 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_525_525;
#line 427 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_75_75;
#line 427 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_76_76;

#line 425 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 424 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                {
#line 426 "const_prop.m"
                  transform_hlds__const_prop__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 426 "const_prop.m"
                  transform_hlds__const_prop__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 426 "const_prop.m"
                  transform_hlds__const_prop__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 426 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_215_215)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 426 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                    {
#line 426 "const_prop.m"
                      transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 1)));
#line 426 "const_prop.m"
                      transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 2)));
#line 426 "const_prop.m"
                      transform_hlds__const_prop__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_215_215, (MR_Integer) 3)));
#line 426 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_216_216)) == (MR_mktag((MR_Integer) 1)));
#line 426 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                        {
#line 426 "const_prop.m"
                          transform_hlds__const_prop__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_216_216, (MR_Integer) 0)));
#line 426 "const_prop.m"
                          transform_hlds__const_prop__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_216_216, (MR_Integer) 1)));
#line 426 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                            {
#line 426 "const_prop.m"
                              transform_hlds__const_prop__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_217_217, (MR_Integer) 0)));
#line 426 "const_prop.m"
                              transform_hlds__const_prop__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_217_217, (MR_Integer) 1)));
#line 426 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_219_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                {
#line 426 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_218_218)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_218_218, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 426 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                                    {
#line 426 "const_prop.m"
                                      transform_hlds__const_prop__XVal_446 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_218_218, (MR_Integer) 1)));
#line 427 "const_prop.m"
                                      transform_hlds__const_prop__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 427 "const_prop.m"
                                      transform_hlds__const_prop__V_525_525 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 427 "const_prop.m"
                                      transform_hlds__const_prop__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 427 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_221_221)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 427 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
                                        {
#line 427 "const_prop.m"
                                          transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 1)));
#line 427 "const_prop.m"
                                          transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 2)));
#line 427 "const_prop.m"
                                          transform_hlds__const_prop__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_221_221, (MR_Integer) 3)));
#line 427 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_222_222)) == (MR_mktag((MR_Integer) 1)));
#line 427 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
                                            {
#line 427 "const_prop.m"
                                              transform_hlds__const_prop__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_222_222, (MR_Integer) 0)));
#line 427 "const_prop.m"
                                              transform_hlds__const_prop__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_222_222, (MR_Integer) 1)));
#line 427 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_226_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                                {
#line 427 "const_prop.m"
                                                  transform_hlds__const_prop__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_223_223, (MR_Integer) 0)));
#line 427 "const_prop.m"
                                                  transform_hlds__const_prop__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_223_223, (MR_Integer) 1)));
#line 427 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_225_225 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                                    {
#line 427 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_224_224)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_224_224, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 427 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 427 "const_prop.m"
                                                        {
#line 427 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_447 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_224_224, (MR_Integer) 1)));
#line 428 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_447 == (MR_Integer) 0);
#line 428 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 424 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                                            {
#line 429 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 430 "const_prop.m"
                                                              transform_hlds__const_prop__V_227_227 = (MR_Integer) 224;
#line 430 "const_prop.m"
                                                              transform_hlds__const_prop__V_228_228 = (MR_Integer) 0;
#line 430 "const_prop.m"
                                                              {
#line 430 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_227_227, transform_hlds__const_prop__V_228_228);
                                                              }
#line 424 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                                                {
#line 431 "const_prop.m"
                                                                  {
#line 431 "const_prop.m"
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_448);
                                                                  }
#line 432 "const_prop.m"
                                                                  {
#line 432 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = libs__int_emu__rem_4_p_0(transform_hlds__const_prop__BitsPerInt_448, transform_hlds__const_prop__XVal_446, transform_hlds__const_prop__YVal_447, &transform_hlds__const_prop__OutputArgVal_16);
                                                                  }
#line 424 "const_prop.m"
                                                                }
#line 424 "const_prop.m"
                                                            }
#line 427 "const_prop.m"
                                                        }
#line 424 "const_prop.m"
                                                    }
#line 424 "const_prop.m"
                                                }
#line 427 "const_prop.m"
                                            }
#line 427 "const_prop.m"
                                        }
#line 426 "const_prop.m"
                                    }
#line 424 "const_prop.m"
                                }
#line 424 "const_prop.m"
                            }
#line 426 "const_prop.m"
                        }
#line 426 "const_prop.m"
                    }
#line 424 "const_prop.m"
                }
#line 424 "const_prop.m"
            }
#line 424 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 12:
#line 376 "const_prop.m"
          {
#line 376 "const_prop.m"
            /* case "times" */
#line 376 "const_prop.m"
            {
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_285_285;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_286_286;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_287_287;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_288_288;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_289_289;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_290_290;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_291_291;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_292_292;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_293_293;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_294_294;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_295_295;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_296_296;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_297_297;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_298_298;
#line 376 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_431;
#line 376 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_432;
#line 376 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_433;
#line 378 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_502_502;
#line 378 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_503_503;
#line 378 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_53_53;
#line 378 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_54_54;
#line 379 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_504_504;
#line 379 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_505_505;
#line 379 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_55_55;
#line 379 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_56_56;

#line 377 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 376 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                {
#line 378 "const_prop.m"
                  transform_hlds__const_prop__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 378 "const_prop.m"
                  transform_hlds__const_prop__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 378 "const_prop.m"
                  transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 378 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_285_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 378 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                    {
#line 378 "const_prop.m"
                      transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 378 "const_prop.m"
                      transform_hlds__const_prop__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 2)));
#line 378 "const_prop.m"
                      transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 3)));
#line 378 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_286_286)) == (MR_mktag((MR_Integer) 1)));
#line 378 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                        {
#line 378 "const_prop.m"
                          transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_286_286, (MR_Integer) 0)));
#line 378 "const_prop.m"
                          transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_286_286, (MR_Integer) 1)));
#line 378 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                            {
#line 378 "const_prop.m"
                              transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)));
#line 378 "const_prop.m"
                              transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
#line 378 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_289_289 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                                {
#line 378 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_288_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 378 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                                    {
#line 378 "const_prop.m"
                                      transform_hlds__const_prop__XVal_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                      transform_hlds__const_prop__V_504_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 379 "const_prop.m"
                                      transform_hlds__const_prop__V_505_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                      transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 379 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 379 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                        {
#line 379 "const_prop.m"
                                          transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                          transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 2)));
#line 379 "const_prop.m"
                                          transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 3)));
#line 379 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_292_292)) == (MR_mktag((MR_Integer) 1)));
#line 379 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                            {
#line 379 "const_prop.m"
                                              transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_292_292, (MR_Integer) 0)));
#line 379 "const_prop.m"
                                              transform_hlds__const_prop__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_292_292, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_296_296 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                                                {
#line 379 "const_prop.m"
                                                  transform_hlds__const_prop__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)));
#line 379 "const_prop.m"
                                                  transform_hlds__const_prop__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                                                    {
#line 379 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_294_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 379 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                                        {
#line 379 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_432 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 381 "const_prop.m"
                                                          transform_hlds__const_prop__V_297_297 = (MR_Integer) 224;
#line 381 "const_prop.m"
                                                          transform_hlds__const_prop__V_298_298 = (MR_Integer) 0;
#line 381 "const_prop.m"
                                                          {
#line 381 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_297_297, transform_hlds__const_prop__V_298_298);
                                                          }
#line 376 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 376 "const_prop.m"
                                                            {
#line 382 "const_prop.m"
                                                              {
#line 382 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_433);
                                                              }
#line 383 "const_prop.m"
                                                              {
#line 383 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_433, transform_hlds__const_prop__XVal_431, transform_hlds__const_prop__YVal_432, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 376 "const_prop.m"
                                                            }
#line 379 "const_prop.m"
                                                        }
#line 376 "const_prop.m"
                                                    }
#line 376 "const_prop.m"
                                                }
#line 379 "const_prop.m"
                                            }
#line 379 "const_prop.m"
                                        }
#line 378 "const_prop.m"
                                    }
#line 376 "const_prop.m"
                                }
#line 376 "const_prop.m"
                            }
#line 378 "const_prop.m"
                        }
#line 378 "const_prop.m"
                    }
#line 376 "const_prop.m"
                }
#line 376 "const_prop.m"
            }
#line 376 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 13:
#line 444 "const_prop.m"
          {
#line 444 "const_prop.m"
            /* case "unchecked_left_shift" */
#line 444 "const_prop.m"
            {
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_187_187;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_188_188;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_189_189;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_190_190;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_191_191;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_192_192;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_193_193;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_194_194;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_195_195;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_196_196;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_197_197;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_198_198;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_199_199;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_200_200;
#line 444 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_452;
#line 444 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_453;
#line 444 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_454;
#line 446 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_530_530;
#line 446 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_531_531;
#line 446 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_81_81;
#line 446 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_82_82;
#line 447 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_532_532;
#line 447 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_533_533;
#line 447 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_83_83;
#line 447 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_84_84;

#line 445 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 444 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                {
#line 446 "const_prop.m"
                  transform_hlds__const_prop__V_530_530 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 446 "const_prop.m"
                  transform_hlds__const_prop__V_531_531 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 446 "const_prop.m"
                  transform_hlds__const_prop__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 446 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_187_187)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 446 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                    {
#line 446 "const_prop.m"
                      transform_hlds__const_prop__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 1)));
#line 446 "const_prop.m"
                      transform_hlds__const_prop__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 2)));
#line 446 "const_prop.m"
                      transform_hlds__const_prop__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 3)));
#line 446 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_188_188)) == (MR_mktag((MR_Integer) 1)));
#line 446 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                        {
#line 446 "const_prop.m"
                          transform_hlds__const_prop__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 0)));
#line 446 "const_prop.m"
                          transform_hlds__const_prop__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 1)));
#line 446 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                            {
#line 446 "const_prop.m"
                              transform_hlds__const_prop__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 0)));
#line 446 "const_prop.m"
                              transform_hlds__const_prop__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 1)));
#line 446 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                                {
#line 446 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_190_190)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 446 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                    {
#line 446 "const_prop.m"
                                      transform_hlds__const_prop__XVal_452 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 1)));
#line 447 "const_prop.m"
                                      transform_hlds__const_prop__V_532_532 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 447 "const_prop.m"
                                      transform_hlds__const_prop__V_533_533 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 447 "const_prop.m"
                                      transform_hlds__const_prop__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 447 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 447 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                                        {
#line 447 "const_prop.m"
                                          transform_hlds__const_prop__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 1)));
#line 447 "const_prop.m"
                                          transform_hlds__const_prop__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 2)));
#line 447 "const_prop.m"
                                          transform_hlds__const_prop__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 3)));
#line 447 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_194_194)) == (MR_mktag((MR_Integer) 1)));
#line 447 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                                            {
#line 447 "const_prop.m"
                                              transform_hlds__const_prop__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 0)));
#line 447 "const_prop.m"
                                              transform_hlds__const_prop__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 1)));
#line 447 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                                                {
#line 447 "const_prop.m"
                                                  transform_hlds__const_prop__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 0)));
#line 447 "const_prop.m"
                                                  transform_hlds__const_prop__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 1)));
#line 447 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                                                    {
#line 447 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_196_196)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 447 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                                                        {
#line 447 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_453 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 1)));
#line 448 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 449 "const_prop.m"
                                                          transform_hlds__const_prop__V_199_199 = (MR_Integer) 224;
#line 449 "const_prop.m"
                                                          transform_hlds__const_prop__V_200_200 = (MR_Integer) 0;
#line 449 "const_prop.m"
                                                          {
#line 449 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_199_199, transform_hlds__const_prop__V_200_200);
                                                          }
#line 444 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 444 "const_prop.m"
                                                            {
#line 450 "const_prop.m"
                                                              {
#line 450 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_454);
                                                              }
#line 451 "const_prop.m"
                                                              {
#line 451 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_454, transform_hlds__const_prop__XVal_452, transform_hlds__const_prop__YVal_453, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 444 "const_prop.m"
                                                            }
#line 447 "const_prop.m"
                                                        }
#line 444 "const_prop.m"
                                                    }
#line 444 "const_prop.m"
                                                }
#line 447 "const_prop.m"
                                            }
#line 447 "const_prop.m"
                                        }
#line 446 "const_prop.m"
                                    }
#line 444 "const_prop.m"
                                }
#line 444 "const_prop.m"
                            }
#line 446 "const_prop.m"
                        }
#line 446 "const_prop.m"
                    }
#line 444 "const_prop.m"
                }
#line 444 "const_prop.m"
            }
#line 444 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 14:
#line 394 "const_prop.m"
          {
#line 394 "const_prop.m"
            /* case "unchecked_quotient" */
#line 394 "const_prop.m"
            {
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_257_257;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_258_258;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_259_259;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_260_260;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_261_261;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_262_262;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_263_263;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_264_264;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_265_265;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_266_266;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_267_267;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_268_268;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_269_269;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_270_270;
#line 394 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_437;
#line 394 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_438;
#line 394 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_439;
#line 396 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_510_510;
#line 396 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_511_511;
#line 396 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_61_61;
#line 396 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_62_62;
#line 397 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_512_512;
#line 397 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_513_513;
#line 397 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_63_63;
#line 397 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_64_64;

#line 395 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 394 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                {
#line 396 "const_prop.m"
                  transform_hlds__const_prop__V_510_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 396 "const_prop.m"
                  transform_hlds__const_prop__V_511_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 396 "const_prop.m"
                  transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 396 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 396 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                    {
#line 396 "const_prop.m"
                      transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
#line 396 "const_prop.m"
                      transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
#line 396 "const_prop.m"
                      transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
#line 396 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_258_258)) == (MR_mktag((MR_Integer) 1)));
#line 396 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                        {
#line 396 "const_prop.m"
                          transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_258_258, (MR_Integer) 0)));
#line 396 "const_prop.m"
                          transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_258_258, (MR_Integer) 1)));
#line 396 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                            {
#line 396 "const_prop.m"
                              transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_259_259, (MR_Integer) 0)));
#line 396 "const_prop.m"
                              transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_259_259, (MR_Integer) 1)));
#line 396 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                                {
#line 396 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 396 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                    {
#line 396 "const_prop.m"
                                      transform_hlds__const_prop__XVal_437 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 397 "const_prop.m"
                                      transform_hlds__const_prop__V_512_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 397 "const_prop.m"
                                      transform_hlds__const_prop__V_513_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 397 "const_prop.m"
                                      transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 397 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 397 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
                                        {
#line 397 "const_prop.m"
                                          transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
#line 397 "const_prop.m"
                                          transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
#line 397 "const_prop.m"
                                          transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
#line 397 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_264_264)) == (MR_mktag((MR_Integer) 1)));
#line 397 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
                                            {
#line 397 "const_prop.m"
                                              transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_264_264, (MR_Integer) 0)));
#line 397 "const_prop.m"
                                              transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_264_264, (MR_Integer) 1)));
#line 397 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_268_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                                                {
#line 397 "const_prop.m"
                                                  transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_265_265, (MR_Integer) 0)));
#line 397 "const_prop.m"
                                                  transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_265_265, (MR_Integer) 1)));
#line 397 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_267_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                                                    {
#line 397 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 397 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 397 "const_prop.m"
                                                        {
#line 397 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_438 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 398 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_438 == (MR_Integer) 0);
#line 398 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 394 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                                                            {
#line 399 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 400 "const_prop.m"
                                                              transform_hlds__const_prop__V_269_269 = (MR_Integer) 224;
#line 400 "const_prop.m"
                                                              transform_hlds__const_prop__V_270_270 = (MR_Integer) 0;
#line 400 "const_prop.m"
                                                              {
#line 400 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_269_269, transform_hlds__const_prop__V_270_270);
                                                              }
#line 394 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 394 "const_prop.m"
                                                                {
#line 401 "const_prop.m"
                                                                  {
#line 401 "const_prop.m"
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_439);
                                                                  }
#line 402 "const_prop.m"
                                                                  {
#line 402 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_439, transform_hlds__const_prop__XVal_437, transform_hlds__const_prop__YVal_438, &transform_hlds__const_prop__OutputArgVal_16);
                                                                  }
#line 394 "const_prop.m"
                                                                }
#line 394 "const_prop.m"
                                                            }
#line 397 "const_prop.m"
                                                        }
#line 394 "const_prop.m"
                                                    }
#line 394 "const_prop.m"
                                                }
#line 397 "const_prop.m"
                                            }
#line 397 "const_prop.m"
                                        }
#line 396 "const_prop.m"
                                    }
#line 394 "const_prop.m"
                                }
#line 394 "const_prop.m"
                            }
#line 396 "const_prop.m"
                        }
#line 396 "const_prop.m"
                    }
#line 394 "const_prop.m"
                }
#line 394 "const_prop.m"
            }
#line 394 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 15:
#line 434 "const_prop.m"
          {
#line 434 "const_prop.m"
            /* case "unchecked_rem" */
#line 434 "const_prop.m"
            {
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_201_201;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_202_202;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_203_203;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_204_204;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_205_205;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_206_206;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_207_207;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_208_208;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_209_209;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_210_210;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_211_211;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_212_212;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_213_213;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_214_214;
#line 434 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_449;
#line 434 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_450;
#line 434 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_451;
#line 436 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_526_526;
#line 436 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_527_527;
#line 436 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_77_77;
#line 436 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_78_78;
#line 437 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_528_528;
#line 437 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_529_529;
#line 437 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_79_79;
#line 437 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_80_80;

#line 435 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 434 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                {
#line 436 "const_prop.m"
                  transform_hlds__const_prop__V_526_526 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 436 "const_prop.m"
                  transform_hlds__const_prop__V_527_527 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 436 "const_prop.m"
                  transform_hlds__const_prop__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 436 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_201_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 436 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                    {
#line 436 "const_prop.m"
                      transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 1)));
#line 436 "const_prop.m"
                      transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 2)));
#line 436 "const_prop.m"
                      transform_hlds__const_prop__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 3)));
#line 436 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_202_202)) == (MR_mktag((MR_Integer) 1)));
#line 436 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                        {
#line 436 "const_prop.m"
                          transform_hlds__const_prop__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_202_202, (MR_Integer) 0)));
#line 436 "const_prop.m"
                          transform_hlds__const_prop__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_202_202, (MR_Integer) 1)));
#line 436 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_206_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                            {
#line 436 "const_prop.m"
                              transform_hlds__const_prop__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_203_203, (MR_Integer) 0)));
#line 436 "const_prop.m"
                              transform_hlds__const_prop__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_203_203, (MR_Integer) 1)));
#line 436 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_205_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                {
#line 436 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_204_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 436 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                                    {
#line 436 "const_prop.m"
                                      transform_hlds__const_prop__XVal_449 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 1)));
#line 437 "const_prop.m"
                                      transform_hlds__const_prop__V_528_528 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 437 "const_prop.m"
                                      transform_hlds__const_prop__V_529_529 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 437 "const_prop.m"
                                      transform_hlds__const_prop__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 437 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_207_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 437 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 437 "const_prop.m"
                                        {
#line 437 "const_prop.m"
                                          transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 1)));
#line 437 "const_prop.m"
                                          transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 2)));
#line 437 "const_prop.m"
                                          transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 3)));
#line 437 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
#line 437 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 437 "const_prop.m"
                                            {
#line 437 "const_prop.m"
                                              transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
#line 437 "const_prop.m"
                                              transform_hlds__const_prop__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 437 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_212_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                                {
#line 437 "const_prop.m"
                                                  transform_hlds__const_prop__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_209_209, (MR_Integer) 0)));
#line 437 "const_prop.m"
                                                  transform_hlds__const_prop__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_209_209, (MR_Integer) 1)));
#line 437 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                                    {
#line 437 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_210_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 437 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 437 "const_prop.m"
                                                        {
#line 437 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_450 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 1)));
#line 438 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_450 == (MR_Integer) 0);
#line 438 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 434 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                                            {
#line 439 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 440 "const_prop.m"
                                                              transform_hlds__const_prop__V_213_213 = (MR_Integer) 224;
#line 440 "const_prop.m"
                                                              transform_hlds__const_prop__V_214_214 = (MR_Integer) 0;
#line 440 "const_prop.m"
                                                              {
#line 440 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_213_213, transform_hlds__const_prop__V_214_214);
                                                              }
#line 434 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                                                {
#line 441 "const_prop.m"
                                                                  {
#line 441 "const_prop.m"
                                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_451);
                                                                  }
#line 442 "const_prop.m"
                                                                  {
#line 442 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_rem_4_p_0(transform_hlds__const_prop__BitsPerInt_451, transform_hlds__const_prop__XVal_449, transform_hlds__const_prop__YVal_450, &transform_hlds__const_prop__OutputArgVal_16);
                                                                  }
#line 434 "const_prop.m"
                                                                }
#line 434 "const_prop.m"
                                                            }
#line 437 "const_prop.m"
                                                        }
#line 434 "const_prop.m"
                                                    }
#line 434 "const_prop.m"
                                                }
#line 437 "const_prop.m"
                                            }
#line 437 "const_prop.m"
                                        }
#line 436 "const_prop.m"
                                    }
#line 434 "const_prop.m"
                                }
#line 434 "const_prop.m"
                            }
#line 436 "const_prop.m"
                        }
#line 436 "const_prop.m"
                    }
#line 434 "const_prop.m"
                }
#line 434 "const_prop.m"
            }
#line 434 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 16:
#line 462 "const_prop.m"
          {
#line 462 "const_prop.m"
            /* case "unchecked_right_shift" */
#line 462 "const_prop.m"
            {
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_159_159;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_160_160;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_161_161;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_162_162;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_163_163;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_164_164;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_165_165;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_166_166;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_167_167;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_168_168;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_169_169;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_170_170;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_171_171;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_172_172;
#line 462 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_458;
#line 462 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_459;
#line 462 "const_prop.m"
              MR_Word transform_hlds__const_prop__BitsPerInt_460;
#line 464 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_538_538;
#line 464 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_539_539;
#line 464 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_89_89;
#line 464 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_90_90;
#line 465 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_540_540;
#line 465 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_541_541;
#line 465 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_91_91;
#line 465 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_92_92;

#line 463 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 462 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                {
#line 464 "const_prop.m"
                  transform_hlds__const_prop__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 464 "const_prop.m"
                  transform_hlds__const_prop__V_539_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 464 "const_prop.m"
                  transform_hlds__const_prop__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 464 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_159_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 464 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
                    {
#line 464 "const_prop.m"
                      transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 1)));
#line 464 "const_prop.m"
                      transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 2)));
#line 464 "const_prop.m"
                      transform_hlds__const_prop__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 3)));
#line 464 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_160_160)) == (MR_mktag((MR_Integer) 1)));
#line 464 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
                        {
#line 464 "const_prop.m"
                          transform_hlds__const_prop__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_160_160, (MR_Integer) 0)));
#line 464 "const_prop.m"
                          transform_hlds__const_prop__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_160_160, (MR_Integer) 1)));
#line 464 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                            {
#line 464 "const_prop.m"
                              transform_hlds__const_prop__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_161_161, (MR_Integer) 0)));
#line 464 "const_prop.m"
                              transform_hlds__const_prop__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_161_161, (MR_Integer) 1)));
#line 464 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                {
#line 464 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_162_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 464 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
                                    {
#line 464 "const_prop.m"
                                      transform_hlds__const_prop__XVal_458 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                      transform_hlds__const_prop__V_540_540 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                      transform_hlds__const_prop__V_541_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                      transform_hlds__const_prop__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 465 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 465 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                        {
#line 465 "const_prop.m"
                                          transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                          transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 2)));
#line 465 "const_prop.m"
                                          transform_hlds__const_prop__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 3)));
#line 465 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_166_166)) == (MR_mktag((MR_Integer) 1)));
#line 465 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                            {
#line 465 "const_prop.m"
                                              transform_hlds__const_prop__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_166_166, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                              transform_hlds__const_prop__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_166_166, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                                {
#line 465 "const_prop.m"
                                                  transform_hlds__const_prop__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_167_167, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                                  transform_hlds__const_prop__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_167_167, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                                    {
#line 465 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_168_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 465 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                                        {
#line 465 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_459 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 1)));
#line 466 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 467 "const_prop.m"
                                                          transform_hlds__const_prop__V_171_171 = (MR_Integer) 224;
#line 467 "const_prop.m"
                                                          transform_hlds__const_prop__V_172_172 = (MR_Integer) 0;
#line 467 "const_prop.m"
                                                          {
#line 467 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__V_171_171, transform_hlds__const_prop__V_172_172);
                                                          }
#line 462 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                                            {
#line 468 "const_prop.m"
                                                              {
#line 468 "const_prop.m"
                                                                libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_460);
                                                              }
#line 469 "const_prop.m"
                                                              {
#line 469 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_460, transform_hlds__const_prop__XVal_458, transform_hlds__const_prop__YVal_459, &transform_hlds__const_prop__OutputArgVal_16);
                                                              }
#line 462 "const_prop.m"
                                                            }
#line 465 "const_prop.m"
                                                        }
#line 462 "const_prop.m"
                                                    }
#line 462 "const_prop.m"
                                                }
#line 465 "const_prop.m"
                                            }
#line 465 "const_prop.m"
                                        }
#line 464 "const_prop.m"
                                    }
#line 462 "const_prop.m"
                                }
#line 462 "const_prop.m"
                            }
#line 464 "const_prop.m"
                        }
#line 464 "const_prop.m"
                    }
#line 462 "const_prop.m"
                }
#line 462 "const_prop.m"
            }
#line 462 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
        case (MR_Integer) 17:
#line 494 "const_prop.m"
          {
#line 494 "const_prop.m"
            /* case "xor" */
#line 494 "const_prop.m"
            {
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_109_109;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_110_110;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_111_111;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_112_112;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_113_113;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_114_114;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_115_115;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_116_116;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_117_117;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_118_118;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_119_119;
#line 494 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_120_120;
#line 494 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_468;
#line 494 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_469;
#line 496 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_554_554;
#line 496 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_555_555;
#line 496 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_105_105;
#line 496 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_106_106;
#line 497 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_556_556;
#line 497 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_557_557;
#line 497 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_107_107;
#line 497 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_108_108;

#line 495 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 494 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 494 "const_prop.m"
                {
#line 496 "const_prop.m"
                  transform_hlds__const_prop__V_554_554 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 496 "const_prop.m"
                  transform_hlds__const_prop__V_555_555 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 496 "const_prop.m"
                  transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 496 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 496 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 496 "const_prop.m"
                    {
#line 496 "const_prop.m"
                      transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 1)));
#line 496 "const_prop.m"
                      transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 2)));
#line 496 "const_prop.m"
                      transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 3)));
#line 496 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_110_110)) == (MR_mktag((MR_Integer) 1)));
#line 496 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 496 "const_prop.m"
                        {
#line 496 "const_prop.m"
                          transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 0)));
#line 496 "const_prop.m"
                          transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 1)));
#line 496 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 494 "const_prop.m"
                            {
#line 496 "const_prop.m"
                              transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)));
#line 496 "const_prop.m"
                              transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
#line 496 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 494 "const_prop.m"
                                {
#line 496 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_112_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 496 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 496 "const_prop.m"
                                    {
#line 496 "const_prop.m"
                                      transform_hlds__const_prop__XVal_468 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 1)));
#line 497 "const_prop.m"
                                      transform_hlds__const_prop__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 497 "const_prop.m"
                                      transform_hlds__const_prop__V_557_557 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 497 "const_prop.m"
                                      transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 497 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_115_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 497 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 497 "const_prop.m"
                                        {
#line 497 "const_prop.m"
                                          transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
#line 497 "const_prop.m"
                                          transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 2)));
#line 497 "const_prop.m"
                                          transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 3)));
#line 497 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_116_116)) == (MR_mktag((MR_Integer) 1)));
#line 497 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 497 "const_prop.m"
                                            {
#line 497 "const_prop.m"
                                              transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 0)));
#line 497 "const_prop.m"
                                              transform_hlds__const_prop__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 1)));
#line 497 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 494 "const_prop.m"
                                                {
#line 497 "const_prop.m"
                                                  transform_hlds__const_prop__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)));
#line 497 "const_prop.m"
                                                  transform_hlds__const_prop__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
#line 497 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 494 "const_prop.m"
                                                    {
#line 497 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_118_118)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 497 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 497 "const_prop.m"
                                                        {
#line 497 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_469 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 1)));
#line 498 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 499 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_468 ^ transform_hlds__const_prop__YVal_469);
#line 499 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 497 "const_prop.m"
                                                        }
#line 494 "const_prop.m"
                                                    }
#line 494 "const_prop.m"
                                                }
#line 497 "const_prop.m"
                                            }
#line 497 "const_prop.m"
                                        }
#line 496 "const_prop.m"
                                    }
#line 494 "const_prop.m"
                                }
#line 494 "const_prop.m"
                            }
#line 496 "const_prop.m"
                        }
#line 496 "const_prop.m"
                    }
#line 494 "const_prop.m"
                }
#line 494 "const_prop.m"
            }
#line 494 "const_prop.m"
          }
#line 312 "const_prop.m"
          break;
#line 312 "const_prop.m"
      }
#line 312 "const_prop.m"
    }
#line 302 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 302 "const_prop.m"
      {
#line 302 "const_prop.m"
        {
#line 302 "const_prop.m"
          MR_Word base;
#line 302 "const_prop.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 302 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 302 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 302 "const_prop.m"
        }
#line 302 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 302 "const_prop.m"
      }
#line 302 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 302 "const_prop.m"
  }
#line 297 "const_prop.m"
}

#line 203 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 203 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 203 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 203 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 203 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 203 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 203 "const_prop.m"
{
#line 208 "const_prop.m"
  {
#line 208 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 208 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_14;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_108_108;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_111_111;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_114_114;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_115_115;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_116_116;
#line 208 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_117_117;
#line 208 "const_prop.m"
    MR_Integer transform_hlds__const_prop__V_118_118;
#line 212 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_109_109;
#line 212 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_110_110;
#line 212 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_112_112;
#line 212 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_113_113;
#line 215 "const_prop.m"
    MR_Integer transform_hlds__const_prop__lo_0;
#line 215 "const_prop.m"
    MR_Integer transform_hlds__const_prop__hi_1;
#line 215 "const_prop.m"
    MR_Integer transform_hlds__const_prop__mid_2;
#line 215 "const_prop.m"
    MR_Integer transform_hlds__const_prop__result_3;

#line 208 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 208 "const_prop.m"
      {
#line 212 "const_prop.m"
        transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 212 "const_prop.m"
        transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 212 "const_prop.m"
        transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 212 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 212 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 212 "const_prop.m"
          {
#line 212 "const_prop.m"
            transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 1)));
#line 212 "const_prop.m"
            transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 2)));
#line 212 "const_prop.m"
            transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 3)));
#line 212 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_111_111)) == (MR_mktag((MR_Integer) 1)));
#line 212 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 212 "const_prop.m"
              {
#line 212 "const_prop.m"
                transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)));
#line 212 "const_prop.m"
                transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
#line 212 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 208 "const_prop.m"
                  {
#line 212 "const_prop.m"
                    transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)));
#line 212 "const_prop.m"
                    transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
#line 212 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 208 "const_prop.m"
                      {
#line 212 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_117_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 212 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 212 "const_prop.m"
                          {
#line 212 "const_prop.m"
                            transform_hlds__const_prop__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
#line 215 "const_prop.m"
                            /* binary string jump switch */
#line 215 "const_prop.m"
                            transform_hlds__const_prop__lo_0 = (MR_Integer) 0;
#line 215 "const_prop.m"
                            transform_hlds__const_prop__hi_1 = (MR_Integer) 6;
#line 215 "const_prop.m"
                            do
#line 215 "const_prop.m"
                              {
#line 215 "const_prop.m"
                                transform_hlds__const_prop__mid_2 = (((transform_hlds__const_prop__lo_0 + transform_hlds__const_prop__hi_1)) / (MR_Integer) 2);
#line 215 "const_prop.m"
                                transform_hlds__const_prop__result_3 = MR_strcmp(transform_hlds__const_prop__ProcName_9, ((&transform_hlds__const_prop_vector_common_3[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_0);
#line 215 "const_prop.m"
                                if ((transform_hlds__const_prop__result_3 == (MR_Integer) 0))
#line 215 "const_prop.m"
                                  {
#line 215 "const_prop.m"
#line 215 "const_prop.m"
                                    switch (((&transform_hlds__const_prop_vector_common_3[0 + transform_hlds__const_prop__mid_2]))->transform_hlds__const_prop__vector_common_type_3_0__vct_3_f_1) {
#line 215 "const_prop.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 215 "const_prop.m"
                                      case (MR_Integer) 0:
#line 210 "const_prop.m"
                                        {
#line 210 "const_prop.m"
                                          /* case "+" */
#line 213 "const_prop.m"
                                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 214 "const_prop.m"
                                          transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_118_118;
#line 210 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 210 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 1:
#line 216 "const_prop.m"
                                        {
#line 216 "const_prop.m"
                                          /* case "-" */
#line 216 "const_prop.m"
                                          {
#line 216 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__BitsPerInt_20;
#line 216 "const_prop.m"
                                            MR_Integer transform_hlds__const_prop__V_77_77;

#line 219 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 220 "const_prop.m"
                                            {
#line 220 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 224, (MR_Integer) 0);
                                            }
#line 216 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 216 "const_prop.m"
                                              {
#line 221 "const_prop.m"
                                                {
#line 221 "const_prop.m"
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_20);
                                                }
#line 222 "const_prop.m"
                                                transform_hlds__const_prop__V_77_77 = (MR_Integer) 0;
#line 222 "const_prop.m"
                                                {
#line 222 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_20, transform_hlds__const_prop__V_77_77, transform_hlds__const_prop__V_118_118, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
#line 216 "const_prop.m"
                                              }
#line 216 "const_prop.m"
                                          }
#line 216 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 2:
#line 224 "const_prop.m"
                                        {
#line 224 "const_prop.m"
                                          /* case "\" */
#line 227 "const_prop.m"
                                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 228 "const_prop.m"
                                          transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__V_118_118);
#line 224 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 224 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 3:
#line 230 "const_prop.m"
                                        {
#line 230 "const_prop.m"
                                          /* case "floor_to_multiple_of_bits_per_int" */
#line 230 "const_prop.m"
                                          {
#line 230 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__BitsPerInt_87;

#line 233 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 234 "const_prop.m"
                                            {
#line 234 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 224, (MR_Integer) 0);
                                            }
#line 230 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 230 "const_prop.m"
                                              {
#line 235 "const_prop.m"
                                                {
#line 235 "const_prop.m"
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_87);
                                                }
#line 236 "const_prop.m"
                                                {
#line 236 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_87, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
#line 230 "const_prop.m"
                                              }
#line 230 "const_prop.m"
                                          }
#line 230 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 4:
#line 239 "const_prop.m"
                                        {
#line 239 "const_prop.m"
                                          /* case "quot_bits_per_int" */
#line 239 "const_prop.m"
                                          {
#line 239 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__BitsPerInt_89;

#line 242 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 243 "const_prop.m"
                                            {
#line 243 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 224, (MR_Integer) 0);
                                            }
#line 239 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 239 "const_prop.m"
                                              {
#line 244 "const_prop.m"
                                                {
#line 244 "const_prop.m"
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_89);
                                                }
#line 245 "const_prop.m"
                                                {
#line 245 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__quot_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_89, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
#line 239 "const_prop.m"
                                              }
#line 239 "const_prop.m"
                                          }
#line 239 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 5:
#line 255 "const_prop.m"
                                        {
#line 255 "const_prop.m"
                                          /* case "rem_bits_per_int" */
#line 255 "const_prop.m"
                                          {
#line 255 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__BitsPerInt_93;

#line 258 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 259 "const_prop.m"
                                            {
#line 259 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 224, (MR_Integer) 0);
                                            }
#line 255 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 255 "const_prop.m"
                                              {
#line 260 "const_prop.m"
                                                {
#line 260 "const_prop.m"
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_93);
                                                }
#line 261 "const_prop.m"
                                                {
#line 261 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__rem_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_93, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
#line 255 "const_prop.m"
                                              }
#line 255 "const_prop.m"
                                          }
#line 255 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                      case (MR_Integer) 6:
#line 247 "const_prop.m"
                                        {
#line 247 "const_prop.m"
                                          /* case "times_bits_per_int" */
#line 247 "const_prop.m"
                                          {
#line 247 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__BitsPerInt_91;

#line 250 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 251 "const_prop.m"
                                            {
#line 251 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, (MR_Integer) 224, (MR_Integer) 0);
                                            }
#line 247 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 247 "const_prop.m"
                                              {
#line 252 "const_prop.m"
                                                {
#line 252 "const_prop.m"
                                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_91);
                                                }
#line 253 "const_prop.m"
                                                {
#line 253 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = libs__int_emu__times_bits_per_int_3_p_0(transform_hlds__const_prop__V_118_118, transform_hlds__const_prop__BitsPerInt_91, &transform_hlds__const_prop__OutputArgVal_14);
                                                }
#line 247 "const_prop.m"
                                              }
#line 247 "const_prop.m"
                                          }
#line 247 "const_prop.m"
                                        }
#line 215 "const_prop.m"
                                        break;
#line 215 "const_prop.m"
                                    }
#line 215 "const_prop.m"
                                    /* jump out of search loop */
#line 215 "const_prop.m"
                                    goto label_0;
#line 215 "const_prop.m"
                                  }
#line 215 "const_prop.m"
                                else
#line 215 "const_prop.m"
                                if ((transform_hlds__const_prop__result_3 < (MR_Integer) 0))
#line 215 "const_prop.m"
                                  transform_hlds__const_prop__hi_1 = (transform_hlds__const_prop__mid_2 - (MR_Integer) 1);
#line 215 "const_prop.m"
                                else
#line 215 "const_prop.m"
                                  transform_hlds__const_prop__lo_0 = (transform_hlds__const_prop__mid_2 + (MR_Integer) 1);
#line 215 "const_prop.m"
                              }
#line 215 "const_prop.m"
                            while ((transform_hlds__const_prop__lo_0 <= transform_hlds__const_prop__hi_1));
#line 215 "const_prop.m"
                            transform_hlds__const_prop__succeeded = MR_FALSE;
#line 215 "const_prop.m"
                          label_0:;
#line 208 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 208 "const_prop.m"
                              {
#line 208 "const_prop.m"
                                {
#line 208 "const_prop.m"
                                  MR_Word base;
#line 208 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 208 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 208 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
#line 208 "const_prop.m"
                                }
#line 208 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 208 "const_prop.m"
                              }
#line 212 "const_prop.m"
                          }
#line 208 "const_prop.m"
                      }
#line 208 "const_prop.m"
                  }
#line 212 "const_prop.m"
              }
#line 212 "const_prop.m"
          }
#line 208 "const_prop.m"
      }
#line 208 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 208 "const_prop.m"
  }
#line 203 "const_prop.m"
}

#line 134 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 134 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 134 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 134 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 134 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 134 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 134 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 134 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 134 "const_prop.m"
{
#line 149 "const_prop.m"
  {
#line 149 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 149 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_73_73;
#line 149 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_74_74;

#line 173 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 173 "const_prop.m"
      {
#line 173 "const_prop.m"
        transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 0)));
#line 173 "const_prop.m"
        transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 1)));
#line 149 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "int") == 0))
#line 149 "const_prop.m"
          if ((transform_hlds__const_prop__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "const_prop.m"
            {
#line 194 "const_prop.m"
              MR_Integer transform_hlds__const_prop__OutputArgVal_86;
#line 194 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_87_87;
#line 194 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_88_88;
#line 194 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_89_89;

#line 196 "const_prop.m"
              transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "bits_per_int") == 0);
#line 194 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 194 "const_prop.m"
                {
#line 197 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 194 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 194 "const_prop.m"
                    {
#line 198 "const_prop.m"
                      *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__V_74_74;
#line 199 "const_prop.m"
                      transform_hlds__const_prop__V_87_87 = (MR_Integer) 224;
#line 199 "const_prop.m"
                      transform_hlds__const_prop__V_88_88 = (MR_Integer) 0;
#line 199 "const_prop.m"
                      {
#line 199 "const_prop.m"
                        transform_hlds__const_prop__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__V_87_87, transform_hlds__const_prop__V_88_88);
                      }
#line 194 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 194 "const_prop.m"
                        {
#line 200 "const_prop.m"
                          {
#line 200 "const_prop.m"
                            libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__V_89_89);
                          }
#line 200 "const_prop.m"
                          transform_hlds__const_prop__OutputArgVal_86 = (MR_Integer) transform_hlds__const_prop__V_89_89;
#line 194 "const_prop.m"
                          {
#line 194 "const_prop.m"
                            MR_Word base;
#line 194 "const_prop.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "const_prop.m"
                            *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 194 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 194 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_86));
#line 194 "const_prop.m"
                          }
#line 194 "const_prop.m"
                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 194 "const_prop.m"
                        }
#line 194 "const_prop.m"
                    }
#line 194 "const_prop.m"
                }
#line 194 "const_prop.m"
            }
#line 149 "const_prop.m"
          else
#line 149 "const_prop.m"
            {
#line 149 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 149 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));

#line 149 "const_prop.m"
              if ((transform_hlds__const_prop__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "const_prop.m"
                {
#line 161 "const_prop.m"
                  return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                }
#line 149 "const_prop.m"
              else
#line 173 "const_prop.m"
                {
#line 173 "const_prop.m"
                  MR_Word transform_hlds__const_prop__Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 0)));
#line 173 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 1)));

#line 173 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 177 "const_prop.m"
                    {
#line 177 "const_prop.m"
                      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(transform_hlds__const_prop__Globals_8, transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__Z_27, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
#line 173 "const_prop.m"
                }
#line 149 "const_prop.m"
            }
#line 149 "const_prop.m"
        else
#line 149 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "float") == 0))
#line 149 "const_prop.m"
          {
#line 149 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_75_75;
#line 149 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_76_76;

#line 173 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 173 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 173 "const_prop.m"
              {
#line 173 "const_prop.m"
                transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 173 "const_prop.m"
                transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 149 "const_prop.m"
                if ((transform_hlds__const_prop__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "const_prop.m"
                  {
#line 165 "const_prop.m"
                    return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
#line 149 "const_prop.m"
                else
#line 173 "const_prop.m"
                  {
#line 173 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 0)));
#line 173 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 1)));

#line 173 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 181 "const_prop.m"
                      {
#line 181 "const_prop.m"
                        return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__Z_17, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
#line 173 "const_prop.m"
                  }
#line 173 "const_prop.m"
              }
#line 149 "const_prop.m"
          }
#line 149 "const_prop.m"
        else
#line 149 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_9, (MR_String) "string") == 0))
#line 149 "const_prop.m"
          {
#line 149 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_79_79;
#line 149 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_80_80;

#line 173 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 173 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 173 "const_prop.m"
              {
#line 173 "const_prop.m"
                transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 173 "const_prop.m"
                transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 149 "const_prop.m"
                if ((transform_hlds__const_prop__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "const_prop.m"
                  {
#line 169 "const_prop.m"
                    return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                  }
#line 149 "const_prop.m"
                else
#line 173 "const_prop.m"
                  {
#line 173 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 0)));
#line 173 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 1)));

#line 173 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 185 "const_prop.m"
                      {
#line 185 "const_prop.m"
                        return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__Z_47, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
#line 173 "const_prop.m"
                  }
#line 173 "const_prop.m"
              }
#line 149 "const_prop.m"
          }
#line 149 "const_prop.m"
        else
#line 149 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 173 "const_prop.m"
      }
#line 149 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 149 "const_prop.m"
  }
#line 134 "const_prop.m"
}

#line 88 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 88 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_10,
#line 88 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_11,
#line 88 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_12,
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_13,
#line 88 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 88 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 88 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22)
#line 88 "const_prop.m"
{
#line 99 "const_prop.m"
  {
#line 99 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 99 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArg_16;
#line 99 "const_prop.m"
    MR_Word transform_hlds__const_prop__Cons_17;

#line 95 "const_prop.m"
    {
#line 95 "const_prop.m"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(transform_hlds__const_prop__Globals_9, transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__OutputArg_16, &transform_hlds__const_prop__Cons_17);
    }
#line 99 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 768 "const_prop.m"
      {
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta0_48;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__Inst_49;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta_50;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_53_53;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__Goal_66;
#line 768 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 797 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 797 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 801 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;
#line 772 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_61_61;
#line 772 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;

#line 797 "const_prop.m"
        {
#line 797 "const_prop.m"
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_68_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__Goal_66);
        }
#line 801 "const_prop.m"
        *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 0)));
#line 801 "const_prop.m"
        transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 1)));
#line 770 "const_prop.m"
        {
#line 770 "const_prop.m"
          transform_hlds__const_prop__Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
        }
#line 771 "const_prop.m"
        {
#line 771 "const_prop.m"
          transform_hlds__const_prop__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "const_prop.m"
        }
#line 771 "const_prop.m"
        {
#line 771 "const_prop.m"
          transform_hlds__const_prop__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 0) = ((MR_Box) (transform_hlds__const_prop__V_54_54));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "const_prop.m"
        }
#line 771 "const_prop.m"
        {
#line 771 "const_prop.m"
          transform_hlds__const_prop__Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 771 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 3) = ((MR_Box) (transform_hlds__const_prop__V_53_53));
#line 771 "const_prop.m"
        }
#line 772 "const_prop.m"
        transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 772 "const_prop.m"
        transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 772 "const_prop.m"
        transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 772 "const_prop.m"
        {
#line 772 "const_prop.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_57_57, transform_hlds__const_prop__Inst_49, transform_hlds__const_prop__Delta0_48, &transform_hlds__const_prop__Delta_50);
        }
#line 773 "const_prop.m"
        {
#line 773 "const_prop.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_50, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58);
        }
#line 774 "const_prop.m"
        {
#line 774 "const_prop.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
        }
#line 768 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 768 "const_prop.m"
      }
#line 99 "const_prop.m"
    else
#line 103 "const_prop.m"
      {
#line 103 "const_prop.m"
        MR_Word transform_hlds__const_prop__Succeeded_18;

#line 100 "const_prop.m"
        {
#line 100 "const_prop.m"
          transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Succeeded_18);
        }
#line 103 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 102 "const_prop.m"
          {
#line 807 "const_prop.m"
#line 807 "const_prop.m"
            switch (transform_hlds__const_prop__Succeeded_18) {
#line 807 "const_prop.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 807 "const_prop.m"
              case (MR_Integer) 0:
#line 808 "const_prop.m"
                {
#line 808 "const_prop.m"
                  *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
                }
#line 807 "const_prop.m"
                break;
#line 807 "const_prop.m"
              case (MR_Integer) 1:
#line 807 "const_prop.m"
                {
#line 807 "const_prop.m"
                  *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
                }
#line 807 "const_prop.m"
                break;
#line 807 "const_prop.m"
            }
#line 102 "const_prop.m"
            *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 102 "const_prop.m"
            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 102 "const_prop.m"
          }
#line 103 "const_prop.m"
        else
#line 116 "const_prop.m"
          {
#line 116 "const_prop.m"
            MR_Word transform_hlds__const_prop__Result_19;

#line 104 "const_prop.m"
            {
#line 104 "const_prop.m"
              transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(transform_hlds__const_prop__ModuleName_10, transform_hlds__const_prop__Pred_11, transform_hlds__const_prop__ModeNum_12, transform_hlds__const_prop__Args_13, &transform_hlds__const_prop__Result_19);
            }
#line 116 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 116 "const_prop.m"
              {
#line 109 "const_prop.m"
                if ((transform_hlds__const_prop__Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 113 "const_prop.m"
                  {
#line 114 "const_prop.m"
                    {
#line 114 "const_prop.m"
                      *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
                    }
#line 113 "const_prop.m"
                    *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 113 "const_prop.m"
                  }
#line 109 "const_prop.m"
                else
#line 109 "const_prop.m"
                  {
#line 109 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Result_19, (MR_Integer) 0)));
#line 109 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 109 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));

#line 109 "const_prop.m"
                    if (((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1))))
#line 107 "const_prop.m"
                      {
#line 107 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Cons_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));

#line 108 "const_prop.m"
                        {
#line 108 "const_prop.m"
                          transform_hlds__const_prop__make_construction_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__Cons_31, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 107 "const_prop.m"
                      }
#line 109 "const_prop.m"
                    else
#line 110 "const_prop.m"
                      {
#line 110 "const_prop.m"
                        MR_Word transform_hlds__const_prop__InputArg_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__V_40_40), (MR_Integer) 0);

#line 111 "const_prop.m"
                        {
#line 111 "const_prop.m"
                          transform_hlds__const_prop__make_assignment_goal_5_p_0(transform_hlds__const_prop__V_41_41, transform_hlds__const_prop__InputArg_20, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 110 "const_prop.m"
                      }
#line 109 "const_prop.m"
                  }
#line 109 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 116 "const_prop.m"
              }
#line 116 "const_prop.m"
          }
#line 103 "const_prop.m"
      }
#line 99 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 99 "const_prop.m"
  }
#line 88 "const_prop.m"
}

#line 80 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 80 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 80 "const_prop.m"
  MR_Box transform_hlds__const_prop__wrapper_arg_1)
#line 80 "const_prop.m"
{
#line 80 "const_prop.m"
  {
#line 80 "const_prop.m"
    MR_Box transform_hlds__const_prop__wrapper_arg_2;
#line 80 "const_prop.m"
    MR_Box transform_hlds__const_prop__closure = transform_hlds__const_prop__closure_arg;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__4_28;

#line 80 "const_prop.m"
    {
#line 80 "const_prop.m"
      transform_hlds__const_prop__conv0_HeadVar__4_28 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__80__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__const_prop__wrapper_arg_1));
    }
#line 80 "const_prop.m"
    transform_hlds__const_prop__wrapper_arg_2 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__4_28));
#line 80 "const_prop.m"
    return transform_hlds__const_prop__wrapper_arg_2;
#line 80 "const_prop.m"
  }
#line 80 "const_prop.m"
}

#line 40 "const_prop.m"
MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
#line 40 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_11,
#line 40 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_12,
#line 40 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_13,
#line 40 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_14,
#line 40 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_15,
#line 40 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_16,
#line 40 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_17,
#line 40 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_18,
#line 40 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25,
#line 40 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26)
#line 40 "const_prop.m"
{
#line 79 "const_prop.m"
  {
#line 79 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 79 "const_prop.m"
    MR_Word transform_hlds__const_prop__LookupArgs_20;
#line 79 "const_prop.m"
    MR_Word transform_hlds__const_prop__ArgHldsInfos_24;

#line 80 "const_prop.m"
    {
#line 80 "const_prop.m"
      transform_hlds__const_prop__LookupArgs_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_2[0]));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 3) = ((MR_Box) (transform_hlds__const_prop__VarTypes_12));
#line 80 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_20, 4) = ((MR_Box) (transform_hlds__const_prop__InstMap_13));
#line 80 "const_prop.m"
    }
#line 84 "const_prop.m"
    {
#line 84 "const_prop.m"
      transform_hlds__const_prop__ArgHldsInfos_24 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, transform_hlds__const_prop__LookupArgs_20, transform_hlds__const_prop__Args_17);
    }
#line 85 "const_prop.m"
    {
#line 85 "const_prop.m"
      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(transform_hlds__const_prop__Globals_11, transform_hlds__const_prop__ModuleName_14, transform_hlds__const_prop__ProcName_15, transform_hlds__const_prop__ModeNum_16, transform_hlds__const_prop__ArgHldsInfos_24, transform_hlds__const_prop__GoalExpr_18, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_25, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_26);
    }
#line 79 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 79 "const_prop.m"
  }
#line 40 "const_prop.m"
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
