/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 131 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 134 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 137 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

#line 143 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

#line 146 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

#line 149 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

#line 152 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

#line 155 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

#line 158 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

#line 161 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1];

#line 164 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0;

#line 167 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1];

#line 170 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1;

#line 173 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1];

#line 176 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1];

#line 179 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2];

#line 182 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2];

#line 185 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2];

#line 188 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 191 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 193 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 196 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 199 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 201 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 203 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 206 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 209 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 211 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 214 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 217 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 219 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 221 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 496 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_51_93_95_48_8_p_0(
#line 496 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 496 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 496 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 496 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 451 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_51_93_95_48_8_p_0(
#line 451 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 451 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 451 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 451 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 284 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_51_93_95_48_8_p_0(
#line 284 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 284 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 271 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_51_93_95_48_7_p_0(
#line 271 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 271 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 271 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 271 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 271 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 271 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 251 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_51_93_95_48_7_p_0(
#line 251 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 251 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 251 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 251 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 251 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 251 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 83 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__83__1_3_f_0(
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_15,
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_16,
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_30);

#line 641 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 641 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 641 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 72 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 72 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 72 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2);

#line 716 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 716 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 716 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);

#line 705 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 705 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 705 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);

#line 677 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 677 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 677 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 677 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6);

#line 645 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 645 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 645 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 645 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 645 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 645 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 530 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 530 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 530 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 530 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 530 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 530 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 197 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 197 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 197 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_10,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 197 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 197 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7);

#line 137 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 137 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_8,
#line 137 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 137 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 137 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_11,
#line 137 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 137 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 137 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 91 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 91 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 91 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_10,
#line 91 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_13,
#line 91 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 91 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);

#line 83 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 83 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 83 "const_prop.m"
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



#line 542 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 550 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 559 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 567 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 574 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

#line 581 "transform_hlds.const_prop.c"
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

#line 596 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 601 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0
  }
};

#line 610 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 615 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = {
  (MR_Integer) 0
};

#line 620 "transform_hlds.const_prop.c"
const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_hlds_info",
  {
    transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0
  },
  {
    transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0
};

#line 641 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 646 "transform_hlds.const_prop.c"
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

#line 661 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

#line 666 "transform_hlds.const_prop.c"
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

#line 681 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 686 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

#line 691 "transform_hlds.const_prop.c"
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

#line 705 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 711 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 717 "transform_hlds.const_prop.c"
const MR_TypeCtorInfo_Struct transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__const_prop____Unify____arg_val_0_0_10001)),
  ((MR_Box) (transform_hlds__const_prop____Compare____arg_val_0_0_10001)),
  (MR_String) "transform_hlds.const_prop",
  (MR_String) "arg_val",
  {
    transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0
  },
  {
    transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0
};

#line 738 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 741 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 743 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 745 "transform_hlds.const_prop.c"
{
#line 747 "transform_hlds.const_prop.c"
  {
#line 749 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 752 "transform_hlds.const_prop.c"
    {
#line 754 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 757 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 759 "transform_hlds.const_prop.c"
  }
#line 761 "transform_hlds.const_prop.c"
}

#line 764 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 767 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 769 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 771 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 773 "transform_hlds.const_prop.c"
{
#line 775 "transform_hlds.const_prop.c"
  {
#line 777 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 780 "transform_hlds.const_prop.c"
    {
#line 782 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_hlds_info_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 785 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 787 "transform_hlds.const_prop.c"
  }
#line 789 "transform_hlds.const_prop.c"
}

#line 792 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 795 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 797 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2)
#line 799 "transform_hlds.const_prop.c"
{
#line 801 "transform_hlds.const_prop.c"
  {
#line 803 "transform_hlds.const_prop.c"
    MR_bool transform_hlds__const_prop__succeeded;

#line 806 "transform_hlds.const_prop.c"
    {
#line 808 "transform_hlds.const_prop.c"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_val_0_0(((MR_Word) transform_hlds__const_prop__wrapper_arg_1), ((MR_Word) transform_hlds__const_prop__wrapper_arg_2));
    }
#line 811 "transform_hlds.const_prop.c"
    return transform_hlds__const_prop__succeeded;
#line 813 "transform_hlds.const_prop.c"
  }
#line 815 "transform_hlds.const_prop.c"
}

#line 818 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 821 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 823 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 825 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3)
#line 827 "transform_hlds.const_prop.c"
{
#line 829 "transform_hlds.const_prop.c"
  {
#line 831 "transform_hlds.const_prop.c"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__1_1;

#line 834 "transform_hlds.const_prop.c"
    {
#line 836 "transform_hlds.const_prop.c"
      transform_hlds__const_prop____Compare____arg_val_0_0(&transform_hlds__const_prop__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__const_prop__wrapper_arg_2), ((MR_Word) transform_hlds__const_prop__wrapper_arg_3));
    }
#line 839 "transform_hlds.const_prop.c"
    *transform_hlds__const_prop__wrapper_arg_1 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__1_1));
#line 841 "transform_hlds.const_prop.c"
  }
#line 843 "transform_hlds.const_prop.c"
}

#line 496 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_51_93_95_48_8_p_0(
#line 496 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 496 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 496 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 496 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 496 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 496 "const_prop.m"
{
#line 501 "const_prop.m"
  {
#line 501 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 501 "const_prop.m"
    MR_String transform_hlds__const_prop__OutputArgVal_16;
#line 501 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_19;
#line 501 "const_prop.m"
    MR_String transform_hlds__const_prop__YVal_22;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_29_29;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_30_30;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34;
#line 510 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_35_35;
#line 510 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_36_36;
#line 510 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 510 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 511 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;

#line 504 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "++") == 0))
#line 503 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 504 "const_prop.m"
    else
#line 504 "const_prop.m"
      if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "append") == 0))
#line 504 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 504 "const_prop.m"
      else
#line 504 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 501 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
      {
#line 509 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 501 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
          {
#line 510 "const_prop.m"
            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 510 "const_prop.m"
            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 510 "const_prop.m"
            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 510 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 510 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 510 "const_prop.m"
              {
#line 510 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 1)));
#line 510 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 2)));
#line 510 "const_prop.m"
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 3)));
#line 510 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 510 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 510 "const_prop.m"
                  {
#line 510 "const_prop.m"
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 0)));
#line 510 "const_prop.m"
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 1)));
#line 510 "const_prop.m"
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 0)));
#line 510 "const_prop.m"
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 1)));
#line 510 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 510 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 510 "const_prop.m"
                      {
#line 510 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 1)));
#line 510 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                          {
#line 510 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                              {
#line 511 "const_prop.m"
                                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 511 "const_prop.m"
                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 511 "const_prop.m"
                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 511 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 511 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                                  {
#line 511 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 1)));
#line 511 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 2)));
#line 511 "const_prop.m"
                                    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 3)));
#line 511 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 511 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                                      {
#line 511 "const_prop.m"
                                        transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 0)));
#line 511 "const_prop.m"
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 1)));
#line 511 "const_prop.m"
                                        transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 0)));
#line 511 "const_prop.m"
                                        transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 1)));
#line 511 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 511 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 511 "const_prop.m"
                                          {
#line 511 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 511 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                                              {
#line 511 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                                                  {
#line 512 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 513 "const_prop.m"
                                                    {
#line 513 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                                                    }
#line 501 "const_prop.m"
                                                    {
#line 501 "const_prop.m"
                                                      MR_Word base;
#line 501 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 501 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 501 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 501 "const_prop.m"
                                                    }
#line 501 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 501 "const_prop.m"
                                                  }
#line 501 "const_prop.m"
                                              }
#line 511 "const_prop.m"
                                          }
#line 511 "const_prop.m"
                                      }
#line 511 "const_prop.m"
                                  }
#line 501 "const_prop.m"
                              }
#line 501 "const_prop.m"
                          }
#line 510 "const_prop.m"
                      }
#line 510 "const_prop.m"
                  }
#line 510 "const_prop.m"
              }
#line 501 "const_prop.m"
          }
#line 501 "const_prop.m"
      }
#line 501 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 501 "const_prop.m"
  }
#line 496 "const_prop.m"
}

#line 451 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_51_93_95_48_8_p_0(
#line 451 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 451 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 451 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 451 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 451 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 451 "const_prop.m"
{
#line 456 "const_prop.m"
  {
#line 456 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 456 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_16;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_127_127;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_130_130;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_133_133;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_136_136;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_139_139;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_140_140;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_141_141;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_142_142;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_143_143;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_144_144;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_145_145;
#line 456 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_146_146;
#line 456 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_147_147;
#line 456 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_148_148;
#line 474 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_128_128;
#line 474 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_129_129;
#line 475 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_131_131;
#line 475 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_132_132;
#line 474 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_134_134;
#line 474 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_135_135;
#line 475 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_137_137;
#line 475 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_138_138;

#line 456 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
      {
#line 474 "const_prop.m"
        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 474 "const_prop.m"
        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 474 "const_prop.m"
        transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 475 "const_prop.m"
        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 475 "const_prop.m"
        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 475 "const_prop.m"
        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 474 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 474 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
          {
#line 474 "const_prop.m"
            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 474 "const_prop.m"
            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 474 "const_prop.m"
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 475 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 475 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 475 "const_prop.m"
              {
#line 475 "const_prop.m"
                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 475 "const_prop.m"
                transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 2)));
#line 475 "const_prop.m"
                transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 3)));
#line 474 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 474 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
                  {
#line 474 "const_prop.m"
                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 474 "const_prop.m"
                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 475 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 1)));
#line 475 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 475 "const_prop.m"
                      {
#line 475 "const_prop.m"
                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)));
#line 475 "const_prop.m"
                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 474 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                          {
#line 474 "const_prop.m"
                            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 474 "const_prop.m"
                            transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 475 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                              {
#line 475 "const_prop.m"
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)));
#line 475 "const_prop.m"
                                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 474 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                  {
#line 474 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 474 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 474 "const_prop.m"
                                      {
#line 474 "const_prop.m"
                                        transform_hlds__const_prop__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 475 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_145_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                          {
#line 475 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 475 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 475 "const_prop.m"
                                              {
#line 475 "const_prop.m"
                                                transform_hlds__const_prop__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 464 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "*") == 0))
#line 472 "const_prop.m"
                                                  {
#line 476 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 477 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 * transform_hlds__const_prop__V_148_148);
#line 472 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 472 "const_prop.m"
                                                  }
#line 464 "const_prop.m"
                                                else
#line 464 "const_prop.m"
                                                  if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 458 "const_prop.m"
                                                    {
#line 462 "const_prop.m"
                                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 463 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 + transform_hlds__const_prop__V_148_148);
#line 458 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 458 "const_prop.m"
                                                    }
#line 464 "const_prop.m"
                                                  else
#line 464 "const_prop.m"
                                                    if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 465 "const_prop.m"
                                                      {
#line 469 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 470 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 - transform_hlds__const_prop__V_148_148);
#line 465 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 465 "const_prop.m"
                                                      }
#line 464 "const_prop.m"
                                                    else
#line 464 "const_prop.m"
                                                      if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "/") == 0))
#line 479 "const_prop.m"
                                                        {
#line 483 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 484 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 484 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 479 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 479 "const_prop.m"
                                                            {
#line 485 "const_prop.m"
                                                              {
#line 485 "const_prop.m"
                                                                transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__V_147_147, transform_hlds__const_prop__V_148_148);
                                                              }
#line 485 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 479 "const_prop.m"
                                                            }
#line 479 "const_prop.m"
                                                        }
#line 464 "const_prop.m"
                                                      else
#line 464 "const_prop.m"
                                                        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "unchecked_quotient") == 0))
#line 487 "const_prop.m"
                                                          {
#line 491 "const_prop.m"
                                                            *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 492 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 492 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 487 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 487 "const_prop.m"
                                                              {
#line 493 "const_prop.m"
                                                                transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 / transform_hlds__const_prop__V_148_148);
#line 493 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 487 "const_prop.m"
                                                              }
#line 487 "const_prop.m"
                                                          }
#line 464 "const_prop.m"
                                                        else
#line 464 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 456 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 456 "const_prop.m"
                                                  {
#line 456 "const_prop.m"
                                                    {
#line 456 "const_prop.m"
                                                      MR_Word base;
#line 456 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 456 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 456 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_16);
#line 456 "const_prop.m"
                                                    }
#line 456 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 456 "const_prop.m"
                                                  }
#line 475 "const_prop.m"
                                              }
#line 456 "const_prop.m"
                                          }
#line 474 "const_prop.m"
                                      }
#line 456 "const_prop.m"
                                  }
#line 456 "const_prop.m"
                              }
#line 456 "const_prop.m"
                          }
#line 475 "const_prop.m"
                      }
#line 474 "const_prop.m"
                  }
#line 475 "const_prop.m"
              }
#line 474 "const_prop.m"
          }
#line 456 "const_prop.m"
      }
#line 456 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 456 "const_prop.m"
  }
#line 451 "const_prop.m"
}

#line 284 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_51_93_95_48_8_p_0(
#line 284 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 284 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 284 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 284 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 284 "const_prop.m"
{
#line 289 "const_prop.m"
  {
#line 289 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 289 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_16;

#line 297 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "*") == 0))
#line 354 "const_prop.m"
      {
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_252_252;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_253_253;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_254_254;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_255_255;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_256_256;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_257_257;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_258_258;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_259_259;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_260_260;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_261_261;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_262_262;
#line 354 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_263_263;
#line 354 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_387;
#line 354 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_388;
#line 356 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_449_449;
#line 356 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_450_450;
#line 356 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_56_56;
#line 356 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_451_451;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_452_452;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_58_58;
#line 357 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_59_59;

#line 355 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 354 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
          {
#line 356 "const_prop.m"
            transform_hlds__const_prop__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 356 "const_prop.m"
            transform_hlds__const_prop__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 356 "const_prop.m"
            transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 356 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 356 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
              {
#line 356 "const_prop.m"
                transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 356 "const_prop.m"
                transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 2)));
#line 356 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_252_252, (MR_Integer) 3)));
#line 356 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_253_253)) == (MR_mktag((MR_Integer) 1)));
#line 356 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
                  {
#line 356 "const_prop.m"
                    transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 356 "const_prop.m"
                    transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 356 "const_prop.m"
                    transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)));
#line 356 "const_prop.m"
                    transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 356 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_255_255)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_255_255, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 356 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
                      {
#line 356 "const_prop.m"
                        transform_hlds__const_prop__XVal_387 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_255_255, (MR_Integer) 1)));
#line 356 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_256_256 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                          {
#line 356 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_257_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                              {
#line 357 "const_prop.m"
                                transform_hlds__const_prop__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 357 "const_prop.m"
                                transform_hlds__const_prop__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 357 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_258_258)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 357 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                  {
#line 357 "const_prop.m"
                                    transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                    transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 2)));
#line 357 "const_prop.m"
                                    transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_258_258, (MR_Integer) 3)));
#line 357 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 357 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                      {
#line 357 "const_prop.m"
                                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_259_259, (MR_Integer) 0)));
#line 357 "const_prop.m"
                                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_259_259, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)));
#line 357 "const_prop.m"
                                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_261_261)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_261_261, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 357 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                          {
#line 357 "const_prop.m"
                                            transform_hlds__const_prop__YVal_388 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_261_261, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                                              {
#line 357 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                                                  {
#line 358 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 359 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_387 * transform_hlds__const_prop__YVal_388);
#line 359 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 354 "const_prop.m"
                                                  }
#line 354 "const_prop.m"
                                              }
#line 357 "const_prop.m"
                                          }
#line 357 "const_prop.m"
                                      }
#line 357 "const_prop.m"
                                  }
#line 354 "const_prop.m"
                              }
#line 354 "const_prop.m"
                          }
#line 356 "const_prop.m"
                      }
#line 356 "const_prop.m"
                  }
#line 356 "const_prop.m"
              }
#line 354 "const_prop.m"
          }
#line 354 "const_prop.m"
      }
#line 297 "const_prop.m"
    else
#line 297 "const_prop.m"
      if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 297 "const_prop.m"
        if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0))
#line 298 "const_prop.m"
          {
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_349_349;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_350_350;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_351_351;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_352_352;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_353_353;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_354_354;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_355_355;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_356_356;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_357_357;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_358_358;
#line 298 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_359_359;
#line 298 "const_prop.m"
            MR_Integer transform_hlds__const_prop__XVal_372;
#line 298 "const_prop.m"
            MR_Integer transform_hlds__const_prop__YVal_373;
#line 300 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 300 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 300 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_23_23;
#line 300 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_24_24;
#line 301 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_419_419;
#line 301 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_420_420;
#line 301 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_25_25;
#line 301 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_26_26;

#line 300 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_348_348)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 300 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
              {
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 1)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 2)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_348_348, (MR_Integer) 3)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_349_349)) == (MR_mktag((MR_Integer) 1)));
#line 300 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
                  {
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_349_349, (MR_Integer) 0)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_349_349, (MR_Integer) 1)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_350_350, (MR_Integer) 0)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_350_350, (MR_Integer) 1)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_351_351)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_351_351, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 300 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
                      {
#line 300 "const_prop.m"
                        transform_hlds__const_prop__XVal_372 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_351_351, (MR_Integer) 1)));
#line 300 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                          {
#line 300 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_353_353 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                              {
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_354_354)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 301 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                  {
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 2)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_354_354, (MR_Integer) 3)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_355_355)) == (MR_mktag((MR_Integer) 1)));
#line 301 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                      {
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_355_355, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_355_355, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_356_356, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_356_356, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_357_357)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_357_357, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 301 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                          {
#line 301 "const_prop.m"
                                            transform_hlds__const_prop__YVal_373 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_357_357, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_358_358 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                                              {
#line 301 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_359_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                                                  {
#line 302 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 303 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_372 + transform_hlds__const_prop__YVal_373);
#line 303 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 298 "const_prop.m"
                                                  }
#line 298 "const_prop.m"
                                              }
#line 301 "const_prop.m"
                                          }
#line 301 "const_prop.m"
                                      }
#line 301 "const_prop.m"
                                  }
#line 298 "const_prop.m"
                              }
#line 298 "const_prop.m"
                          }
#line 300 "const_prop.m"
                      }
#line 300 "const_prop.m"
                  }
#line 300 "const_prop.m"
              }
#line 298 "const_prop.m"
          }
#line 297 "const_prop.m"
        else
#line 297 "const_prop.m"
          if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 1))
#line 305 "const_prop.m"
            {
#line 305 "const_prop.m"
              MR_Integer transform_hlds__const_prop__ZVal_31;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_337_337;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_338_338;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_339_339;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_340_340;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_341_341;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_342_342;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_343_343;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_344_344;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_345_345;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_346_346;
#line 305 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_347_347;
#line 305 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_374;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_27_27;
#line 307 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_28_28;
#line 308 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_423_423;
#line 308 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_424_424;
#line 308 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_29_29;
#line 308 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_30_30;

#line 307 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_336_336)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 307 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                {
#line 307 "const_prop.m"
                  transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 1)));
#line 307 "const_prop.m"
                  transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 2)));
#line 307 "const_prop.m"
                  transform_hlds__const_prop__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_336_336, (MR_Integer) 3)));
#line 307 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_337_337)) == (MR_mktag((MR_Integer) 1)));
#line 307 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                    {
#line 307 "const_prop.m"
                      transform_hlds__const_prop__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_337_337, (MR_Integer) 0)));
#line 307 "const_prop.m"
                      transform_hlds__const_prop__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_337_337, (MR_Integer) 1)));
#line 307 "const_prop.m"
                      transform_hlds__const_prop__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_338_338, (MR_Integer) 0)));
#line 307 "const_prop.m"
                      transform_hlds__const_prop__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_338_338, (MR_Integer) 1)));
#line 307 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_339_339)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_339_339, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 307 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 307 "const_prop.m"
                        {
#line 307 "const_prop.m"
                          transform_hlds__const_prop__YVal_374 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_339_339, (MR_Integer) 1)));
#line 307 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_340_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 305 "const_prop.m"
                            {
#line 307 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 305 "const_prop.m"
                                {
#line 308 "const_prop.m"
                                  transform_hlds__const_prop__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 308 "const_prop.m"
                                  transform_hlds__const_prop__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                  transform_hlds__const_prop__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 308 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_342_342)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 308 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                                    {
#line 308 "const_prop.m"
                                      transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                      transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 2)));
#line 308 "const_prop.m"
                                      transform_hlds__const_prop__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_342_342, (MR_Integer) 3)));
#line 308 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_343_343)) == (MR_mktag((MR_Integer) 1)));
#line 308 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                                        {
#line 308 "const_prop.m"
                                          transform_hlds__const_prop__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_343_343, (MR_Integer) 0)));
#line 308 "const_prop.m"
                                          transform_hlds__const_prop__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_343_343, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                          transform_hlds__const_prop__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_344_344, (MR_Integer) 0)));
#line 308 "const_prop.m"
                                          transform_hlds__const_prop__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_344_344, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_345_345)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_345_345, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 308 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                                            {
#line 308 "const_prop.m"
                                              transform_hlds__const_prop__ZVal_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_345_345, (MR_Integer) 1)));
#line 308 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 305 "const_prop.m"
                                                {
#line 308 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_347_347 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 305 "const_prop.m"
                                                    {
#line 309 "const_prop.m"
                                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 310 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__ZVal_31 - transform_hlds__const_prop__YVal_374);
#line 310 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 305 "const_prop.m"
                                                    }
#line 305 "const_prop.m"
                                                }
#line 308 "const_prop.m"
                                            }
#line 308 "const_prop.m"
                                        }
#line 308 "const_prop.m"
                                    }
#line 305 "const_prop.m"
                                }
#line 305 "const_prop.m"
                            }
#line 307 "const_prop.m"
                        }
#line 307 "const_prop.m"
                    }
#line 307 "const_prop.m"
                }
#line 305 "const_prop.m"
            }
#line 297 "const_prop.m"
          else
#line 297 "const_prop.m"
            if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 2))
#line 312 "const_prop.m"
              {
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_325_325;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_326_326;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_327_327;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_328_328;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_329_329;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_330_330;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_331_331;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_332_332;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_333_333;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_334_334;
#line 312 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_335_335;
#line 312 "const_prop.m"
                MR_Integer transform_hlds__const_prop__XVal_375;
#line 312 "const_prop.m"
                MR_Integer transform_hlds__const_prop__ZVal_376;
#line 314 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 314 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 314 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_32_32;
#line 314 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_33_33;
#line 315 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_427_427;
#line 315 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_428_428;
#line 315 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_34_34;
#line 315 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_35_35;

#line 314 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_324_324)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 314 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                  {
#line 314 "const_prop.m"
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 1)));
#line 314 "const_prop.m"
                    transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 2)));
#line 314 "const_prop.m"
                    transform_hlds__const_prop__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_324_324, (MR_Integer) 3)));
#line 314 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_325_325)) == (MR_mktag((MR_Integer) 1)));
#line 314 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                      {
#line 314 "const_prop.m"
                        transform_hlds__const_prop__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_325_325, (MR_Integer) 0)));
#line 314 "const_prop.m"
                        transform_hlds__const_prop__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_325_325, (MR_Integer) 1)));
#line 314 "const_prop.m"
                        transform_hlds__const_prop__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_326_326, (MR_Integer) 0)));
#line 314 "const_prop.m"
                        transform_hlds__const_prop__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_326_326, (MR_Integer) 1)));
#line 314 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_327_327)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 314 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                          {
#line 314 "const_prop.m"
                            transform_hlds__const_prop__XVal_375 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_327_327, (MR_Integer) 1)));
#line 314 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_328_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 312 "const_prop.m"
                              {
#line 314 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 312 "const_prop.m"
                                  {
#line 315 "const_prop.m"
                                    transform_hlds__const_prop__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 315 "const_prop.m"
                                    transform_hlds__const_prop__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 315 "const_prop.m"
                                    transform_hlds__const_prop__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 315 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_330_330)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 315 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                      {
#line 315 "const_prop.m"
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 1)));
#line 315 "const_prop.m"
                                        transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 2)));
#line 315 "const_prop.m"
                                        transform_hlds__const_prop__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_330_330, (MR_Integer) 3)));
#line 315 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_331_331)) == (MR_mktag((MR_Integer) 1)));
#line 315 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                          {
#line 315 "const_prop.m"
                                            transform_hlds__const_prop__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_331_331, (MR_Integer) 0)));
#line 315 "const_prop.m"
                                            transform_hlds__const_prop__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_331_331, (MR_Integer) 1)));
#line 315 "const_prop.m"
                                            transform_hlds__const_prop__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_332_332, (MR_Integer) 0)));
#line 315 "const_prop.m"
                                            transform_hlds__const_prop__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_332_332, (MR_Integer) 1)));
#line 315 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_333_333)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 315 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 315 "const_prop.m"
                                              {
#line 315 "const_prop.m"
                                                transform_hlds__const_prop__ZVal_376 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_333_333, (MR_Integer) 1)));
#line 315 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 312 "const_prop.m"
                                                  {
#line 315 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_335_335 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 312 "const_prop.m"
                                                      {
#line 316 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 317 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__ZVal_376 - transform_hlds__const_prop__XVal_375);
#line 317 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 312 "const_prop.m"
                                                      }
#line 312 "const_prop.m"
                                                  }
#line 315 "const_prop.m"
                                              }
#line 315 "const_prop.m"
                                          }
#line 315 "const_prop.m"
                                      }
#line 312 "const_prop.m"
                                  }
#line 312 "const_prop.m"
                              }
#line 314 "const_prop.m"
                          }
#line 314 "const_prop.m"
                      }
#line 314 "const_prop.m"
                  }
#line 312 "const_prop.m"
              }
#line 297 "const_prop.m"
            else
#line 297 "const_prop.m"
              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 297 "const_prop.m"
      else
#line 297 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 297 "const_prop.m"
          if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0))
#line 326 "const_prop.m"
            {
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_301_301;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_302_302;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_303_303;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_304_304;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_305_305;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_306_306;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_307_307;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_308_308;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_309_309;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_310_310;
#line 326 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_311_311;
#line 326 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_379;
#line 326 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_380;
#line 328 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 328 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 328 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_40_40;
#line 328 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_41_41;
#line 329 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_435_435;
#line 329 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_436_436;
#line 329 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_42_42;
#line 329 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_43_43;

#line 328 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_300_300)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 328 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 328 "const_prop.m"
                {
#line 328 "const_prop.m"
                  transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 1)));
#line 328 "const_prop.m"
                  transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 2)));
#line 328 "const_prop.m"
                  transform_hlds__const_prop__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_300_300, (MR_Integer) 3)));
#line 328 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_301_301)) == (MR_mktag((MR_Integer) 1)));
#line 328 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 328 "const_prop.m"
                    {
#line 328 "const_prop.m"
                      transform_hlds__const_prop__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_301_301, (MR_Integer) 0)));
#line 328 "const_prop.m"
                      transform_hlds__const_prop__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_301_301, (MR_Integer) 1)));
#line 328 "const_prop.m"
                      transform_hlds__const_prop__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_302_302, (MR_Integer) 0)));
#line 328 "const_prop.m"
                      transform_hlds__const_prop__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_302_302, (MR_Integer) 1)));
#line 328 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 328 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 328 "const_prop.m"
                        {
#line 328 "const_prop.m"
                          transform_hlds__const_prop__XVal_379 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_303_303, (MR_Integer) 1)));
#line 328 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_304_304 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 326 "const_prop.m"
                            {
#line 328 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_305_305 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 326 "const_prop.m"
                                {
#line 329 "const_prop.m"
                                  transform_hlds__const_prop__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 329 "const_prop.m"
                                  transform_hlds__const_prop__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 329 "const_prop.m"
                                  transform_hlds__const_prop__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 329 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_306_306)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 329 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                                    {
#line 329 "const_prop.m"
                                      transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 1)));
#line 329 "const_prop.m"
                                      transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 2)));
#line 329 "const_prop.m"
                                      transform_hlds__const_prop__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_306_306, (MR_Integer) 3)));
#line 329 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_307_307)) == (MR_mktag((MR_Integer) 1)));
#line 329 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                                        {
#line 329 "const_prop.m"
                                          transform_hlds__const_prop__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_307_307, (MR_Integer) 0)));
#line 329 "const_prop.m"
                                          transform_hlds__const_prop__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_307_307, (MR_Integer) 1)));
#line 329 "const_prop.m"
                                          transform_hlds__const_prop__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_308_308, (MR_Integer) 0)));
#line 329 "const_prop.m"
                                          transform_hlds__const_prop__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_308_308, (MR_Integer) 1)));
#line 329 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_309_309)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_309_309, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 329 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 329 "const_prop.m"
                                            {
#line 329 "const_prop.m"
                                              transform_hlds__const_prop__YVal_380 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_309_309, (MR_Integer) 1)));
#line 329 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_310_310 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 326 "const_prop.m"
                                                {
#line 329 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_311_311 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 326 "const_prop.m"
                                                    {
#line 330 "const_prop.m"
                                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 331 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_379 - transform_hlds__const_prop__YVal_380);
#line 331 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 326 "const_prop.m"
                                                    }
#line 326 "const_prop.m"
                                                }
#line 329 "const_prop.m"
                                            }
#line 329 "const_prop.m"
                                        }
#line 329 "const_prop.m"
                                    }
#line 326 "const_prop.m"
                                }
#line 326 "const_prop.m"
                            }
#line 328 "const_prop.m"
                        }
#line 328 "const_prop.m"
                    }
#line 328 "const_prop.m"
                }
#line 326 "const_prop.m"
            }
#line 297 "const_prop.m"
          else
#line 297 "const_prop.m"
            if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 1))
#line 333 "const_prop.m"
              {
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_289_289;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_290_290;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_291_291;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_292_292;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_293_293;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_294_294;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_295_295;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_296_296;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_297_297;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_298_298;
#line 333 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_299_299;
#line 333 "const_prop.m"
                MR_Integer transform_hlds__const_prop__YVal_381;
#line 333 "const_prop.m"
                MR_Integer transform_hlds__const_prop__ZVal_382;
#line 335 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 335 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 335 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_44_44;
#line 335 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_45_45;
#line 336 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_439_439;
#line 336 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_440_440;
#line 336 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_46_46;
#line 336 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_47_47;

#line 335 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_288_288)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 335 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 335 "const_prop.m"
                  {
#line 335 "const_prop.m"
                    transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 1)));
#line 335 "const_prop.m"
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 2)));
#line 335 "const_prop.m"
                    transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_288_288, (MR_Integer) 3)));
#line 335 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 1)));
#line 335 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 335 "const_prop.m"
                      {
#line 335 "const_prop.m"
                        transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)));
#line 335 "const_prop.m"
                        transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 335 "const_prop.m"
                        transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_290_290, (MR_Integer) 0)));
#line 335 "const_prop.m"
                        transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_290_290, (MR_Integer) 1)));
#line 335 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 335 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 335 "const_prop.m"
                          {
#line 335 "const_prop.m"
                            transform_hlds__const_prop__YVal_381 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 335 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                              {
#line 335 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                  {
#line 336 "const_prop.m"
                                    transform_hlds__const_prop__V_439_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 336 "const_prop.m"
                                    transform_hlds__const_prop__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 336 "const_prop.m"
                                    transform_hlds__const_prop__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 336 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_294_294)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 336 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                                      {
#line 336 "const_prop.m"
                                        transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 1)));
#line 336 "const_prop.m"
                                        transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 2)));
#line 336 "const_prop.m"
                                        transform_hlds__const_prop__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_294_294, (MR_Integer) 3)));
#line 336 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_295_295)) == (MR_mktag((MR_Integer) 1)));
#line 336 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                                          {
#line 336 "const_prop.m"
                                            transform_hlds__const_prop__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_295_295, (MR_Integer) 0)));
#line 336 "const_prop.m"
                                            transform_hlds__const_prop__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_295_295, (MR_Integer) 1)));
#line 336 "const_prop.m"
                                            transform_hlds__const_prop__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_296_296, (MR_Integer) 0)));
#line 336 "const_prop.m"
                                            transform_hlds__const_prop__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_296_296, (MR_Integer) 1)));
#line 336 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_297_297)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_297_297, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 336 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 336 "const_prop.m"
                                              {
#line 336 "const_prop.m"
                                                transform_hlds__const_prop__ZVal_382 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_297_297, (MR_Integer) 1)));
#line 336 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_298_298 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                                  {
#line 336 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_299_299 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                                      {
#line 337 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 338 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__YVal_381 + transform_hlds__const_prop__ZVal_382);
#line 338 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 333 "const_prop.m"
                                                      }
#line 333 "const_prop.m"
                                                  }
#line 336 "const_prop.m"
                                              }
#line 336 "const_prop.m"
                                          }
#line 336 "const_prop.m"
                                      }
#line 333 "const_prop.m"
                                  }
#line 333 "const_prop.m"
                              }
#line 335 "const_prop.m"
                          }
#line 335 "const_prop.m"
                      }
#line 335 "const_prop.m"
                  }
#line 333 "const_prop.m"
              }
#line 297 "const_prop.m"
            else
#line 297 "const_prop.m"
              if ((transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 2))
#line 340 "const_prop.m"
                {
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_277_277;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_278_278;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_279_279;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_280_280;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_281_281;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_282_282;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_283_283;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_284_284;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_285_285;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_286_286;
#line 340 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_287_287;
#line 340 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_383;
#line 340 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__ZVal_384;
#line 342 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 342 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_442_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 342 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_48_48;
#line 342 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_49_49;
#line 343 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_443_443;
#line 343 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_444_444;
#line 343 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_50_50;
#line 343 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_51_51;

#line 342 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_276_276)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 342 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                    {
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 1)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 2)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_276_276, (MR_Integer) 3)));
#line 342 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_277_277)) == (MR_mktag((MR_Integer) 1)));
#line 342 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                        {
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_277_277, (MR_Integer) 0)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_277_277, (MR_Integer) 1)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_278_278, (MR_Integer) 0)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_278_278, (MR_Integer) 1)));
#line 342 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_279_279)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 342 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 342 "const_prop.m"
                            {
#line 342 "const_prop.m"
                              transform_hlds__const_prop__XVal_383 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 342 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                {
#line 342 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                    {
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_444_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 343 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_282_282)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 343 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                        {
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 2)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_282_282, (MR_Integer) 3)));
#line 343 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_283_283)) == (MR_mktag((MR_Integer) 1)));
#line 343 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                            {
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_284_284, (MR_Integer) 0)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_284_284, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_285_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 343 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 343 "const_prop.m"
                                                {
#line 343 "const_prop.m"
                                                  transform_hlds__const_prop__ZVal_384 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 343 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                                    {
#line 343 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_287_287 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                                                        {
#line 344 "const_prop.m"
                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 345 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_383 - transform_hlds__const_prop__ZVal_384);
#line 345 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 340 "const_prop.m"
                                                        }
#line 340 "const_prop.m"
                                                    }
#line 343 "const_prop.m"
                                                }
#line 343 "const_prop.m"
                                            }
#line 343 "const_prop.m"
                                        }
#line 340 "const_prop.m"
                                    }
#line 340 "const_prop.m"
                                }
#line 342 "const_prop.m"
                            }
#line 342 "const_prop.m"
                        }
#line 342 "const_prop.m"
                    }
#line 340 "const_prop.m"
                }
#line 297 "const_prop.m"
              else
#line 297 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 297 "const_prop.m"
        else
#line 297 "const_prop.m"
          if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "//") == 0))
#line 369 "const_prop.m"
            {
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_228_228;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_229_229;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_230_230;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_231_231;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_232_232;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_233_233;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_234_234;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_235_235;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_236_236;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_237_237;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_238_238;
#line 369 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_239_239;
#line 369 "const_prop.m"
              MR_Integer transform_hlds__const_prop__XVal_391;
#line 369 "const_prop.m"
              MR_Integer transform_hlds__const_prop__YVal_392;
#line 371 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_457_457;
#line 371 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_458_458;
#line 371 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_64_64;
#line 371 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_65_65;
#line 372 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_459_459;
#line 372 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_460_460;
#line 372 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_66_66;
#line 372 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_67_67;

#line 370 "const_prop.m"
              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 369 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                {
#line 371 "const_prop.m"
                  transform_hlds__const_prop__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 371 "const_prop.m"
                  transform_hlds__const_prop__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 371 "const_prop.m"
                  transform_hlds__const_prop__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 371 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_228_228)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 371 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                    {
#line 371 "const_prop.m"
                      transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 1)));
#line 371 "const_prop.m"
                      transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 2)));
#line 371 "const_prop.m"
                      transform_hlds__const_prop__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_228_228, (MR_Integer) 3)));
#line 371 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_229_229)) == (MR_mktag((MR_Integer) 1)));
#line 371 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                        {
#line 371 "const_prop.m"
                          transform_hlds__const_prop__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_229_229, (MR_Integer) 0)));
#line 371 "const_prop.m"
                          transform_hlds__const_prop__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_229_229, (MR_Integer) 1)));
#line 371 "const_prop.m"
                          transform_hlds__const_prop__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_230_230, (MR_Integer) 0)));
#line 371 "const_prop.m"
                          transform_hlds__const_prop__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_230_230, (MR_Integer) 1)));
#line 371 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_231_231)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_231_231, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 371 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 371 "const_prop.m"
                            {
#line 371 "const_prop.m"
                              transform_hlds__const_prop__XVal_391 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_231_231, (MR_Integer) 1)));
#line 371 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_232_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                {
#line 371 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                    {
#line 372 "const_prop.m"
                                      transform_hlds__const_prop__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 372 "const_prop.m"
                                      transform_hlds__const_prop__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 372 "const_prop.m"
                                      transform_hlds__const_prop__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 372 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_234_234)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 372 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
                                        {
#line 372 "const_prop.m"
                                          transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 1)));
#line 372 "const_prop.m"
                                          transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 2)));
#line 372 "const_prop.m"
                                          transform_hlds__const_prop__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_234_234, (MR_Integer) 3)));
#line 372 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_235_235)) == (MR_mktag((MR_Integer) 1)));
#line 372 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
                                            {
#line 372 "const_prop.m"
                                              transform_hlds__const_prop__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_235_235, (MR_Integer) 0)));
#line 372 "const_prop.m"
                                              transform_hlds__const_prop__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_235_235, (MR_Integer) 1)));
#line 372 "const_prop.m"
                                              transform_hlds__const_prop__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_236_236, (MR_Integer) 0)));
#line 372 "const_prop.m"
                                              transform_hlds__const_prop__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_236_236, (MR_Integer) 1)));
#line 372 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_237_237)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_237_237, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 372 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
                                                {
#line 372 "const_prop.m"
                                                  transform_hlds__const_prop__YVal_392 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_237_237, (MR_Integer) 1)));
#line 372 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_238_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                                    {
#line 372 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_239_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                                        {
#line 373 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_392 == (MR_Integer) 0);
#line 373 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 369 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 369 "const_prop.m"
                                                            {
#line 374 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 375 "const_prop.m"
                                                              {
#line 375 "const_prop.m"
                                                                transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_47_47_2_f_0(transform_hlds__const_prop__XVal_391, transform_hlds__const_prop__YVal_392);
                                                              }
#line 375 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 369 "const_prop.m"
                                                            }
#line 369 "const_prop.m"
                                                        }
#line 369 "const_prop.m"
                                                    }
#line 372 "const_prop.m"
                                                }
#line 372 "const_prop.m"
                                            }
#line 372 "const_prop.m"
                                        }
#line 369 "const_prop.m"
                                    }
#line 369 "const_prop.m"
                                }
#line 371 "const_prop.m"
                            }
#line 371 "const_prop.m"
                        }
#line 371 "const_prop.m"
                    }
#line 369 "const_prop.m"
                }
#line 369 "const_prop.m"
            }
#line 297 "const_prop.m"
          else
#line 297 "const_prop.m"
            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "/\\") == 0))
#line 429 "const_prop.m"
              {
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_132_132;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_133_133;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_134_134;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_135_135;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_136_136;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_137_137;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_138_138;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_139_139;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_140_140;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_141_141;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_142_142;
#line 429 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_143_143;
#line 429 "const_prop.m"
                MR_Integer transform_hlds__const_prop__XVal_407;
#line 429 "const_prop.m"
                MR_Integer transform_hlds__const_prop__YVal_408;
#line 431 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_489_489;
#line 431 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_490_490;
#line 431 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_96_96;
#line 431 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_97_97;
#line 432 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_491_491;
#line 432 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_492_492;
#line 432 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_98_98;
#line 432 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_99_99;

#line 430 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 429 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 429 "const_prop.m"
                  {
#line 431 "const_prop.m"
                    transform_hlds__const_prop__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 431 "const_prop.m"
                    transform_hlds__const_prop__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 431 "const_prop.m"
                    transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 431 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_132_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 431 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                      {
#line 431 "const_prop.m"
                        transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 1)));
#line 431 "const_prop.m"
                        transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 2)));
#line 431 "const_prop.m"
                        transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_132_132, (MR_Integer) 3)));
#line 431 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 431 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                          {
#line 431 "const_prop.m"
                            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 431 "const_prop.m"
                            transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 431 "const_prop.m"
                            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_134_134, (MR_Integer) 0)));
#line 431 "const_prop.m"
                            transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_134_134, (MR_Integer) 1)));
#line 431 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_135_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_135_135, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 431 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                              {
#line 431 "const_prop.m"
                                transform_hlds__const_prop__XVal_407 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_135_135, (MR_Integer) 1)));
#line 431 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_136_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 429 "const_prop.m"
                                  {
#line 431 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 429 "const_prop.m"
                                      {
#line 432 "const_prop.m"
                                        transform_hlds__const_prop__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 432 "const_prop.m"
                                        transform_hlds__const_prop__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 432 "const_prop.m"
                                        transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 432 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_138_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 432 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                                          {
#line 432 "const_prop.m"
                                            transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 1)));
#line 432 "const_prop.m"
                                            transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 2)));
#line 432 "const_prop.m"
                                            transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_138_138, (MR_Integer) 3)));
#line 432 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_139_139)) == (MR_mktag((MR_Integer) 1)));
#line 432 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                                              {
#line 432 "const_prop.m"
                                                transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_139_139, (MR_Integer) 0)));
#line 432 "const_prop.m"
                                                transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_139_139, (MR_Integer) 1)));
#line 432 "const_prop.m"
                                                transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 432 "const_prop.m"
                                                transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 432 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_141_141)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_141_141, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 432 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 432 "const_prop.m"
                                                  {
#line 432 "const_prop.m"
                                                    transform_hlds__const_prop__YVal_408 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_141_141, (MR_Integer) 1)));
#line 432 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 429 "const_prop.m"
                                                      {
#line 432 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 429 "const_prop.m"
                                                          {
#line 433 "const_prop.m"
                                                            *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 434 "const_prop.m"
                                                            transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_407 & transform_hlds__const_prop__YVal_408);
#line 434 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 429 "const_prop.m"
                                                          }
#line 429 "const_prop.m"
                                                      }
#line 432 "const_prop.m"
                                                  }
#line 432 "const_prop.m"
                                              }
#line 432 "const_prop.m"
                                          }
#line 429 "const_prop.m"
                                      }
#line 429 "const_prop.m"
                                  }
#line 431 "const_prop.m"
                              }
#line 431 "const_prop.m"
                          }
#line 431 "const_prop.m"
                      }
#line 429 "const_prop.m"
                  }
#line 429 "const_prop.m"
              }
#line 297 "const_prop.m"
            else
#line 297 "const_prop.m"
              if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "<<") == 0))
#line 408 "const_prop.m"
                {
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_168_168;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_169_169;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_170_170;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_171_171;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_172_172;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_173_173;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_174_174;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_175_175;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_176_176;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_177_177;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_178_178;
#line 408 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_179_179;
#line 408 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__XVal_401;
#line 408 "const_prop.m"
                  MR_Integer transform_hlds__const_prop__YVal_402;
#line 410 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_477_477;
#line 410 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_478_478;
#line 410 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_84_84;
#line 410 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_85_85;
#line 411 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_479_479;
#line 411 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_480_480;
#line 411 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_86_86;
#line 411 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_87_87;

#line 409 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 408 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                    {
#line 410 "const_prop.m"
                      transform_hlds__const_prop__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 410 "const_prop.m"
                      transform_hlds__const_prop__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 410 "const_prop.m"
                      transform_hlds__const_prop__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 410 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_168_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 410 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 410 "const_prop.m"
                        {
#line 410 "const_prop.m"
                          transform_hlds__const_prop__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 1)));
#line 410 "const_prop.m"
                          transform_hlds__const_prop__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 2)));
#line 410 "const_prop.m"
                          transform_hlds__const_prop__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_168_168, (MR_Integer) 3)));
#line 410 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_169_169)) == (MR_mktag((MR_Integer) 1)));
#line 410 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 410 "const_prop.m"
                            {
#line 410 "const_prop.m"
                              transform_hlds__const_prop__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_169_169, (MR_Integer) 0)));
#line 410 "const_prop.m"
                              transform_hlds__const_prop__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_169_169, (MR_Integer) 1)));
#line 410 "const_prop.m"
                              transform_hlds__const_prop__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_170_170, (MR_Integer) 0)));
#line 410 "const_prop.m"
                              transform_hlds__const_prop__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_170_170, (MR_Integer) 1)));
#line 410 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_171_171)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_171_171, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 410 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 410 "const_prop.m"
                                {
#line 410 "const_prop.m"
                                  transform_hlds__const_prop__XVal_401 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_171_171, (MR_Integer) 1)));
#line 410 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_172_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                    {
#line 410 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                        {
#line 411 "const_prop.m"
                                          transform_hlds__const_prop__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 411 "const_prop.m"
                                          transform_hlds__const_prop__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 411 "const_prop.m"
                                          transform_hlds__const_prop__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 411 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_174_174)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 411 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                                            {
#line 411 "const_prop.m"
                                              transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 1)));
#line 411 "const_prop.m"
                                              transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 2)));
#line 411 "const_prop.m"
                                              transform_hlds__const_prop__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_174_174, (MR_Integer) 3)));
#line 411 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_175_175)) == (MR_mktag((MR_Integer) 1)));
#line 411 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                                                {
#line 411 "const_prop.m"
                                                  transform_hlds__const_prop__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_175_175, (MR_Integer) 0)));
#line 411 "const_prop.m"
                                                  transform_hlds__const_prop__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_175_175, (MR_Integer) 1)));
#line 411 "const_prop.m"
                                                  transform_hlds__const_prop__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_176_176, (MR_Integer) 0)));
#line 411 "const_prop.m"
                                                  transform_hlds__const_prop__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_176_176, (MR_Integer) 1)));
#line 411 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_177_177)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_177_177, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 411 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 411 "const_prop.m"
                                                    {
#line 411 "const_prop.m"
                                                      transform_hlds__const_prop__YVal_402 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_177_177, (MR_Integer) 1)));
#line 411 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                                        {
#line 411 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                                            {
#line 412 "const_prop.m"
                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 413 "const_prop.m"
                                                              {
#line 413 "const_prop.m"
                                                                transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_60_60_2_f_0(transform_hlds__const_prop__XVal_401, transform_hlds__const_prop__YVal_402);
                                                              }
#line 413 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 408 "const_prop.m"
                                                            }
#line 408 "const_prop.m"
                                                        }
#line 411 "const_prop.m"
                                                    }
#line 411 "const_prop.m"
                                                }
#line 411 "const_prop.m"
                                            }
#line 408 "const_prop.m"
                                        }
#line 408 "const_prop.m"
                                    }
#line 410 "const_prop.m"
                                }
#line 410 "const_prop.m"
                            }
#line 410 "const_prop.m"
                        }
#line 408 "const_prop.m"
                    }
#line 408 "const_prop.m"
                }
#line 297 "const_prop.m"
              else
#line 297 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) ">>") == 0))
#line 422 "const_prop.m"
                  {
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_144_144;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_145_145;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_146_146;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_147_147;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_148_148;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_149_149;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_150_150;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_151_151;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_152_152;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_153_153;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_154_154;
#line 422 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_155_155;
#line 422 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__XVal_405;
#line 422 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__YVal_406;
#line 424 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_485_485;
#line 424 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_486_486;
#line 424 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_92_92;
#line 424 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_93_93;
#line 425 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_487_487;
#line 425 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_488_488;
#line 425 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_94_94;
#line 425 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_95_95;

#line 423 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 422 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 422 "const_prop.m"
                      {
#line 424 "const_prop.m"
                        transform_hlds__const_prop__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 424 "const_prop.m"
                        transform_hlds__const_prop__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 424 "const_prop.m"
                        transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 424 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 424 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                          {
#line 424 "const_prop.m"
                            transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 424 "const_prop.m"
                            transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 2)));
#line 424 "const_prop.m"
                            transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 3)));
#line 424 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_145_145)) == (MR_mktag((MR_Integer) 1)));
#line 424 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                              {
#line 424 "const_prop.m"
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_145_145, (MR_Integer) 0)));
#line 424 "const_prop.m"
                                transform_hlds__const_prop__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_145_145, (MR_Integer) 1)));
#line 424 "const_prop.m"
                                transform_hlds__const_prop__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)));
#line 424 "const_prop.m"
                                transform_hlds__const_prop__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 424 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_147_147)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_147_147, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 424 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 424 "const_prop.m"
                                  {
#line 424 "const_prop.m"
                                    transform_hlds__const_prop__XVal_405 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_147_147, (MR_Integer) 1)));
#line 424 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 422 "const_prop.m"
                                      {
#line 424 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 422 "const_prop.m"
                                          {
#line 425 "const_prop.m"
                                            transform_hlds__const_prop__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 425 "const_prop.m"
                                            transform_hlds__const_prop__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 425 "const_prop.m"
                                            transform_hlds__const_prop__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 425 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_150_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 425 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                                              {
#line 425 "const_prop.m"
                                                transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 1)));
#line 425 "const_prop.m"
                                                transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 2)));
#line 425 "const_prop.m"
                                                transform_hlds__const_prop__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_150_150, (MR_Integer) 3)));
#line 425 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_151_151)) == (MR_mktag((MR_Integer) 1)));
#line 425 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                                                  {
#line 425 "const_prop.m"
                                                    transform_hlds__const_prop__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_151_151, (MR_Integer) 0)));
#line 425 "const_prop.m"
                                                    transform_hlds__const_prop__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_151_151, (MR_Integer) 1)));
#line 425 "const_prop.m"
                                                    transform_hlds__const_prop__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_152_152, (MR_Integer) 0)));
#line 425 "const_prop.m"
                                                    transform_hlds__const_prop__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_152_152, (MR_Integer) 1)));
#line 425 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_153_153)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_153_153, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 425 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                                                      {
#line 425 "const_prop.m"
                                                        transform_hlds__const_prop__YVal_406 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_153_153, (MR_Integer) 1)));
#line 425 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_154_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 422 "const_prop.m"
                                                          {
#line 425 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 422 "const_prop.m"
                                                              {
#line 426 "const_prop.m"
                                                                *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 427 "const_prop.m"
                                                                {
#line 427 "const_prop.m"
                                                                  transform_hlds__const_prop__OutputArgVal_16 = mercury__int__f_62_62_2_f_0(transform_hlds__const_prop__XVal_405, transform_hlds__const_prop__YVal_406);
                                                                }
#line 427 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 422 "const_prop.m"
                                                              }
#line 422 "const_prop.m"
                                                          }
#line 425 "const_prop.m"
                                                      }
#line 425 "const_prop.m"
                                                  }
#line 425 "const_prop.m"
                                              }
#line 422 "const_prop.m"
                                          }
#line 422 "const_prop.m"
                                      }
#line 424 "const_prop.m"
                                  }
#line 424 "const_prop.m"
                              }
#line 424 "const_prop.m"
                          }
#line 422 "const_prop.m"
                      }
#line 422 "const_prop.m"
                  }
#line 297 "const_prop.m"
                else
#line 297 "const_prop.m"
                  if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "\\/") == 0))
#line 436 "const_prop.m"
                    {
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_120_120;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_121_121;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_122_122;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_123_123;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_124_124;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_125_125;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_126_126;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_127_127;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_128_128;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_129_129;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_130_130;
#line 436 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_131_131;
#line 436 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__XVal_409;
#line 436 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__YVal_410;
#line 438 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_493_493;
#line 438 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_494_494;
#line 438 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_100_100;
#line 438 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_101_101;
#line 439 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_495_495;
#line 439 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_496_496;
#line 439 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_102_102;
#line 439 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_103_103;

#line 437 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 436 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                        {
#line 438 "const_prop.m"
                          transform_hlds__const_prop__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 438 "const_prop.m"
                          transform_hlds__const_prop__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 438 "const_prop.m"
                          transform_hlds__const_prop__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 438 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_120_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 438 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 438 "const_prop.m"
                            {
#line 438 "const_prop.m"
                              transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 1)));
#line 438 "const_prop.m"
                              transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 2)));
#line 438 "const_prop.m"
                              transform_hlds__const_prop__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_120_120, (MR_Integer) 3)));
#line 438 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_121_121)) == (MR_mktag((MR_Integer) 1)));
#line 438 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 438 "const_prop.m"
                                {
#line 438 "const_prop.m"
                                  transform_hlds__const_prop__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_121_121, (MR_Integer) 0)));
#line 438 "const_prop.m"
                                  transform_hlds__const_prop__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_121_121, (MR_Integer) 1)));
#line 438 "const_prop.m"
                                  transform_hlds__const_prop__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_122_122, (MR_Integer) 0)));
#line 438 "const_prop.m"
                                  transform_hlds__const_prop__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_122_122, (MR_Integer) 1)));
#line 438 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_123_123)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_123_123, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 438 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 438 "const_prop.m"
                                    {
#line 438 "const_prop.m"
                                      transform_hlds__const_prop__XVal_409 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_123_123, (MR_Integer) 1)));
#line 438 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_124_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                                        {
#line 438 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                                            {
#line 439 "const_prop.m"
                                              transform_hlds__const_prop__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 439 "const_prop.m"
                                              transform_hlds__const_prop__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 439 "const_prop.m"
                                              transform_hlds__const_prop__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 439 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_126_126)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 439 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                                {
#line 439 "const_prop.m"
                                                  transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 1)));
#line 439 "const_prop.m"
                                                  transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 2)));
#line 439 "const_prop.m"
                                                  transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_126_126, (MR_Integer) 3)));
#line 439 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 1)));
#line 439 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                                    {
#line 439 "const_prop.m"
                                                      transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)));
#line 439 "const_prop.m"
                                                      transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 439 "const_prop.m"
                                                      transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_128_128, (MR_Integer) 0)));
#line 439 "const_prop.m"
                                                      transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_128_128, (MR_Integer) 1)));
#line 439 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_129_129)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_129_129, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 439 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                                        {
#line 439 "const_prop.m"
                                                          transform_hlds__const_prop__YVal_410 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_129_129, (MR_Integer) 1)));
#line 439 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                                                            {
#line 439 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 436 "const_prop.m"
                                                                {
#line 440 "const_prop.m"
                                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 441 "const_prop.m"
                                                                  transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_409 | transform_hlds__const_prop__YVal_410);
#line 441 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 436 "const_prop.m"
                                                                }
#line 436 "const_prop.m"
                                                            }
#line 439 "const_prop.m"
                                                        }
#line 439 "const_prop.m"
                                                    }
#line 439 "const_prop.m"
                                                }
#line 436 "const_prop.m"
                                            }
#line 436 "const_prop.m"
                                        }
#line 438 "const_prop.m"
                                    }
#line 438 "const_prop.m"
                                }
#line 438 "const_prop.m"
                            }
#line 436 "const_prop.m"
                        }
#line 436 "const_prop.m"
                    }
#line 297 "const_prop.m"
                  else
#line 297 "const_prop.m"
                    if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "mod") == 0))
#line 377 "const_prop.m"
                      {
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_216_216;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_217_217;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_218_218;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_219_219;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_220_220;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_221_221;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_222_222;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_223_223;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_224_224;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_225_225;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_226_226;
#line 377 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_227_227;
#line 377 "const_prop.m"
                        MR_Integer transform_hlds__const_prop__XVal_393;
#line 377 "const_prop.m"
                        MR_Integer transform_hlds__const_prop__YVal_394;
#line 379 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_461_461;
#line 379 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_462_462;
#line 379 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_68_68;
#line 379 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_69_69;
#line 380 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_463_463;
#line 380 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_464_464;
#line 380 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_70_70;
#line 380 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_71_71;

#line 378 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 377 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                          {
#line 379 "const_prop.m"
                            transform_hlds__const_prop__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 379 "const_prop.m"
                            transform_hlds__const_prop__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 379 "const_prop.m"
                            transform_hlds__const_prop__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 379 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_216_216)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 379 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                              {
#line 379 "const_prop.m"
                                transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 2)));
#line 379 "const_prop.m"
                                transform_hlds__const_prop__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_216_216, (MR_Integer) 3)));
#line 379 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_217_217)) == (MR_mktag((MR_Integer) 1)));
#line 379 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                  {
#line 379 "const_prop.m"
                                    transform_hlds__const_prop__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_217_217, (MR_Integer) 0)));
#line 379 "const_prop.m"
                                    transform_hlds__const_prop__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_217_217, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                    transform_hlds__const_prop__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_218_218, (MR_Integer) 0)));
#line 379 "const_prop.m"
                                    transform_hlds__const_prop__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_218_218, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_219_219)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_219_219, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 379 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 379 "const_prop.m"
                                      {
#line 379 "const_prop.m"
                                        transform_hlds__const_prop__XVal_393 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_219_219, (MR_Integer) 1)));
#line 379 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                                          {
#line 379 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                                              {
#line 380 "const_prop.m"
                                                transform_hlds__const_prop__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 380 "const_prop.m"
                                                transform_hlds__const_prop__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                transform_hlds__const_prop__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 380 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_222_222)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 380 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
                                                  {
#line 380 "const_prop.m"
                                                    transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                    transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 2)));
#line 380 "const_prop.m"
                                                    transform_hlds__const_prop__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_222_222, (MR_Integer) 3)));
#line 380 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_223_223)) == (MR_mktag((MR_Integer) 1)));
#line 380 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
                                                      {
#line 380 "const_prop.m"
                                                        transform_hlds__const_prop__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_223_223, (MR_Integer) 0)));
#line 380 "const_prop.m"
                                                        transform_hlds__const_prop__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_223_223, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                        transform_hlds__const_prop__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_224_224, (MR_Integer) 0)));
#line 380 "const_prop.m"
                                                        transform_hlds__const_prop__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_224_224, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_225_225)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_225_225, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 380 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
                                                          {
#line 380 "const_prop.m"
                                                            transform_hlds__const_prop__YVal_394 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_225_225, (MR_Integer) 1)));
#line 380 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_226_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                                                              {
#line 380 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "const_prop.m"
                                                                if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                                                                  {
#line 381 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_394 == (MR_Integer) 0);
#line 381 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 377 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 377 "const_prop.m"
                                                                      {
#line 382 "const_prop.m"
                                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 383 "const_prop.m"
                                                                        {
#line 383 "const_prop.m"
                                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__int__mod_2_f_0(transform_hlds__const_prop__XVal_393, transform_hlds__const_prop__YVal_394);
                                                                        }
#line 383 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 377 "const_prop.m"
                                                                      }
#line 377 "const_prop.m"
                                                                  }
#line 377 "const_prop.m"
                                                              }
#line 380 "const_prop.m"
                                                          }
#line 380 "const_prop.m"
                                                      }
#line 380 "const_prop.m"
                                                  }
#line 377 "const_prop.m"
                                              }
#line 377 "const_prop.m"
                                          }
#line 379 "const_prop.m"
                                      }
#line 379 "const_prop.m"
                                  }
#line 379 "const_prop.m"
                              }
#line 377 "const_prop.m"
                          }
#line 377 "const_prop.m"
                      }
#line 297 "const_prop.m"
                    else
#line 297 "const_prop.m"
                      if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "rem") == 0))
#line 385 "const_prop.m"
                        {
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_204_204;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_205_205;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_206_206;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_207_207;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_208_208;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_209_209;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_210_210;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_211_211;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_212_212;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_213_213;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_214_214;
#line 385 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_215_215;
#line 385 "const_prop.m"
                          MR_Integer transform_hlds__const_prop__XVal_395;
#line 385 "const_prop.m"
                          MR_Integer transform_hlds__const_prop__YVal_396;
#line 387 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_465_465;
#line 387 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_466_466;
#line 387 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_72_72;
#line 387 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_73_73;
#line 388 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_467_467;
#line 388 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_468_468;
#line 388 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_74_74;
#line 388 "const_prop.m"
                          MR_Word transform_hlds__const_prop__V_75_75;

#line 386 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 385 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                            {
#line 387 "const_prop.m"
                              transform_hlds__const_prop__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 387 "const_prop.m"
                              transform_hlds__const_prop__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 387 "const_prop.m"
                              transform_hlds__const_prop__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 387 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_204_204)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 387 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                {
#line 387 "const_prop.m"
                                  transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 1)));
#line 387 "const_prop.m"
                                  transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 2)));
#line 387 "const_prop.m"
                                  transform_hlds__const_prop__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_204_204, (MR_Integer) 3)));
#line 387 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_205_205)) == (MR_mktag((MR_Integer) 1)));
#line 387 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                    {
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_205_205, (MR_Integer) 0)));
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_205_205, (MR_Integer) 1)));
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_206_206, (MR_Integer) 0)));
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_206_206, (MR_Integer) 1)));
#line 387 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_207_207)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 387 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                        {
#line 387 "const_prop.m"
                                          transform_hlds__const_prop__XVal_395 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_207_207, (MR_Integer) 1)));
#line 387 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_208_208 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                            {
#line 387 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                {
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 388 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_210_210)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 388 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                                    {
#line 388 "const_prop.m"
                                                      transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                      transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 2)));
#line 388 "const_prop.m"
                                                      transform_hlds__const_prop__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_210_210, (MR_Integer) 3)));
#line 388 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_211_211)) == (MR_mktag((MR_Integer) 1)));
#line 388 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                                        {
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_211_211, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_211_211, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_212_212, (MR_Integer) 0)));
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_212_212, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_213_213)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_213_213, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 388 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 388 "const_prop.m"
                                                            {
#line 388 "const_prop.m"
                                                              transform_hlds__const_prop__YVal_396 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_213_213, (MR_Integer) 1)));
#line 388 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_214_214 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                                {
#line 388 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_215_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "const_prop.m"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                                    {
#line 389 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_396 == (MR_Integer) 0);
#line 389 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 385 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 385 "const_prop.m"
                                                                        {
#line 390 "const_prop.m"
                                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 391 "const_prop.m"
                                                                          {
#line 391 "const_prop.m"
                                                                            transform_hlds__const_prop__OutputArgVal_16 = mercury__int__rem_2_f_0(transform_hlds__const_prop__XVal_395, transform_hlds__const_prop__YVal_396);
                                                                          }
#line 391 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 385 "const_prop.m"
                                                                        }
#line 385 "const_prop.m"
                                                                    }
#line 385 "const_prop.m"
                                                                }
#line 388 "const_prop.m"
                                                            }
#line 388 "const_prop.m"
                                                        }
#line 388 "const_prop.m"
                                                    }
#line 385 "const_prop.m"
                                                }
#line 385 "const_prop.m"
                                            }
#line 387 "const_prop.m"
                                        }
#line 387 "const_prop.m"
                                    }
#line 387 "const_prop.m"
                                }
#line 385 "const_prop.m"
                            }
#line 385 "const_prop.m"
                        }
#line 297 "const_prop.m"
                      else
#line 297 "const_prop.m"
                        if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "xor") == 0))
#line 443 "const_prop.m"
                          {
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_108_108;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_109_109;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_110_110;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_111_111;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_112_112;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_113_113;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_114_114;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_115_115;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_116_116;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_117_117;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_118_118;
#line 443 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_119_119;
#line 443 "const_prop.m"
                            MR_Integer transform_hlds__const_prop__XVal_411;
#line 443 "const_prop.m"
                            MR_Integer transform_hlds__const_prop__YVal_412;
#line 445 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_497_497;
#line 445 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_498_498;
#line 445 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_104_104;
#line 445 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_105_105;
#line 446 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_499_499;
#line 446 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_500_500;
#line 446 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_106_106;
#line 446 "const_prop.m"
                            MR_Word transform_hlds__const_prop__V_107_107;

#line 444 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 443 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 443 "const_prop.m"
                              {
#line 445 "const_prop.m"
                                transform_hlds__const_prop__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 445 "const_prop.m"
                                transform_hlds__const_prop__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 445 "const_prop.m"
                                transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 445 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_108_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 445 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 445 "const_prop.m"
                                  {
#line 445 "const_prop.m"
                                    transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 1)));
#line 445 "const_prop.m"
                                    transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 2)));
#line 445 "const_prop.m"
                                    transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_108_108, (MR_Integer) 3)));
#line 445 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 445 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 445 "const_prop.m"
                                      {
#line 445 "const_prop.m"
                                        transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_109_109, (MR_Integer) 0)));
#line 445 "const_prop.m"
                                        transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_109_109, (MR_Integer) 1)));
#line 445 "const_prop.m"
                                        transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_110_110, (MR_Integer) 0)));
#line 445 "const_prop.m"
                                        transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_110_110, (MR_Integer) 1)));
#line 445 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_111_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 445 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 445 "const_prop.m"
                                          {
#line 445 "const_prop.m"
                                            transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
#line 445 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 443 "const_prop.m"
                                              {
#line 445 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 443 "const_prop.m"
                                                  {
#line 446 "const_prop.m"
                                                    transform_hlds__const_prop__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 446 "const_prop.m"
                                                    transform_hlds__const_prop__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 446 "const_prop.m"
                                                    transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 446 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_114_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 446 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                                      {
#line 446 "const_prop.m"
                                                        transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 1)));
#line 446 "const_prop.m"
                                                        transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 2)));
#line 446 "const_prop.m"
                                                        transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_114_114, (MR_Integer) 3)));
#line 446 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 446 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                                          {
#line 446 "const_prop.m"
                                                            transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)));
#line 446 "const_prop.m"
                                                            transform_hlds__const_prop__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
#line 446 "const_prop.m"
                                                            transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_116_116, (MR_Integer) 0)));
#line 446 "const_prop.m"
                                                            transform_hlds__const_prop__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_116_116, (MR_Integer) 1)));
#line 446 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_117_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 446 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 446 "const_prop.m"
                                                              {
#line 446 "const_prop.m"
                                                                transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
#line 446 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "const_prop.m"
                                                                if (transform_hlds__const_prop__succeeded)
#line 443 "const_prop.m"
                                                                  {
#line 446 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 443 "const_prop.m"
                                                                      {
#line 447 "const_prop.m"
                                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 448 "const_prop.m"
                                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_411 ^ transform_hlds__const_prop__YVal_412);
#line 448 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 443 "const_prop.m"
                                                                      }
#line 443 "const_prop.m"
                                                                  }
#line 446 "const_prop.m"
                                                              }
#line 446 "const_prop.m"
                                                          }
#line 446 "const_prop.m"
                                                      }
#line 443 "const_prop.m"
                                                  }
#line 443 "const_prop.m"
                                              }
#line 445 "const_prop.m"
                                          }
#line 445 "const_prop.m"
                                      }
#line 445 "const_prop.m"
                                  }
#line 443 "const_prop.m"
                              }
#line 443 "const_prop.m"
                          }
#line 297 "const_prop.m"
                        else
#line 297 "const_prop.m"
                          if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "plus") == 0))
#line 291 "const_prop.m"
                            {
#line 291 "const_prop.m"
                              MR_Integer transform_hlds__const_prop__XVal_19;
#line 291 "const_prop.m"
                              MR_Integer transform_hlds__const_prop__YVal_22;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_360_360;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_361_361;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_362_362;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_363_363;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_364_364;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_365_365;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_366_366;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_367_367;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_368_368;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_369_369;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_370_370;
#line 291 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_371_371;
#line 293 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_413_413;
#line 293 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_414_414;
#line 293 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_17_17;
#line 293 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_18_18;
#line 294 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_415_415;
#line 294 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_416_416;
#line 294 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_20_20;
#line 294 "const_prop.m"
                              MR_Word transform_hlds__const_prop__V_21_21;

#line 292 "const_prop.m"
                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 291 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 291 "const_prop.m"
                                {
#line 293 "const_prop.m"
                                  transform_hlds__const_prop__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 293 "const_prop.m"
                                  transform_hlds__const_prop__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 293 "const_prop.m"
                                  transform_hlds__const_prop__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 293 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_360_360)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 293 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 293 "const_prop.m"
                                    {
#line 293 "const_prop.m"
                                      transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 1)));
#line 293 "const_prop.m"
                                      transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 2)));
#line 293 "const_prop.m"
                                      transform_hlds__const_prop__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_360_360, (MR_Integer) 3)));
#line 293 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_361_361)) == (MR_mktag((MR_Integer) 1)));
#line 293 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 293 "const_prop.m"
                                        {
#line 293 "const_prop.m"
                                          transform_hlds__const_prop__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_361_361, (MR_Integer) 0)));
#line 293 "const_prop.m"
                                          transform_hlds__const_prop__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_361_361, (MR_Integer) 1)));
#line 293 "const_prop.m"
                                          transform_hlds__const_prop__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_362_362, (MR_Integer) 0)));
#line 293 "const_prop.m"
                                          transform_hlds__const_prop__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_362_362, (MR_Integer) 1)));
#line 293 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_363_363)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_363_363, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 293 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 293 "const_prop.m"
                                            {
#line 293 "const_prop.m"
                                              transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_363_363, (MR_Integer) 1)));
#line 293 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 291 "const_prop.m"
                                                {
#line 293 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_365_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 291 "const_prop.m"
                                                    {
#line 294 "const_prop.m"
                                                      transform_hlds__const_prop__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 294 "const_prop.m"
                                                      transform_hlds__const_prop__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 294 "const_prop.m"
                                                      transform_hlds__const_prop__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 294 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_366_366)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 294 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 294 "const_prop.m"
                                                        {
#line 294 "const_prop.m"
                                                          transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 1)));
#line 294 "const_prop.m"
                                                          transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 2)));
#line 294 "const_prop.m"
                                                          transform_hlds__const_prop__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_366_366, (MR_Integer) 3)));
#line 294 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_367_367)) == (MR_mktag((MR_Integer) 1)));
#line 294 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 294 "const_prop.m"
                                                            {
#line 294 "const_prop.m"
                                                              transform_hlds__const_prop__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_367_367, (MR_Integer) 0)));
#line 294 "const_prop.m"
                                                              transform_hlds__const_prop__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_367_367, (MR_Integer) 1)));
#line 294 "const_prop.m"
                                                              transform_hlds__const_prop__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_368_368, (MR_Integer) 0)));
#line 294 "const_prop.m"
                                                              transform_hlds__const_prop__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_368_368, (MR_Integer) 1)));
#line 294 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_369_369)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 294 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 294 "const_prop.m"
                                                                {
#line 294 "const_prop.m"
                                                                  transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_369_369, (MR_Integer) 1)));
#line 294 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_370_370 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "const_prop.m"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 291 "const_prop.m"
                                                                    {
#line 294 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 291 "const_prop.m"
                                                                        {
#line 295 "const_prop.m"
                                                                          *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 296 "const_prop.m"
                                                                          transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_19 + transform_hlds__const_prop__YVal_22);
#line 296 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 291 "const_prop.m"
                                                                        }
#line 291 "const_prop.m"
                                                                    }
#line 294 "const_prop.m"
                                                                }
#line 294 "const_prop.m"
                                                            }
#line 294 "const_prop.m"
                                                        }
#line 291 "const_prop.m"
                                                    }
#line 291 "const_prop.m"
                                                }
#line 293 "const_prop.m"
                                            }
#line 293 "const_prop.m"
                                        }
#line 293 "const_prop.m"
                                    }
#line 291 "const_prop.m"
                                }
#line 291 "const_prop.m"
                            }
#line 297 "const_prop.m"
                          else
#line 297 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "minus") == 0))
#line 319 "const_prop.m"
                              {
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_312_312;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_313_313;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_314_314;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_315_315;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_316_316;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_317_317;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_318_318;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_319_319;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_320_320;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_321_321;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_322_322;
#line 319 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_323_323;
#line 319 "const_prop.m"
                                MR_Integer transform_hlds__const_prop__XVal_377;
#line 319 "const_prop.m"
                                MR_Integer transform_hlds__const_prop__YVal_378;
#line 321 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_429_429;
#line 321 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_430_430;
#line 321 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_36_36;
#line 321 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_37_37;
#line 322 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_431_431;
#line 322 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_432_432;
#line 322 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_38_38;
#line 322 "const_prop.m"
                                MR_Word transform_hlds__const_prop__V_39_39;

#line 320 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 319 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 319 "const_prop.m"
                                  {
#line 321 "const_prop.m"
                                    transform_hlds__const_prop__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 321 "const_prop.m"
                                    transform_hlds__const_prop__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 321 "const_prop.m"
                                    transform_hlds__const_prop__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 321 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_312_312)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 321 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 321 "const_prop.m"
                                      {
#line 321 "const_prop.m"
                                        transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 1)));
#line 321 "const_prop.m"
                                        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 2)));
#line 321 "const_prop.m"
                                        transform_hlds__const_prop__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_312_312, (MR_Integer) 3)));
#line 321 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_313_313)) == (MR_mktag((MR_Integer) 1)));
#line 321 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 321 "const_prop.m"
                                          {
#line 321 "const_prop.m"
                                            transform_hlds__const_prop__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_313_313, (MR_Integer) 0)));
#line 321 "const_prop.m"
                                            transform_hlds__const_prop__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_313_313, (MR_Integer) 1)));
#line 321 "const_prop.m"
                                            transform_hlds__const_prop__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_314_314, (MR_Integer) 0)));
#line 321 "const_prop.m"
                                            transform_hlds__const_prop__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_314_314, (MR_Integer) 1)));
#line 321 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_315_315)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_315_315, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 321 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 321 "const_prop.m"
                                              {
#line 321 "const_prop.m"
                                                transform_hlds__const_prop__XVal_377 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_315_315, (MR_Integer) 1)));
#line 321 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_316_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 319 "const_prop.m"
                                                  {
#line 321 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_317_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 319 "const_prop.m"
                                                      {
#line 322 "const_prop.m"
                                                        transform_hlds__const_prop__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 322 "const_prop.m"
                                                        transform_hlds__const_prop__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 322 "const_prop.m"
                                                        transform_hlds__const_prop__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 322 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_318_318)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 322 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                          {
#line 322 "const_prop.m"
                                                            transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 1)));
#line 322 "const_prop.m"
                                                            transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 2)));
#line 322 "const_prop.m"
                                                            transform_hlds__const_prop__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_318_318, (MR_Integer) 3)));
#line 322 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_319_319)) == (MR_mktag((MR_Integer) 1)));
#line 322 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                              {
#line 322 "const_prop.m"
                                                                transform_hlds__const_prop__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_319_319, (MR_Integer) 0)));
#line 322 "const_prop.m"
                                                                transform_hlds__const_prop__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_319_319, (MR_Integer) 1)));
#line 322 "const_prop.m"
                                                                transform_hlds__const_prop__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_320_320, (MR_Integer) 0)));
#line 322 "const_prop.m"
                                                                transform_hlds__const_prop__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_320_320, (MR_Integer) 1)));
#line 322 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_321_321)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_321_321, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 322 "const_prop.m"
                                                                if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                                  {
#line 322 "const_prop.m"
                                                                    transform_hlds__const_prop__YVal_378 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_321_321, (MR_Integer) 1)));
#line 322 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_322_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 319 "const_prop.m"
                                                                      {
#line 322 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_323_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 319 "const_prop.m"
                                                                          {
#line 323 "const_prop.m"
                                                                            *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 324 "const_prop.m"
                                                                            transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_377 - transform_hlds__const_prop__YVal_378);
#line 324 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 319 "const_prop.m"
                                                                          }
#line 319 "const_prop.m"
                                                                      }
#line 322 "const_prop.m"
                                                                  }
#line 322 "const_prop.m"
                                                              }
#line 322 "const_prop.m"
                                                          }
#line 319 "const_prop.m"
                                                      }
#line 319 "const_prop.m"
                                                  }
#line 321 "const_prop.m"
                                              }
#line 321 "const_prop.m"
                                          }
#line 321 "const_prop.m"
                                      }
#line 319 "const_prop.m"
                                  }
#line 319 "const_prop.m"
                              }
#line 297 "const_prop.m"
                            else
#line 297 "const_prop.m"
                              if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "times") == 0))
#line 347 "const_prop.m"
                                {
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_264_264;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_265_265;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_266_266;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_267_267;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_268_268;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_269_269;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_270_270;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_271_271;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_272_272;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_273_273;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_274_274;
#line 347 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_275_275;
#line 347 "const_prop.m"
                                  MR_Integer transform_hlds__const_prop__XVal_385;
#line 347 "const_prop.m"
                                  MR_Integer transform_hlds__const_prop__YVal_386;
#line 349 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_445_445;
#line 349 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_446_446;
#line 349 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_52_52;
#line 349 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_53_53;
#line 350 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_447_447;
#line 350 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_448_448;
#line 350 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_54_54;
#line 350 "const_prop.m"
                                  MR_Word transform_hlds__const_prop__V_55_55;

#line 348 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 347 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 347 "const_prop.m"
                                    {
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_264_264)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 349 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                        {
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 2)));
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_264_264, (MR_Integer) 3)));
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_265_265)) == (MR_mktag((MR_Integer) 1)));
#line 349 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                            {
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_265_265, (MR_Integer) 0)));
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_265_265, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_267_267)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_267_267, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 349 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                                {
#line 349 "const_prop.m"
                                                  transform_hlds__const_prop__XVal_385 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_267_267, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_268_268 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 347 "const_prop.m"
                                                    {
#line 349 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_269_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 347 "const_prop.m"
                                                        {
#line 350 "const_prop.m"
                                                          transform_hlds__const_prop__V_447_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 350 "const_prop.m"
                                                          transform_hlds__const_prop__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 350 "const_prop.m"
                                                          transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 350 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_270_270)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 350 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                                                            {
#line 350 "const_prop.m"
                                                              transform_hlds__const_prop__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 1)));
#line 350 "const_prop.m"
                                                              transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 2)));
#line 350 "const_prop.m"
                                                              transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_270_270, (MR_Integer) 3)));
#line 350 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_271_271)) == (MR_mktag((MR_Integer) 1)));
#line 350 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                                                                {
#line 350 "const_prop.m"
                                                                  transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_271_271, (MR_Integer) 0)));
#line 350 "const_prop.m"
                                                                  transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_271_271, (MR_Integer) 1)));
#line 350 "const_prop.m"
                                                                  transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 350 "const_prop.m"
                                                                  transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 350 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_273_273)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_273_273, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 350 "const_prop.m"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 350 "const_prop.m"
                                                                    {
#line 350 "const_prop.m"
                                                                      transform_hlds__const_prop__YVal_386 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_273_273, (MR_Integer) 1)));
#line 350 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_274_274 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 347 "const_prop.m"
                                                                        {
#line 350 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_275_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 347 "const_prop.m"
                                                                            {
#line 351 "const_prop.m"
                                                                              *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 352 "const_prop.m"
                                                                              transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_385 * transform_hlds__const_prop__YVal_386);
#line 352 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 347 "const_prop.m"
                                                                            }
#line 347 "const_prop.m"
                                                                        }
#line 350 "const_prop.m"
                                                                    }
#line 350 "const_prop.m"
                                                                }
#line 350 "const_prop.m"
                                                            }
#line 347 "const_prop.m"
                                                        }
#line 347 "const_prop.m"
                                                    }
#line 349 "const_prop.m"
                                                }
#line 349 "const_prop.m"
                                            }
#line 349 "const_prop.m"
                                        }
#line 347 "const_prop.m"
                                    }
#line 347 "const_prop.m"
                                }
#line 297 "const_prop.m"
                              else
#line 297 "const_prop.m"
                                if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "unchecked_rem") == 0))
#line 393 "const_prop.m"
                                  {
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_192_192;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_193_193;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_194_194;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_195_195;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_196_196;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_197_197;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_198_198;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_199_199;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_200_200;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_201_201;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_202_202;
#line 393 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_203_203;
#line 393 "const_prop.m"
                                    MR_Integer transform_hlds__const_prop__XVal_397;
#line 393 "const_prop.m"
                                    MR_Integer transform_hlds__const_prop__YVal_398;
#line 395 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_469_469;
#line 395 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_470_470;
#line 395 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_76_76;
#line 395 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_77_77;
#line 396 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_471_471;
#line 396 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_472_472;
#line 396 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_78_78;
#line 396 "const_prop.m"
                                    MR_Word transform_hlds__const_prop__V_79_79;

#line 394 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 393 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                      {
#line 395 "const_prop.m"
                                        transform_hlds__const_prop__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 395 "const_prop.m"
                                        transform_hlds__const_prop__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 395 "const_prop.m"
                                        transform_hlds__const_prop__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 395 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_192_192)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 395 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                          {
#line 395 "const_prop.m"
                                            transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 1)));
#line 395 "const_prop.m"
                                            transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 2)));
#line 395 "const_prop.m"
                                            transform_hlds__const_prop__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_192_192, (MR_Integer) 3)));
#line 395 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_193_193)) == (MR_mktag((MR_Integer) 1)));
#line 395 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                              {
#line 395 "const_prop.m"
                                                transform_hlds__const_prop__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_193_193, (MR_Integer) 0)));
#line 395 "const_prop.m"
                                                transform_hlds__const_prop__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_193_193, (MR_Integer) 1)));
#line 395 "const_prop.m"
                                                transform_hlds__const_prop__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_194_194, (MR_Integer) 0)));
#line 395 "const_prop.m"
                                                transform_hlds__const_prop__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_194_194, (MR_Integer) 1)));
#line 395 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_195_195)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_195_195, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 395 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 395 "const_prop.m"
                                                  {
#line 395 "const_prop.m"
                                                    transform_hlds__const_prop__XVal_397 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_195_195, (MR_Integer) 1)));
#line 395 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_196_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                                      {
#line 395 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                                          {
#line 396 "const_prop.m"
                                                            transform_hlds__const_prop__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 396 "const_prop.m"
                                                            transform_hlds__const_prop__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 396 "const_prop.m"
                                                            transform_hlds__const_prop__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 396 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_198_198)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 396 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                                              {
#line 396 "const_prop.m"
                                                                transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 1)));
#line 396 "const_prop.m"
                                                                transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 2)));
#line 396 "const_prop.m"
                                                                transform_hlds__const_prop__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_198_198, (MR_Integer) 3)));
#line 396 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_199_199)) == (MR_mktag((MR_Integer) 1)));
#line 396 "const_prop.m"
                                                                if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                                                  {
#line 396 "const_prop.m"
                                                                    transform_hlds__const_prop__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_199_199, (MR_Integer) 0)));
#line 396 "const_prop.m"
                                                                    transform_hlds__const_prop__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_199_199, (MR_Integer) 1)));
#line 396 "const_prop.m"
                                                                    transform_hlds__const_prop__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_200_200, (MR_Integer) 0)));
#line 396 "const_prop.m"
                                                                    transform_hlds__const_prop__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_200_200, (MR_Integer) 1)));
#line 396 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_201_201)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 396 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                                                      {
#line 396 "const_prop.m"
                                                                        transform_hlds__const_prop__YVal_398 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_201_201, (MR_Integer) 1)));
#line 396 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_202_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                                                          {
#line 396 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "const_prop.m"
                                                                            if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                                                              {
#line 397 "const_prop.m"
                                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_398 == (MR_Integer) 0);
#line 397 "const_prop.m"
                                                                                transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 393 "const_prop.m"
                                                                                if (transform_hlds__const_prop__succeeded)
#line 393 "const_prop.m"
                                                                                  {
#line 398 "const_prop.m"
                                                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 399 "const_prop.m"
                                                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_397 % transform_hlds__const_prop__YVal_398);
#line 399 "const_prop.m"
                                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 393 "const_prop.m"
                                                                                  }
#line 393 "const_prop.m"
                                                                              }
#line 393 "const_prop.m"
                                                                          }
#line 396 "const_prop.m"
                                                                      }
#line 396 "const_prop.m"
                                                                  }
#line 396 "const_prop.m"
                                                              }
#line 393 "const_prop.m"
                                                          }
#line 393 "const_prop.m"
                                                      }
#line 395 "const_prop.m"
                                                  }
#line 395 "const_prop.m"
                                              }
#line 395 "const_prop.m"
                                          }
#line 393 "const_prop.m"
                                      }
#line 393 "const_prop.m"
                                  }
#line 297 "const_prop.m"
                                else
#line 297 "const_prop.m"
                                  if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "unchecked_quotient") == 0))
#line 361 "const_prop.m"
                                    {
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_240_240;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_241_241;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_242_242;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_243_243;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_244_244;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_245_245;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_246_246;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_247_247;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_248_248;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_249_249;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_250_250;
#line 361 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_251_251;
#line 361 "const_prop.m"
                                      MR_Integer transform_hlds__const_prop__XVal_389;
#line 361 "const_prop.m"
                                      MR_Integer transform_hlds__const_prop__YVal_390;
#line 363 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_453_453;
#line 363 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_454_454;
#line 363 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_60_60;
#line 363 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_61_61;
#line 364 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_455_455;
#line 364 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_456_456;
#line 364 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_62_62;
#line 364 "const_prop.m"
                                      MR_Word transform_hlds__const_prop__V_63_63;

#line 362 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 361 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                        {
#line 363 "const_prop.m"
                                          transform_hlds__const_prop__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 363 "const_prop.m"
                                          transform_hlds__const_prop__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 363 "const_prop.m"
                                          transform_hlds__const_prop__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 363 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_240_240)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 363 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 363 "const_prop.m"
                                            {
#line 363 "const_prop.m"
                                              transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 1)));
#line 363 "const_prop.m"
                                              transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 2)));
#line 363 "const_prop.m"
                                              transform_hlds__const_prop__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_240_240, (MR_Integer) 3)));
#line 363 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_241_241)) == (MR_mktag((MR_Integer) 1)));
#line 363 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 363 "const_prop.m"
                                                {
#line 363 "const_prop.m"
                                                  transform_hlds__const_prop__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_241_241, (MR_Integer) 0)));
#line 363 "const_prop.m"
                                                  transform_hlds__const_prop__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_241_241, (MR_Integer) 1)));
#line 363 "const_prop.m"
                                                  transform_hlds__const_prop__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_242_242, (MR_Integer) 0)));
#line 363 "const_prop.m"
                                                  transform_hlds__const_prop__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_242_242, (MR_Integer) 1)));
#line 363 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_243_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 363 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 363 "const_prop.m"
                                                    {
#line 363 "const_prop.m"
                                                      transform_hlds__const_prop__XVal_389 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_243_243, (MR_Integer) 1)));
#line 363 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                        {
#line 363 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_245_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                            {
#line 364 "const_prop.m"
                                                              transform_hlds__const_prop__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 364 "const_prop.m"
                                                              transform_hlds__const_prop__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 364 "const_prop.m"
                                                              transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 364 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 364 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                                                                {
#line 364 "const_prop.m"
                                                                  transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 364 "const_prop.m"
                                                                  transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 2)));
#line 364 "const_prop.m"
                                                                  transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_246_246, (MR_Integer) 3)));
#line 364 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_247_247)) == (MR_mktag((MR_Integer) 1)));
#line 364 "const_prop.m"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                                                                    {
#line 364 "const_prop.m"
                                                                      transform_hlds__const_prop__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 364 "const_prop.m"
                                                                      transform_hlds__const_prop__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 364 "const_prop.m"
                                                                      transform_hlds__const_prop__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_248_248, (MR_Integer) 0)));
#line 364 "const_prop.m"
                                                                      transform_hlds__const_prop__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_248_248, (MR_Integer) 1)));
#line 364 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_249_249)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 364 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                                                                        {
#line 364 "const_prop.m"
                                                                          transform_hlds__const_prop__YVal_390 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_249_249, (MR_Integer) 1)));
#line 364 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_250_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                                            {
#line 364 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                                                {
#line 365 "const_prop.m"
                                                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_390 == (MR_Integer) 0);
#line 365 "const_prop.m"
                                                                                  transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 361 "const_prop.m"
                                                                                  if (transform_hlds__const_prop__succeeded)
#line 361 "const_prop.m"
                                                                                    {
#line 366 "const_prop.m"
                                                                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 367 "const_prop.m"
                                                                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_389 / transform_hlds__const_prop__YVal_390);
#line 367 "const_prop.m"
                                                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 361 "const_prop.m"
                                                                                    }
#line 361 "const_prop.m"
                                                                                }
#line 361 "const_prop.m"
                                                                            }
#line 364 "const_prop.m"
                                                                        }
#line 364 "const_prop.m"
                                                                    }
#line 364 "const_prop.m"
                                                                }
#line 361 "const_prop.m"
                                                            }
#line 361 "const_prop.m"
                                                        }
#line 363 "const_prop.m"
                                                    }
#line 363 "const_prop.m"
                                                }
#line 363 "const_prop.m"
                                            }
#line 361 "const_prop.m"
                                        }
#line 361 "const_prop.m"
                                    }
#line 297 "const_prop.m"
                                  else
#line 297 "const_prop.m"
                                    if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "unchecked_left_shift") == 0))
#line 401 "const_prop.m"
                                      {
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_180_180;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_181_181;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_182_182;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_183_183;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_184_184;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_185_185;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_186_186;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_187_187;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_188_188;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_189_189;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_190_190;
#line 401 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_191_191;
#line 401 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__XVal_399;
#line 401 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__YVal_400;
#line 403 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_473_473;
#line 403 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_474_474;
#line 403 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_80_80;
#line 403 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_81_81;
#line 404 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_475_475;
#line 404 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_476_476;
#line 404 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_82_82;
#line 404 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__V_83_83;

#line 402 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 401 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 401 "const_prop.m"
                                          {
#line 403 "const_prop.m"
                                            transform_hlds__const_prop__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 403 "const_prop.m"
                                            transform_hlds__const_prop__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 403 "const_prop.m"
                                            transform_hlds__const_prop__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 403 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_180_180)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 403 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                              {
#line 403 "const_prop.m"
                                                transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 1)));
#line 403 "const_prop.m"
                                                transform_hlds__const_prop__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 2)));
#line 403 "const_prop.m"
                                                transform_hlds__const_prop__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_180_180, (MR_Integer) 3)));
#line 403 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_181_181)) == (MR_mktag((MR_Integer) 1)));
#line 403 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                                  {
#line 403 "const_prop.m"
                                                    transform_hlds__const_prop__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_181_181, (MR_Integer) 0)));
#line 403 "const_prop.m"
                                                    transform_hlds__const_prop__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_181_181, (MR_Integer) 1)));
#line 403 "const_prop.m"
                                                    transform_hlds__const_prop__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_182_182, (MR_Integer) 0)));
#line 403 "const_prop.m"
                                                    transform_hlds__const_prop__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_182_182, (MR_Integer) 1)));
#line 403 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_183_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_183_183, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 403 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 403 "const_prop.m"
                                                      {
#line 403 "const_prop.m"
                                                        transform_hlds__const_prop__XVal_399 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_183_183, (MR_Integer) 1)));
#line 403 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 401 "const_prop.m"
                                                          {
#line 403 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_185_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 401 "const_prop.m"
                                                              {
#line 404 "const_prop.m"
                                                                transform_hlds__const_prop__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 404 "const_prop.m"
                                                                transform_hlds__const_prop__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                transform_hlds__const_prop__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 404 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_186_186)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 404 "const_prop.m"
                                                                if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                                  {
#line 404 "const_prop.m"
                                                                    transform_hlds__const_prop__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                    transform_hlds__const_prop__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 2)));
#line 404 "const_prop.m"
                                                                    transform_hlds__const_prop__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_186_186, (MR_Integer) 3)));
#line 404 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_187_187)) == (MR_mktag((MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                                      {
#line 404 "const_prop.m"
                                                                        transform_hlds__const_prop__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_187_187, (MR_Integer) 0)));
#line 404 "const_prop.m"
                                                                        transform_hlds__const_prop__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_187_187, (MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                        transform_hlds__const_prop__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_188_188, (MR_Integer) 0)));
#line 404 "const_prop.m"
                                                                        transform_hlds__const_prop__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_188_188, (MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_189_189)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_189_189, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 404 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 404 "const_prop.m"
                                                                          {
#line 404 "const_prop.m"
                                                                            transform_hlds__const_prop__YVal_400 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_189_189, (MR_Integer) 1)));
#line 404 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "const_prop.m"
                                                                            if (transform_hlds__const_prop__succeeded)
#line 401 "const_prop.m"
                                                                              {
#line 404 "const_prop.m"
                                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "const_prop.m"
                                                                                if (transform_hlds__const_prop__succeeded)
#line 401 "const_prop.m"
                                                                                  {
#line 405 "const_prop.m"
                                                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 406 "const_prop.m"
                                                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_399 << transform_hlds__const_prop__YVal_400);
#line 406 "const_prop.m"
                                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 401 "const_prop.m"
                                                                                  }
#line 401 "const_prop.m"
                                                                              }
#line 404 "const_prop.m"
                                                                          }
#line 404 "const_prop.m"
                                                                      }
#line 404 "const_prop.m"
                                                                  }
#line 401 "const_prop.m"
                                                              }
#line 401 "const_prop.m"
                                                          }
#line 403 "const_prop.m"
                                                      }
#line 403 "const_prop.m"
                                                  }
#line 403 "const_prop.m"
                                              }
#line 401 "const_prop.m"
                                          }
#line 401 "const_prop.m"
                                      }
#line 297 "const_prop.m"
                                    else
#line 297 "const_prop.m"
                                      if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "unchecked_right_shift") == 0))
#line 415 "const_prop.m"
                                        {
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_156_156;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_157_157;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_158_158;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_159_159;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_160_160;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_161_161;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_162_162;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_163_163;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_164_164;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_165_165;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_166_166;
#line 415 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_167_167;
#line 415 "const_prop.m"
                                          MR_Integer transform_hlds__const_prop__XVal_403;
#line 415 "const_prop.m"
                                          MR_Integer transform_hlds__const_prop__YVal_404;
#line 417 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_481_481;
#line 417 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_482_482;
#line 417 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_88_88;
#line 417 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_89_89;
#line 418 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_483_483;
#line 418 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_484_484;
#line 418 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_90_90;
#line 418 "const_prop.m"
                                          MR_Word transform_hlds__const_prop__V_91_91;

#line 416 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 415 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 415 "const_prop.m"
                                            {
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_156_156)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 417 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                                {
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_156_156, (MR_Integer) 3)));
#line 417 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_157_157)) == (MR_mktag((MR_Integer) 1)));
#line 417 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                                    {
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_157_157, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_157_157, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_158_158, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_158_158, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_159_159)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 417 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                                        {
#line 417 "const_prop.m"
                                                          transform_hlds__const_prop__XVal_403 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_159_159, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_160_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 415 "const_prop.m"
                                                            {
#line 417 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 415 "const_prop.m"
                                                                {
#line 418 "const_prop.m"
                                                                  transform_hlds__const_prop__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 418 "const_prop.m"
                                                                  transform_hlds__const_prop__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                  transform_hlds__const_prop__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 418 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_162_162)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 418 "const_prop.m"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                                                                    {
#line 418 "const_prop.m"
                                                                      transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                      transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 2)));
#line 418 "const_prop.m"
                                                                      transform_hlds__const_prop__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_162_162, (MR_Integer) 3)));
#line 418 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                                                                        {
#line 418 "const_prop.m"
                                                                          transform_hlds__const_prop__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_163_163, (MR_Integer) 0)));
#line 418 "const_prop.m"
                                                                          transform_hlds__const_prop__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_163_163, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                          transform_hlds__const_prop__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_164_164, (MR_Integer) 0)));
#line 418 "const_prop.m"
                                                                          transform_hlds__const_prop__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_164_164, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 418 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 418 "const_prop.m"
                                                                            {
#line 418 "const_prop.m"
                                                                              transform_hlds__const_prop__YVal_404 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_165_165, (MR_Integer) 1)));
#line 418 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_166_166 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "const_prop.m"
                                                                              if (transform_hlds__const_prop__succeeded)
#line 415 "const_prop.m"
                                                                                {
#line 418 "const_prop.m"
                                                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "const_prop.m"
                                                                                  if (transform_hlds__const_prop__succeeded)
#line 415 "const_prop.m"
                                                                                    {
#line 419 "const_prop.m"
                                                                                      *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 420 "const_prop.m"
                                                                                      transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_403 >> transform_hlds__const_prop__YVal_404);
#line 420 "const_prop.m"
                                                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 415 "const_prop.m"
                                                                                    }
#line 415 "const_prop.m"
                                                                                }
#line 418 "const_prop.m"
                                                                            }
#line 418 "const_prop.m"
                                                                        }
#line 418 "const_prop.m"
                                                                    }
#line 415 "const_prop.m"
                                                                }
#line 415 "const_prop.m"
                                                            }
#line 417 "const_prop.m"
                                                        }
#line 417 "const_prop.m"
                                                    }
#line 417 "const_prop.m"
                                                }
#line 415 "const_prop.m"
                                            }
#line 415 "const_prop.m"
                                        }
#line 297 "const_prop.m"
                                      else
#line 297 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 289 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 289 "const_prop.m"
      {
#line 289 "const_prop.m"
        {
#line 289 "const_prop.m"
          MR_Word base;
#line 289 "const_prop.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 289 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 289 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 289 "const_prop.m"
        }
#line 289 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 289 "const_prop.m"
      }
#line 289 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 289 "const_prop.m"
  }
#line 284 "const_prop.m"
}

#line 271 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_51_93_95_48_7_p_0(
#line 271 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 271 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 271 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 271 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 271 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 271 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 271 "const_prop.m"
{
#line 276 "const_prop.m"
  {
#line 276 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "count_codepoints") == 0);
#line 276 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_17;
#line 276 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CodePointCountX_18;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 276 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 279 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 279 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 279 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 279 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_16_16;

#line 276 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 276 "const_prop.m"
      {
#line 278 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_9 == (MR_Integer) 0);
#line 276 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 276 "const_prop.m"
          {
#line 279 "const_prop.m"
            transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 279 "const_prop.m"
            transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 279 "const_prop.m"
            transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 279 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 279 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 279 "const_prop.m"
              {
#line 279 "const_prop.m"
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 279 "const_prop.m"
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 2)));
#line 279 "const_prop.m"
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 3)));
#line 279 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 279 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 279 "const_prop.m"
                  {
#line 279 "const_prop.m"
                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 279 "const_prop.m"
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 279 "const_prop.m"
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 279 "const_prop.m"
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 279 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 279 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 279 "const_prop.m"
                      {
#line 279 "const_prop.m"
                        transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 279 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 276 "const_prop.m"
                          {
#line 279 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 276 "const_prop.m"
                              {
#line 280 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 281 "const_prop.m"
                                {
#line 281 "const_prop.m"
                                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                                }
#line 282 "const_prop.m"
                                {
#line 282 "const_prop.m"
                                  MR_Word base;
#line 282 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 282 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__CodePointCountX_18));
#line 282 "const_prop.m"
                                }
#line 282 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 276 "const_prop.m"
                              }
#line 276 "const_prop.m"
                          }
#line 279 "const_prop.m"
                      }
#line 279 "const_prop.m"
                  }
#line 279 "const_prop.m"
              }
#line 276 "const_prop.m"
          }
#line 276 "const_prop.m"
      }
#line 276 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 276 "const_prop.m"
  }
#line 271 "const_prop.m"
}

#line 251 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_51_93_95_48_7_p_0(
#line 251 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 251 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 251 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 251 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 251 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 251 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 251 "const_prop.m"
{
#line 256 "const_prop.m"
  {
#line 256 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_9 == (MR_Integer) 0);
#line 256 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_14;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_43_43;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_44_44;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_45_45;
#line 256 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_46_46;
#line 256 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_47_47;
#line 260 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 260 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39;
#line 260 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41;
#line 260 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_42_42;

#line 256 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
      {
#line 260 "const_prop.m"
        transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 260 "const_prop.m"
        transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 260 "const_prop.m"
        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 260 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 260 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 260 "const_prop.m"
          {
#line 260 "const_prop.m"
            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 260 "const_prop.m"
            transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 260 "const_prop.m"
            transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 260 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 260 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 260 "const_prop.m"
              {
#line 260 "const_prop.m"
                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));
#line 260 "const_prop.m"
                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 260 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                  {
#line 260 "const_prop.m"
                    transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 0)));
#line 260 "const_prop.m"
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 1)));
#line 260 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                      {
#line 260 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 260 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 260 "const_prop.m"
                          {
#line 260 "const_prop.m"
                            transform_hlds__const_prop__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 1)));
#line 263 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "+") == 0))
#line 258 "const_prop.m"
                              {
#line 261 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 262 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_47_47;
#line 258 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 258 "const_prop.m"
                              }
#line 263 "const_prop.m"
                            else
#line 263 "const_prop.m"
                              if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "-") == 0))
#line 264 "const_prop.m"
                                {
#line 267 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 268 "const_prop.m"
                                  transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__V_47_47);
#line 264 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 264 "const_prop.m"
                                }
#line 263 "const_prop.m"
                              else
#line 263 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_FALSE;
#line 256 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 256 "const_prop.m"
                              {
#line 256 "const_prop.m"
                                {
#line 256 "const_prop.m"
                                  MR_Word base;
#line 256 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 256 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 256 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_14);
#line 256 "const_prop.m"
                                }
#line 256 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 256 "const_prop.m"
                              }
#line 260 "const_prop.m"
                          }
#line 256 "const_prop.m"
                      }
#line 256 "const_prop.m"
                  }
#line 260 "const_prop.m"
              }
#line 260 "const_prop.m"
          }
#line 256 "const_prop.m"
      }
#line 256 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 256 "const_prop.m"
  }
#line 251 "const_prop.m"
}

#line 83 "const_prop.m"
static MR_Word MR_CALL 
transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__83__1_3_f_0(
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_15,
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_16,
#line 83 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_30)
#line 83 "const_prop.m"
{
#line 83 "const_prop.m"
  {
#line 83 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__HeadVar__4_31;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__Type_24;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_25;

#line 84 "const_prop.m"
    {
#line 84 "const_prop.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__const_prop__InstMap_16, transform_hlds__const_prop__HeadVar__3_30, &transform_hlds__const_prop__Inst_25);
    }
#line 85 "const_prop.m"
    {
#line 85 "const_prop.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__const_prop__VarTypes_15, transform_hlds__const_prop__HeadVar__3_30, &transform_hlds__const_prop__Type_24);
    }
#line 83 "const_prop.m"
    {
#line 83 "const_prop.m"
      transform_hlds__const_prop__HeadVar__4_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_31, 0) = ((MR_Box) (transform_hlds__const_prop__HeadVar__3_30));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_31, 1) = ((MR_Box) (transform_hlds__const_prop__Type_24));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__4_31, 2) = ((MR_Box) (transform_hlds__const_prop__Inst_25));
#line 83 "const_prop.m"
    }
#line 83 "const_prop.m"
    return transform_hlds__const_prop__HeadVar__4_31;
#line 83 "const_prop.m"
  }
#line 83 "const_prop.m"
}

#line 641 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 641 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 641 "const_prop.m"
{
#line 641 "const_prop.m"
  {
#line 641 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 641 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 641 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 641 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 641 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 6074 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 641 "const_prop.m"
    else
#line 641 "const_prop.m"
      if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 641 "const_prop.m"
        {
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

#line 641 "const_prop.m"
          if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 641 "const_prop.m"
            {
#line 641 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

#line 641 "const_prop.m"
              {
#line 641 "const_prop.m"
                parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_16_16, transform_hlds__const_prop__V_5_5);
#line 641 "const_prop.m"
                return;
              }
#line 641 "const_prop.m"
            }
#line 641 "const_prop.m"
          else
#line 6103 "transform_hlds.const_prop.c"
            *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
#line 641 "const_prop.m"
        }
#line 641 "const_prop.m"
      else
#line 641 "const_prop.m"
        {
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_17_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

#line 641 "const_prop.m"
          if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6116 "transform_hlds.const_prop.c"
            *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
#line 641 "const_prop.m"
          else
#line 641 "const_prop.m"
            {
#line 641 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_11_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

#line 641 "const_prop.m"
              {
#line 641 "const_prop.m"
                transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_17_17, transform_hlds__const_prop__V_11_11);
#line 641 "const_prop.m"
                return;
              }
#line 641 "const_prop.m"
            }
#line 641 "const_prop.m"
        }
#line 641 "const_prop.m"
  }
#line 641 "const_prop.m"
}

#line 641 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 641 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 641 "const_prop.m"
{
#line 641 "const_prop.m"
  {
#line 641 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 641 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_7 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 641 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_8 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 641 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_7 == transform_hlds__const_prop__CastY_8);
#line 641 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 641 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 641 "const_prop.m"
    else
#line 641 "const_prop.m"
      if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 641 "const_prop.m"
        {
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_4_4;

#line 641 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 641 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 641 "const_prop.m"
            {
#line 641 "const_prop.m"
              transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 6184 "transform_hlds.const_prop.c"
              {
#line 6186 "transform_hlds.const_prop.c"
                return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__V_3_3, transform_hlds__const_prop__V_4_4);
              }
#line 641 "const_prop.m"
            }
#line 641 "const_prop.m"
        }
#line 641 "const_prop.m"
      else
#line 641 "const_prop.m"
        {
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_5_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
#line 641 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_6_6;

#line 641 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 641 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 641 "const_prop.m"
            {
#line 641 "const_prop.m"
              transform_hlds__const_prop__V_6_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
#line 6210 "transform_hlds.const_prop.c"
              {
#line 6212 "transform_hlds.const_prop.c"
                return transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_6_6);
              }
#line 641 "const_prop.m"
            }
#line 641 "const_prop.m"
        }
#line 641 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 641 "const_prop.m"
  }
#line 641 "const_prop.m"
}

#line 72 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0(
#line 72 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 72 "const_prop.m"
{
#line 72 "const_prop.m"
  {
#line 72 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 72 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 72 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 72 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 72 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 6250 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "const_prop.m"
    else
#line 72 "const_prop.m"
      {
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 2)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_10_10;

#line 72 "const_prop.m"
        {
#line 72 "const_prop.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], &transform_hlds__const_prop__V_10_10, ((MR_Box) (transform_hlds__const_prop__V_4_4)), ((MR_Box) (transform_hlds__const_prop__V_7_7)));
        }
#line 6276 "transform_hlds.const_prop.c"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_10_10 == (MR_Integer) 0);
#line 72 "const_prop.m"
        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 72 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 72 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_10_10;
#line 72 "const_prop.m"
        else
#line 72 "const_prop.m"
          {
#line 72 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11;

#line 72 "const_prop.m"
            {
#line 72 "const_prop.m"
              parse_tree__prog_data____Compare____mer_type_0_0(&transform_hlds__const_prop__V_11_11, transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
            }
#line 6296 "transform_hlds.const_prop.c"
            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_11_11 == (MR_Integer) 0);
#line 72 "const_prop.m"
            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 72 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 72 "const_prop.m"
              *transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__V_11_11;
#line 72 "const_prop.m"
            else
#line 72 "const_prop.m"
              {
#line 72 "const_prop.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_6_6, transform_hlds__const_prop__V_9_9);
#line 72 "const_prop.m"
                return;
              }
#line 72 "const_prop.m"
          }
#line 72 "const_prop.m"
      }
#line 72 "const_prop.m"
  }
#line 72 "const_prop.m"
}

#line 72 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0(
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 72 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 72 "const_prop.m"
{
#line 72 "const_prop.m"
  {
#line 72 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 72 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_9 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 72 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_10 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 72 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_9 == transform_hlds__const_prop__CastY_10);
#line 72 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 72 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 72 "const_prop.m"
    else
#line 72 "const_prop.m"
      {
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 2)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 2)));

#line 6363 "transform_hlds.const_prop.c"
        {
#line 6365 "transform_hlds.const_prop.c"
          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_3_3)), ((MR_Box) (transform_hlds__const_prop__V_6_6)));
        }
#line 72 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 72 "const_prop.m"
          {
#line 6372 "transform_hlds.const_prop.c"
            {
#line 6374 "transform_hlds.const_prop.c"
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__V_4_4, transform_hlds__const_prop__V_7_7);
            }
#line 72 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 6379 "transform_hlds.const_prop.c"
              {
#line 6381 "transform_hlds.const_prop.c"
                return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_8_8);
              }
#line 72 "const_prop.m"
          }
#line 72 "const_prop.m"
      }
#line 72 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 72 "const_prop.m"
  }
#line 72 "const_prop.m"
}

#line 716 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 716 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 716 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 716 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14)
#line 716 "const_prop.m"
{
#line 719 "const_prop.m"
  {
#line 719 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_11;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_12;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 719 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32;
#line 748 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 748 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 748 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_30_30;
#line 723 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 723 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;

#line 748 "const_prop.m"
    {
#line 748 "const_prop.m"
      hlds__hlds_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_31_31, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__V_32_32);
    }
#line 748 "const_prop.m"
    *transform_hlds__const_prop__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)));
#line 748 "const_prop.m"
    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 721 "const_prop.m"
    {
#line 721 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 722 "const_prop.m"
    {
#line 722 "const_prop.m"
      transform_hlds__const_prop__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "const_prop.m"
    }
#line 722 "const_prop.m"
    {
#line 722 "const_prop.m"
      transform_hlds__const_prop__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 0) = ((MR_Box) (transform_hlds__const_prop__V_18_18));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "const_prop.m"
    }
#line 722 "const_prop.m"
    {
#line 722 "const_prop.m"
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 722 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__V_17_17));
#line 722 "const_prop.m"
    }
#line 723 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 723 "const_prop.m"
    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 723 "const_prop.m"
    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 723 "const_prop.m"
    {
#line 723 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_21_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    }
#line 724 "const_prop.m"
    {
#line 724 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    }
#line 725 "const_prop.m"
    {
#line 725 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
#line 725 "const_prop.m"
      return;
    }
#line 719 "const_prop.m"
  }
#line 716 "const_prop.m"
}

#line 705 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 705 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 705 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 705 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13)
#line 705 "const_prop.m"
{
#line 708 "const_prop.m"
  {
#line 708 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_11;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_14_14;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__InputArgMode_30;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__UniMode_31;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 708 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 731 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 731 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 711 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 711 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 711 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 711 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;

#line 734 "const_prop.m"
    {
#line 734 "const_prop.m"
      transform_hlds__const_prop__OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 734 "const_prop.m"
    }
#line 735 "const_prop.m"
    {
#line 735 "const_prop.m"
      transform_hlds__const_prop__InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 0) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 735 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 735 "const_prop.m"
    }
#line 736 "const_prop.m"
    {
#line 736 "const_prop.m"
      transform_hlds__const_prop__UniMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 736 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
#line 736 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
#line 736 "const_prop.m"
    }
#line 738 "const_prop.m"
    {
#line 738 "const_prop.m"
      transform_hlds__const_prop__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_37_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 738 "const_prop.m"
    }
#line 738 "const_prop.m"
    {
#line 738 "const_prop.m"
      transform_hlds__const_prop__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 738 "const_prop.m"
    }
#line 738 "const_prop.m"
    {
#line 738 "const_prop.m"
      MR_Word base;
#line 738 "const_prop.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 738 "const_prop.m"
      *transform_hlds__const_prop__Goal_8 = base;
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__V_37_37));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UniMode_31));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__V_38_38));
#line 738 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
#line 738 "const_prop.m"
    }
#line 710 "const_prop.m"
    {
#line 710 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 711 "const_prop.m"
    transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 711 "const_prop.m"
    {
#line 711 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_14_14, transform_hlds__const_prop__V_15_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    }
#line 713 "const_prop.m"
    {
#line 713 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 714 "const_prop.m"
    {
#line 714 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
#line 714 "const_prop.m"
      return;
    }
#line 708 "const_prop.m"
  }
#line 705 "const_prop.m"
}

#line 677 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 677 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 677 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 677 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6)
#line 677 "const_prop.m"
{
#line 684 "const_prop.m"
  {
#line 684 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 681 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

#line 681 "const_prop.m"
    {
#line 681 "const_prop.m"
      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_15_15)), ((MR_Box) (transform_hlds__const_prop__V_34_34)));
    }
#line 684 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 683 "const_prop.m"
      {
#line 683 "const_prop.m"
        *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 683 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 683 "const_prop.m"
      }
#line 684 "const_prop.m"
    else
#line 699 "const_prop.m"
      {
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__XCtor_9;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__XArgVars_10;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__YCtor_13;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__YArgVars_14;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_19_19;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_22_22;
#line 699 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_23_23;
#line 685 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 685 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 685 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7;
#line 685 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8;
#line 686 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_31_31;
#line 686 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_32_32;
#line 686 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_11_11;
#line 686 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_12_12;
#line 688 "const_prop.m"
        MR_Word transform_hlds__const_prop__TypeInfo_38_38;

#line 685 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 685 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 685 "const_prop.m"
          {
#line 685 "const_prop.m"
            transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 1)));
#line 685 "const_prop.m"
            transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 2)));
#line 685 "const_prop.m"
            transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 3)));
#line 685 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 685 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 685 "const_prop.m"
              {
#line 685 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 0)));
#line 685 "const_prop.m"
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 1)));
#line 685 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 699 "const_prop.m"
                  {
#line 685 "const_prop.m"
                    transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 0)));
#line 685 "const_prop.m"
                    transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 1)));
#line 686 "const_prop.m"
                    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 686 "const_prop.m"
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 686 "const_prop.m"
                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
#line 686 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 686 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 686 "const_prop.m"
                      {
#line 686 "const_prop.m"
                        transform_hlds__const_prop__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 686 "const_prop.m"
                        transform_hlds__const_prop__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 2)));
#line 686 "const_prop.m"
                        transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 3)));
#line 686 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 686 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 686 "const_prop.m"
                          {
#line 686 "const_prop.m"
                            transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 686 "const_prop.m"
                            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 686 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 699 "const_prop.m"
                              {
#line 686 "const_prop.m"
                                transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)));
#line 686 "const_prop.m"
                                transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 688 "const_prop.m"
                                {
#line 688 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                }
#line 688 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 688 "const_prop.m"
                                  {
#line 6855 "transform_hlds.const_prop.c"
                                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 688 "const_prop.m"
                                    {
#line 688 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                                    }
#line 688 "const_prop.m"
                                  }
#line 690 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 689 "const_prop.m"
                                  {
#line 689 "const_prop.m"
                                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 689 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 689 "const_prop.m"
                                  }
#line 690 "const_prop.m"
                                else
#line 696 "const_prop.m"
                                  {
#line 691 "const_prop.m"
                                    {
#line 691 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                    }
#line 691 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 692 "const_prop.m"
                                    if (!(transform_hlds__const_prop__succeeded))
#line 692 "const_prop.m"
                                      {
#line 692 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 692 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_24_24;
#line 692 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_35_35;

#line 692 "const_prop.m"
                                        {
#line 692 "const_prop.m"
                                          transform_hlds__const_prop__V_24_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                                        }
#line 692 "const_prop.m"
                                        {
#line 692 "const_prop.m"
                                          transform_hlds__const_prop__V_35_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                                        }
#line 692 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == transform_hlds__const_prop__V_35_35);
#line 692 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 692 "const_prop.m"
                                      }
#line 696 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 696 "const_prop.m"
                                      {
#line 695 "const_prop.m"
                                        *transform_hlds__const_prop__Result_6 = (MR_Integer) 0;
#line 695 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 696 "const_prop.m"
                                      }
#line 696 "const_prop.m"
                                  }
#line 699 "const_prop.m"
                              }
#line 686 "const_prop.m"
                          }
#line 686 "const_prop.m"
                      }
#line 699 "const_prop.m"
                  }
#line 685 "const_prop.m"
              }
#line 685 "const_prop.m"
          }
#line 699 "const_prop.m"
      }
#line 684 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 684 "const_prop.m"
  }
#line 677 "const_prop.m"
}

#line 645 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 645 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 645 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 645 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 645 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 645 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 645 "const_prop.m"
{
#line 649 "const_prop.m"
  while (MR_TRUE)
#line 649 "const_prop.m"
    {
#line 649 "const_prop.m"
      /* tailcall optimized into a loop */
#line 649 "const_prop.m"
      {
#line 649 "const_prop.m"
        MR_bool transform_hlds__const_prop__succeeded;

#line 649 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 649 "const_prop.m"
          {
#line 649 "const_prop.m"
            MR_String transform_hlds__const_prop__V_8_8;
#line 649 "const_prop.m"
            MR_String transform_hlds__const_prop__V_9_9;
#line 649 "const_prop.m"
            MR_Integer transform_hlds__const_prop__V_10_10;

#line 649 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
#line 649 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 649 "const_prop.m"
              {
#line 649 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 649 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 649 "const_prop.m"
                  {
#line 650 "const_prop.m"
                    transform_hlds__const_prop__V_8_8 = (MR_String) "private_builtin";
#line 650 "const_prop.m"
                    transform_hlds__const_prop__V_9_9 = (MR_String) "typed_unify";
#line 650 "const_prop.m"
                    transform_hlds__const_prop__V_10_10 = (MR_Integer) 1;
#line 650 "const_prop.m"
                    /* direct tailcall eliminated */
#line 650 "const_prop.m"
                    {
#line 650 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__1__tmp_copy_1 = transform_hlds__const_prop__V_8_8;
#line 650 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__2__tmp_copy_2 = transform_hlds__const_prop__V_9_9;
#line 650 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__HeadVar__3__tmp_copy_3 = transform_hlds__const_prop__V_10_10;

#line 650 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__HeadVar__3__tmp_copy_3;
#line 650 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__HeadVar__2__tmp_copy_2;
#line 650 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__HeadVar__1__tmp_copy_1;
#line 650 "const_prop.m"
                    }
#line 650 "const_prop.m"
                    continue;
#line 649 "const_prop.m"
                  }
#line 649 "const_prop.m"
              }
#line 649 "const_prop.m"
          }
#line 649 "const_prop.m"
        else
#line 649 "const_prop.m"
          if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 652 "const_prop.m"
            {
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__TypeOfX_14;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__TypeOfY_15;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__X_16;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__Y_17;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_19_19;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_20_20;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_21_21;
#line 652 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_22_22;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__TypeInfo_36_57;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_36_36;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_55_55;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_46_46;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_47_47;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_48_48;
#line 681 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_49_49;

#line 652 "const_prop.m"
              transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 652 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 652 "const_prop.m"
                {
#line 656 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 1);
#line 652 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 652 "const_prop.m"
                    {
#line 657 "const_prop.m"
                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 657 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
                        {
#line 657 "const_prop.m"
                          transform_hlds__const_prop__TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 657 "const_prop.m"
                          transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 657 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 657 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
                            {
#line 657 "const_prop.m"
                              transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)));
#line 657 "const_prop.m"
                              transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 657 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 657 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
                                {
#line 657 "const_prop.m"
                                  transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 657 "const_prop.m"
                                  transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 657 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 657 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 657 "const_prop.m"
                                    {
#line 657 "const_prop.m"
                                      transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 657 "const_prop.m"
                                      transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 657 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 652 "const_prop.m"
                                        {
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 681 "const_prop.m"
                                          transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 7134 "transform_hlds.const_prop.c"
                                          transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
#line 681 "const_prop.m"
                                          {
#line 681 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__V_36_36)), ((MR_Box) (transform_hlds__const_prop__V_55_55)));
                                          }
#line 7141 "transform_hlds.const_prop.c"
                                          if (transform_hlds__const_prop__succeeded)
#line 7143 "transform_hlds.const_prop.c"
                                            {
#line 7145 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_23_23;
#line 7147 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 664 "const_prop.m"
                                              {
#line 664 "const_prop.m"
                                                transform_hlds__const_prop__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "const_prop.m"
                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 664 "const_prop.m"
                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 1) = ((MR_Box) (transform_hlds__const_prop__V_24_24));
#line 664 "const_prop.m"
                                              }
#line 664 "const_prop.m"
                                              {
#line 664 "const_prop.m"
                                                MR_Word base;
#line 664 "const_prop.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "const_prop.m"
                                                *transform_hlds__const_prop__Result_5 = base;
#line 664 "const_prop.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_23_23));
#line 664 "const_prop.m"
                                              }
#line 7172 "transform_hlds.const_prop.c"
                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 7174 "transform_hlds.const_prop.c"
                                            }
#line 7176 "transform_hlds.const_prop.c"
                                          else
#line 7178 "transform_hlds.const_prop.c"
                                            {
#line 7180 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__XCtor_30;
#line 7182 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__XArgVars_31;
#line 7184 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__YCtor_34;
#line 7186 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__YArgVars_35;
#line 7188 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 7190 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_38_38;
#line 7192 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_39_39;
#line 7194 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_40_40;
#line 7196 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_41_41;
#line 7198 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_42_42;
#line 7200 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_43_43;
#line 7202 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__V_44_44;
#line 7204 "transform_hlds.const_prop.c"
                                              MR_Word transform_hlds__const_prop__Result0_65;
#line 685 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 685 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 685 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_28_28;
#line 685 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_29_29;
#line 686 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_52_52;
#line 686 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_53_53;
#line 686 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_32_32;
#line 686 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__V_33_33;
#line 688 "const_prop.m"
                                              MR_Word transform_hlds__const_prop__TypeInfo_38_59;

#line 685 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 685 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 685 "const_prop.m"
                                                {
#line 685 "const_prop.m"
                                                  transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 685 "const_prop.m"
                                                  transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 685 "const_prop.m"
                                                  transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 685 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 685 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 685 "const_prop.m"
                                                    {
#line 685 "const_prop.m"
                                                      transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 0)));
#line 685 "const_prop.m"
                                                      transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 1)));
#line 685 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 7249 "transform_hlds.const_prop.c"
                                                      if (transform_hlds__const_prop__succeeded)
#line 7251 "transform_hlds.const_prop.c"
                                                        {
#line 685 "const_prop.m"
                                                          transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));
#line 685 "const_prop.m"
                                                          transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 686 "const_prop.m"
                                                          transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 686 "const_prop.m"
                                                          transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 686 "const_prop.m"
                                                          transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 686 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 686 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 686 "const_prop.m"
                                                            {
#line 686 "const_prop.m"
                                                              transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
#line 686 "const_prop.m"
                                                              transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 2)));
#line 686 "const_prop.m"
                                                              transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 3)));
#line 686 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 686 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 686 "const_prop.m"
                                                                {
#line 686 "const_prop.m"
                                                                  transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
#line 686 "const_prop.m"
                                                                  transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
#line 686 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 7287 "transform_hlds.const_prop.c"
                                                                  if (transform_hlds__const_prop__succeeded)
#line 7289 "transform_hlds.const_prop.c"
                                                                    {
#line 686 "const_prop.m"
                                                                      transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)));
#line 686 "const_prop.m"
                                                                      transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
#line 688 "const_prop.m"
                                                                      {
#line 688 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                      }
#line 688 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 688 "const_prop.m"
                                                                        {
#line 7304 "transform_hlds.const_prop.c"
                                                                          transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 688 "const_prop.m"
                                                                          {
#line 688 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                                                          }
#line 688 "const_prop.m"
                                                                        }
#line 690 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 689 "const_prop.m"
                                                                        {
#line 689 "const_prop.m"
                                                                          transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
#line 689 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 689 "const_prop.m"
                                                                        }
#line 690 "const_prop.m"
                                                                      else
#line 696 "const_prop.m"
                                                                        {
#line 691 "const_prop.m"
                                                                          {
#line 691 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                          }
#line 691 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 692 "const_prop.m"
                                                                          if (!(transform_hlds__const_prop__succeeded))
#line 692 "const_prop.m"
                                                                            {
#line 692 "const_prop.m"
                                                                              MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 692 "const_prop.m"
                                                                              MR_Integer transform_hlds__const_prop__V_45_45;
#line 692 "const_prop.m"
                                                                              MR_Integer transform_hlds__const_prop__V_56_56;

#line 692 "const_prop.m"
                                                                              {
#line 692 "const_prop.m"
                                                                                transform_hlds__const_prop__V_45_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                                                              }
#line 692 "const_prop.m"
                                                                              {
#line 692 "const_prop.m"
                                                                                transform_hlds__const_prop__V_56_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                                                              }
#line 692 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == transform_hlds__const_prop__V_56_56);
#line 692 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 692 "const_prop.m"
                                                                            }
#line 696 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 696 "const_prop.m"
                                                                            {
#line 695 "const_prop.m"
                                                                              transform_hlds__const_prop__Result0_65 = (MR_Integer) 0;
#line 695 "const_prop.m"
                                                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 696 "const_prop.m"
                                                                            }
#line 696 "const_prop.m"
                                                                        }
#line 7373 "transform_hlds.const_prop.c"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 7375 "transform_hlds.const_prop.c"
                                                                        {
#line 662 "const_prop.m"
                                                                          if ((transform_hlds__const_prop__Result0_65 == (MR_Integer) 0))
#line 661 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "const_prop.m"
                                                                          else
#line 663 "const_prop.m"
                                                                            {
#line 663 "const_prop.m"
                                                                              MR_Word transform_hlds__const_prop__V_61_61;
#line 663 "const_prop.m"
                                                                              MR_Word transform_hlds__const_prop__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 664 "const_prop.m"
                                                                              {
#line 664 "const_prop.m"
                                                                                transform_hlds__const_prop__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 664 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 1) = ((MR_Box) (transform_hlds__const_prop__V_62_62));
#line 664 "const_prop.m"
                                                                              }
#line 664 "const_prop.m"
                                                                              {
#line 664 "const_prop.m"
                                                                                MR_Word base;
#line 664 "const_prop.m"
                                                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "const_prop.m"
                                                                                *transform_hlds__const_prop__Result_5 = base;
#line 664 "const_prop.m"
                                                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_61_61));
#line 664 "const_prop.m"
                                                                              }
#line 663 "const_prop.m"
                                                                            }
#line 662 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 7416 "transform_hlds.const_prop.c"
                                                                        }
#line 7418 "transform_hlds.const_prop.c"
                                                                    }
#line 686 "const_prop.m"
                                                                }
#line 686 "const_prop.m"
                                                            }
#line 7424 "transform_hlds.const_prop.c"
                                                        }
#line 685 "const_prop.m"
                                                    }
#line 685 "const_prop.m"
                                                }
#line 7430 "transform_hlds.const_prop.c"
                                            }
#line 652 "const_prop.m"
                                        }
#line 657 "const_prop.m"
                                    }
#line 657 "const_prop.m"
                                }
#line 657 "const_prop.m"
                            }
#line 657 "const_prop.m"
                        }
#line 652 "const_prop.m"
                    }
#line 652 "const_prop.m"
                }
#line 652 "const_prop.m"
            }
#line 649 "const_prop.m"
          else
#line 649 "const_prop.m"
            transform_hlds__const_prop__succeeded = MR_FALSE;
#line 649 "const_prop.m"
        return transform_hlds__const_prop__succeeded;
#line 649 "const_prop.m"
      }
#line 649 "const_prop.m"
      break;
#line 649 "const_prop.m"
    }
#line 645 "const_prop.m"
}

#line 530 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 530 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 530 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 530 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 530 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 530 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 530 "const_prop.m"
{
#line 535 "const_prop.m"
  {
#line 535 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_246_246;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_247_247;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_252_252;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_253_253;

#line 535 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
      {
#line 575 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 575 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 575 "const_prop.m"
          {
#line 575 "const_prop.m"
            transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 575 "const_prop.m"
            transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 575 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 1)));
#line 575 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 575 "const_prop.m"
              {
#line 575 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)));
#line 575 "const_prop.m"
                transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 535 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "int") == 0))
#line 535 "const_prop.m"
                  {
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_263_263;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_269_269;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_275_275;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_280_280;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_281_281;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_284_284;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_285_285;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_288_288;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_289_289;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_292_292;
#line 535 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_293_293;
#line 535 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_295_295;
#line 535 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_297_297;
#line 537 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 537 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 538 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_264_264;
#line 538 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_265_265;
#line 537 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_270_270;
#line 537 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_271_271;
#line 538 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_276_276;
#line 538 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_277_277;

#line 536 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                      {
#line 538 "const_prop.m"
                        transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 538 "const_prop.m"
                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 538 "const_prop.m"
                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 537 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 537 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 537 "const_prop.m"
                          {
#line 537 "const_prop.m"
                            transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
#line 537 "const_prop.m"
                            transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
#line 537 "const_prop.m"
                            transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
#line 538 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 538 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 538 "const_prop.m"
                              {
#line 538 "const_prop.m"
                                transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
#line 538 "const_prop.m"
                                transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
#line 538 "const_prop.m"
                                transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
#line 537 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 537 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 537 "const_prop.m"
                                  {
#line 537 "const_prop.m"
                                    transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 0)));
#line 537 "const_prop.m"
                                    transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 1)));
#line 538 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_275_275)) == (MR_mktag((MR_Integer) 1)));
#line 538 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 538 "const_prop.m"
                                      {
#line 538 "const_prop.m"
                                        transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 0)));
#line 538 "const_prop.m"
                                        transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 1)));
#line 537 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                          {
#line 537 "const_prop.m"
                                            transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 0)));
#line 537 "const_prop.m"
                                            transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 1)));
#line 538 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                              {
#line 538 "const_prop.m"
                                                transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
#line 538 "const_prop.m"
                                                transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 537 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                                  {
#line 537 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 537 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 537 "const_prop.m"
                                                      {
#line 537 "const_prop.m"
                                                        transform_hlds__const_prop__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 538 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                                          {
#line 538 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_293_293)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 538 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 538 "const_prop.m"
                                                              {
#line 538 "const_prop.m"
                                                                transform_hlds__const_prop__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 541 "const_prop.m"
                                                                  {
#line 539 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 < transform_hlds__const_prop__V_297_297);
#line 541 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 540 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 541 "const_prop.m"
                                                                    else
#line 542 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 541 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 541 "const_prop.m"
                                                                  }
#line 535 "const_prop.m"
                                                                else
#line 535 "const_prop.m"
                                                                  if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 559 "const_prop.m"
                                                                    {
#line 557 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 > transform_hlds__const_prop__V_297_297);
#line 559 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 558 "const_prop.m"
                                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 559 "const_prop.m"
                                                                      else
#line 560 "const_prop.m"
                                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 559 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 559 "const_prop.m"
                                                                    }
#line 535 "const_prop.m"
                                                                  else
#line 535 "const_prop.m"
                                                                    if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 550 "const_prop.m"
                                                                      {
#line 548 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 <= transform_hlds__const_prop__V_297_297);
#line 550 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 549 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 550 "const_prop.m"
                                                                        else
#line 551 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 550 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 550 "const_prop.m"
                                                                      }
#line 535 "const_prop.m"
                                                                    else
#line 535 "const_prop.m"
                                                                      if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 568 "const_prop.m"
                                                                        {
#line 566 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 >= transform_hlds__const_prop__V_297_297);
#line 568 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 567 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 568 "const_prop.m"
                                                                          else
#line 569 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 568 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 568 "const_prop.m"
                                                                        }
#line 535 "const_prop.m"
                                                                      else
#line 535 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 538 "const_prop.m"
                                                              }
#line 535 "const_prop.m"
                                                          }
#line 537 "const_prop.m"
                                                      }
#line 535 "const_prop.m"
                                                  }
#line 535 "const_prop.m"
                                              }
#line 535 "const_prop.m"
                                          }
#line 538 "const_prop.m"
                                      }
#line 537 "const_prop.m"
                                  }
#line 538 "const_prop.m"
                              }
#line 537 "const_prop.m"
                          }
#line 535 "const_prop.m"
                      }
#line 535 "const_prop.m"
                  }
#line 535 "const_prop.m"
                else
#line 535 "const_prop.m"
                  if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "float") == 0))
#line 535 "const_prop.m"
                    {
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_260_260;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_266_266;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_272_272;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_278_278;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_279_279;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_282_282;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_283_283;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_286_286;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_287_287;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_290_290;
#line 535 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_291_291;
#line 535 "const_prop.m"
                      MR_Float transform_hlds__const_prop__V_294_294;
#line 535 "const_prop.m"
                      MR_Float transform_hlds__const_prop__V_296_296;
#line 576 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 576 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 577 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_261_261;
#line 577 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_262_262;
#line 576 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_267_267;
#line 576 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_268_268;
#line 577 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_273_273;
#line 577 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_274_274;

#line 575 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                        {
#line 577 "const_prop.m"
                          transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 577 "const_prop.m"
                          transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 577 "const_prop.m"
                          transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 576 "const_prop.m"
                          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 576 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 576 "const_prop.m"
                            {
#line 576 "const_prop.m"
                              transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 576 "const_prop.m"
                              transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 2)));
#line 576 "const_prop.m"
                              transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 3)));
#line 577 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 577 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 577 "const_prop.m"
                                {
#line 577 "const_prop.m"
                                  transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 577 "const_prop.m"
                                  transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 2)));
#line 577 "const_prop.m"
                                  transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 3)));
#line 576 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 576 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 576 "const_prop.m"
                                    {
#line 576 "const_prop.m"
                                      transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 576 "const_prop.m"
                                      transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 577 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 577 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 577 "const_prop.m"
                                        {
#line 577 "const_prop.m"
                                          transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 577 "const_prop.m"
                                          transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 576 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_278_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                            {
#line 576 "const_prop.m"
                                              transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 576 "const_prop.m"
                                              transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 577 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                                {
#line 577 "const_prop.m"
                                                  transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 577 "const_prop.m"
                                                  transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 576 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                                  if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                                    {
#line 576 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_287_287)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 576 "const_prop.m"
                                                      if (transform_hlds__const_prop__succeeded)
#line 576 "const_prop.m"
                                                        {
#line 576 "const_prop.m"
                                                          transform_hlds__const_prop__V_294_294 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
#line 577 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "const_prop.m"
                                                          if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                                            {
#line 577 "const_prop.m"
                                                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 577 "const_prop.m"
                                                              if (transform_hlds__const_prop__succeeded)
#line 577 "const_prop.m"
                                                                {
#line 577 "const_prop.m"
                                                                  transform_hlds__const_prop__V_296_296 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                                                  if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 580 "const_prop.m"
                                                                    {
#line 578 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 < transform_hlds__const_prop__V_296_296);
#line 580 "const_prop.m"
                                                                      if (transform_hlds__const_prop__succeeded)
#line 579 "const_prop.m"
                                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 580 "const_prop.m"
                                                                      else
#line 581 "const_prop.m"
                                                                        *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 580 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 580 "const_prop.m"
                                                                    }
#line 535 "const_prop.m"
                                                                  else
#line 535 "const_prop.m"
                                                                    if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 598 "const_prop.m"
                                                                      {
#line 596 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 > transform_hlds__const_prop__V_296_296);
#line 598 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 597 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 598 "const_prop.m"
                                                                        else
#line 599 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 598 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 598 "const_prop.m"
                                                                      }
#line 535 "const_prop.m"
                                                                    else
#line 535 "const_prop.m"
                                                                      if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 589 "const_prop.m"
                                                                        {
#line 587 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 <= transform_hlds__const_prop__V_296_296);
#line 589 "const_prop.m"
                                                                          if (transform_hlds__const_prop__succeeded)
#line 588 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 589 "const_prop.m"
                                                                          else
#line 590 "const_prop.m"
                                                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 589 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 589 "const_prop.m"
                                                                        }
#line 535 "const_prop.m"
                                                                      else
#line 535 "const_prop.m"
                                                                        if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 607 "const_prop.m"
                                                                          {
#line 605 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 >= transform_hlds__const_prop__V_296_296);
#line 607 "const_prop.m"
                                                                            if (transform_hlds__const_prop__succeeded)
#line 606 "const_prop.m"
                                                                              *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 607 "const_prop.m"
                                                                            else
#line 608 "const_prop.m"
                                                                              *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 607 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 607 "const_prop.m"
                                                                          }
#line 535 "const_prop.m"
                                                                        else
#line 535 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 577 "const_prop.m"
                                                                }
#line 535 "const_prop.m"
                                                            }
#line 576 "const_prop.m"
                                                        }
#line 535 "const_prop.m"
                                                    }
#line 535 "const_prop.m"
                                                }
#line 535 "const_prop.m"
                                            }
#line 577 "const_prop.m"
                                        }
#line 576 "const_prop.m"
                                    }
#line 577 "const_prop.m"
                                }
#line 576 "const_prop.m"
                            }
#line 535 "const_prop.m"
                        }
#line 535 "const_prop.m"
                    }
#line 535 "const_prop.m"
                  else
#line 535 "const_prop.m"
                    if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 610 "const_prop.m"
                      {
#line 610 "const_prop.m"
                        MR_Word transform_hlds__const_prop__X_203;
#line 610 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Y_204;
#line 610 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Result0_205;
#line 610 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_208_208;
#line 610 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_209_209;

#line 610 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 610 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 610 "const_prop.m"
                          {
#line 615 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 615 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 615 "const_prop.m"
                              {
#line 615 "const_prop.m"
                                transform_hlds__const_prop__X_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)));
#line 615 "const_prop.m"
                                transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 615 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
#line 615 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 615 "const_prop.m"
                                  {
#line 615 "const_prop.m"
                                    transform_hlds__const_prop__Y_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
#line 615 "const_prop.m"
                                    transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 615 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 610 "const_prop.m"
                                      {
#line 616 "const_prop.m"
                                        {
#line 616 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__V_247_247, transform_hlds__const_prop__V_253_253, &transform_hlds__const_prop__Result0_205);
                                        }
#line 610 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 620 "const_prop.m"
                                          {
#line 620 "const_prop.m"
                                            if ((transform_hlds__const_prop__Result0_205 == (MR_Integer) 0))
#line 618 "const_prop.m"
                                              {
#line 618 "const_prop.m"
                                                *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 618 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 618 "const_prop.m"
                                              }
#line 620 "const_prop.m"
                                            else
#line 621 "const_prop.m"
                                              {
#line 621 "const_prop.m"
                                                return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_203, transform_hlds__const_prop__Y_204, transform_hlds__const_prop__Result_5);
                                              }
#line 620 "const_prop.m"
                                          }
#line 610 "const_prop.m"
                                      }
#line 615 "const_prop.m"
                                  }
#line 615 "const_prop.m"
                              }
#line 610 "const_prop.m"
                          }
#line 610 "const_prop.m"
                      }
#line 535 "const_prop.m"
                    else
#line 535 "const_prop.m"
                      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 575 "const_prop.m"
              }
#line 575 "const_prop.m"
          }
#line 535 "const_prop.m"
      }
#line 535 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 535 "const_prop.m"
  }
#line 530 "const_prop.m"
}

#line 197 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 197 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_8,
#line 197 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_9,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_10,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 197 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 197 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 197 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 197 "const_prop.m"
{
#line 202 "const_prop.m"
  {
#line 202 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_9 == (MR_Integer) 0);
#line 202 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_14;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_92_92;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_95_95;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_98_98;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_99_99;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_100_100;
#line 202 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_101_101;
#line 202 "const_prop.m"
    MR_Integer transform_hlds__const_prop__V_102_102;
#line 206 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_93_93;
#line 206 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_94_94;
#line 206 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_96_96;
#line 206 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_97_97;

#line 202 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 202 "const_prop.m"
      {
#line 206 "const_prop.m"
        transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 206 "const_prop.m"
        transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 206 "const_prop.m"
        transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 206 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_92_92)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_92_92, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 206 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 206 "const_prop.m"
          {
#line 206 "const_prop.m"
            transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_92_92, (MR_Integer) 1)));
#line 206 "const_prop.m"
            transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_92_92, (MR_Integer) 2)));
#line 206 "const_prop.m"
            transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_92_92, (MR_Integer) 3)));
#line 206 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 206 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 206 "const_prop.m"
              {
#line 206 "const_prop.m"
                transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_95_95, (MR_Integer) 0)));
#line 206 "const_prop.m"
                transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_95_95, (MR_Integer) 1)));
#line 206 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 202 "const_prop.m"
                  {
#line 206 "const_prop.m"
                    transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_99_99, (MR_Integer) 0)));
#line 206 "const_prop.m"
                    transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_99_99, (MR_Integer) 1)));
#line 206 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 202 "const_prop.m"
                      {
#line 206 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_101_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_101_101, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 206 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 206 "const_prop.m"
                          {
#line 206 "const_prop.m"
                            transform_hlds__const_prop__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_101_101, (MR_Integer) 1)));
#line 209 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "+") == 0))
#line 204 "const_prop.m"
                              {
#line 207 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 208 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_102_102;
#line 204 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 204 "const_prop.m"
                              }
#line 209 "const_prop.m"
                            else
#line 209 "const_prop.m"
                              if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "-") == 0))
#line 210 "const_prop.m"
                                {
#line 213 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 214 "const_prop.m"
                                  transform_hlds__const_prop__OutputArgVal_14 = ((MR_Integer) 0 - transform_hlds__const_prop__V_102_102);
#line 210 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = MR_TRUE;
#line 210 "const_prop.m"
                                }
#line 209 "const_prop.m"
                              else
#line 209 "const_prop.m"
                                if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "\\") == 0))
#line 216 "const_prop.m"
                                  {
#line 219 "const_prop.m"
                                    *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 220 "const_prop.m"
                                    transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__V_102_102);
#line 216 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 216 "const_prop.m"
                                  }
#line 209 "const_prop.m"
                                else
#line 209 "const_prop.m"
                                  if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "rem_bits_per_int") == 0))
#line 243 "const_prop.m"
                                    {
#line 245 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CrossCompiling_10 == (MR_Integer) 0);
#line 243 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 243 "const_prop.m"
                                        {
#line 247 "const_prop.m"
                                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 248 "const_prop.m"
                                          {
#line 248 "const_prop.m"
                                            transform_hlds__const_prop__OutputArgVal_14 = mercury__int__rem_bits_per_int_1_f_0(transform_hlds__const_prop__V_102_102);
                                          }
#line 248 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 243 "const_prop.m"
                                        }
#line 243 "const_prop.m"
                                    }
#line 209 "const_prop.m"
                                  else
#line 209 "const_prop.m"
                                    if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "quot_bits_per_int") == 0))
#line 229 "const_prop.m"
                                      {
#line 231 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CrossCompiling_10 == (MR_Integer) 0);
#line 229 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 229 "const_prop.m"
                                          {
#line 233 "const_prop.m"
                                            *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 234 "const_prop.m"
                                            {
#line 234 "const_prop.m"
                                              transform_hlds__const_prop__OutputArgVal_14 = mercury__int__quot_bits_per_int_1_f_0(transform_hlds__const_prop__V_102_102);
                                            }
#line 234 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 229 "const_prop.m"
                                          }
#line 229 "const_prop.m"
                                      }
#line 209 "const_prop.m"
                                    else
#line 209 "const_prop.m"
                                      if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "times_bits_per_int") == 0))
#line 236 "const_prop.m"
                                        {
#line 238 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CrossCompiling_10 == (MR_Integer) 0);
#line 236 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 236 "const_prop.m"
                                            {
#line 240 "const_prop.m"
                                              *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 241 "const_prop.m"
                                              {
#line 241 "const_prop.m"
                                                transform_hlds__const_prop__OutputArgVal_14 = mercury__int__times_bits_per_int_1_f_0(transform_hlds__const_prop__V_102_102);
                                              }
#line 241 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = MR_TRUE;
#line 236 "const_prop.m"
                                            }
#line 236 "const_prop.m"
                                        }
#line 209 "const_prop.m"
                                      else
#line 209 "const_prop.m"
                                        if ((strcmp(transform_hlds__const_prop__ProcName_8, (MR_String) "floor_to_multiple_of_bits_per_int") == 0))
#line 222 "const_prop.m"
                                          {
#line 224 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CrossCompiling_10 == (MR_Integer) 0);
#line 222 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 222 "const_prop.m"
                                              {
#line 226 "const_prop.m"
                                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 227 "const_prop.m"
                                                {
#line 227 "const_prop.m"
                                                  transform_hlds__const_prop__OutputArgVal_14 = mercury__int__floor_to_multiple_of_bits_per_int_1_f_0(transform_hlds__const_prop__V_102_102);
                                                }
#line 227 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 222 "const_prop.m"
                                              }
#line 222 "const_prop.m"
                                          }
#line 209 "const_prop.m"
                                        else
#line 209 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 202 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 202 "const_prop.m"
                              {
#line 202 "const_prop.m"
                                {
#line 202 "const_prop.m"
                                  MR_Word base;
#line 202 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 202 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 202 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
#line 202 "const_prop.m"
                                }
#line 202 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 202 "const_prop.m"
                              }
#line 206 "const_prop.m"
                          }
#line 202 "const_prop.m"
                      }
#line 202 "const_prop.m"
                  }
#line 206 "const_prop.m"
              }
#line 206 "const_prop.m"
          }
#line 202 "const_prop.m"
      }
#line 202 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 202 "const_prop.m"
  }
#line 197 "const_prop.m"
}

#line 137 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_7_p_0(
#line 137 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_8,
#line 137 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 137 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 137 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_11,
#line 137 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 137 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 137 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 137 "const_prop.m"
{
#line 143 "const_prop.m"
  {
#line 143 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 143 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_73_73;
#line 143 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_74_74;

#line 167 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 167 "const_prop.m"
      {
#line 167 "const_prop.m"
        transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 0)));
#line 167 "const_prop.m"
        transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_12, (MR_Integer) 1)));
#line 143 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__ModuleName_8, (MR_String) "int") == 0))
#line 143 "const_prop.m"
          if ((transform_hlds__const_prop__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "const_prop.m"
            {
#line 188 "const_prop.m"
              MR_Integer transform_hlds__const_prop__OutputArgVal_86;

#line 190 "const_prop.m"
              transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "bits_per_int") == 0);
#line 188 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 188 "const_prop.m"
                {
#line 191 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 188 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 188 "const_prop.m"
                    {
#line 192 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CrossCompiling_11 == (MR_Integer) 0);
#line 188 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 188 "const_prop.m"
                        {
#line 193 "const_prop.m"
                          *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__V_74_74;
#line 194 "const_prop.m"
                          {
#line 194 "const_prop.m"
                            transform_hlds__const_prop__OutputArgVal_86 = mercury__int__bits_per_int_0_f_0();
                          }
#line 188 "const_prop.m"
                          {
#line 188 "const_prop.m"
                            MR_Word base;
#line 188 "const_prop.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "const_prop.m"
                            *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 188 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 188 "const_prop.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_86));
#line 188 "const_prop.m"
                          }
#line 188 "const_prop.m"
                          transform_hlds__const_prop__succeeded = MR_TRUE;
#line 188 "const_prop.m"
                        }
#line 188 "const_prop.m"
                    }
#line 188 "const_prop.m"
                }
#line 188 "const_prop.m"
            }
#line 143 "const_prop.m"
          else
#line 143 "const_prop.m"
            {
#line 143 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 143 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));

#line 143 "const_prop.m"
              if ((transform_hlds__const_prop__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "const_prop.m"
                {
#line 155 "const_prop.m"
                  return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__CrossCompiling_11, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                }
#line 143 "const_prop.m"
              else
#line 167 "const_prop.m"
                {
#line 167 "const_prop.m"
                  MR_Word transform_hlds__const_prop__Z_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 0)));
#line 167 "const_prop.m"
                  MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_77_77, (MR_Integer) 1)));

#line 167 "const_prop.m"
                  transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 171 "const_prop.m"
                    {
#line 171 "const_prop.m"
                      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_105_110_116_95_51_95_95_91_51_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_78_78, transform_hlds__const_prop__Z_27, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
#line 167 "const_prop.m"
                }
#line 143 "const_prop.m"
            }
#line 143 "const_prop.m"
        else
#line 143 "const_prop.m"
          if ((strcmp(transform_hlds__const_prop__ModuleName_8, (MR_String) "float") == 0))
#line 143 "const_prop.m"
            {
#line 143 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_75_75;
#line 143 "const_prop.m"
              MR_Word transform_hlds__const_prop__V_76_76;

#line 167 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 167 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 167 "const_prop.m"
                {
#line 167 "const_prop.m"
                  transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 167 "const_prop.m"
                  transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 143 "const_prop.m"
                  if ((transform_hlds__const_prop__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "const_prop.m"
                    {
#line 159 "const_prop.m"
                      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_51_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                    }
#line 143 "const_prop.m"
                  else
#line 167 "const_prop.m"
                    {
#line 167 "const_prop.m"
                      MR_Word transform_hlds__const_prop__Z_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 0)));
#line 167 "const_prop.m"
                      MR_Word transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_75_75, (MR_Integer) 1)));

#line 167 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 175 "const_prop.m"
                        {
#line 175 "const_prop.m"
                          return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_51_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_76_76, transform_hlds__const_prop__Z_17, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                        }
#line 167 "const_prop.m"
                    }
#line 167 "const_prop.m"
                }
#line 143 "const_prop.m"
            }
#line 143 "const_prop.m"
          else
#line 143 "const_prop.m"
            if ((strcmp(transform_hlds__const_prop__ModuleName_8, (MR_String) "string") == 0))
#line 143 "const_prop.m"
              {
#line 143 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_79_79;
#line 143 "const_prop.m"
                MR_Word transform_hlds__const_prop__V_80_80;

#line 167 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 167 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 167 "const_prop.m"
                  {
#line 167 "const_prop.m"
                    transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 0)));
#line 167 "const_prop.m"
                    transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_73_73, (MR_Integer) 1)));
#line 143 "const_prop.m"
                    if ((transform_hlds__const_prop__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "const_prop.m"
                      {
#line 163 "const_prop.m"
                        return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_51_93_95_48_7_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                      }
#line 143 "const_prop.m"
                    else
#line 167 "const_prop.m"
                      {
#line 167 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Z_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 0)));
#line 167 "const_prop.m"
                        MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_79_79, (MR_Integer) 1)));

#line 167 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 179 "const_prop.m"
                          {
#line 179 "const_prop.m"
                            return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_51_93_95_48_8_p_0(transform_hlds__const_prop__ProcName_9, transform_hlds__const_prop__ModeNum_10, transform_hlds__const_prop__V_74_74, transform_hlds__const_prop__V_80_80, transform_hlds__const_prop__Z_47, transform_hlds__const_prop__OutputArg_13, transform_hlds__const_prop__OutputArgVal_14);
                          }
#line 167 "const_prop.m"
                      }
#line 167 "const_prop.m"
                  }
#line 143 "const_prop.m"
              }
#line 143 "const_prop.m"
            else
#line 143 "const_prop.m"
              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 167 "const_prop.m"
      }
#line 143 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 143 "const_prop.m"
  }
#line 137 "const_prop.m"
}

#line 91 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_2_8_p_0(
#line 91 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_9,
#line 91 "const_prop.m"
  MR_String transform_hlds__const_prop__Pred_10,
#line 91 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_12,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__CrossCompiling_13,
#line 91 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_14,
#line 91 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21,
#line 91 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22)
#line 91 "const_prop.m"
{
#line 102 "const_prop.m"
  {
#line 102 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 102 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArg_16;
#line 102 "const_prop.m"
    MR_Word transform_hlds__const_prop__Cons_17;

#line 98 "const_prop.m"
    {
#line 98 "const_prop.m"
      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_det_call_7_p_0(transform_hlds__const_prop__ModuleName_9, transform_hlds__const_prop__Pred_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__CrossCompiling_13, transform_hlds__const_prop__Args_12, &transform_hlds__const_prop__OutputArg_16, &transform_hlds__const_prop__Cons_17);
    }
#line 102 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 719 "const_prop.m"
      {
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta0_49;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__Inst_50;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta_51;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_55_55;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_58_58;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_59;
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 719 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69;
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 748 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_63_63;

#line 748 "const_prop.m"
        {
#line 748 "const_prop.m"
          hlds__hlds_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_68_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__V_69_69);
        }
#line 748 "const_prop.m"
        *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_69_69, (MR_Integer) 0)));
#line 748 "const_prop.m"
        transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_69_69, (MR_Integer) 1)));
#line 721 "const_prop.m"
        {
#line 721 "const_prop.m"
          transform_hlds__const_prop__Delta0_49 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
        }
#line 722 "const_prop.m"
        {
#line 722 "const_prop.m"
          transform_hlds__const_prop__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_55_55, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "const_prop.m"
        }
#line 722 "const_prop.m"
        {
#line 722 "const_prop.m"
          transform_hlds__const_prop__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_54_54, 0) = ((MR_Box) (transform_hlds__const_prop__V_55_55));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "const_prop.m"
        }
#line 722 "const_prop.m"
        {
#line 722 "const_prop.m"
          transform_hlds__const_prop__Inst_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_50, 1) = ((MR_Box) ((MR_Integer) 1));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 722 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_50, 3) = ((MR_Box) (transform_hlds__const_prop__V_54_54));
#line 722 "const_prop.m"
        }
#line 723 "const_prop.m"
        transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 723 "const_prop.m"
        transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 723 "const_prop.m"
        transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 723 "const_prop.m"
        {
#line 723 "const_prop.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_58_58, transform_hlds__const_prop__Inst_50, transform_hlds__const_prop__Delta0_49, &transform_hlds__const_prop__Delta_51);
        }
#line 724 "const_prop.m"
        {
#line 724 "const_prop.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_51, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_59);
        }
#line 725 "const_prop.m"
        {
#line 725 "const_prop.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_59, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
        }
#line 719 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 719 "const_prop.m"
      }
#line 102 "const_prop.m"
    else
#line 106 "const_prop.m"
      {
#line 106 "const_prop.m"
        MR_Word transform_hlds__const_prop__Succeeded_18;

#line 103 "const_prop.m"
        {
#line 103 "const_prop.m"
          transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_test_5_p_0(transform_hlds__const_prop__ModuleName_9, transform_hlds__const_prop__Pred_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Args_12, &transform_hlds__const_prop__Succeeded_18);
        }
#line 106 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 105 "const_prop.m"
          {
#line 754 "const_prop.m"
            if ((transform_hlds__const_prop__Succeeded_18 == (MR_Integer) 0))
#line 755 "const_prop.m"
              {
#line 755 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__hlds_goal__fail_goal_expr_0_f_0();
              }
#line 754 "const_prop.m"
            else
#line 754 "const_prop.m"
              {
#line 754 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__hlds_goal__true_goal_expr_0_f_0();
              }
#line 105 "const_prop.m"
            *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 105 "const_prop.m"
            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 105 "const_prop.m"
          }
#line 106 "const_prop.m"
        else
#line 119 "const_prop.m"
          {
#line 119 "const_prop.m"
            MR_Word transform_hlds__const_prop__Result_19;

#line 107 "const_prop.m"
            {
#line 107 "const_prop.m"
              transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_semidet_call_5_p_0(transform_hlds__const_prop__ModuleName_9, transform_hlds__const_prop__Pred_10, transform_hlds__const_prop__ModeNum_11, transform_hlds__const_prop__Args_12, &transform_hlds__const_prop__Result_19);
            }
#line 119 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 119 "const_prop.m"
              {
#line 112 "const_prop.m"
                if ((transform_hlds__const_prop__Result_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "const_prop.m"
                  {
#line 755 "const_prop.m"
                    {
#line 755 "const_prop.m"
                      *transform_hlds__const_prop__GoalExpr_14 = hlds__hlds_goal__fail_goal_expr_0_f_0();
                    }
#line 117 "const_prop.m"
                    *transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22 = transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21;
#line 116 "const_prop.m"
                  }
#line 112 "const_prop.m"
                else
#line 112 "const_prop.m"
                  {
#line 112 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Result_19, (MR_Integer) 0)));
#line 112 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 112 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));

#line 112 "const_prop.m"
                    if (((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 1))))
#line 110 "const_prop.m"
                      {
#line 110 "const_prop.m"
                        MR_Word transform_hlds__const_prop__Cons_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)));

#line 111 "const_prop.m"
                        {
#line 111 "const_prop.m"
                          transform_hlds__const_prop__make_construction_goal_5_p_0(transform_hlds__const_prop__V_42_42, transform_hlds__const_prop__Cons_32, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 110 "const_prop.m"
                      }
#line 112 "const_prop.m"
                    else
#line 113 "const_prop.m"
                      {
#line 113 "const_prop.m"
                        MR_Word transform_hlds__const_prop__InputArg_20 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__V_41_41), (MR_Integer) 0);

#line 114 "const_prop.m"
                        {
#line 114 "const_prop.m"
                          transform_hlds__const_prop__make_assignment_goal_5_p_0(transform_hlds__const_prop__V_42_42, transform_hlds__const_prop__InputArg_20, transform_hlds__const_prop__GoalExpr_14, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
                        }
#line 113 "const_prop.m"
                      }
#line 112 "const_prop.m"
                  }
#line 112 "const_prop.m"
                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 119 "const_prop.m"
              }
#line 119 "const_prop.m"
          }
#line 106 "const_prop.m"
      }
#line 102 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 102 "const_prop.m"
  }
#line 91 "const_prop.m"
}

#line 83 "const_prop.m"
static MR_Box MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0_1(
#line 83 "const_prop.m"
  MR_Box transform_hlds__const_prop__closure_arg,
#line 83 "const_prop.m"
  MR_Box transform_hlds__const_prop__wrapper_arg_1)
#line 83 "const_prop.m"
{
#line 83 "const_prop.m"
  {
#line 83 "const_prop.m"
    MR_Box transform_hlds__const_prop__wrapper_arg_2;
#line 83 "const_prop.m"
    MR_Box transform_hlds__const_prop__closure = transform_hlds__const_prop__closure_arg;
#line 83 "const_prop.m"
    MR_Word transform_hlds__const_prop__conv0_HeadVar__4_31;

#line 83 "const_prop.m"
    {
#line 83 "const_prop.m"
      transform_hlds__const_prop__conv0_HeadVar__4_31 = transform_hlds__const_prop__IntroducedFrom__func__evaluate_call__83__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__const_prop__wrapper_arg_1));
    }
#line 83 "const_prop.m"
    transform_hlds__const_prop__wrapper_arg_2 = ((MR_Box) (transform_hlds__const_prop__conv0_HeadVar__4_31));
#line 83 "const_prop.m"
    return transform_hlds__const_prop__wrapper_arg_2;
#line 83 "const_prop.m"
  }
#line 83 "const_prop.m"
}

#line 43 "const_prop.m"
MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_call_10_p_0(
#line 43 "const_prop.m"
  MR_String transform_hlds__const_prop__ModuleName_11,
#line 43 "const_prop.m"
  MR_String transform_hlds__const_prop__PredName_12,
#line 43 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ProcIdInt_13,
#line 43 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_14,
#line 43 "const_prop.m"
  MR_Word transform_hlds__const_prop__VarTypes_15,
#line 43 "const_prop.m"
  MR_Word transform_hlds__const_prop__InstMap_16,
#line 43 "const_prop.m"
  MR_Word transform_hlds__const_prop__ModuleInfo_17,
#line 43 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_18,
#line 43 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_27,
#line 43 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_28)
#line 43 "const_prop.m"
{
#line 80 "const_prop.m"
  {
#line 80 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__Globals_20;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__CrossCompiling_21;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__LookupArgs_22;
#line 80 "const_prop.m"
    MR_Word transform_hlds__const_prop__ArgHldsInfos_26;

#line 81 "const_prop.m"
    {
#line 81 "const_prop.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__const_prop__ModuleInfo_17, &transform_hlds__const_prop__Globals_20);
    }
#line 82 "const_prop.m"
    {
#line 82 "const_prop.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__const_prop__Globals_20, (MR_Integer) 663, &transform_hlds__const_prop__CrossCompiling_21);
    }
#line 83 "const_prop.m"
    {
#line 83 "const_prop.m"
      transform_hlds__const_prop__LookupArgs_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_22, 0) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_2[0]));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_22, 1) = ((MR_Box) (transform_hlds__const_prop__evaluate_call_10_p_0_1));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_22, 3) = ((MR_Box) (transform_hlds__const_prop__VarTypes_15));
#line 83 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__LookupArgs_22, 4) = ((MR_Box) (transform_hlds__const_prop__InstMap_16));
#line 83 "const_prop.m"
    }
#line 87 "const_prop.m"
    {
#line 87 "const_prop.m"
      transform_hlds__const_prop__ArgHldsInfos_26 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], (MR_Word) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0, transform_hlds__const_prop__LookupArgs_22, transform_hlds__const_prop__Args_14);
    }
#line 88 "const_prop.m"
    {
#line 88 "const_prop.m"
      return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__evaluate_call_2_8_p_0(transform_hlds__const_prop__ModuleName_11, transform_hlds__const_prop__PredName_12, transform_hlds__const_prop__ProcIdInt_13, transform_hlds__const_prop__ArgHldsInfos_26, transform_hlds__const_prop__CrossCompiling_21, transform_hlds__const_prop__GoalExpr_18, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_27, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_28);
    }
#line 80 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 80 "const_prop.m"
  }
#line 43 "const_prop.m"
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
