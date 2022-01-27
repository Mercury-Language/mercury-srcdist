/*
** Automatically generated from `const_prop.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 143 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3];

#line 149 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3];

#line 152 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0;

#line 155 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1];

#line 158 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1];

#line 161 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1];

#line 164 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1];

#line 167 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1];

#line 170 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0;

#line 173 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1];

#line 176 "transform_hlds.const_prop.c"
static const MR_DuFunctorDesc transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1;

#line 179 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1];

#line 182 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1];

#line 185 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_val_0[2];

#line 188 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2];

#line 191 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2];

#line 194 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_hlds_info_0_0_10001(
#line 197 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 199 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 202 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_hlds_info_0_0_10001(
#line 205 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 207 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 209 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 212 "transform_hlds.const_prop.c"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0_10001(
#line 215 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_1,
#line 217 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2);

#line 220 "transform_hlds.const_prop.c"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0_10001(
#line 223 "transform_hlds.const_prop.c"
  MR_Box * transform_hlds__const_prop__wrapper_arg_1,
#line 225 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_2,
#line 227 "transform_hlds.const_prop.c"
  MR_Box transform_hlds__const_prop__wrapper_arg_3);

#line 522 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 522 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 522 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 522 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 522 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 477 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 477 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 477 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 477 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 477 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 278 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 278 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 278 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 278 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 278 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 278 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 278 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14);

#line 258 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 258 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 258 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 258 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 258 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 258 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 258 "const_prop.m"
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

#line 665 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 665 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3);

#line 665 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 665 "const_prop.m"
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

#line 740 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 740 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 740 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);

#line 729 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 729 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 729 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);

#line 701 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 701 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 701 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 701 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6);

#line 669 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 669 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 669 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 669 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 669 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 669 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 554 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 554 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 554 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 554 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 554 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 554 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5);

#line 291 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 291 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 291 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 291 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 291 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8);

#line 202 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 202 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 202 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 202 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 202 "const_prop.m"
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



#line 550 "transform_hlds.const_prop.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 558 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__const_prop__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 567 "transform_hlds.const_prop.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__const_prop__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 575 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_hlds_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 582 "transform_hlds.const_prop.c"
static const MR_ConstString transform_hlds__const_prop__transform_hlds__const_prop__field_names_arg_hlds_info_0_0[3] = {
  (MR_String) "arg_var",
  (MR_String) "arg_type",
  (MR_String) "arg_inst"
};

#line 589 "transform_hlds.const_prop.c"
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

#line 604 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 609 "transform_hlds.const_prop.c"
static const MR_DuPtagLayout transform_hlds__const_prop__transform_hlds__const_prop__du_ptag_ordered_arg_hlds_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_hlds_info_0_0
  }
};

#line 618 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_hlds_info_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_hlds_info_0_0
};

#line 623 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_hlds_info_0[1] = {
  (MR_Integer) 0
};

#line 628 "transform_hlds.const_prop.c"
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

#line 645 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 650 "transform_hlds.const_prop.c"
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

#line 665 "transform_hlds.const_prop.c"
static const MR_PseudoTypeInfo transform_hlds__const_prop__transform_hlds__const_prop__field_types_arg_val_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__const_prop__transform_hlds__const_prop__type_ctor_info_arg_hlds_info_0
};

#line 670 "transform_hlds.const_prop.c"
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

#line 685 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_0[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 690 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_stag_ordered_arg_val_0_1[1] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0
};

#line 695 "transform_hlds.const_prop.c"
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

#line 709 "transform_hlds.const_prop.c"
static const MR_DuFunctorDescPtr transform_hlds__const_prop__transform_hlds__const_prop__du_name_ordered_arg_val_0[2] = {
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_0,
  &transform_hlds__const_prop__transform_hlds__const_prop__du_functor_desc_arg_val_0_1
};

#line 715 "transform_hlds.const_prop.c"
static const MR_Integer transform_hlds__const_prop__transform_hlds__const_prop__functor_number_map_arg_val_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 721 "transform_hlds.const_prop.c"
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

#line 522 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_51_95_95_91_49_93_95_48_8_p_0(
#line 522 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 522 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 522 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 522 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 522 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 522 "const_prop.m"
{
#line 527 "const_prop.m"
  {
#line 527 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 527 "const_prop.m"
    MR_String transform_hlds__const_prop__OutputArgVal_16;
#line 527 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_19;
#line 527 "const_prop.m"
    MR_String transform_hlds__const_prop__YVal_22;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_29_29;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_30_30;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33;
#line 527 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34;
#line 534 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_35_35;
#line 534 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_36_36;
#line 534 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 534 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 535 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;

#line 530 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "++") == 0))
#line 529 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 530 "const_prop.m"
    else
#line 530 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "append") == 0))
#line 530 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 530 "const_prop.m"
    else
#line 530 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 527 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
      {
#line 533 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 527 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
          {
#line 534 "const_prop.m"
            transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 534 "const_prop.m"
            transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 534 "const_prop.m"
            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 534 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 534 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 534 "const_prop.m"
              {
#line 534 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 1)));
#line 534 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 2)));
#line 534 "const_prop.m"
                transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_23_23, (MR_Integer) 3)));
#line 534 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 534 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 534 "const_prop.m"
                  {
#line 534 "const_prop.m"
                    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 0)));
#line 534 "const_prop.m"
                    transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_24_24, (MR_Integer) 1)));
#line 534 "const_prop.m"
                    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 0)));
#line 534 "const_prop.m"
                    transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_25_25, (MR_Integer) 1)));
#line 534 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 534 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 534 "const_prop.m"
                      {
#line 534 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_26_26, (MR_Integer) 1)));
#line 534 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
                          {
#line 534 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
                              {
#line 535 "const_prop.m"
                                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 535 "const_prop.m"
                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 535 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 535 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                  {
#line 535 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 2)));
#line 535 "const_prop.m"
                                    transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_29_29, (MR_Integer) 3)));
#line 535 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 535 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                      {
#line 535 "const_prop.m"
                                        transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 0)));
#line 535 "const_prop.m"
                                        transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_30_30, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                        transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 0)));
#line 535 "const_prop.m"
                                        transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_31_31, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 535 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 535 "const_prop.m"
                                          {
#line 535 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_32_32, (MR_Integer) 1)));
#line 535 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
                                              {
#line 535 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 527 "const_prop.m"
                                                  {
#line 536 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 537 "const_prop.m"
                                                    {
#line 537 "const_prop.m"
                                                      transform_hlds__const_prop__OutputArgVal_16 = mercury__string__f_43_43_2_f_0(transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22);
                                                    }
#line 527 "const_prop.m"
                                                    {
#line 527 "const_prop.m"
                                                      MR_Word base;
#line 527 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 527 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 527 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 527 "const_prop.m"
                                                    }
#line 527 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 527 "const_prop.m"
                                                  }
#line 527 "const_prop.m"
                                              }
#line 535 "const_prop.m"
                                          }
#line 535 "const_prop.m"
                                      }
#line 535 "const_prop.m"
                                  }
#line 527 "const_prop.m"
                              }
#line 527 "const_prop.m"
                          }
#line 534 "const_prop.m"
                      }
#line 534 "const_prop.m"
                  }
#line 534 "const_prop.m"
              }
#line 527 "const_prop.m"
          }
#line 527 "const_prop.m"
      }
#line 527 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 527 "const_prop.m"
  }
#line 522 "const_prop.m"
}

#line 477 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_51_95_95_91_49_93_95_48_8_p_0(
#line 477 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 477 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 477 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 477 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 477 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 477 "const_prop.m"
{
#line 482 "const_prop.m"
  {
#line 482 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 482 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_16;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_127_127;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_130_130;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_133_133;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_136_136;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_139_139;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_140_140;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_141_141;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_142_142;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_143_143;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_144_144;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_145_145;
#line 482 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_146_146;
#line 482 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_147_147;
#line 482 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_148_148;
#line 500 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_128_128;
#line 500 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_129_129;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_131_131;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_132_132;
#line 500 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_134_134;
#line 500 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_135_135;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_137_137;
#line 501 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_138_138;

#line 482 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
      {
#line 500 "const_prop.m"
        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 500 "const_prop.m"
        transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 500 "const_prop.m"
        transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 501 "const_prop.m"
        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 501 "const_prop.m"
        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 501 "const_prop.m"
        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 500 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 500 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 500 "const_prop.m"
          {
#line 500 "const_prop.m"
            transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 500 "const_prop.m"
            transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 500 "const_prop.m"
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 501 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 501 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
              {
#line 501 "const_prop.m"
                transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 501 "const_prop.m"
                transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 2)));
#line 501 "const_prop.m"
                transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 3)));
#line 500 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 500 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 500 "const_prop.m"
                  {
#line 500 "const_prop.m"
                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)));
#line 500 "const_prop.m"
                    transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 501 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 1)));
#line 501 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                      {
#line 501 "const_prop.m"
                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)));
#line 501 "const_prop.m"
                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 500 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                          {
#line 500 "const_prop.m"
                            transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 500 "const_prop.m"
                            transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 501 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                              {
#line 501 "const_prop.m"
                                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)));
#line 501 "const_prop.m"
                                transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 500 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                                  {
#line 500 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_144_144)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 500 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 500 "const_prop.m"
                                      {
#line 500 "const_prop.m"
                                        transform_hlds__const_prop__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_144_144, (MR_Integer) 1)));
#line 501 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_145_145 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                                          {
#line 501 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 501 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 501 "const_prop.m"
                                              {
#line 501 "const_prop.m"
                                                transform_hlds__const_prop__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 490 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "*") == 0))
#line 498 "const_prop.m"
                                                  {
#line 502 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 503 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 * transform_hlds__const_prop__V_148_148);
#line 498 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 498 "const_prop.m"
                                                  }
#line 490 "const_prop.m"
                                                else
#line 490 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "+") == 0))
#line 484 "const_prop.m"
                                                  {
#line 488 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 489 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 + transform_hlds__const_prop__V_148_148);
#line 484 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 484 "const_prop.m"
                                                  }
#line 490 "const_prop.m"
                                                else
#line 490 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "-") == 0))
#line 491 "const_prop.m"
                                                  {
#line 495 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 496 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 - transform_hlds__const_prop__V_148_148);
#line 491 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 491 "const_prop.m"
                                                  }
#line 490 "const_prop.m"
                                                else
#line 490 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "/") == 0))
#line 505 "const_prop.m"
                                                  {
#line 509 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 510 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 510 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 505 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 505 "const_prop.m"
                                                      {
#line 511 "const_prop.m"
                                                        {
#line 511 "const_prop.m"
                                                          transform_hlds__const_prop__OutputArgVal_16 = mercury__float__f_slash_2_f_0(transform_hlds__const_prop__V_147_147, transform_hlds__const_prop__V_148_148);
                                                        }
#line 511 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 505 "const_prop.m"
                                                      }
#line 505 "const_prop.m"
                                                  }
#line 490 "const_prop.m"
                                                else
#line 490 "const_prop.m"
                                                if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient") == 0))
#line 513 "const_prop.m"
                                                  {
#line 517 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 518 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_148_148 == ((MR_Float) 0.0000000000000000));
#line 518 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 513 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 513 "const_prop.m"
                                                      {
#line 519 "const_prop.m"
                                                        transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__V_147_147 / transform_hlds__const_prop__V_148_148);
#line 519 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 513 "const_prop.m"
                                                      }
#line 513 "const_prop.m"
                                                  }
#line 490 "const_prop.m"
                                                else
#line 490 "const_prop.m"
                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 482 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 482 "const_prop.m"
                                                  {
#line 482 "const_prop.m"
                                                    {
#line 482 "const_prop.m"
                                                      MR_Word base;
#line 482 "const_prop.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "const_prop.m"
                                                      *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 482 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 482 "const_prop.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_16);
#line 482 "const_prop.m"
                                                    }
#line 482 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 482 "const_prop.m"
                                                  }
#line 501 "const_prop.m"
                                              }
#line 482 "const_prop.m"
                                          }
#line 500 "const_prop.m"
                                      }
#line 482 "const_prop.m"
                                  }
#line 482 "const_prop.m"
                              }
#line 482 "const_prop.m"
                          }
#line 501 "const_prop.m"
                      }
#line 500 "const_prop.m"
                  }
#line 501 "const_prop.m"
              }
#line 500 "const_prop.m"
          }
#line 482 "const_prop.m"
      }
#line 482 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 482 "const_prop.m"
  }
#line 477 "const_prop.m"
}

#line 278 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_115_116_114_105_110_103_95_50_95_95_91_49_93_95_48_7_p_0(
#line 278 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 278 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 278 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 278 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 278 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 278 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArgVal_14)
#line 278 "const_prop.m"
{
#line 283 "const_prop.m"
  {
#line 283 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "count_codepoints") == 0);
#line 283 "const_prop.m"
    MR_String transform_hlds__const_prop__XVal_17;
#line 283 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CodePointCountX_18;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_23_23;
#line 283 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_24_24;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 286 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_16_16;

#line 283 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 283 "const_prop.m"
      {
#line 285 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 283 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 283 "const_prop.m"
          {
#line 286 "const_prop.m"
            transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 286 "const_prop.m"
            transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 286 "const_prop.m"
            transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 286 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 286 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
              {
#line 286 "const_prop.m"
                transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 286 "const_prop.m"
                transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 2)));
#line 286 "const_prop.m"
                transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_19_19, (MR_Integer) 3)));
#line 286 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 286 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
                  {
#line 286 "const_prop.m"
                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 286 "const_prop.m"
                    transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 286 "const_prop.m"
                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 286 "const_prop.m"
                    transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 286 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 286 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 286 "const_prop.m"
                      {
#line 286 "const_prop.m"
                        transform_hlds__const_prop__XVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 286 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 283 "const_prop.m"
                          {
#line 286 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 283 "const_prop.m"
                              {
#line 287 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 288 "const_prop.m"
                                {
#line 288 "const_prop.m"
                                  transform_hlds__const_prop__CodePointCountX_18 = mercury__string__count_codepoints_1_f_0(transform_hlds__const_prop__XVal_17);
                                }
#line 289 "const_prop.m"
                                {
#line 289 "const_prop.m"
                                  MR_Word base;
#line 289 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "const_prop.m"
                                  *transform_hlds__const_prop__OutputArgVal_14 = base;
#line 289 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 289 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__CodePointCountX_18));
#line 289 "const_prop.m"
                                }
#line 289 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 283 "const_prop.m"
                              }
#line 283 "const_prop.m"
                          }
#line 286 "const_prop.m"
                      }
#line 286 "const_prop.m"
                  }
#line 286 "const_prop.m"
              }
#line 283 "const_prop.m"
          }
#line 283 "const_prop.m"
      }
#line 283 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 283 "const_prop.m"
  }
#line 278 "const_prop.m"
}

#line 258 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_118_97_108_117_97_116_101_95_100_101_116_95_99_97_108_108_95_102_108_111_97_116_95_50_95_95_91_49_93_95_48_7_p_0(
#line 258 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 258 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 258 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 258 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 258 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 258 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 258 "const_prop.m"
{
#line 263 "const_prop.m"
  {
#line 263 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 263 "const_prop.m"
    MR_Float transform_hlds__const_prop__OutputArgVal_14;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_43_43;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_44_44;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_45_45;
#line 263 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_46_46;
#line 263 "const_prop.m"
    MR_Float transform_hlds__const_prop__V_47_47;
#line 267 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 267 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39;
#line 267 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41;
#line 267 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_42_42;

#line 263 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 263 "const_prop.m"
      {
#line 267 "const_prop.m"
        transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 267 "const_prop.m"
        transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 267 "const_prop.m"
        transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 267 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 267 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 267 "const_prop.m"
          {
#line 267 "const_prop.m"
            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 267 "const_prop.m"
            transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 267 "const_prop.m"
            transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 267 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 267 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 267 "const_prop.m"
              {
#line 267 "const_prop.m"
                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 0)));
#line 267 "const_prop.m"
                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_40_40, (MR_Integer) 1)));
#line 267 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 263 "const_prop.m"
                  {
#line 267 "const_prop.m"
                    transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 0)));
#line 267 "const_prop.m"
                    transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_44_44, (MR_Integer) 1)));
#line 267 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 263 "const_prop.m"
                      {
#line 267 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 267 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 267 "const_prop.m"
                          {
#line 267 "const_prop.m"
                            transform_hlds__const_prop__V_47_47 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_46_46, (MR_Integer) 1)));
#line 270 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 265 "const_prop.m"
                              {
#line 268 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 269 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_47_47;
#line 265 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 265 "const_prop.m"
                              }
#line 270 "const_prop.m"
                            else
#line 270 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 271 "const_prop.m"
                              {
#line 274 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 275 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = (((MR_Float) 0.0000000000000000) - transform_hlds__const_prop__V_47_47);
#line 271 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 271 "const_prop.m"
                              }
#line 270 "const_prop.m"
                            else
#line 270 "const_prop.m"
                              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 263 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 263 "const_prop.m"
                              {
#line 263 "const_prop.m"
                                {
#line 263 "const_prop.m"
                                  MR_Word base;
#line 263 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 263 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 263 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(transform_hlds__const_prop__OutputArgVal_14);
#line 263 "const_prop.m"
                                }
#line 263 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 263 "const_prop.m"
                              }
#line 267 "const_prop.m"
                          }
#line 263 "const_prop.m"
                      }
#line 263 "const_prop.m"
                  }
#line 267 "const_prop.m"
              }
#line 267 "const_prop.m"
          }
#line 263 "const_prop.m"
      }
#line 263 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 263 "const_prop.m"
  }
#line 258 "const_prop.m"
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

#line 665 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop____Compare____arg_val_0_0(
#line 665 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__1_1,
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2,
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__3_3)
#line 665 "const_prop.m"
{
#line 665 "const_prop.m"
  {
#line 665 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 665 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_12 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;
#line 665 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_13 = (MR_Integer) transform_hlds__const_prop__HeadVar__3_3;

#line 665 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_12 == transform_hlds__const_prop__CastY_13);
#line 665 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 1822 "transform_hlds.const_prop.c"
      *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 0;
#line 665 "const_prop.m"
    else
#line 665 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 665 "const_prop.m"
      {
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));

#line 665 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 665 "const_prop.m"
          {
#line 665 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__3_3, (MR_Integer) 0)));

#line 665 "const_prop.m"
            {
#line 665 "const_prop.m"
              parse_tree__prog_data____Compare____cons_id_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_16_16, transform_hlds__const_prop__V_5_5);
#line 665 "const_prop.m"
              return;
            }
#line 665 "const_prop.m"
          }
#line 665 "const_prop.m"
        else
#line 1851 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 1;
#line 665 "const_prop.m"
      }
#line 665 "const_prop.m"
    else
#line 665 "const_prop.m"
      {
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);

#line 665 "const_prop.m"
        if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1864 "transform_hlds.const_prop.c"
          *transform_hlds__const_prop__HeadVar__1_1 = (MR_Integer) 2;
#line 665 "const_prop.m"
        else
#line 665 "const_prop.m"
          {
#line 665 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_11_11 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__3_3), (MR_Integer) 0);

#line 665 "const_prop.m"
            {
#line 665 "const_prop.m"
              transform_hlds__const_prop____Compare____arg_hlds_info_0_0(transform_hlds__const_prop__HeadVar__1_1, transform_hlds__const_prop__V_17_17, transform_hlds__const_prop__V_11_11);
#line 665 "const_prop.m"
              return;
            }
#line 665 "const_prop.m"
          }
#line 665 "const_prop.m"
      }
#line 665 "const_prop.m"
  }
#line 665 "const_prop.m"
}

#line 665 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop____Unify____arg_val_0_0(
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__1_1,
#line 665 "const_prop.m"
  MR_Word transform_hlds__const_prop__HeadVar__2_2)
#line 665 "const_prop.m"
{
#line 665 "const_prop.m"
  {
#line 665 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 665 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastX_7 = (MR_Integer) transform_hlds__const_prop__HeadVar__1_1;
#line 665 "const_prop.m"
    MR_Integer transform_hlds__const_prop__CastY_8 = (MR_Integer) transform_hlds__const_prop__HeadVar__2_2;

#line 665 "const_prop.m"
    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__CastX_7 == transform_hlds__const_prop__CastY_8);
#line 665 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_TRUE;
#line 665 "const_prop.m"
    else
#line 665 "const_prop.m"
    if (((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 665 "const_prop.m"
      {
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_4_4;

#line 665 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 665 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
          {
#line 665 "const_prop.m"
            transform_hlds__const_prop__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__HeadVar__2_2, (MR_Integer) 0)));
#line 1932 "transform_hlds.const_prop.c"
            {
#line 1934 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__V_3_3, transform_hlds__const_prop__V_4_4);
            }
#line 665 "const_prop.m"
          }
#line 665 "const_prop.m"
      }
#line 665 "const_prop.m"
    else
#line 665 "const_prop.m"
      {
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_5_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__1_1), (MR_Integer) 0);
#line 665 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_6_6;

#line 665 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 665 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 665 "const_prop.m"
          {
#line 665 "const_prop.m"
            transform_hlds__const_prop__V_6_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__const_prop__HeadVar__2_2), (MR_Integer) 0);
#line 1958 "transform_hlds.const_prop.c"
            {
#line 1960 "transform_hlds.const_prop.c"
              return transform_hlds__const_prop__succeeded = transform_hlds__const_prop____Unify____arg_hlds_info_0_0(transform_hlds__const_prop__V_5_5, transform_hlds__const_prop__V_6_6);
            }
#line 665 "const_prop.m"
          }
#line 665 "const_prop.m"
      }
#line 665 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 665 "const_prop.m"
  }
#line 665 "const_prop.m"
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
#line 1998 "transform_hlds.const_prop.c"
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
#line 2024 "transform_hlds.const_prop.c"
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
#line 2044 "transform_hlds.const_prop.c"
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

#line 2111 "transform_hlds.const_prop.c"
        {
#line 2113 "transform_hlds.const_prop.c"
          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_3_3)), ((MR_Box) (transform_hlds__const_prop__V_6_6)));
        }
#line 71 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 71 "const_prop.m"
          {
#line 2120 "transform_hlds.const_prop.c"
            {
#line 2122 "transform_hlds.const_prop.c"
              transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__const_prop__V_4_4, transform_hlds__const_prop__V_7_7);
            }
#line 71 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 2127 "transform_hlds.const_prop.c"
              {
#line 2129 "transform_hlds.const_prop.c"
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

#line 740 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_construction_goal_5_p_0(
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__Cons_7,
#line 740 "const_prop.m"
  MR_Word * transform_hlds__const_prop__GoalExpr_8,
#line 740 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13,
#line 740 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14)
#line 740 "const_prop.m"
{
#line 743 "const_prop.m"
  {
#line 743 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_11;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_12;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_17_17;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_18_18;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__Goal_30;
#line 743 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 772 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 772 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 776 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_31_31;
#line 747 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25;
#line 747 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26;

#line 772 "const_prop.m"
    {
#line 772 "const_prop.m"
      hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_32_32, transform_hlds__const_prop__Cons_7, &transform_hlds__const_prop__Goal_30);
    }
#line 776 "const_prop.m"
    *transform_hlds__const_prop__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 0)));
#line 776 "const_prop.m"
    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_30, (MR_Integer) 1)));
#line 745 "const_prop.m"
    {
#line 745 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      transform_hlds__const_prop__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_7));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "const_prop.m"
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      transform_hlds__const_prop__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 0) = ((MR_Box) (transform_hlds__const_prop__V_18_18));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "const_prop.m"
    }
#line 746 "const_prop.m"
    {
#line 746 "const_prop.m"
      transform_hlds__const_prop__Inst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 746 "const_prop.m"
      MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_11, 3) = ((MR_Box) (transform_hlds__const_prop__V_17_17));
#line 746 "const_prop.m"
    }
#line 747 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 747 "const_prop.m"
    transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 747 "const_prop.m"
    transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 747 "const_prop.m"
    {
#line 747 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_21_21, transform_hlds__const_prop__Inst_11, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_12);
    }
#line 748 "const_prop.m"
    {
#line 748 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_12, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_13, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22);
    }
#line 749 "const_prop.m"
    {
#line 749 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_22, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_14);
#line 749 "const_prop.m"
      return;
    }
#line 743 "const_prop.m"
  }
#line 740 "const_prop.m"
}

#line 729 "const_prop.m"
static void MR_CALL 
transform_hlds__const_prop__make_assignment_goal_5_p_0(
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__OutputArg_6,
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__InputArg_7,
#line 729 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Goal_8,
#line 729 "const_prop.m"
  MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12,
#line 729 "const_prop.m"
  MR_Word * transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13)
#line 729 "const_prop.m"
{
#line 732 "const_prop.m"
  {
#line 732 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta0_10;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__Delta_11;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_14_14;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__InVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__Inst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__OutputArgMode_29;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__InputArgMode_30;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__UniMode_31;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_37_37;
#line 732 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_38_38;
#line 755 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 755 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 756 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 735 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_19_19;
#line 735 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_20_20;
#line 735 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_21_21;
#line 735 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_22_22;

#line 758 "const_prop.m"
    {
#line 758 "const_prop.m"
      transform_hlds__const_prop__OutputArgMode_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 758 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArgMode_29, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 758 "const_prop.m"
    }
#line 759 "const_prop.m"
    {
#line 759 "const_prop.m"
      transform_hlds__const_prop__InputArgMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 0) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 759 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArgMode_30, 1) = ((MR_Box) (transform_hlds__const_prop__Inst_28));
#line 759 "const_prop.m"
    }
#line 760 "const_prop.m"
    {
#line 760 "const_prop.m"
      transform_hlds__const_prop__UniMode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 0) = ((MR_Box) (transform_hlds__const_prop__OutputArgMode_29));
#line 760 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__UniMode_31, 1) = ((MR_Box) (transform_hlds__const_prop__InputArgMode_30));
#line 760 "const_prop.m"
    }
#line 762 "const_prop.m"
    {
#line 762 "const_prop.m"
      transform_hlds__const_prop__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_37_37, 0) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 762 "const_prop.m"
    }
#line 762 "const_prop.m"
    {
#line 762 "const_prop.m"
      transform_hlds__const_prop__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(2), transform_hlds__const_prop__V_38_38, 1) = ((MR_Box) (transform_hlds__const_prop__InVar_27));
#line 762 "const_prop.m"
    }
#line 762 "const_prop.m"
    {
#line 762 "const_prop.m"
      MR_Word base;
#line 762 "const_prop.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "const_prop.m"
      *transform_hlds__const_prop__Goal_8 = base;
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__OutVar_26));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__const_prop__V_37_37));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__const_prop__UniMode_31));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__const_prop__V_38_38));
#line 762 "const_prop.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&transform_hlds__const_prop_scalar_common_1[2]));
#line 762 "const_prop.m"
    }
#line 734 "const_prop.m"
    {
#line 734 "const_prop.m"
      transform_hlds__const_prop__Delta0_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 0)));
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 1)));
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_6, (MR_Integer) 2)));
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 0)));
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 1)));
#line 735 "const_prop.m"
    transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__InputArg_7, (MR_Integer) 2)));
#line 735 "const_prop.m"
    {
#line 735 "const_prop.m"
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_14_14, transform_hlds__const_prop__V_15_15, transform_hlds__const_prop__Delta0_10, &transform_hlds__const_prop__Delta_11);
    }
#line 737 "const_prop.m"
    {
#line 737 "const_prop.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_11, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_12, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16);
    }
#line 738 "const_prop.m"
    {
#line 738 "const_prop.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_16_16, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_13);
#line 738 "const_prop.m"
      return;
    }
#line 732 "const_prop.m"
  }
#line 729 "const_prop.m"
}

#line 701 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__eval_unify_3_p_0(
#line 701 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_4,
#line 701 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_5,
#line 701 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_6)
#line 701 "const_prop.m"
{
#line 708 "const_prop.m"
  {
#line 708 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 705 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));

#line 705 "const_prop.m"
    {
#line 705 "const_prop.m"
      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__const_prop_scalar_common_1[0], ((MR_Box) (transform_hlds__const_prop__V_15_15)), ((MR_Box) (transform_hlds__const_prop__V_34_34)));
    }
#line 708 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 707 "const_prop.m"
      {
#line 707 "const_prop.m"
        *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 707 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 707 "const_prop.m"
      }
#line 708 "const_prop.m"
    else
#line 723 "const_prop.m"
      {
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__XCtor_9;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__XArgVars_10;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__YCtor_13;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__YArgVars_14;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 2)));
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_19_19;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_22_22;
#line 723 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_23_23;
#line 709 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 0)));
#line 709 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_4, (MR_Integer) 1)));
#line 709 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_7_7;
#line 709 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_8_8;
#line 710 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_31_31;
#line 710 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_32_32;
#line 710 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_11_11;
#line 710 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_12_12;
#line 712 "const_prop.m"
        MR_Word transform_hlds__const_prop__TypeInfo_38_38;

#line 709 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_16_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 709 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 709 "const_prop.m"
          {
#line 709 "const_prop.m"
            transform_hlds__const_prop__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 1)));
#line 709 "const_prop.m"
            transform_hlds__const_prop__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 2)));
#line 709 "const_prop.m"
            transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_16_16, (MR_Integer) 3)));
#line 709 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 709 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 709 "const_prop.m"
              {
#line 709 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 0)));
#line 709 "const_prop.m"
                transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_17_17, (MR_Integer) 1)));
#line 709 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 723 "const_prop.m"
                  {
#line 709 "const_prop.m"
                    transform_hlds__const_prop__XCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 0)));
#line 709 "const_prop.m"
                    transform_hlds__const_prop__XArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_18_18, (MR_Integer) 1)));
#line 710 "const_prop.m"
                    transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 0)));
#line 710 "const_prop.m"
                    transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 1)));
#line 710 "const_prop.m"
                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_5, (MR_Integer) 2)));
#line 710 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 710 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 710 "const_prop.m"
                      {
#line 710 "const_prop.m"
                        transform_hlds__const_prop__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 710 "const_prop.m"
                        transform_hlds__const_prop__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 2)));
#line 710 "const_prop.m"
                        transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_20_20, (MR_Integer) 3)));
#line 710 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 710 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 710 "const_prop.m"
                          {
#line 710 "const_prop.m"
                            transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 710 "const_prop.m"
                            transform_hlds__const_prop__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 710 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 723 "const_prop.m"
                              {
#line 710 "const_prop.m"
                                transform_hlds__const_prop__YCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 0)));
#line 710 "const_prop.m"
                                transform_hlds__const_prop__YArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_22_22, (MR_Integer) 1)));
#line 712 "const_prop.m"
                                {
#line 712 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                }
#line 712 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 712 "const_prop.m"
                                  {
#line 2603 "transform_hlds.const_prop.c"
                                    transform_hlds__const_prop__TypeInfo_38_38 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 712 "const_prop.m"
                                    {
#line 712 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_38, ((MR_Box) (transform_hlds__const_prop__XArgVars_10)), ((MR_Box) (transform_hlds__const_prop__YArgVars_14)));
                                    }
#line 712 "const_prop.m"
                                  }
#line 714 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 713 "const_prop.m"
                                  {
#line 713 "const_prop.m"
                                    *transform_hlds__const_prop__Result_6 = (MR_Integer) 1;
#line 713 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 713 "const_prop.m"
                                  }
#line 714 "const_prop.m"
                                else
#line 720 "const_prop.m"
                                  {
#line 715 "const_prop.m"
                                    {
#line 715 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_9, transform_hlds__const_prop__YCtor_13);
                                    }
#line 715 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 716 "const_prop.m"
                                    if (!(transform_hlds__const_prop__succeeded))
#line 716 "const_prop.m"
                                      {
#line 716 "const_prop.m"
                                        MR_Word transform_hlds__const_prop__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 716 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_24_24;
#line 716 "const_prop.m"
                                        MR_Integer transform_hlds__const_prop__V_35_35;

#line 716 "const_prop.m"
                                        {
#line 716 "const_prop.m"
                                          transform_hlds__const_prop__V_24_24 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__XArgVars_10);
                                        }
#line 716 "const_prop.m"
                                        {
#line 716 "const_prop.m"
                                          transform_hlds__const_prop__V_35_35 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_33, transform_hlds__const_prop__YArgVars_14);
                                        }
#line 716 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_24_24 == transform_hlds__const_prop__V_35_35);
#line 716 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 716 "const_prop.m"
                                      }
#line 720 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 720 "const_prop.m"
                                      {
#line 719 "const_prop.m"
                                        *transform_hlds__const_prop__Result_6 = (MR_Integer) 0;
#line 719 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 720 "const_prop.m"
                                      }
#line 720 "const_prop.m"
                                  }
#line 723 "const_prop.m"
                              }
#line 710 "const_prop.m"
                          }
#line 710 "const_prop.m"
                      }
#line 723 "const_prop.m"
                  }
#line 709 "const_prop.m"
              }
#line 709 "const_prop.m"
          }
#line 723 "const_prop.m"
      }
#line 708 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 708 "const_prop.m"
  }
#line 701 "const_prop.m"
}

#line 669 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_semidet_call_5_p_0(
#line 669 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 669 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 669 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 669 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 669 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 669 "const_prop.m"
{
#line 673 "const_prop.m"
  while (MR_TRUE)
#line 673 "const_prop.m"
    {
#line 673 "const_prop.m"
      /* tailcall optimized into a loop */
#line 673 "const_prop.m"
      {
#line 673 "const_prop.m"
        MR_bool transform_hlds__const_prop__succeeded;

#line 673 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 673 "const_prop.m"
          {
#line 673 "const_prop.m"
            MR_String transform_hlds__const_prop__V_8_8;
#line 673 "const_prop.m"
            MR_String transform_hlds__const_prop__V_9_9;
#line 673 "const_prop.m"
            MR_Integer transform_hlds__const_prop__V_10_10;

#line 673 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "dynamic_cast") == 0);
#line 673 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 673 "const_prop.m"
              {
#line 673 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 673 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 673 "const_prop.m"
                  {
#line 674 "const_prop.m"
                    transform_hlds__const_prop__V_8_8 = (MR_String) "private_builtin";
#line 674 "const_prop.m"
                    transform_hlds__const_prop__V_9_9 = (MR_String) "typed_unify";
#line 674 "const_prop.m"
                    transform_hlds__const_prop__V_10_10 = (MR_Integer) 1;
#line 674 "const_prop.m"
                    /* direct tailcall eliminated */
#line 674 "const_prop.m"
                    {
#line 674 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__1__tmp_copy_1 = transform_hlds__const_prop__V_8_8;
#line 674 "const_prop.m"
                      MR_String transform_hlds__const_prop__HeadVar__2__tmp_copy_2 = transform_hlds__const_prop__V_9_9;
#line 674 "const_prop.m"
                      MR_Integer transform_hlds__const_prop__HeadVar__3__tmp_copy_3 = transform_hlds__const_prop__V_10_10;

#line 674 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__3_3 = transform_hlds__const_prop__HeadVar__3__tmp_copy_3;
#line 674 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__2_2 = transform_hlds__const_prop__HeadVar__2__tmp_copy_2;
#line 674 "const_prop.m"
                      transform_hlds__const_prop__HeadVar__1_1 = transform_hlds__const_prop__HeadVar__1__tmp_copy_1;
#line 674 "const_prop.m"
                    }
#line 674 "const_prop.m"
                    continue;
#line 673 "const_prop.m"
                  }
#line 673 "const_prop.m"
              }
#line 673 "const_prop.m"
          }
#line 673 "const_prop.m"
        else
#line 673 "const_prop.m"
        if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 676 "const_prop.m"
          {
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfX_14;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeOfY_15;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__X_16;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__Y_17;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_19_19;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_20_20;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_21_21;
#line 676 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_22_22;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__TypeInfo_36_57;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_36_36;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_55_55;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_46_46;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_47_47;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_48_48;
#line 705 "const_prop.m"
            MR_Word transform_hlds__const_prop__V_49_49;

#line 676 "const_prop.m"
            transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 676 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 676 "const_prop.m"
              {
#line 680 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 1);
#line 676 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 676 "const_prop.m"
                  {
#line 681 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 681 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 681 "const_prop.m"
                      {
#line 681 "const_prop.m"
                        transform_hlds__const_prop__TypeOfX_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 681 "const_prop.m"
                        transform_hlds__const_prop__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 681 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 681 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 681 "const_prop.m"
                          {
#line 681 "const_prop.m"
                            transform_hlds__const_prop__TypeOfY_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 0)));
#line 681 "const_prop.m"
                            transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_19_19, (MR_Integer) 1)));
#line 681 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 681 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 681 "const_prop.m"
                              {
#line 681 "const_prop.m"
                                transform_hlds__const_prop__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 0)));
#line 681 "const_prop.m"
                                transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_20_20, (MR_Integer) 1)));
#line 681 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 681 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 681 "const_prop.m"
                                  {
#line 681 "const_prop.m"
                                    transform_hlds__const_prop__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 0)));
#line 681 "const_prop.m"
                                    transform_hlds__const_prop__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_21_21, (MR_Integer) 1)));
#line 681 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 676 "const_prop.m"
                                      {
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 705 "const_prop.m"
                                        transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 2882 "transform_hlds.const_prop.c"
                                        transform_hlds__const_prop__TypeInfo_36_57 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[0];
#line 705 "const_prop.m"
                                        {
#line 705 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_36_57, ((MR_Box) (transform_hlds__const_prop__V_36_36)), ((MR_Box) (transform_hlds__const_prop__V_55_55)));
                                        }
#line 2889 "transform_hlds.const_prop.c"
                                        if (transform_hlds__const_prop__succeeded)
#line 2891 "transform_hlds.const_prop.c"
                                          {
#line 2893 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_23_23;
#line 2895 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 688 "const_prop.m"
                                            {
#line 688 "const_prop.m"
                                              transform_hlds__const_prop__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 688 "const_prop.m"
                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_23_23, 1) = ((MR_Box) (transform_hlds__const_prop__V_24_24));
#line 688 "const_prop.m"
                                            }
#line 688 "const_prop.m"
                                            {
#line 688 "const_prop.m"
                                              MR_Word base;
#line 688 "const_prop.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 688 "const_prop.m"
                                              *transform_hlds__const_prop__Result_5 = base;
#line 688 "const_prop.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_23_23));
#line 688 "const_prop.m"
                                            }
#line 2920 "transform_hlds.const_prop.c"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 2922 "transform_hlds.const_prop.c"
                                          }
#line 2924 "transform_hlds.const_prop.c"
                                        else
#line 2926 "transform_hlds.const_prop.c"
                                          {
#line 2928 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XCtor_30;
#line 2930 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__XArgVars_31;
#line 2932 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YCtor_34;
#line 2934 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__YArgVars_35;
#line 2936 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 2)));
#line 2938 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_38_38;
#line 2940 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_39_39;
#line 2942 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_40_40;
#line 2944 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_41_41;
#line 2946 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_42_42;
#line 2948 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_43_43;
#line 2950 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__V_44_44;
#line 2952 "transform_hlds.const_prop.c"
                                            MR_Word transform_hlds__const_prop__Result0_65;
#line 709 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 0)));
#line 709 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfX_14, (MR_Integer) 1)));
#line 709 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_28_28;
#line 709 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_29_29;
#line 710 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_52_52;
#line 710 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_53_53;
#line 710 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_32_32;
#line 710 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__V_33_33;
#line 712 "const_prop.m"
                                            MR_Word transform_hlds__const_prop__TypeInfo_38_59;

#line 709 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 709 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 709 "const_prop.m"
                                              {
#line 709 "const_prop.m"
                                                transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 1)));
#line 709 "const_prop.m"
                                                transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 2)));
#line 709 "const_prop.m"
                                                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_37_37, (MR_Integer) 3)));
#line 709 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 709 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 709 "const_prop.m"
                                                  {
#line 709 "const_prop.m"
                                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 0)));
#line 709 "const_prop.m"
                                                    transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_38_38, (MR_Integer) 1)));
#line 709 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2997 "transform_hlds.const_prop.c"
                                                    if (transform_hlds__const_prop__succeeded)
#line 2999 "transform_hlds.const_prop.c"
                                                      {
#line 709 "const_prop.m"
                                                        transform_hlds__const_prop__XCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 0)));
#line 709 "const_prop.m"
                                                        transform_hlds__const_prop__XArgVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_39_39, (MR_Integer) 1)));
#line 710 "const_prop.m"
                                                        transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 0)));
#line 710 "const_prop.m"
                                                        transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 1)));
#line 710 "const_prop.m"
                                                        transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__TypeOfY_15, (MR_Integer) 2)));
#line 710 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 710 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 710 "const_prop.m"
                                                          {
#line 710 "const_prop.m"
                                                            transform_hlds__const_prop__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 1)));
#line 710 "const_prop.m"
                                                            transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 2)));
#line 710 "const_prop.m"
                                                            transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_41_41, (MR_Integer) 3)));
#line 710 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 710 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 710 "const_prop.m"
                                                              {
#line 710 "const_prop.m"
                                                                transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 0)));
#line 710 "const_prop.m"
                                                                transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_42_42, (MR_Integer) 1)));
#line 710 "const_prop.m"
                                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3035 "transform_hlds.const_prop.c"
                                                                if (transform_hlds__const_prop__succeeded)
#line 3037 "transform_hlds.const_prop.c"
                                                                  {
#line 710 "const_prop.m"
                                                                    transform_hlds__const_prop__YCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 0)));
#line 710 "const_prop.m"
                                                                    transform_hlds__const_prop__YArgVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_43_43, (MR_Integer) 1)));
#line 712 "const_prop.m"
                                                                    {
#line 712 "const_prop.m"
                                                                      transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                    }
#line 712 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 712 "const_prop.m"
                                                                      {
#line 3052 "transform_hlds.const_prop.c"
                                                                        transform_hlds__const_prop__TypeInfo_38_59 = (MR_Word) &transform_hlds__const_prop_scalar_common_1[1];
#line 712 "const_prop.m"
                                                                        {
#line 712 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__const_prop__TypeInfo_38_59, ((MR_Box) (transform_hlds__const_prop__XArgVars_31)), ((MR_Box) (transform_hlds__const_prop__YArgVars_35)));
                                                                        }
#line 712 "const_prop.m"
                                                                      }
#line 714 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 713 "const_prop.m"
                                                                      {
#line 713 "const_prop.m"
                                                                        transform_hlds__const_prop__Result0_65 = (MR_Integer) 1;
#line 713 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 713 "const_prop.m"
                                                                      }
#line 714 "const_prop.m"
                                                                    else
#line 720 "const_prop.m"
                                                                      {
#line 715 "const_prop.m"
                                                                        {
#line 715 "const_prop.m"
                                                                          transform_hlds__const_prop__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__const_prop__XCtor_30, transform_hlds__const_prop__YCtor_34);
                                                                        }
#line 715 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 716 "const_prop.m"
                                                                        if (!(transform_hlds__const_prop__succeeded))
#line 716 "const_prop.m"
                                                                          {
#line 716 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__TypeCtorInfo_33_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 716 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_45_45;
#line 716 "const_prop.m"
                                                                            MR_Integer transform_hlds__const_prop__V_56_56;

#line 716 "const_prop.m"
                                                                            {
#line 716 "const_prop.m"
                                                                              transform_hlds__const_prop__V_45_45 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__XArgVars_31);
                                                                            }
#line 716 "const_prop.m"
                                                                            {
#line 716 "const_prop.m"
                                                                              transform_hlds__const_prop__V_56_56 = mercury__list__length_1_f_0(transform_hlds__const_prop__TypeCtorInfo_33_54, transform_hlds__const_prop__YArgVars_35);
                                                                            }
#line 716 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_45_45 == transform_hlds__const_prop__V_56_56);
#line 716 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 716 "const_prop.m"
                                                                          }
#line 720 "const_prop.m"
                                                                        if (transform_hlds__const_prop__succeeded)
#line 720 "const_prop.m"
                                                                          {
#line 719 "const_prop.m"
                                                                            transform_hlds__const_prop__Result0_65 = (MR_Integer) 0;
#line 719 "const_prop.m"
                                                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 720 "const_prop.m"
                                                                          }
#line 720 "const_prop.m"
                                                                      }
#line 3121 "transform_hlds.const_prop.c"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 3123 "transform_hlds.const_prop.c"
                                                                      {
#line 686 "const_prop.m"
                                                                        if ((transform_hlds__const_prop__Result0_65 == (MR_Integer) 0))
#line 685 "const_prop.m"
                                                                          *transform_hlds__const_prop__Result_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "const_prop.m"
                                                                        else
#line 687 "const_prop.m"
                                                                          {
#line 687 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__V_61_61;
#line 687 "const_prop.m"
                                                                            MR_Word transform_hlds__const_prop__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__const_prop__X_16);

#line 688 "const_prop.m"
                                                                            {
#line 688 "const_prop.m"
                                                                              transform_hlds__const_prop__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 0) = ((MR_Box) (transform_hlds__const_prop__Y_17));
#line 688 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_61_61, 1) = ((MR_Box) (transform_hlds__const_prop__V_62_62));
#line 688 "const_prop.m"
                                                                            }
#line 688 "const_prop.m"
                                                                            {
#line 688 "const_prop.m"
                                                                              MR_Word base;
#line 688 "const_prop.m"
                                                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 688 "const_prop.m"
                                                                              *transform_hlds__const_prop__Result_5 = base;
#line 688 "const_prop.m"
                                                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__const_prop__V_61_61));
#line 688 "const_prop.m"
                                                                            }
#line 687 "const_prop.m"
                                                                          }
#line 686 "const_prop.m"
                                                                        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 3164 "transform_hlds.const_prop.c"
                                                                      }
#line 3166 "transform_hlds.const_prop.c"
                                                                  }
#line 710 "const_prop.m"
                                                              }
#line 710 "const_prop.m"
                                                          }
#line 3172 "transform_hlds.const_prop.c"
                                                      }
#line 709 "const_prop.m"
                                                  }
#line 709 "const_prop.m"
                                              }
#line 3178 "transform_hlds.const_prop.c"
                                          }
#line 676 "const_prop.m"
                                      }
#line 681 "const_prop.m"
                                  }
#line 681 "const_prop.m"
                              }
#line 681 "const_prop.m"
                          }
#line 681 "const_prop.m"
                      }
#line 676 "const_prop.m"
                  }
#line 676 "const_prop.m"
              }
#line 676 "const_prop.m"
          }
#line 673 "const_prop.m"
        else
#line 673 "const_prop.m"
          transform_hlds__const_prop__succeeded = MR_FALSE;
#line 673 "const_prop.m"
        return transform_hlds__const_prop__succeeded;
#line 673 "const_prop.m"
      }
#line 673 "const_prop.m"
      break;
#line 673 "const_prop.m"
    }
#line 669 "const_prop.m"
}

#line 554 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_test_5_p_0(
#line 554 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__1_1,
#line 554 "const_prop.m"
  MR_String transform_hlds__const_prop__HeadVar__2_2,
#line 554 "const_prop.m"
  MR_Integer transform_hlds__const_prop__HeadVar__3_3,
#line 554 "const_prop.m"
  MR_Word transform_hlds__const_prop__Args_4,
#line 554 "const_prop.m"
  MR_Word * transform_hlds__const_prop__Result_5)
#line 554 "const_prop.m"
{
#line 559 "const_prop.m"
  {
#line 559 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__HeadVar__3_3 == (MR_Integer) 0);
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_246_246;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_247_247;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_252_252;
#line 559 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_253_253;

#line 559 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
      {
#line 599 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 599 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 599 "const_prop.m"
          {
#line 599 "const_prop.m"
            transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 0)));
#line 599 "const_prop.m"
            transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__Args_4, (MR_Integer) 1)));
#line 599 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_246_246)) == (MR_mktag((MR_Integer) 1)));
#line 599 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 599 "const_prop.m"
              {
#line 599 "const_prop.m"
                transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 0)));
#line 599 "const_prop.m"
                transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_246_246, (MR_Integer) 1)));
#line 559 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "int") == 0))
#line 559 "const_prop.m"
                  {
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_263_263;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_269_269;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_275_275;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_280_280;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_281_281;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_284_284;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_285_285;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_288_288;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_289_289;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_292_292;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_293_293;
#line 559 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_295_295;
#line 559 "const_prop.m"
                    MR_Integer transform_hlds__const_prop__V_297_297;
#line 561 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 561 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 562 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_264_264;
#line 562 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_265_265;
#line 561 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_270_270;
#line 561 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_271_271;
#line 562 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_276_276;
#line 562 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_277_277;

#line 560 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                      {
#line 562 "const_prop.m"
                        transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 562 "const_prop.m"
                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 562 "const_prop.m"
                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 561 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_257_257)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 561 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 561 "const_prop.m"
                          {
#line 561 "const_prop.m"
                            transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 1)));
#line 561 "const_prop.m"
                            transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 2)));
#line 561 "const_prop.m"
                            transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_257_257, (MR_Integer) 3)));
#line 562 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_263_263)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 562 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 562 "const_prop.m"
                              {
#line 562 "const_prop.m"
                                transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 1)));
#line 562 "const_prop.m"
                                transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 2)));
#line 562 "const_prop.m"
                                transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_263_263, (MR_Integer) 3)));
#line 561 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 561 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 561 "const_prop.m"
                                  {
#line 561 "const_prop.m"
                                    transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 0)));
#line 561 "const_prop.m"
                                    transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_269_269, (MR_Integer) 1)));
#line 562 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_275_275)) == (MR_mktag((MR_Integer) 1)));
#line 562 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 562 "const_prop.m"
                                      {
#line 562 "const_prop.m"
                                        transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 0)));
#line 562 "const_prop.m"
                                        transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_275_275, (MR_Integer) 1)));
#line 561 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_280_280 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                          {
#line 561 "const_prop.m"
                                            transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 0)));
#line 561 "const_prop.m"
                                            transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_281_281, (MR_Integer) 1)));
#line 562 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                              {
#line 562 "const_prop.m"
                                                transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
#line 562 "const_prop.m"
                                                transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 561 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                                  {
#line 561 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 561 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 561 "const_prop.m"
                                                      {
#line 561 "const_prop.m"
                                                        transform_hlds__const_prop__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 562 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_292_292 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                                          {
#line 562 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_293_293)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 562 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 562 "const_prop.m"
                                                              {
#line 562 "const_prop.m"
                                                                transform_hlds__const_prop__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_293_293, (MR_Integer) 1)));
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 565 "const_prop.m"
                                                                  {
#line 563 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 < transform_hlds__const_prop__V_297_297);
#line 565 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 564 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 565 "const_prop.m"
                                                                    else
#line 566 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 565 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 565 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 583 "const_prop.m"
                                                                  {
#line 581 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 > transform_hlds__const_prop__V_297_297);
#line 583 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 582 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 583 "const_prop.m"
                                                                    else
#line 584 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 583 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 583 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 574 "const_prop.m"
                                                                  {
#line 572 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 <= transform_hlds__const_prop__V_297_297);
#line 574 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 573 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 574 "const_prop.m"
                                                                    else
#line 575 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 574 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 574 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 592 "const_prop.m"
                                                                  {
#line 590 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_295_295 >= transform_hlds__const_prop__V_297_297);
#line 592 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 591 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 592 "const_prop.m"
                                                                    else
#line 593 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 592 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 592 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 562 "const_prop.m"
                                                              }
#line 559 "const_prop.m"
                                                          }
#line 561 "const_prop.m"
                                                      }
#line 559 "const_prop.m"
                                                  }
#line 559 "const_prop.m"
                                              }
#line 559 "const_prop.m"
                                          }
#line 562 "const_prop.m"
                                      }
#line 561 "const_prop.m"
                                  }
#line 562 "const_prop.m"
                              }
#line 561 "const_prop.m"
                          }
#line 559 "const_prop.m"
                      }
#line 559 "const_prop.m"
                  }
#line 559 "const_prop.m"
                else
#line 559 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "float") == 0))
#line 559 "const_prop.m"
                  {
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_260_260;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_266_266;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_272_272;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_278_278;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_279_279;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_282_282;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_283_283;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_286_286;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_287_287;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_290_290;
#line 559 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_291_291;
#line 559 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_294_294;
#line 559 "const_prop.m"
                    MR_Float transform_hlds__const_prop__V_296_296;
#line 600 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 600 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)));
#line 601 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_261_261;
#line 601 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_262_262;
#line 600 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_267_267;
#line 600 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_268_268;
#line 601 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_273_273;
#line 601 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_274_274;

#line 599 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                      {
#line 601 "const_prop.m"
                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)));
#line 601 "const_prop.m"
                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 601 "const_prop.m"
                        transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 600 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 600 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 600 "const_prop.m"
                          {
#line 600 "const_prop.m"
                            transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 600 "const_prop.m"
                            transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 2)));
#line 600 "const_prop.m"
                            transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_254_254, (MR_Integer) 3)));
#line 601 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 601 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 601 "const_prop.m"
                              {
#line 601 "const_prop.m"
                                transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 601 "const_prop.m"
                                transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 2)));
#line 601 "const_prop.m"
                                transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_260_260, (MR_Integer) 3)));
#line 600 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 600 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 600 "const_prop.m"
                                  {
#line 600 "const_prop.m"
                                    transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 600 "const_prop.m"
                                    transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 601 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 601 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 601 "const_prop.m"
                                      {
#line 601 "const_prop.m"
                                        transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 601 "const_prop.m"
                                        transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 600 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_278_278 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                          {
#line 600 "const_prop.m"
                                            transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 600 "const_prop.m"
                                            transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 601 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                              {
#line 601 "const_prop.m"
                                                transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)));
#line 601 "const_prop.m"
                                                transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 600 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_286_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                                  {
#line 600 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_287_287)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 600 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 600 "const_prop.m"
                                                      {
#line 600 "const_prop.m"
                                                        transform_hlds__const_prop__V_294_294 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_287_287, (MR_Integer) 1)));
#line 601 "const_prop.m"
                                                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_290_290 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "const_prop.m"
                                                        if (transform_hlds__const_prop__succeeded)
#line 559 "const_prop.m"
                                                          {
#line 601 "const_prop.m"
                                                            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_291_291)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 601 "const_prop.m"
                                                            if (transform_hlds__const_prop__succeeded)
#line 601 "const_prop.m"
                                                              {
#line 601 "const_prop.m"
                                                                transform_hlds__const_prop__V_296_296 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "<") == 0))
#line 604 "const_prop.m"
                                                                  {
#line 602 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 < transform_hlds__const_prop__V_296_296);
#line 604 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 603 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 604 "const_prop.m"
                                                                    else
#line 605 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 604 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 604 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">") == 0))
#line 622 "const_prop.m"
                                                                  {
#line 620 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 > transform_hlds__const_prop__V_296_296);
#line 622 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 621 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 622 "const_prop.m"
                                                                    else
#line 623 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 622 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 622 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "=<") == 0))
#line 613 "const_prop.m"
                                                                  {
#line 611 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 <= transform_hlds__const_prop__V_296_296);
#line 613 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 612 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 613 "const_prop.m"
                                                                    else
#line 614 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 613 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 613 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                if ((strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) ">=") == 0))
#line 631 "const_prop.m"
                                                                  {
#line 629 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 >= transform_hlds__const_prop__V_296_296);
#line 631 "const_prop.m"
                                                                    if (transform_hlds__const_prop__succeeded)
#line 630 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 1;
#line 631 "const_prop.m"
                                                                    else
#line 632 "const_prop.m"
                                                                      *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 631 "const_prop.m"
                                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 631 "const_prop.m"
                                                                  }
#line 559 "const_prop.m"
                                                                else
#line 559 "const_prop.m"
                                                                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 601 "const_prop.m"
                                                              }
#line 559 "const_prop.m"
                                                          }
#line 600 "const_prop.m"
                                                      }
#line 559 "const_prop.m"
                                                  }
#line 559 "const_prop.m"
                                              }
#line 559 "const_prop.m"
                                          }
#line 601 "const_prop.m"
                                      }
#line 600 "const_prop.m"
                                  }
#line 601 "const_prop.m"
                              }
#line 600 "const_prop.m"
                          }
#line 559 "const_prop.m"
                      }
#line 559 "const_prop.m"
                  }
#line 559 "const_prop.m"
                else
#line 559 "const_prop.m"
                if ((strcmp(transform_hlds__const_prop__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 634 "const_prop.m"
                  {
#line 634 "const_prop.m"
                    MR_Word transform_hlds__const_prop__X_203;
#line 634 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Y_204;
#line 634 "const_prop.m"
                    MR_Word transform_hlds__const_prop__Result0_205;
#line 634 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_208_208;
#line 634 "const_prop.m"
                    MR_Word transform_hlds__const_prop__V_209_209;

#line 634 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (strcmp(transform_hlds__const_prop__HeadVar__2_2, (MR_String) "typed_unify") == 0);
#line 634 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 634 "const_prop.m"
                      {
#line 639 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_252_252)) == (MR_mktag((MR_Integer) 1)));
#line 639 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 639 "const_prop.m"
                          {
#line 639 "const_prop.m"
                            transform_hlds__const_prop__X_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 0)));
#line 639 "const_prop.m"
                            transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_252_252, (MR_Integer) 1)));
#line 639 "const_prop.m"
                            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 1)));
#line 639 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 639 "const_prop.m"
                              {
#line 639 "const_prop.m"
                                transform_hlds__const_prop__Y_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)));
#line 639 "const_prop.m"
                                transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 639 "const_prop.m"
                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 634 "const_prop.m"
                                  {
#line 640 "const_prop.m"
                                    {
#line 640 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__V_247_247, transform_hlds__const_prop__V_253_253, &transform_hlds__const_prop__Result0_205);
                                    }
#line 634 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 644 "const_prop.m"
                                      {
#line 644 "const_prop.m"
                                        if ((transform_hlds__const_prop__Result0_205 == (MR_Integer) 0))
#line 642 "const_prop.m"
                                          {
#line 642 "const_prop.m"
                                            *transform_hlds__const_prop__Result_5 = (MR_Integer) 0;
#line 642 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = MR_TRUE;
#line 642 "const_prop.m"
                                          }
#line 644 "const_prop.m"
                                        else
#line 645 "const_prop.m"
                                          {
#line 645 "const_prop.m"
                                            return transform_hlds__const_prop__succeeded = transform_hlds__const_prop__eval_unify_3_p_0(transform_hlds__const_prop__X_203, transform_hlds__const_prop__Y_204, transform_hlds__const_prop__Result_5);
                                          }
#line 644 "const_prop.m"
                                      }
#line 634 "const_prop.m"
                                  }
#line 639 "const_prop.m"
                              }
#line 639 "const_prop.m"
                          }
#line 634 "const_prop.m"
                      }
#line 634 "const_prop.m"
                  }
#line 559 "const_prop.m"
                else
#line 559 "const_prop.m"
                  transform_hlds__const_prop__succeeded = MR_FALSE;
#line 599 "const_prop.m"
              }
#line 599 "const_prop.m"
          }
#line 559 "const_prop.m"
      }
#line 559 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 559 "const_prop.m"
  }
#line 554 "const_prop.m"
}

#line 291 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_3_8_p_0(
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_9,
#line 291 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_10,
#line 291 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_11,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_12,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_13,
#line 291 "const_prop.m"
  MR_Word transform_hlds__const_prop__Z_14,
#line 291 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_15,
#line 291 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__8_8)
#line 291 "const_prop.m"
{
#line 296 "const_prop.m"
  {
#line 296 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded;
#line 296 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_16;

#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "*") == 0))
#line 370 "const_prop.m"
      {
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_253_253;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_254_254;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_255_255;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_256_256;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_257_257;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_258_258;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_259_259;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_260_260;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_261_261;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_262_262;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_263_263;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_264_264;
#line 370 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_396;
#line 370 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_397;
#line 370 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_398;
#line 372 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_468_468;
#line 372 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_469_469;
#line 372 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 372 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_58_58;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_470_470;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_471_471;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_59_59;
#line 373 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_60_60;

#line 371 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 370 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
          {
#line 372 "const_prop.m"
            transform_hlds__const_prop__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 372 "const_prop.m"
            transform_hlds__const_prop__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 372 "const_prop.m"
            transform_hlds__const_prop__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 372 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_253_253)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_253_253, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 372 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
              {
#line 372 "const_prop.m"
                transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_253_253, (MR_Integer) 1)));
#line 372 "const_prop.m"
                transform_hlds__const_prop__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_253_253, (MR_Integer) 2)));
#line 372 "const_prop.m"
                transform_hlds__const_prop__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_253_253, (MR_Integer) 3)));
#line 372 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_254_254)) == (MR_mktag((MR_Integer) 1)));
#line 372 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
                  {
#line 372 "const_prop.m"
                    transform_hlds__const_prop__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_254_254, (MR_Integer) 0)));
#line 372 "const_prop.m"
                    transform_hlds__const_prop__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_254_254, (MR_Integer) 1)));
#line 372 "const_prop.m"
                    transform_hlds__const_prop__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_255_255, (MR_Integer) 0)));
#line 372 "const_prop.m"
                    transform_hlds__const_prop__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_255_255, (MR_Integer) 1)));
#line 372 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_256_256)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_256_256, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 372 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 372 "const_prop.m"
                      {
#line 372 "const_prop.m"
                        transform_hlds__const_prop__XVal_396 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_256_256, (MR_Integer) 1)));
#line 372 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_257_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                          {
#line 372 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_258_258 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                              {
#line 373 "const_prop.m"
                                transform_hlds__const_prop__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 373 "const_prop.m"
                                transform_hlds__const_prop__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 373 "const_prop.m"
                                transform_hlds__const_prop__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 373 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_259_259)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_259_259, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 373 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
                                  {
#line 373 "const_prop.m"
                                    transform_hlds__const_prop__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_259_259, (MR_Integer) 1)));
#line 373 "const_prop.m"
                                    transform_hlds__const_prop__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_259_259, (MR_Integer) 2)));
#line 373 "const_prop.m"
                                    transform_hlds__const_prop__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_259_259, (MR_Integer) 3)));
#line 373 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 373 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
                                      {
#line 373 "const_prop.m"
                                        transform_hlds__const_prop__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_260_260, (MR_Integer) 0)));
#line 373 "const_prop.m"
                                        transform_hlds__const_prop__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_260_260, (MR_Integer) 1)));
#line 373 "const_prop.m"
                                        transform_hlds__const_prop__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_261_261, (MR_Integer) 0)));
#line 373 "const_prop.m"
                                        transform_hlds__const_prop__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_261_261, (MR_Integer) 1)));
#line 373 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_262_262)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_262_262, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 373 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 373 "const_prop.m"
                                          {
#line 373 "const_prop.m"
                                            transform_hlds__const_prop__YVal_397 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_262_262, (MR_Integer) 1)));
#line 373 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                                              {
#line 373 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_264_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 370 "const_prop.m"
                                                  {
#line 374 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 375 "const_prop.m"
                                                    {
#line 375 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_398);
                                                    }
#line 376 "const_prop.m"
                                                    {
#line 376 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_398, transform_hlds__const_prop__XVal_396, transform_hlds__const_prop__YVal_397, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 370 "const_prop.m"
                                                  }
#line 370 "const_prop.m"
                                              }
#line 373 "const_prop.m"
                                          }
#line 373 "const_prop.m"
                                      }
#line 373 "const_prop.m"
                                  }
#line 370 "const_prop.m"
                              }
#line 370 "const_prop.m"
                          }
#line 372 "const_prop.m"
                      }
#line 372 "const_prop.m"
                  }
#line 372 "const_prop.m"
              }
#line 370 "const_prop.m"
          }
#line 370 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "+") == 0))
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0))
#line 306 "const_prop.m"
        {
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_350_350;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_351_351;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_352_352;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_353_353;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_354_354;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_355_355;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_356_356;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_357_357;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_358_358;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_359_359;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_360_360;
#line 306 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_373;
#line 306 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_374;
#line 306 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_375;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_24_24;
#line 308 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_25_25;
#line 309 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_438_438;
#line 309 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_439_439;
#line 309 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_26_26;
#line 309 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_27_27;

#line 308 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_349_349)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_349_349, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 308 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
            {
#line 308 "const_prop.m"
              transform_hlds__const_prop__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_349_349, (MR_Integer) 1)));
#line 308 "const_prop.m"
              transform_hlds__const_prop__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_349_349, (MR_Integer) 2)));
#line 308 "const_prop.m"
              transform_hlds__const_prop__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_349_349, (MR_Integer) 3)));
#line 308 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_350_350)) == (MR_mktag((MR_Integer) 1)));
#line 308 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                {
#line 308 "const_prop.m"
                  transform_hlds__const_prop__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_350_350, (MR_Integer) 0)));
#line 308 "const_prop.m"
                  transform_hlds__const_prop__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_350_350, (MR_Integer) 1)));
#line 308 "const_prop.m"
                  transform_hlds__const_prop__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_351_351, (MR_Integer) 0)));
#line 308 "const_prop.m"
                  transform_hlds__const_prop__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_351_351, (MR_Integer) 1)));
#line 308 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_352_352)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_352_352, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 308 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 308 "const_prop.m"
                    {
#line 308 "const_prop.m"
                      transform_hlds__const_prop__XVal_373 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_352_352, (MR_Integer) 1)));
#line 308 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_353_353 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                        {
#line 308 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_354_354 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                            {
#line 309 "const_prop.m"
                              transform_hlds__const_prop__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 309 "const_prop.m"
                              transform_hlds__const_prop__V_439_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 309 "const_prop.m"
                              transform_hlds__const_prop__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 309 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_355_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 309 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 309 "const_prop.m"
                                {
#line 309 "const_prop.m"
                                  transform_hlds__const_prop__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 1)));
#line 309 "const_prop.m"
                                  transform_hlds__const_prop__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 2)));
#line 309 "const_prop.m"
                                  transform_hlds__const_prop__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_355_355, (MR_Integer) 3)));
#line 309 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_356_356)) == (MR_mktag((MR_Integer) 1)));
#line 309 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 309 "const_prop.m"
                                    {
#line 309 "const_prop.m"
                                      transform_hlds__const_prop__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 0)));
#line 309 "const_prop.m"
                                      transform_hlds__const_prop__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_356_356, (MR_Integer) 1)));
#line 309 "const_prop.m"
                                      transform_hlds__const_prop__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 0)));
#line 309 "const_prop.m"
                                      transform_hlds__const_prop__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_357_357, (MR_Integer) 1)));
#line 309 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_358_358)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 309 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 309 "const_prop.m"
                                        {
#line 309 "const_prop.m"
                                          transform_hlds__const_prop__YVal_374 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_358_358, (MR_Integer) 1)));
#line 309 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_359_359 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                                            {
#line 309 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_360_360 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 306 "const_prop.m"
                                                {
#line 310 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 311 "const_prop.m"
                                                  {
#line 311 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_375);
                                                  }
#line 312 "const_prop.m"
                                                  {
#line 312 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_375, transform_hlds__const_prop__XVal_373, transform_hlds__const_prop__YVal_374, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
#line 306 "const_prop.m"
                                                }
#line 306 "const_prop.m"
                                            }
#line 309 "const_prop.m"
                                        }
#line 309 "const_prop.m"
                                    }
#line 309 "const_prop.m"
                                }
#line 306 "const_prop.m"
                            }
#line 306 "const_prop.m"
                        }
#line 308 "const_prop.m"
                    }
#line 308 "const_prop.m"
                }
#line 308 "const_prop.m"
            }
#line 306 "const_prop.m"
        }
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 1))
#line 314 "const_prop.m"
        {
#line 314 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_32;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_338_338;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_339_339;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_340_340;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_341_341;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_342_342;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_343_343;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_344_344;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_345_345;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_346_346;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_347_347;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_348_348;
#line 314 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_376;
#line 314 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_377;
#line 316 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 316 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 316 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_28_28;
#line 316 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_29_29;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_442_442;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_443_443;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_30_30;
#line 317 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_31_31;

#line 316 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_337_337)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_337_337, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 316 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
            {
#line 316 "const_prop.m"
              transform_hlds__const_prop__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_337_337, (MR_Integer) 1)));
#line 316 "const_prop.m"
              transform_hlds__const_prop__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_337_337, (MR_Integer) 2)));
#line 316 "const_prop.m"
              transform_hlds__const_prop__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_337_337, (MR_Integer) 3)));
#line 316 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_338_338)) == (MR_mktag((MR_Integer) 1)));
#line 316 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
                {
#line 316 "const_prop.m"
                  transform_hlds__const_prop__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_338_338, (MR_Integer) 0)));
#line 316 "const_prop.m"
                  transform_hlds__const_prop__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_338_338, (MR_Integer) 1)));
#line 316 "const_prop.m"
                  transform_hlds__const_prop__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_339_339, (MR_Integer) 0)));
#line 316 "const_prop.m"
                  transform_hlds__const_prop__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_339_339, (MR_Integer) 1)));
#line 316 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_340_340)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_340_340, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 316 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 316 "const_prop.m"
                    {
#line 316 "const_prop.m"
                      transform_hlds__const_prop__YVal_376 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_340_340, (MR_Integer) 1)));
#line 316 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                        {
#line 316 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_342_342 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                            {
#line 317 "const_prop.m"
                              transform_hlds__const_prop__V_442_442 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 317 "const_prop.m"
                              transform_hlds__const_prop__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 317 "const_prop.m"
                              transform_hlds__const_prop__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 317 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_343_343)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_343_343, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 317 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
                                {
#line 317 "const_prop.m"
                                  transform_hlds__const_prop__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_343_343, (MR_Integer) 1)));
#line 317 "const_prop.m"
                                  transform_hlds__const_prop__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_343_343, (MR_Integer) 2)));
#line 317 "const_prop.m"
                                  transform_hlds__const_prop__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_343_343, (MR_Integer) 3)));
#line 317 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_344_344)) == (MR_mktag((MR_Integer) 1)));
#line 317 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
                                    {
#line 317 "const_prop.m"
                                      transform_hlds__const_prop__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_344_344, (MR_Integer) 0)));
#line 317 "const_prop.m"
                                      transform_hlds__const_prop__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_344_344, (MR_Integer) 1)));
#line 317 "const_prop.m"
                                      transform_hlds__const_prop__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_345_345, (MR_Integer) 0)));
#line 317 "const_prop.m"
                                      transform_hlds__const_prop__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_345_345, (MR_Integer) 1)));
#line 317 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_346_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_346_346, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 317 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 317 "const_prop.m"
                                        {
#line 317 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_346_346, (MR_Integer) 1)));
#line 317 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_347_347 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                                            {
#line 317 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_348_348 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 314 "const_prop.m"
                                                {
#line 318 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 319 "const_prop.m"
                                                  {
#line 319 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_377);
                                                  }
#line 320 "const_prop.m"
                                                  {
#line 320 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_377, transform_hlds__const_prop__ZVal_32, transform_hlds__const_prop__YVal_376, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
#line 314 "const_prop.m"
                                                }
#line 314 "const_prop.m"
                                            }
#line 317 "const_prop.m"
                                        }
#line 317 "const_prop.m"
                                    }
#line 317 "const_prop.m"
                                }
#line 314 "const_prop.m"
                            }
#line 314 "const_prop.m"
                        }
#line 316 "const_prop.m"
                    }
#line 316 "const_prop.m"
                }
#line 316 "const_prop.m"
            }
#line 314 "const_prop.m"
        }
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 2))
#line 322 "const_prop.m"
        {
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
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
          MR_Word transform_hlds__const_prop__V_336_336;
#line 322 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_378;
#line 322 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_379;
#line 322 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_380;
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_444_444 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_33_33;
#line 324 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_34_34;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_446_446;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_447_447;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_35_35;
#line 325 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_36_36;

#line 324 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_325_325)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_325_325, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 324 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
            {
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_325_325, (MR_Integer) 1)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_325_325, (MR_Integer) 2)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_325_325, (MR_Integer) 3)));
#line 324 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_326_326)) == (MR_mktag((MR_Integer) 1)));
#line 324 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                {
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_326_326, (MR_Integer) 0)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_326_326, (MR_Integer) 1)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_327_327, (MR_Integer) 0)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_327_327, (MR_Integer) 1)));
#line 324 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_328_328)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_328_328, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 324 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 324 "const_prop.m"
                    {
#line 324 "const_prop.m"
                      transform_hlds__const_prop__XVal_378 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_328_328, (MR_Integer) 1)));
#line 324 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                        {
#line 324 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_330_330 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                            {
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_447_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 325 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_331_331)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_331_331, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 325 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                {
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_331_331, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_331_331, (MR_Integer) 2)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_331_331, (MR_Integer) 3)));
#line 325 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_332_332)) == (MR_mktag((MR_Integer) 1)));
#line 325 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                    {
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_332_332, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_332_332, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_333_333, (MR_Integer) 0)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_333_333, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_334_334)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_334_334, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 325 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 325 "const_prop.m"
                                        {
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_380 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_334_334, (MR_Integer) 1)));
#line 325 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_335_335 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                            {
#line 325 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_336_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 322 "const_prop.m"
                                                {
#line 326 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 327 "const_prop.m"
                                                  {
#line 327 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_379);
                                                  }
#line 328 "const_prop.m"
                                                  {
#line 328 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_379, transform_hlds__const_prop__ZVal_380, transform_hlds__const_prop__XVal_378, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
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
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "-") == 0))
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0))
#line 338 "const_prop.m"
        {
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_302_302;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_303_303;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_304_304;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_305_305;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_306_306;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_307_307;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_308_308;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_309_309;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_310_310;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_311_311;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_312_312;
#line 338 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_384;
#line 338 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_385;
#line 338 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_386;
#line 340 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 340 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 340 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_41_41;
#line 340 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_42_42;
#line 341 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_454_454;
#line 341 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_455_455;
#line 341 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_43_43;
#line 341 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_44_44;

#line 340 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_301_301)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_301_301, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 340 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
            {
#line 340 "const_prop.m"
              transform_hlds__const_prop__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_301_301, (MR_Integer) 1)));
#line 340 "const_prop.m"
              transform_hlds__const_prop__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_301_301, (MR_Integer) 2)));
#line 340 "const_prop.m"
              transform_hlds__const_prop__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_301_301, (MR_Integer) 3)));
#line 340 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_302_302)) == (MR_mktag((MR_Integer) 1)));
#line 340 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                {
#line 340 "const_prop.m"
                  transform_hlds__const_prop__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_302_302, (MR_Integer) 0)));
#line 340 "const_prop.m"
                  transform_hlds__const_prop__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_302_302, (MR_Integer) 1)));
#line 340 "const_prop.m"
                  transform_hlds__const_prop__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_303_303, (MR_Integer) 0)));
#line 340 "const_prop.m"
                  transform_hlds__const_prop__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_303_303, (MR_Integer) 1)));
#line 340 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_304_304)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_304_304, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 340 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 340 "const_prop.m"
                    {
#line 340 "const_prop.m"
                      transform_hlds__const_prop__XVal_384 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_304_304, (MR_Integer) 1)));
#line 340 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_305_305 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                        {
#line 340 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_306_306 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                            {
#line 341 "const_prop.m"
                              transform_hlds__const_prop__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 341 "const_prop.m"
                              transform_hlds__const_prop__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 341 "const_prop.m"
                              transform_hlds__const_prop__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 341 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_307_307)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_307_307, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 341 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 341 "const_prop.m"
                                {
#line 341 "const_prop.m"
                                  transform_hlds__const_prop__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_307_307, (MR_Integer) 1)));
#line 341 "const_prop.m"
                                  transform_hlds__const_prop__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_307_307, (MR_Integer) 2)));
#line 341 "const_prop.m"
                                  transform_hlds__const_prop__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_307_307, (MR_Integer) 3)));
#line 341 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_308_308)) == (MR_mktag((MR_Integer) 1)));
#line 341 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 341 "const_prop.m"
                                    {
#line 341 "const_prop.m"
                                      transform_hlds__const_prop__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_308_308, (MR_Integer) 0)));
#line 341 "const_prop.m"
                                      transform_hlds__const_prop__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_308_308, (MR_Integer) 1)));
#line 341 "const_prop.m"
                                      transform_hlds__const_prop__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_309_309, (MR_Integer) 0)));
#line 341 "const_prop.m"
                                      transform_hlds__const_prop__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_309_309, (MR_Integer) 1)));
#line 341 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_310_310)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_310_310, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 341 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 341 "const_prop.m"
                                        {
#line 341 "const_prop.m"
                                          transform_hlds__const_prop__YVal_385 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_310_310, (MR_Integer) 1)));
#line 341 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_311_311 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                                            {
#line 341 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_312_312 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 338 "const_prop.m"
                                                {
#line 342 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 343 "const_prop.m"
                                                  {
#line 343 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_386);
                                                  }
#line 344 "const_prop.m"
                                                  {
#line 344 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_386, transform_hlds__const_prop__XVal_384, transform_hlds__const_prop__YVal_385, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
#line 338 "const_prop.m"
                                                }
#line 338 "const_prop.m"
                                            }
#line 341 "const_prop.m"
                                        }
#line 341 "const_prop.m"
                                    }
#line 341 "const_prop.m"
                                }
#line 338 "const_prop.m"
                            }
#line 338 "const_prop.m"
                        }
#line 340 "const_prop.m"
                    }
#line 340 "const_prop.m"
                }
#line 340 "const_prop.m"
            }
#line 338 "const_prop.m"
        }
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 1))
#line 346 "const_prop.m"
        {
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_290_290;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_291_291;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_292_292;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_293_293;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_294_294;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_295_295;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_296_296;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_297_297;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_298_298;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_299_299;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_300_300;
#line 346 "const_prop.m"
          MR_Integer transform_hlds__const_prop__YVal_387;
#line 346 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_388;
#line 346 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_389;
#line 348 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 348 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 348 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_45_45;
#line 348 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_46_46;
#line 349 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_458_458;
#line 349 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_459_459;
#line 349 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_47_47;
#line 349 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_48_48;

#line 348 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_289_289)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 348 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 348 "const_prop.m"
            {
#line 348 "const_prop.m"
              transform_hlds__const_prop__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 1)));
#line 348 "const_prop.m"
              transform_hlds__const_prop__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 2)));
#line 348 "const_prop.m"
              transform_hlds__const_prop__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_289_289, (MR_Integer) 3)));
#line 348 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_290_290)) == (MR_mktag((MR_Integer) 1)));
#line 348 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 348 "const_prop.m"
                {
#line 348 "const_prop.m"
                  transform_hlds__const_prop__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_290_290, (MR_Integer) 0)));
#line 348 "const_prop.m"
                  transform_hlds__const_prop__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_290_290, (MR_Integer) 1)));
#line 348 "const_prop.m"
                  transform_hlds__const_prop__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_291_291, (MR_Integer) 0)));
#line 348 "const_prop.m"
                  transform_hlds__const_prop__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_291_291, (MR_Integer) 1)));
#line 348 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_292_292)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_292_292, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 348 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 348 "const_prop.m"
                    {
#line 348 "const_prop.m"
                      transform_hlds__const_prop__YVal_387 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_292_292, (MR_Integer) 1)));
#line 348 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                        {
#line 348 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_294_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                            {
#line 349 "const_prop.m"
                              transform_hlds__const_prop__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 349 "const_prop.m"
                              transform_hlds__const_prop__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 349 "const_prop.m"
                              transform_hlds__const_prop__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 349 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_295_295)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_295_295, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 349 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                {
#line 349 "const_prop.m"
                                  transform_hlds__const_prop__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_295_295, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                  transform_hlds__const_prop__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_295_295, (MR_Integer) 2)));
#line 349 "const_prop.m"
                                  transform_hlds__const_prop__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_295_295, (MR_Integer) 3)));
#line 349 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_296_296)) == (MR_mktag((MR_Integer) 1)));
#line 349 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                    {
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_296_296, (MR_Integer) 0)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_296_296, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_297_297, (MR_Integer) 0)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_297_297, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_298_298)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_298_298, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 349 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 349 "const_prop.m"
                                        {
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_389 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_298_298, (MR_Integer) 1)));
#line 349 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_299_299 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                                            {
#line 349 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_300_300 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 346 "const_prop.m"
                                                {
#line 350 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__X_12;
#line 351 "const_prop.m"
                                                  {
#line 351 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_388);
                                                  }
#line 352 "const_prop.m"
                                                  {
#line 352 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_388, transform_hlds__const_prop__YVal_387, transform_hlds__const_prop__ZVal_389, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
#line 346 "const_prop.m"
                                                }
#line 346 "const_prop.m"
                                            }
#line 349 "const_prop.m"
                                        }
#line 349 "const_prop.m"
                                    }
#line 349 "const_prop.m"
                                }
#line 346 "const_prop.m"
                            }
#line 346 "const_prop.m"
                        }
#line 348 "const_prop.m"
                    }
#line 348 "const_prop.m"
                }
#line 348 "const_prop.m"
            }
#line 346 "const_prop.m"
        }
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
      if ((transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 2))
#line 354 "const_prop.m"
        {
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_278_278;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_279_279;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_280_280;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_281_281;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_282_282;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_283_283;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_284_284;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_285_285;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_286_286;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_287_287;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_288_288;
#line 354 "const_prop.m"
          MR_Integer transform_hlds__const_prop__XVal_390;
#line 354 "const_prop.m"
          MR_Word transform_hlds__const_prop__BitsPerInt_391;
#line 354 "const_prop.m"
          MR_Integer transform_hlds__const_prop__ZVal_392;
#line 356 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 356 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 356 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_49_49;
#line 356 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_50_50;
#line 357 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_462_462;
#line 357 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_463_463;
#line 357 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_51_51;
#line 357 "const_prop.m"
          MR_Word transform_hlds__const_prop__V_52_52;

#line 356 "const_prop.m"
          transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_277_277)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 356 "const_prop.m"
          if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
            {
#line 356 "const_prop.m"
              transform_hlds__const_prop__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 1)));
#line 356 "const_prop.m"
              transform_hlds__const_prop__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 2)));
#line 356 "const_prop.m"
              transform_hlds__const_prop__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_277_277, (MR_Integer) 3)));
#line 356 "const_prop.m"
              transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_278_278)) == (MR_mktag((MR_Integer) 1)));
#line 356 "const_prop.m"
              if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
                {
#line 356 "const_prop.m"
                  transform_hlds__const_prop__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 0)));
#line 356 "const_prop.m"
                  transform_hlds__const_prop__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_278_278, (MR_Integer) 1)));
#line 356 "const_prop.m"
                  transform_hlds__const_prop__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 0)));
#line 356 "const_prop.m"
                  transform_hlds__const_prop__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_279_279, (MR_Integer) 1)));
#line 356 "const_prop.m"
                  transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_280_280)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 356 "const_prop.m"
                  if (transform_hlds__const_prop__succeeded)
#line 356 "const_prop.m"
                    {
#line 356 "const_prop.m"
                      transform_hlds__const_prop__XVal_390 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_280_280, (MR_Integer) 1)));
#line 356 "const_prop.m"
                      transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                      if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                        {
#line 356 "const_prop.m"
                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_282_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                          if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                            {
#line 357 "const_prop.m"
                              transform_hlds__const_prop__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 0)));
#line 357 "const_prop.m"
                              transform_hlds__const_prop__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 1)));
#line 357 "const_prop.m"
                              transform_hlds__const_prop__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Z_14, (MR_Integer) 2)));
#line 357 "const_prop.m"
                              transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_283_283)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_283_283, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 357 "const_prop.m"
                              if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                {
#line 357 "const_prop.m"
                                  transform_hlds__const_prop__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_283_283, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                  transform_hlds__const_prop__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_283_283, (MR_Integer) 2)));
#line 357 "const_prop.m"
                                  transform_hlds__const_prop__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_283_283, (MR_Integer) 3)));
#line 357 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_284_284)) == (MR_mktag((MR_Integer) 1)));
#line 357 "const_prop.m"
                                  if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                    {
#line 357 "const_prop.m"
                                      transform_hlds__const_prop__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_284_284, (MR_Integer) 0)));
#line 357 "const_prop.m"
                                      transform_hlds__const_prop__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_284_284, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                      transform_hlds__const_prop__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 0)));
#line 357 "const_prop.m"
                                      transform_hlds__const_prop__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_285_285, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                      transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_286_286)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_286_286, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 357 "const_prop.m"
                                      if (transform_hlds__const_prop__succeeded)
#line 357 "const_prop.m"
                                        {
#line 357 "const_prop.m"
                                          transform_hlds__const_prop__ZVal_392 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_286_286, (MR_Integer) 1)));
#line 357 "const_prop.m"
                                          transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_287_287 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                                          if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                                            {
#line 357 "const_prop.m"
                                              transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_288_288 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "const_prop.m"
                                              if (transform_hlds__const_prop__succeeded)
#line 354 "const_prop.m"
                                                {
#line 358 "const_prop.m"
                                                  *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Y_13;
#line 359 "const_prop.m"
                                                  {
#line 359 "const_prop.m"
                                                    libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_391);
                                                  }
#line 360 "const_prop.m"
                                                  {
#line 360 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_391, transform_hlds__const_prop__XVal_390, transform_hlds__const_prop__ZVal_392, &transform_hlds__const_prop__OutputArgVal_16);
                                                  }
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
#line 305 "const_prop.m"
      else
#line 305 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_FALSE;
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "//") == 0))
#line 387 "const_prop.m"
      {
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_229_229;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_230_230;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_231_231;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_232_232;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_233_233;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_234_234;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_235_235;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_236_236;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_237_237;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_238_238;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_239_239;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_240_240;
#line 387 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_402;
#line 387 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_403;
#line 387 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_404;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_476_476;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_477_477;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_65_65;
#line 389 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_66_66;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_478_478;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_479_479;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;
#line 390 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68;

#line 388 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 387 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
          {
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 389 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_229_229)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 389 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
              {
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 1)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 2)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_229_229, (MR_Integer) 3)));
#line 389 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_230_230)) == (MR_mktag((MR_Integer) 1)));
#line 389 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
                  {
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 0)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_230_230, (MR_Integer) 1)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 0)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_231_231, (MR_Integer) 1)));
#line 389 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_232_232)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 389 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 389 "const_prop.m"
                      {
#line 389 "const_prop.m"
                        transform_hlds__const_prop__XVal_402 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_232_232, (MR_Integer) 1)));
#line 389 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                          {
#line 389 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_234_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                              {
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 390 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 390 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                  {
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 2)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_235_235, (MR_Integer) 3)));
#line 390 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_236_236)) == (MR_mktag((MR_Integer) 1)));
#line 390 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                      {
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_236_236, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 0)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_237_237, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_238_238)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 390 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 390 "const_prop.m"
                                          {
#line 390 "const_prop.m"
                                            transform_hlds__const_prop__YVal_403 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_238_238, (MR_Integer) 1)));
#line 390 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_239_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                              {
#line 390 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 387 "const_prop.m"
                                                  {
#line 391 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_403 == (MR_Integer) 0);
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
                                                          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_404);
                                                        }
#line 394 "const_prop.m"
                                                        {
#line 394 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = libs__int_emu__quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_404, transform_hlds__const_prop__XVal_402, transform_hlds__const_prop__YVal_403, &transform_hlds__const_prop__OutputArgVal_16);
                                                        }
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
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "/\\") == 0))
#line 455 "const_prop.m"
      {
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_133_133;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_134_134;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_135_135;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_136_136;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_137_137;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_138_138;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_139_139;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_140_140;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_141_141;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_142_142;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_143_143;
#line 455 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_144_144;
#line 455 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_426;
#line 455 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_427;
#line 457 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_508_508;
#line 457 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_509_509;
#line 457 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_97_97;
#line 457 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_98_98;
#line 458 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_510_510;
#line 458 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_511_511;
#line 458 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_99_99;
#line 458 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_100_100;

#line 456 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 455 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
          {
#line 457 "const_prop.m"
            transform_hlds__const_prop__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 457 "const_prop.m"
            transform_hlds__const_prop__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 457 "const_prop.m"
            transform_hlds__const_prop__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 457 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 457 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 457 "const_prop.m"
              {
#line 457 "const_prop.m"
                transform_hlds__const_prop__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 1)));
#line 457 "const_prop.m"
                transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 2)));
#line 457 "const_prop.m"
                transform_hlds__const_prop__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_133_133, (MR_Integer) 3)));
#line 457 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_134_134)) == (MR_mktag((MR_Integer) 1)));
#line 457 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 457 "const_prop.m"
                  {
#line 457 "const_prop.m"
                    transform_hlds__const_prop__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 0)));
#line 457 "const_prop.m"
                    transform_hlds__const_prop__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_134_134, (MR_Integer) 1)));
#line 457 "const_prop.m"
                    transform_hlds__const_prop__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 0)));
#line 457 "const_prop.m"
                    transform_hlds__const_prop__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_135_135, (MR_Integer) 1)));
#line 457 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_136_136)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 457 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 457 "const_prop.m"
                      {
#line 457 "const_prop.m"
                        transform_hlds__const_prop__XVal_426 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_136_136, (MR_Integer) 1)));
#line 457 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                          {
#line 457 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                              {
#line 458 "const_prop.m"
                                transform_hlds__const_prop__V_510_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 458 "const_prop.m"
                                transform_hlds__const_prop__V_511_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 458 "const_prop.m"
                                transform_hlds__const_prop__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 458 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_139_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 458 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 458 "const_prop.m"
                                  {
#line 458 "const_prop.m"
                                    transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 1)));
#line 458 "const_prop.m"
                                    transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 2)));
#line 458 "const_prop.m"
                                    transform_hlds__const_prop__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_139_139, (MR_Integer) 3)));
#line 458 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_140_140)) == (MR_mktag((MR_Integer) 1)));
#line 458 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 458 "const_prop.m"
                                      {
#line 458 "const_prop.m"
                                        transform_hlds__const_prop__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 0)));
#line 458 "const_prop.m"
                                        transform_hlds__const_prop__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_140_140, (MR_Integer) 1)));
#line 458 "const_prop.m"
                                        transform_hlds__const_prop__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 0)));
#line 458 "const_prop.m"
                                        transform_hlds__const_prop__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_141_141, (MR_Integer) 1)));
#line 458 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_142_142)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 458 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 458 "const_prop.m"
                                          {
#line 458 "const_prop.m"
                                            transform_hlds__const_prop__YVal_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_142_142, (MR_Integer) 1)));
#line 458 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                                              {
#line 458 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 455 "const_prop.m"
                                                  {
#line 459 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 460 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_426 & transform_hlds__const_prop__YVal_427);
#line 460 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 455 "const_prop.m"
                                                  }
#line 455 "const_prop.m"
                                              }
#line 458 "const_prop.m"
                                          }
#line 458 "const_prop.m"
                                      }
#line 458 "const_prop.m"
                                  }
#line 455 "const_prop.m"
                              }
#line 455 "const_prop.m"
                          }
#line 457 "const_prop.m"
                      }
#line 457 "const_prop.m"
                  }
#line 457 "const_prop.m"
              }
#line 455 "const_prop.m"
          }
#line 455 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "<<") == 0))
#line 431 "const_prop.m"
      {
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_169_169;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_170_170;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_171_171;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_172_172;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_173_173;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_174_174;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_175_175;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_176_176;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_177_177;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_178_178;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_179_179;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_180_180;
#line 431 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_417;
#line 431 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_418;
#line 431 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_419;
#line 433 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_496_496;
#line 433 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_497_497;
#line 433 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_85_85;
#line 433 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_86_86;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_498_498;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_499_499;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_87_87;
#line 434 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_88_88;

#line 432 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 431 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
          {
#line 433 "const_prop.m"
            transform_hlds__const_prop__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 433 "const_prop.m"
            transform_hlds__const_prop__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 433 "const_prop.m"
            transform_hlds__const_prop__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 433 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_169_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_169_169, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 433 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 433 "const_prop.m"
              {
#line 433 "const_prop.m"
                transform_hlds__const_prop__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_169_169, (MR_Integer) 1)));
#line 433 "const_prop.m"
                transform_hlds__const_prop__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_169_169, (MR_Integer) 2)));
#line 433 "const_prop.m"
                transform_hlds__const_prop__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_169_169, (MR_Integer) 3)));
#line 433 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_170_170)) == (MR_mktag((MR_Integer) 1)));
#line 433 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 433 "const_prop.m"
                  {
#line 433 "const_prop.m"
                    transform_hlds__const_prop__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_170_170, (MR_Integer) 0)));
#line 433 "const_prop.m"
                    transform_hlds__const_prop__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_170_170, (MR_Integer) 1)));
#line 433 "const_prop.m"
                    transform_hlds__const_prop__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_171_171, (MR_Integer) 0)));
#line 433 "const_prop.m"
                    transform_hlds__const_prop__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_171_171, (MR_Integer) 1)));
#line 433 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_172_172)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_172_172, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 433 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 433 "const_prop.m"
                      {
#line 433 "const_prop.m"
                        transform_hlds__const_prop__XVal_417 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_172_172, (MR_Integer) 1)));
#line 433 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                          {
#line 433 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_174_174 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                              {
#line 434 "const_prop.m"
                                transform_hlds__const_prop__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 434 "const_prop.m"
                                transform_hlds__const_prop__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 434 "const_prop.m"
                                transform_hlds__const_prop__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 434 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_175_175)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_175_175, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 434 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                  {
#line 434 "const_prop.m"
                                    transform_hlds__const_prop__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_175_175, (MR_Integer) 1)));
#line 434 "const_prop.m"
                                    transform_hlds__const_prop__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_175_175, (MR_Integer) 2)));
#line 434 "const_prop.m"
                                    transform_hlds__const_prop__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_175_175, (MR_Integer) 3)));
#line 434 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_176_176)) == (MR_mktag((MR_Integer) 1)));
#line 434 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                      {
#line 434 "const_prop.m"
                                        transform_hlds__const_prop__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_176_176, (MR_Integer) 0)));
#line 434 "const_prop.m"
                                        transform_hlds__const_prop__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_176_176, (MR_Integer) 1)));
#line 434 "const_prop.m"
                                        transform_hlds__const_prop__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_177_177, (MR_Integer) 0)));
#line 434 "const_prop.m"
                                        transform_hlds__const_prop__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_177_177, (MR_Integer) 1)));
#line 434 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_178_178)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_178_178, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 434 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 434 "const_prop.m"
                                          {
#line 434 "const_prop.m"
                                            transform_hlds__const_prop__YVal_418 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_178_178, (MR_Integer) 1)));
#line 434 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                                              {
#line 434 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 431 "const_prop.m"
                                                  {
#line 435 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 436 "const_prop.m"
                                                    {
#line 436 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_419);
                                                    }
#line 437 "const_prop.m"
                                                    {
#line 437 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_419, transform_hlds__const_prop__XVal_417, transform_hlds__const_prop__YVal_418, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 431 "const_prop.m"
                                                  }
#line 431 "const_prop.m"
                                              }
#line 434 "const_prop.m"
                                          }
#line 434 "const_prop.m"
                                      }
#line 434 "const_prop.m"
                                  }
#line 431 "const_prop.m"
                              }
#line 431 "const_prop.m"
                          }
#line 433 "const_prop.m"
                      }
#line 433 "const_prop.m"
                  }
#line 433 "const_prop.m"
              }
#line 431 "const_prop.m"
          }
#line 431 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) ">>") == 0))
#line 447 "const_prop.m"
      {
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_145_145;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_146_146;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_147_147;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_148_148;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_149_149;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_150_150;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_151_151;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_152_152;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_153_153;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_154_154;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_155_155;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_156_156;
#line 447 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_423;
#line 447 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_424;
#line 447 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_425;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_504_504;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_505_505;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_93_93;
#line 449 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_94_94;
#line 450 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_506_506;
#line 450 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_507_507;
#line 450 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_95_95;
#line 450 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_96_96;

#line 448 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 447 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
          {
#line 449 "const_prop.m"
            transform_hlds__const_prop__V_504_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 449 "const_prop.m"
            transform_hlds__const_prop__V_505_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 449 "const_prop.m"
            transform_hlds__const_prop__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 449 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_145_145)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 449 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
              {
#line 449 "const_prop.m"
                transform_hlds__const_prop__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 1)));
#line 449 "const_prop.m"
                transform_hlds__const_prop__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 2)));
#line 449 "const_prop.m"
                transform_hlds__const_prop__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_145_145, (MR_Integer) 3)));
#line 449 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_146_146)) == (MR_mktag((MR_Integer) 1)));
#line 449 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
                  {
#line 449 "const_prop.m"
                    transform_hlds__const_prop__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 0)));
#line 449 "const_prop.m"
                    transform_hlds__const_prop__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_146_146, (MR_Integer) 1)));
#line 449 "const_prop.m"
                    transform_hlds__const_prop__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 0)));
#line 449 "const_prop.m"
                    transform_hlds__const_prop__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_147_147, (MR_Integer) 1)));
#line 449 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_148_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 449 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 449 "const_prop.m"
                      {
#line 449 "const_prop.m"
                        transform_hlds__const_prop__XVal_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_148_148, (MR_Integer) 1)));
#line 449 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                          {
#line 449 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_150_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                              {
#line 450 "const_prop.m"
                                transform_hlds__const_prop__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 450 "const_prop.m"
                                transform_hlds__const_prop__V_507_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 450 "const_prop.m"
                                transform_hlds__const_prop__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 450 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_151_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 450 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 450 "const_prop.m"
                                  {
#line 450 "const_prop.m"
                                    transform_hlds__const_prop__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 1)));
#line 450 "const_prop.m"
                                    transform_hlds__const_prop__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 2)));
#line 450 "const_prop.m"
                                    transform_hlds__const_prop__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_151_151, (MR_Integer) 3)));
#line 450 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_152_152)) == (MR_mktag((MR_Integer) 1)));
#line 450 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 450 "const_prop.m"
                                      {
#line 450 "const_prop.m"
                                        transform_hlds__const_prop__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 0)));
#line 450 "const_prop.m"
                                        transform_hlds__const_prop__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_152_152, (MR_Integer) 1)));
#line 450 "const_prop.m"
                                        transform_hlds__const_prop__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 0)));
#line 450 "const_prop.m"
                                        transform_hlds__const_prop__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_153_153, (MR_Integer) 1)));
#line 450 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_154_154)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 450 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 450 "const_prop.m"
                                          {
#line 450 "const_prop.m"
                                            transform_hlds__const_prop__YVal_424 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_154_154, (MR_Integer) 1)));
#line 450 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                                              {
#line 450 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 447 "const_prop.m"
                                                  {
#line 451 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 452 "const_prop.m"
                                                    {
#line 452 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_425);
                                                    }
#line 453 "const_prop.m"
                                                    {
#line 453 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_425, transform_hlds__const_prop__XVal_423, transform_hlds__const_prop__YVal_424, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 447 "const_prop.m"
                                                  }
#line 447 "const_prop.m"
                                              }
#line 450 "const_prop.m"
                                          }
#line 450 "const_prop.m"
                                      }
#line 450 "const_prop.m"
                                  }
#line 447 "const_prop.m"
                              }
#line 447 "const_prop.m"
                          }
#line 449 "const_prop.m"
                      }
#line 449 "const_prop.m"
                  }
#line 449 "const_prop.m"
              }
#line 447 "const_prop.m"
          }
#line 447 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "\\/") == 0))
#line 462 "const_prop.m"
      {
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_121_121;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_122_122;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_123_123;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_124_124;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_125_125;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_126_126;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_127_127;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_128_128;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_129_129;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_130_130;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_131_131;
#line 462 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_132_132;
#line 462 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_428;
#line 462 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_429;
#line 464 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_512_512;
#line 464 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_513_513;
#line 464 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_101_101;
#line 464 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_102_102;
#line 465 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_514_514;
#line 465 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_515_515;
#line 465 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_103_103;
#line 465 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_104_104;

#line 463 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 462 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
          {
#line 464 "const_prop.m"
            transform_hlds__const_prop__V_512_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 464 "const_prop.m"
            transform_hlds__const_prop__V_513_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 464 "const_prop.m"
            transform_hlds__const_prop__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 464 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_121_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 464 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
              {
#line 464 "const_prop.m"
                transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 1)));
#line 464 "const_prop.m"
                transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 2)));
#line 464 "const_prop.m"
                transform_hlds__const_prop__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_121_121, (MR_Integer) 3)));
#line 464 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_122_122)) == (MR_mktag((MR_Integer) 1)));
#line 464 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
                  {
#line 464 "const_prop.m"
                    transform_hlds__const_prop__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 0)));
#line 464 "const_prop.m"
                    transform_hlds__const_prop__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_122_122, (MR_Integer) 1)));
#line 464 "const_prop.m"
                    transform_hlds__const_prop__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 0)));
#line 464 "const_prop.m"
                    transform_hlds__const_prop__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_123_123, (MR_Integer) 1)));
#line 464 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_124_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 464 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 464 "const_prop.m"
                      {
#line 464 "const_prop.m"
                        transform_hlds__const_prop__XVal_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_124_124, (MR_Integer) 1)));
#line 464 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                          {
#line 464 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_126_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                              {
#line 465 "const_prop.m"
                                transform_hlds__const_prop__V_514_514 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                transform_hlds__const_prop__V_515_515 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                transform_hlds__const_prop__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 465 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 465 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                  {
#line 465 "const_prop.m"
                                    transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                    transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 2)));
#line 465 "const_prop.m"
                                    transform_hlds__const_prop__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_127_127, (MR_Integer) 3)));
#line 465 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 465 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                      {
#line 465 "const_prop.m"
                                        transform_hlds__const_prop__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                        transform_hlds__const_prop__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_128_128, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                        transform_hlds__const_prop__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 0)));
#line 465 "const_prop.m"
                                        transform_hlds__const_prop__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_129_129, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_130_130)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 465 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 465 "const_prop.m"
                                          {
#line 465 "const_prop.m"
                                            transform_hlds__const_prop__YVal_429 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_130_130, (MR_Integer) 1)));
#line 465 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                              {
#line 465 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 462 "const_prop.m"
                                                  {
#line 466 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 467 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_428 | transform_hlds__const_prop__YVal_429);
#line 467 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 462 "const_prop.m"
                                                  }
#line 462 "const_prop.m"
                                              }
#line 465 "const_prop.m"
                                          }
#line 465 "const_prop.m"
                                      }
#line 465 "const_prop.m"
                                  }
#line 462 "const_prop.m"
                              }
#line 462 "const_prop.m"
                          }
#line 464 "const_prop.m"
                      }
#line 464 "const_prop.m"
                  }
#line 464 "const_prop.m"
              }
#line 462 "const_prop.m"
          }
#line 462 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "mod") == 0))
#line 396 "const_prop.m"
      {
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_217_217;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_218_218;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_219_219;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_220_220;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_221_221;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_222_222;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_223_223;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_224_224;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_225_225;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_226_226;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_227_227;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_228_228;
#line 396 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_405;
#line 396 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_406;
#line 396 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_407;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_480_480;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_481_481;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69;
#line 398 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70;
#line 399 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_482_482;
#line 399 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_483_483;
#line 399 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_71_71;
#line 399 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_72_72;

#line 397 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 396 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
          {
#line 398 "const_prop.m"
            transform_hlds__const_prop__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 398 "const_prop.m"
            transform_hlds__const_prop__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 398 "const_prop.m"
            transform_hlds__const_prop__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 398 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_217_217)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_217_217, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 398 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
              {
#line 398 "const_prop.m"
                transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_217_217, (MR_Integer) 1)));
#line 398 "const_prop.m"
                transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_217_217, (MR_Integer) 2)));
#line 398 "const_prop.m"
                transform_hlds__const_prop__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_217_217, (MR_Integer) 3)));
#line 398 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_218_218)) == (MR_mktag((MR_Integer) 1)));
#line 398 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
                  {
#line 398 "const_prop.m"
                    transform_hlds__const_prop__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_218_218, (MR_Integer) 0)));
#line 398 "const_prop.m"
                    transform_hlds__const_prop__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_218_218, (MR_Integer) 1)));
#line 398 "const_prop.m"
                    transform_hlds__const_prop__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_219_219, (MR_Integer) 0)));
#line 398 "const_prop.m"
                    transform_hlds__const_prop__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_219_219, (MR_Integer) 1)));
#line 398 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_220_220)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_220_220, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 398 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 398 "const_prop.m"
                      {
#line 398 "const_prop.m"
                        transform_hlds__const_prop__XVal_405 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_220_220, (MR_Integer) 1)));
#line 398 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                          {
#line 398 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_222_222 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                              {
#line 399 "const_prop.m"
                                transform_hlds__const_prop__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 399 "const_prop.m"
                                transform_hlds__const_prop__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 399 "const_prop.m"
                                transform_hlds__const_prop__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 399 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_223_223)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_223_223, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 399 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 399 "const_prop.m"
                                  {
#line 399 "const_prop.m"
                                    transform_hlds__const_prop__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_223_223, (MR_Integer) 1)));
#line 399 "const_prop.m"
                                    transform_hlds__const_prop__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_223_223, (MR_Integer) 2)));
#line 399 "const_prop.m"
                                    transform_hlds__const_prop__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_223_223, (MR_Integer) 3)));
#line 399 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_224_224)) == (MR_mktag((MR_Integer) 1)));
#line 399 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 399 "const_prop.m"
                                      {
#line 399 "const_prop.m"
                                        transform_hlds__const_prop__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_224_224, (MR_Integer) 0)));
#line 399 "const_prop.m"
                                        transform_hlds__const_prop__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_224_224, (MR_Integer) 1)));
#line 399 "const_prop.m"
                                        transform_hlds__const_prop__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_225_225, (MR_Integer) 0)));
#line 399 "const_prop.m"
                                        transform_hlds__const_prop__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_225_225, (MR_Integer) 1)));
#line 399 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_226_226)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_226_226, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 399 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 399 "const_prop.m"
                                          {
#line 399 "const_prop.m"
                                            transform_hlds__const_prop__YVal_406 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_226_226, (MR_Integer) 1)));
#line 399 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                              {
#line 399 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                                  {
#line 400 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_406 == (MR_Integer) 0);
#line 400 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 396 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 396 "const_prop.m"
                                                      {
#line 401 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 402 "const_prop.m"
                                                        {
#line 402 "const_prop.m"
                                                          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_407);
                                                        }
#line 403 "const_prop.m"
                                                        {
#line 403 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = libs__int_emu__mod_4_p_0(transform_hlds__const_prop__BitsPerInt_407, transform_hlds__const_prop__XVal_405, transform_hlds__const_prop__YVal_406, &transform_hlds__const_prop__OutputArgVal_16);
                                                        }
#line 396 "const_prop.m"
                                                      }
#line 396 "const_prop.m"
                                                  }
#line 396 "const_prop.m"
                                              }
#line 399 "const_prop.m"
                                          }
#line 399 "const_prop.m"
                                      }
#line 399 "const_prop.m"
                                  }
#line 396 "const_prop.m"
                              }
#line 396 "const_prop.m"
                          }
#line 398 "const_prop.m"
                      }
#line 398 "const_prop.m"
                  }
#line 398 "const_prop.m"
              }
#line 396 "const_prop.m"
          }
#line 396 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "rem") == 0))
#line 405 "const_prop.m"
      {
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_205_205;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_206_206;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_207_207;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_208_208;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_209_209;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_210_210;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_211_211;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_212_212;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_213_213;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_214_214;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_215_215;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_216_216;
#line 405 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_408;
#line 405 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_409;
#line 405 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_410;
#line 407 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_484_484;
#line 407 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_485_485;
#line 407 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_73_73;
#line 407 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_74_74;
#line 408 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_486_486;
#line 408 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_487_487;
#line 408 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_75_75;
#line 408 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_76_76;

#line 406 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 405 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
          {
#line 407 "const_prop.m"
            transform_hlds__const_prop__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 407 "const_prop.m"
            transform_hlds__const_prop__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 407 "const_prop.m"
            transform_hlds__const_prop__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 407 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_205_205)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_205_205, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 407 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
              {
#line 407 "const_prop.m"
                transform_hlds__const_prop__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_205_205, (MR_Integer) 1)));
#line 407 "const_prop.m"
                transform_hlds__const_prop__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_205_205, (MR_Integer) 2)));
#line 407 "const_prop.m"
                transform_hlds__const_prop__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_205_205, (MR_Integer) 3)));
#line 407 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_206_206)) == (MR_mktag((MR_Integer) 1)));
#line 407 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
                  {
#line 407 "const_prop.m"
                    transform_hlds__const_prop__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_206_206, (MR_Integer) 0)));
#line 407 "const_prop.m"
                    transform_hlds__const_prop__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_206_206, (MR_Integer) 1)));
#line 407 "const_prop.m"
                    transform_hlds__const_prop__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_207_207, (MR_Integer) 0)));
#line 407 "const_prop.m"
                    transform_hlds__const_prop__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_207_207, (MR_Integer) 1)));
#line 407 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_208_208)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_208_208, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 407 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 407 "const_prop.m"
                      {
#line 407 "const_prop.m"
                        transform_hlds__const_prop__XVal_408 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_208_208, (MR_Integer) 1)));
#line 407 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                          {
#line 407 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_210_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                              {
#line 408 "const_prop.m"
                                transform_hlds__const_prop__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 408 "const_prop.m"
                                transform_hlds__const_prop__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                transform_hlds__const_prop__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 408 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_211_211)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_211_211, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 408 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                  {
#line 408 "const_prop.m"
                                    transform_hlds__const_prop__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_211_211, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                    transform_hlds__const_prop__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_211_211, (MR_Integer) 2)));
#line 408 "const_prop.m"
                                    transform_hlds__const_prop__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_211_211, (MR_Integer) 3)));
#line 408 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_212_212)) == (MR_mktag((MR_Integer) 1)));
#line 408 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                      {
#line 408 "const_prop.m"
                                        transform_hlds__const_prop__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_212_212, (MR_Integer) 0)));
#line 408 "const_prop.m"
                                        transform_hlds__const_prop__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_212_212, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                        transform_hlds__const_prop__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_213_213, (MR_Integer) 0)));
#line 408 "const_prop.m"
                                        transform_hlds__const_prop__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_213_213, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_214_214)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_214_214, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 408 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 408 "const_prop.m"
                                          {
#line 408 "const_prop.m"
                                            transform_hlds__const_prop__YVal_409 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_214_214, (MR_Integer) 1)));
#line 408 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_215_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                                              {
#line 408 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_216_216 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                                                  {
#line 409 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_409 == (MR_Integer) 0);
#line 409 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 405 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 405 "const_prop.m"
                                                      {
#line 410 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 411 "const_prop.m"
                                                        {
#line 411 "const_prop.m"
                                                          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_410);
                                                        }
#line 412 "const_prop.m"
                                                        {
#line 412 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = libs__int_emu__rem_4_p_0(transform_hlds__const_prop__BitsPerInt_410, transform_hlds__const_prop__XVal_408, transform_hlds__const_prop__YVal_409, &transform_hlds__const_prop__OutputArgVal_16);
                                                        }
#line 405 "const_prop.m"
                                                      }
#line 405 "const_prop.m"
                                                  }
#line 405 "const_prop.m"
                                              }
#line 408 "const_prop.m"
                                          }
#line 408 "const_prop.m"
                                      }
#line 408 "const_prop.m"
                                  }
#line 405 "const_prop.m"
                              }
#line 405 "const_prop.m"
                          }
#line 407 "const_prop.m"
                      }
#line 407 "const_prop.m"
                  }
#line 407 "const_prop.m"
              }
#line 405 "const_prop.m"
          }
#line 405 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "xor") == 0))
#line 469 "const_prop.m"
      {
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_109_109;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_110_110;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_111_111;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_112_112;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_113_113;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_114_114;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_115_115;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_116_116;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_117_117;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_118_118;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_119_119;
#line 469 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_120_120;
#line 469 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_430;
#line 469 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_431;
#line 471 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_516_516;
#line 471 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_517_517;
#line 471 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_105_105;
#line 471 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_106_106;
#line 472 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_518_518;
#line 472 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_519_519;
#line 472 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_107_107;
#line 472 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_108_108;

#line 470 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 469 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 469 "const_prop.m"
          {
#line 471 "const_prop.m"
            transform_hlds__const_prop__V_516_516 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 471 "const_prop.m"
            transform_hlds__const_prop__V_517_517 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 471 "const_prop.m"
            transform_hlds__const_prop__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 471 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 471 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
              {
#line 471 "const_prop.m"
                transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 1)));
#line 471 "const_prop.m"
                transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 2)));
#line 471 "const_prop.m"
                transform_hlds__const_prop__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_109_109, (MR_Integer) 3)));
#line 471 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_110_110)) == (MR_mktag((MR_Integer) 1)));
#line 471 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                  {
#line 471 "const_prop.m"
                    transform_hlds__const_prop__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 0)));
#line 471 "const_prop.m"
                    transform_hlds__const_prop__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_110_110, (MR_Integer) 1)));
#line 471 "const_prop.m"
                    transform_hlds__const_prop__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 0)));
#line 471 "const_prop.m"
                    transform_hlds__const_prop__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_111_111, (MR_Integer) 1)));
#line 471 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_112_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 471 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 471 "const_prop.m"
                      {
#line 471 "const_prop.m"
                        transform_hlds__const_prop__XVal_430 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_112_112, (MR_Integer) 1)));
#line 471 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 469 "const_prop.m"
                          {
#line 471 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 469 "const_prop.m"
                              {
#line 472 "const_prop.m"
                                transform_hlds__const_prop__V_518_518 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 472 "const_prop.m"
                                transform_hlds__const_prop__V_519_519 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 472 "const_prop.m"
                                transform_hlds__const_prop__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 472 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_115_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 472 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 472 "const_prop.m"
                                  {
#line 472 "const_prop.m"
                                    transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 1)));
#line 472 "const_prop.m"
                                    transform_hlds__const_prop__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 2)));
#line 472 "const_prop.m"
                                    transform_hlds__const_prop__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_115_115, (MR_Integer) 3)));
#line 472 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_116_116)) == (MR_mktag((MR_Integer) 1)));
#line 472 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 472 "const_prop.m"
                                      {
#line 472 "const_prop.m"
                                        transform_hlds__const_prop__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 0)));
#line 472 "const_prop.m"
                                        transform_hlds__const_prop__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_116_116, (MR_Integer) 1)));
#line 472 "const_prop.m"
                                        transform_hlds__const_prop__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 0)));
#line 472 "const_prop.m"
                                        transform_hlds__const_prop__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_117_117, (MR_Integer) 1)));
#line 472 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_118_118)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 472 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 472 "const_prop.m"
                                          {
#line 472 "const_prop.m"
                                            transform_hlds__const_prop__YVal_431 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_118_118, (MR_Integer) 1)));
#line 472 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 469 "const_prop.m"
                                              {
#line 472 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 469 "const_prop.m"
                                                  {
#line 473 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 474 "const_prop.m"
                                                    transform_hlds__const_prop__OutputArgVal_16 = (transform_hlds__const_prop__XVal_430 ^ transform_hlds__const_prop__YVal_431);
#line 474 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = MR_TRUE;
#line 469 "const_prop.m"
                                                  }
#line 469 "const_prop.m"
                                              }
#line 472 "const_prop.m"
                                          }
#line 472 "const_prop.m"
                                      }
#line 472 "const_prop.m"
                                  }
#line 469 "const_prop.m"
                              }
#line 469 "const_prop.m"
                          }
#line 471 "const_prop.m"
                      }
#line 471 "const_prop.m"
                  }
#line 471 "const_prop.m"
              }
#line 469 "const_prop.m"
          }
#line 469 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "plus") == 0))
#line 298 "const_prop.m"
      {
#line 298 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_19;
#line 298 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_22;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_23;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_361_361;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_362_362;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_363_363;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_364_364;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_365_365;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_366_366;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_367_367;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_368_368;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_369_369;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_370_370;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_371_371;
#line 298 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_372_372;
#line 300 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_432_432;
#line 300 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_433_433;
#line 300 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_17_17;
#line 300 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_18_18;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_434_434;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_435_435;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_20_20;
#line 301 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_21_21;

#line 299 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 298 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
          {
#line 300 "const_prop.m"
            transform_hlds__const_prop__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 300 "const_prop.m"
            transform_hlds__const_prop__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 300 "const_prop.m"
            transform_hlds__const_prop__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 300 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_361_361)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 300 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
              {
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 1)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 2)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_361_361, (MR_Integer) 3)));
#line 300 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_362_362)) == (MR_mktag((MR_Integer) 1)));
#line 300 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
                  {
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 0)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_362_362, (MR_Integer) 1)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 0)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_363_363, (MR_Integer) 1)));
#line 300 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_364_364)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 300 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 300 "const_prop.m"
                      {
#line 300 "const_prop.m"
                        transform_hlds__const_prop__XVal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_364_364, (MR_Integer) 1)));
#line 300 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_365_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                          {
#line 300 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_366_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                              {
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 301 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_367_367)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_367_367, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 301 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                  {
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_367_367, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_367_367, (MR_Integer) 2)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_367_367, (MR_Integer) 3)));
#line 301 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_368_368)) == (MR_mktag((MR_Integer) 1)));
#line 301 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                      {
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_368_368, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_368_368, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_369_369, (MR_Integer) 0)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_369_369, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_370_370)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_370_370, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 301 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 301 "const_prop.m"
                                          {
#line 301 "const_prop.m"
                                            transform_hlds__const_prop__YVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_370_370, (MR_Integer) 1)));
#line 301 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                                              {
#line 301 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_372_372 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 298 "const_prop.m"
                                                  {
#line 302 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 303 "const_prop.m"
                                                    {
#line 303 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_23);
                                                    }
#line 304 "const_prop.m"
                                                    {
#line 304 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__plus_4_p_0(transform_hlds__const_prop__BitsPerInt_23, transform_hlds__const_prop__XVal_19, transform_hlds__const_prop__YVal_22, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
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
#line 298 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "minus") == 0))
#line 330 "const_prop.m"
      {
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_313_313;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_314_314;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_315_315;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_316_316;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_317_317;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_318_318;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_319_319;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_320_320;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_321_321;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_322_322;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_323_323;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_324_324;
#line 330 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_381;
#line 330 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_382;
#line 330 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_383;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_448_448;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_449_449;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_37_37;
#line 332 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_38_38;
#line 333 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_450_450;
#line 333 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_451_451;
#line 333 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_39_39;
#line 333 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_40_40;

#line 331 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 330 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 330 "const_prop.m"
          {
#line 332 "const_prop.m"
            transform_hlds__const_prop__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 332 "const_prop.m"
            transform_hlds__const_prop__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 332 "const_prop.m"
            transform_hlds__const_prop__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 332 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_313_313)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 332 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
              {
#line 332 "const_prop.m"
                transform_hlds__const_prop__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 1)));
#line 332 "const_prop.m"
                transform_hlds__const_prop__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 2)));
#line 332 "const_prop.m"
                transform_hlds__const_prop__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_313_313, (MR_Integer) 3)));
#line 332 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_314_314)) == (MR_mktag((MR_Integer) 1)));
#line 332 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
                  {
#line 332 "const_prop.m"
                    transform_hlds__const_prop__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 0)));
#line 332 "const_prop.m"
                    transform_hlds__const_prop__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_314_314, (MR_Integer) 1)));
#line 332 "const_prop.m"
                    transform_hlds__const_prop__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 0)));
#line 332 "const_prop.m"
                    transform_hlds__const_prop__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_315_315, (MR_Integer) 1)));
#line 332 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_316_316)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 332 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 332 "const_prop.m"
                      {
#line 332 "const_prop.m"
                        transform_hlds__const_prop__XVal_381 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_316_316, (MR_Integer) 1)));
#line 332 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_317_317 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 330 "const_prop.m"
                          {
#line 332 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_318_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 330 "const_prop.m"
                              {
#line 333 "const_prop.m"
                                transform_hlds__const_prop__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 333 "const_prop.m"
                                transform_hlds__const_prop__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 333 "const_prop.m"
                                transform_hlds__const_prop__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 333 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_319_319)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 333 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                  {
#line 333 "const_prop.m"
                                    transform_hlds__const_prop__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 1)));
#line 333 "const_prop.m"
                                    transform_hlds__const_prop__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 2)));
#line 333 "const_prop.m"
                                    transform_hlds__const_prop__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_319_319, (MR_Integer) 3)));
#line 333 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_320_320)) == (MR_mktag((MR_Integer) 1)));
#line 333 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                      {
#line 333 "const_prop.m"
                                        transform_hlds__const_prop__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 0)));
#line 333 "const_prop.m"
                                        transform_hlds__const_prop__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_320_320, (MR_Integer) 1)));
#line 333 "const_prop.m"
                                        transform_hlds__const_prop__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 0)));
#line 333 "const_prop.m"
                                        transform_hlds__const_prop__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_321_321, (MR_Integer) 1)));
#line 333 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_322_322)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 333 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 333 "const_prop.m"
                                          {
#line 333 "const_prop.m"
                                            transform_hlds__const_prop__YVal_382 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_322_322, (MR_Integer) 1)));
#line 333 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_323_323 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 330 "const_prop.m"
                                              {
#line 333 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_324_324 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 330 "const_prop.m"
                                                  {
#line 334 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 335 "const_prop.m"
                                                    {
#line 335 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_383);
                                                    }
#line 336 "const_prop.m"
                                                    {
#line 336 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_383, transform_hlds__const_prop__XVal_381, transform_hlds__const_prop__YVal_382, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 330 "const_prop.m"
                                                  }
#line 330 "const_prop.m"
                                              }
#line 333 "const_prop.m"
                                          }
#line 333 "const_prop.m"
                                      }
#line 333 "const_prop.m"
                                  }
#line 330 "const_prop.m"
                              }
#line 330 "const_prop.m"
                          }
#line 332 "const_prop.m"
                      }
#line 332 "const_prop.m"
                  }
#line 332 "const_prop.m"
              }
#line 330 "const_prop.m"
          }
#line 330 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "times") == 0))
#line 362 "const_prop.m"
      {
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_265_265;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_266_266;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_267_267;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_268_268;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_269_269;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_270_270;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_271_271;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_272_272;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_273_273;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_274_274;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_275_275;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_276_276;
#line 362 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_393;
#line 362 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_394;
#line 362 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_395;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_464_464;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_465_465;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_53_53;
#line 364 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 365 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_466_466;
#line 365 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_467_467;
#line 365 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_55_55;
#line 365 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_56_56;

#line 363 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 362 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 362 "const_prop.m"
          {
#line 364 "const_prop.m"
            transform_hlds__const_prop__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 364 "const_prop.m"
            transform_hlds__const_prop__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 364 "const_prop.m"
            transform_hlds__const_prop__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 364 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_265_265)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_265_265, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 364 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
              {
#line 364 "const_prop.m"
                transform_hlds__const_prop__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_265_265, (MR_Integer) 1)));
#line 364 "const_prop.m"
                transform_hlds__const_prop__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_265_265, (MR_Integer) 2)));
#line 364 "const_prop.m"
                transform_hlds__const_prop__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_265_265, (MR_Integer) 3)));
#line 364 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_266_266)) == (MR_mktag((MR_Integer) 1)));
#line 364 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                  {
#line 364 "const_prop.m"
                    transform_hlds__const_prop__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 0)));
#line 364 "const_prop.m"
                    transform_hlds__const_prop__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_266_266, (MR_Integer) 1)));
#line 364 "const_prop.m"
                    transform_hlds__const_prop__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_267_267, (MR_Integer) 0)));
#line 364 "const_prop.m"
                    transform_hlds__const_prop__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_267_267, (MR_Integer) 1)));
#line 364 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_268_268)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_268_268, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 364 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 364 "const_prop.m"
                      {
#line 364 "const_prop.m"
                        transform_hlds__const_prop__XVal_393 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_268_268, (MR_Integer) 1)));
#line 364 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_269_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 362 "const_prop.m"
                          {
#line 364 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_270_270 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 362 "const_prop.m"
                              {
#line 365 "const_prop.m"
                                transform_hlds__const_prop__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 365 "const_prop.m"
                                transform_hlds__const_prop__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 365 "const_prop.m"
                                transform_hlds__const_prop__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 365 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_271_271)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 365 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 365 "const_prop.m"
                                  {
#line 365 "const_prop.m"
                                    transform_hlds__const_prop__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 1)));
#line 365 "const_prop.m"
                                    transform_hlds__const_prop__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 2)));
#line 365 "const_prop.m"
                                    transform_hlds__const_prop__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_271_271, (MR_Integer) 3)));
#line 365 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_272_272)) == (MR_mktag((MR_Integer) 1)));
#line 365 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 365 "const_prop.m"
                                      {
#line 365 "const_prop.m"
                                        transform_hlds__const_prop__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 0)));
#line 365 "const_prop.m"
                                        transform_hlds__const_prop__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_272_272, (MR_Integer) 1)));
#line 365 "const_prop.m"
                                        transform_hlds__const_prop__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 0)));
#line 365 "const_prop.m"
                                        transform_hlds__const_prop__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_273_273, (MR_Integer) 1)));
#line 365 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_274_274)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 365 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 365 "const_prop.m"
                                          {
#line 365 "const_prop.m"
                                            transform_hlds__const_prop__YVal_394 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_274_274, (MR_Integer) 1)));
#line 365 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_275_275 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 362 "const_prop.m"
                                              {
#line 365 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_276_276 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 362 "const_prop.m"
                                                  {
#line 366 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 367 "const_prop.m"
                                                    {
#line 367 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_395);
                                                    }
#line 368 "const_prop.m"
                                                    {
#line 368 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__times_4_p_0(transform_hlds__const_prop__BitsPerInt_395, transform_hlds__const_prop__XVal_393, transform_hlds__const_prop__YVal_394, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 362 "const_prop.m"
                                                  }
#line 362 "const_prop.m"
                                              }
#line 365 "const_prop.m"
                                          }
#line 365 "const_prop.m"
                                      }
#line 365 "const_prop.m"
                                  }
#line 362 "const_prop.m"
                              }
#line 362 "const_prop.m"
                          }
#line 364 "const_prop.m"
                      }
#line 364 "const_prop.m"
                  }
#line 364 "const_prop.m"
              }
#line 362 "const_prop.m"
          }
#line 362 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_rem") == 0))
#line 414 "const_prop.m"
      {
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_193_193;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_194_194;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_195_195;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_196_196;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_197_197;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_198_198;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_199_199;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_200_200;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_201_201;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_202_202;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_203_203;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_204_204;
#line 414 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_411;
#line 414 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_412;
#line 414 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_413;
#line 416 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_488_488;
#line 416 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_489_489;
#line 416 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_77_77;
#line 416 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_78_78;
#line 417 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_490_490;
#line 417 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_491_491;
#line 417 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_79_79;
#line 417 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_80_80;

#line 415 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 414 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
          {
#line 416 "const_prop.m"
            transform_hlds__const_prop__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 416 "const_prop.m"
            transform_hlds__const_prop__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 416 "const_prop.m"
            transform_hlds__const_prop__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 416 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 416 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
              {
#line 416 "const_prop.m"
                transform_hlds__const_prop__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 1)));
#line 416 "const_prop.m"
                transform_hlds__const_prop__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 2)));
#line 416 "const_prop.m"
                transform_hlds__const_prop__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_193_193, (MR_Integer) 3)));
#line 416 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_194_194)) == (MR_mktag((MR_Integer) 1)));
#line 416 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
                  {
#line 416 "const_prop.m"
                    transform_hlds__const_prop__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 0)));
#line 416 "const_prop.m"
                    transform_hlds__const_prop__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_194_194, (MR_Integer) 1)));
#line 416 "const_prop.m"
                    transform_hlds__const_prop__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 0)));
#line 416 "const_prop.m"
                    transform_hlds__const_prop__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_195_195, (MR_Integer) 1)));
#line 416 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_196_196)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 416 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 416 "const_prop.m"
                      {
#line 416 "const_prop.m"
                        transform_hlds__const_prop__XVal_411 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_196_196, (MR_Integer) 1)));
#line 416 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                          {
#line 416 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                              {
#line 417 "const_prop.m"
                                transform_hlds__const_prop__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                transform_hlds__const_prop__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                transform_hlds__const_prop__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_199_199)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_199_199, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 417 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                  {
#line 417 "const_prop.m"
                                    transform_hlds__const_prop__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_199_199, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                    transform_hlds__const_prop__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_199_199, (MR_Integer) 2)));
#line 417 "const_prop.m"
                                    transform_hlds__const_prop__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_199_199, (MR_Integer) 3)));
#line 417 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_200_200)) == (MR_mktag((MR_Integer) 1)));
#line 417 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                      {
#line 417 "const_prop.m"
                                        transform_hlds__const_prop__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_200_200, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                        transform_hlds__const_prop__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_200_200, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                        transform_hlds__const_prop__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_201_201, (MR_Integer) 0)));
#line 417 "const_prop.m"
                                        transform_hlds__const_prop__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_201_201, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_202_202)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_202_202, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 417 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 417 "const_prop.m"
                                          {
#line 417 "const_prop.m"
                                            transform_hlds__const_prop__YVal_412 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_202_202, (MR_Integer) 1)));
#line 417 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                              {
#line 417 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_204_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                  {
#line 418 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_412 == (MR_Integer) 0);
#line 418 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 414 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 414 "const_prop.m"
                                                      {
#line 419 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 420 "const_prop.m"
                                                        {
#line 420 "const_prop.m"
                                                          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_413);
                                                        }
#line 421 "const_prop.m"
                                                        {
#line 421 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_rem_4_p_0(transform_hlds__const_prop__BitsPerInt_413, transform_hlds__const_prop__XVal_411, transform_hlds__const_prop__YVal_412, &transform_hlds__const_prop__OutputArgVal_16);
                                                        }
#line 414 "const_prop.m"
                                                      }
#line 414 "const_prop.m"
                                                  }
#line 414 "const_prop.m"
                                              }
#line 417 "const_prop.m"
                                          }
#line 417 "const_prop.m"
                                      }
#line 417 "const_prop.m"
                                  }
#line 414 "const_prop.m"
                              }
#line 414 "const_prop.m"
                          }
#line 416 "const_prop.m"
                      }
#line 416 "const_prop.m"
                  }
#line 416 "const_prop.m"
              }
#line 414 "const_prop.m"
          }
#line 414 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_quotient") == 0))
#line 378 "const_prop.m"
      {
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_241_241;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_242_242;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_243_243;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_244_244;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_245_245;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_246_246;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_247_247;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_248_248;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_249_249;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_250_250;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_251_251;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_252_252;
#line 378 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_399;
#line 378 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_400;
#line 378 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_401;
#line 380 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_472_472;
#line 380 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_473_473;
#line 380 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_61_61;
#line 380 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_474_474;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_475_475;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_63_63;
#line 381 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_64_64;

#line 379 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 378 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
          {
#line 380 "const_prop.m"
            transform_hlds__const_prop__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 380 "const_prop.m"
            transform_hlds__const_prop__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 380 "const_prop.m"
            transform_hlds__const_prop__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 380 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_241_241)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_241_241, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 380 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
              {
#line 380 "const_prop.m"
                transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_241_241, (MR_Integer) 1)));
#line 380 "const_prop.m"
                transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_241_241, (MR_Integer) 2)));
#line 380 "const_prop.m"
                transform_hlds__const_prop__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_241_241, (MR_Integer) 3)));
#line 380 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_242_242)) == (MR_mktag((MR_Integer) 1)));
#line 380 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
                  {
#line 380 "const_prop.m"
                    transform_hlds__const_prop__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_242_242, (MR_Integer) 0)));
#line 380 "const_prop.m"
                    transform_hlds__const_prop__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_242_242, (MR_Integer) 1)));
#line 380 "const_prop.m"
                    transform_hlds__const_prop__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_243_243, (MR_Integer) 0)));
#line 380 "const_prop.m"
                    transform_hlds__const_prop__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_243_243, (MR_Integer) 1)));
#line 380 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_244_244)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_244_244, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 380 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 380 "const_prop.m"
                      {
#line 380 "const_prop.m"
                        transform_hlds__const_prop__XVal_399 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_244_244, (MR_Integer) 1)));
#line 380 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_245_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                          {
#line 380 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_246_246 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                              {
#line 381 "const_prop.m"
                                transform_hlds__const_prop__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 381 "const_prop.m"
                                transform_hlds__const_prop__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 381 "const_prop.m"
                                transform_hlds__const_prop__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 381 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_247_247)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_247_247, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 381 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
                                  {
#line 381 "const_prop.m"
                                    transform_hlds__const_prop__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_247_247, (MR_Integer) 1)));
#line 381 "const_prop.m"
                                    transform_hlds__const_prop__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_247_247, (MR_Integer) 2)));
#line 381 "const_prop.m"
                                    transform_hlds__const_prop__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_247_247, (MR_Integer) 3)));
#line 381 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 381 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
                                      {
#line 381 "const_prop.m"
                                        transform_hlds__const_prop__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_248_248, (MR_Integer) 0)));
#line 381 "const_prop.m"
                                        transform_hlds__const_prop__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_248_248, (MR_Integer) 1)));
#line 381 "const_prop.m"
                                        transform_hlds__const_prop__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_249_249, (MR_Integer) 0)));
#line 381 "const_prop.m"
                                        transform_hlds__const_prop__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_249_249, (MR_Integer) 1)));
#line 381 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_250_250)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_250_250, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 381 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 381 "const_prop.m"
                                          {
#line 381 "const_prop.m"
                                            transform_hlds__const_prop__YVal_400 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_250_250, (MR_Integer) 1)));
#line 381 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                                              {
#line 381 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                                                  {
#line 382 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__YVal_400 == (MR_Integer) 0);
#line 382 "const_prop.m"
                                                    transform_hlds__const_prop__succeeded = !(transform_hlds__const_prop__succeeded);
#line 378 "const_prop.m"
                                                    if (transform_hlds__const_prop__succeeded)
#line 378 "const_prop.m"
                                                      {
#line 383 "const_prop.m"
                                                        *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 384 "const_prop.m"
                                                        {
#line 384 "const_prop.m"
                                                          libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_401);
                                                        }
#line 385 "const_prop.m"
                                                        {
#line 385 "const_prop.m"
                                                          transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_quotient_4_p_0(transform_hlds__const_prop__BitsPerInt_401, transform_hlds__const_prop__XVal_399, transform_hlds__const_prop__YVal_400, &transform_hlds__const_prop__OutputArgVal_16);
                                                        }
#line 378 "const_prop.m"
                                                      }
#line 378 "const_prop.m"
                                                  }
#line 378 "const_prop.m"
                                              }
#line 381 "const_prop.m"
                                          }
#line 381 "const_prop.m"
                                      }
#line 381 "const_prop.m"
                                  }
#line 378 "const_prop.m"
                              }
#line 378 "const_prop.m"
                          }
#line 380 "const_prop.m"
                      }
#line 380 "const_prop.m"
                  }
#line 380 "const_prop.m"
              }
#line 378 "const_prop.m"
          }
#line 378 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_left_shift") == 0))
#line 423 "const_prop.m"
      {
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_181_181;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_182_182;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_183_183;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_184_184;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_185_185;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_186_186;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_187_187;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_188_188;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_189_189;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_190_190;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_191_191;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_192_192;
#line 423 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_414;
#line 423 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_415;
#line 423 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_416;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_492_492;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_493_493;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_81_81;
#line 425 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_82_82;
#line 426 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_494_494;
#line 426 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_495_495;
#line 426 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_83_83;
#line 426 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_84_84;

#line 424 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 423 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 423 "const_prop.m"
          {
#line 425 "const_prop.m"
            transform_hlds__const_prop__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 425 "const_prop.m"
            transform_hlds__const_prop__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 425 "const_prop.m"
            transform_hlds__const_prop__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 425 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_181_181)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_181_181, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 425 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
              {
#line 425 "const_prop.m"
                transform_hlds__const_prop__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_181_181, (MR_Integer) 1)));
#line 425 "const_prop.m"
                transform_hlds__const_prop__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_181_181, (MR_Integer) 2)));
#line 425 "const_prop.m"
                transform_hlds__const_prop__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_181_181, (MR_Integer) 3)));
#line 425 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_182_182)) == (MR_mktag((MR_Integer) 1)));
#line 425 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                  {
#line 425 "const_prop.m"
                    transform_hlds__const_prop__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_182_182, (MR_Integer) 0)));
#line 425 "const_prop.m"
                    transform_hlds__const_prop__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_182_182, (MR_Integer) 1)));
#line 425 "const_prop.m"
                    transform_hlds__const_prop__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_183_183, (MR_Integer) 0)));
#line 425 "const_prop.m"
                    transform_hlds__const_prop__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_183_183, (MR_Integer) 1)));
#line 425 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_184_184)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_184_184, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 425 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 425 "const_prop.m"
                      {
#line 425 "const_prop.m"
                        transform_hlds__const_prop__XVal_414 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_184_184, (MR_Integer) 1)));
#line 425 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_185_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 423 "const_prop.m"
                          {
#line 425 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 423 "const_prop.m"
                              {
#line 426 "const_prop.m"
                                transform_hlds__const_prop__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 426 "const_prop.m"
                                transform_hlds__const_prop__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 426 "const_prop.m"
                                transform_hlds__const_prop__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 426 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_187_187)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 426 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                                  {
#line 426 "const_prop.m"
                                    transform_hlds__const_prop__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 1)));
#line 426 "const_prop.m"
                                    transform_hlds__const_prop__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 2)));
#line 426 "const_prop.m"
                                    transform_hlds__const_prop__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_187_187, (MR_Integer) 3)));
#line 426 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_188_188)) == (MR_mktag((MR_Integer) 1)));
#line 426 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                                      {
#line 426 "const_prop.m"
                                        transform_hlds__const_prop__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 0)));
#line 426 "const_prop.m"
                                        transform_hlds__const_prop__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_188_188, (MR_Integer) 1)));
#line 426 "const_prop.m"
                                        transform_hlds__const_prop__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 0)));
#line 426 "const_prop.m"
                                        transform_hlds__const_prop__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_189_189, (MR_Integer) 1)));
#line 426 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_190_190)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 426 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 426 "const_prop.m"
                                          {
#line 426 "const_prop.m"
                                            transform_hlds__const_prop__YVal_415 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_190_190, (MR_Integer) 1)));
#line 426 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 423 "const_prop.m"
                                              {
#line 426 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 423 "const_prop.m"
                                                  {
#line 427 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 428 "const_prop.m"
                                                    {
#line 428 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_416);
                                                    }
#line 429 "const_prop.m"
                                                    {
#line 429 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_left_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_416, transform_hlds__const_prop__XVal_414, transform_hlds__const_prop__YVal_415, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
#line 423 "const_prop.m"
                                                  }
#line 423 "const_prop.m"
                                              }
#line 426 "const_prop.m"
                                          }
#line 426 "const_prop.m"
                                      }
#line 426 "const_prop.m"
                                  }
#line 423 "const_prop.m"
                              }
#line 423 "const_prop.m"
                          }
#line 425 "const_prop.m"
                      }
#line 425 "const_prop.m"
                  }
#line 425 "const_prop.m"
              }
#line 423 "const_prop.m"
          }
#line 423 "const_prop.m"
      }
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
    if ((strcmp(transform_hlds__const_prop__ProcName_10, (MR_String) "unchecked_right_shift") == 0))
#line 439 "const_prop.m"
      {
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_157_157;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_158_158;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_159_159;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_160_160;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_161_161;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_162_162;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_163_163;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_164_164;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_165_165;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_166_166;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_167_167;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_168_168;
#line 439 "const_prop.m"
        MR_Integer transform_hlds__const_prop__XVal_420;
#line 439 "const_prop.m"
        MR_Integer transform_hlds__const_prop__YVal_421;
#line 439 "const_prop.m"
        MR_Word transform_hlds__const_prop__BitsPerInt_422;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_500_500;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_501_501;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_89_89;
#line 441 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_90_90;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_502_502;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_503_503;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_91_91;
#line 442 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_92_92;

#line 440 "const_prop.m"
        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_11 == (MR_Integer) 0);
#line 439 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
          {
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 0)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 1)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_12, (MR_Integer) 2)));
#line 441 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_157_157)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_157_157, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 441 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
              {
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_157_157, (MR_Integer) 1)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_157_157, (MR_Integer) 2)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_157_157, (MR_Integer) 3)));
#line 441 "const_prop.m"
                transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_158_158)) == (MR_mktag((MR_Integer) 1)));
#line 441 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
                  {
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_158_158, (MR_Integer) 0)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_158_158, (MR_Integer) 1)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_159_159, (MR_Integer) 0)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_159_159, (MR_Integer) 1)));
#line 441 "const_prop.m"
                    transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_160_160)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_160_160, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 441 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 441 "const_prop.m"
                      {
#line 441 "const_prop.m"
                        transform_hlds__const_prop__XVal_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_160_160, (MR_Integer) 1)));
#line 441 "const_prop.m"
                        transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                          {
#line 441 "const_prop.m"
                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_162_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                              {
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Y_13, (MR_Integer) 2)));
#line 442 "const_prop.m"
                                transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_163_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_163_163, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 442 "const_prop.m"
                                if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                  {
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_163_163, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_163_163, (MR_Integer) 2)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_163_163, (MR_Integer) 3)));
#line 442 "const_prop.m"
                                    transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_164_164)) == (MR_mktag((MR_Integer) 1)));
#line 442 "const_prop.m"
                                    if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                      {
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_164_164, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_164_164, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_165_165, (MR_Integer) 0)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_165_165, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_166_166)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_166_166, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 442 "const_prop.m"
                                        if (transform_hlds__const_prop__succeeded)
#line 442 "const_prop.m"
                                          {
#line 442 "const_prop.m"
                                            transform_hlds__const_prop__YVal_421 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_166_166, (MR_Integer) 1)));
#line 442 "const_prop.m"
                                            transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                                            if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                              {
#line 442 "const_prop.m"
                                                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "const_prop.m"
                                                if (transform_hlds__const_prop__succeeded)
#line 439 "const_prop.m"
                                                  {
#line 443 "const_prop.m"
                                                    *transform_hlds__const_prop__OutputArg_15 = transform_hlds__const_prop__Z_14;
#line 444 "const_prop.m"
                                                    {
#line 444 "const_prop.m"
                                                      libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_9, &transform_hlds__const_prop__BitsPerInt_422);
                                                    }
#line 445 "const_prop.m"
                                                    {
#line 445 "const_prop.m"
                                                      transform_hlds__const_prop__succeeded = libs__int_emu__unchecked_right_shift_4_p_0(transform_hlds__const_prop__BitsPerInt_422, transform_hlds__const_prop__XVal_420, transform_hlds__const_prop__YVal_421, &transform_hlds__const_prop__OutputArgVal_16);
                                                    }
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
#line 305 "const_prop.m"
    else
#line 305 "const_prop.m"
      transform_hlds__const_prop__succeeded = MR_FALSE;
#line 296 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 296 "const_prop.m"
      {
#line 296 "const_prop.m"
        {
#line 296 "const_prop.m"
          MR_Word base;
#line 296 "const_prop.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "const_prop.m"
          *transform_hlds__const_prop__HeadVar__8_8 = base;
#line 296 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 296 "const_prop.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_16));
#line 296 "const_prop.m"
        }
#line 296 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 296 "const_prop.m"
      }
#line 296 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 296 "const_prop.m"
  }
#line 291 "const_prop.m"
}

#line 202 "const_prop.m"
static MR_bool MR_CALL 
transform_hlds__const_prop__evaluate_det_call_int_2_7_p_0(
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__Globals_8,
#line 202 "const_prop.m"
  MR_String transform_hlds__const_prop__ProcName_9,
#line 202 "const_prop.m"
  MR_Integer transform_hlds__const_prop__ModeNum_10,
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__X_11,
#line 202 "const_prop.m"
  MR_Word transform_hlds__const_prop__Y_12,
#line 202 "const_prop.m"
  MR_Word * transform_hlds__const_prop__OutputArg_13,
#line 202 "const_prop.m"
  MR_Word * transform_hlds__const_prop__HeadVar__7_7)
#line 202 "const_prop.m"
{
#line 207 "const_prop.m"
  {
#line 207 "const_prop.m"
    MR_bool transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__ModeNum_10 == (MR_Integer) 0);
#line 207 "const_prop.m"
    MR_Integer transform_hlds__const_prop__OutputArgVal_14;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_98_98;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_101_101;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_104_104;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_105_105;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_106_106;
#line 207 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_107_107;
#line 207 "const_prop.m"
    MR_Integer transform_hlds__const_prop__V_108_108;
#line 211 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_99_99;
#line 211 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_100_100;
#line 211 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_102_102;
#line 211 "const_prop.m"
    MR_Word transform_hlds__const_prop__V_103_103;

#line 207 "const_prop.m"
    if (transform_hlds__const_prop__succeeded)
#line 207 "const_prop.m"
      {
#line 211 "const_prop.m"
        transform_hlds__const_prop__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 0)));
#line 211 "const_prop.m"
        transform_hlds__const_prop__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 1)));
#line 211 "const_prop.m"
        transform_hlds__const_prop__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__X_11, (MR_Integer) 2)));
#line 211 "const_prop.m"
        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_98_98)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_98_98, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 211 "const_prop.m"
        if (transform_hlds__const_prop__succeeded)
#line 211 "const_prop.m"
          {
#line 211 "const_prop.m"
            transform_hlds__const_prop__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_98_98, (MR_Integer) 1)));
#line 211 "const_prop.m"
            transform_hlds__const_prop__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_98_98, (MR_Integer) 2)));
#line 211 "const_prop.m"
            transform_hlds__const_prop__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_98_98, (MR_Integer) 3)));
#line 211 "const_prop.m"
            transform_hlds__const_prop__succeeded = ((MR_tag((MR_Word) transform_hlds__const_prop__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 211 "const_prop.m"
            if (transform_hlds__const_prop__succeeded)
#line 211 "const_prop.m"
              {
#line 211 "const_prop.m"
                transform_hlds__const_prop__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_101_101, (MR_Integer) 0)));
#line 211 "const_prop.m"
                transform_hlds__const_prop__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_101_101, (MR_Integer) 1)));
#line 211 "const_prop.m"
                transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "const_prop.m"
                if (transform_hlds__const_prop__succeeded)
#line 207 "const_prop.m"
                  {
#line 211 "const_prop.m"
                    transform_hlds__const_prop__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_105_105, (MR_Integer) 0)));
#line 211 "const_prop.m"
                    transform_hlds__const_prop__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_105_105, (MR_Integer) 1)));
#line 211 "const_prop.m"
                    transform_hlds__const_prop__succeeded = (transform_hlds__const_prop__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "const_prop.m"
                    if (transform_hlds__const_prop__succeeded)
#line 207 "const_prop.m"
                      {
#line 211 "const_prop.m"
                        transform_hlds__const_prop__succeeded = ((((MR_tag((MR_Word) transform_hlds__const_prop__V_107_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_107_107, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 211 "const_prop.m"
                        if (transform_hlds__const_prop__succeeded)
#line 211 "const_prop.m"
                          {
#line 211 "const_prop.m"
                            transform_hlds__const_prop__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__const_prop__V_107_107, (MR_Integer) 1)));
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "+") == 0))
#line 209 "const_prop.m"
                              {
#line 212 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 213 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = transform_hlds__const_prop__V_108_108;
#line 209 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 209 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "-") == 0))
#line 215 "const_prop.m"
                              {
#line 215 "const_prop.m"
                                MR_Word transform_hlds__const_prop__BitsPerInt_20;

#line 218 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 219 "const_prop.m"
                                {
#line 219 "const_prop.m"
                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_20);
                                }
#line 220 "const_prop.m"
                                {
#line 220 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = libs__int_emu__minus_4_p_0(transform_hlds__const_prop__BitsPerInt_20, (MR_Integer) 0, transform_hlds__const_prop__V_108_108, &transform_hlds__const_prop__OutputArgVal_14);
                                }
#line 215 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "\\") == 0))
#line 222 "const_prop.m"
                              {
#line 225 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 226 "const_prop.m"
                                transform_hlds__const_prop__OutputArgVal_14 = ~(transform_hlds__const_prop__V_108_108);
#line 222 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 222 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "rem_bits_per_int") == 0))
#line 250 "const_prop.m"
                              {
#line 250 "const_prop.m"
                                MR_Word transform_hlds__const_prop__BitsPerInt_83;

#line 253 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 254 "const_prop.m"
                                {
#line 254 "const_prop.m"
                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_83);
                                }
#line 255 "const_prop.m"
                                {
#line 255 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = libs__int_emu__rem_bits_per_int_3_p_0(transform_hlds__const_prop__V_108_108, transform_hlds__const_prop__BitsPerInt_83, &transform_hlds__const_prop__OutputArgVal_14);
                                }
#line 250 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "quot_bits_per_int") == 0))
#line 236 "const_prop.m"
                              {
#line 236 "const_prop.m"
                                MR_Word transform_hlds__const_prop__BitsPerInt_79;

#line 239 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 240 "const_prop.m"
                                {
#line 240 "const_prop.m"
                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_79);
                                }
#line 241 "const_prop.m"
                                {
#line 241 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = libs__int_emu__quot_bits_per_int_3_p_0(transform_hlds__const_prop__V_108_108, transform_hlds__const_prop__BitsPerInt_79, &transform_hlds__const_prop__OutputArgVal_14);
                                }
#line 236 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "times_bits_per_int") == 0))
#line 243 "const_prop.m"
                              {
#line 243 "const_prop.m"
                                MR_Word transform_hlds__const_prop__BitsPerInt_81;

#line 246 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 247 "const_prop.m"
                                {
#line 247 "const_prop.m"
                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_81);
                                }
#line 248 "const_prop.m"
                                {
#line 248 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = libs__int_emu__times_bits_per_int_3_p_0(transform_hlds__const_prop__V_108_108, transform_hlds__const_prop__BitsPerInt_81, &transform_hlds__const_prop__OutputArgVal_14);
                                }
#line 243 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                            if ((strcmp(transform_hlds__const_prop__ProcName_9, (MR_String) "floor_to_multiple_of_bits_per_int") == 0))
#line 228 "const_prop.m"
                              {
#line 228 "const_prop.m"
                                MR_Word transform_hlds__const_prop__BitsPerInt_77;

#line 231 "const_prop.m"
                                *transform_hlds__const_prop__OutputArg_13 = transform_hlds__const_prop__Y_12;
#line 232 "const_prop.m"
                                {
#line 232 "const_prop.m"
                                  libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__BitsPerInt_77);
                                }
#line 233 "const_prop.m"
                                {
#line 233 "const_prop.m"
                                  transform_hlds__const_prop__succeeded = libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(transform_hlds__const_prop__V_108_108, transform_hlds__const_prop__BitsPerInt_77, &transform_hlds__const_prop__OutputArgVal_14);
                                }
#line 228 "const_prop.m"
                              }
#line 214 "const_prop.m"
                            else
#line 214 "const_prop.m"
                              transform_hlds__const_prop__succeeded = MR_FALSE;
#line 207 "const_prop.m"
                            if (transform_hlds__const_prop__succeeded)
#line 207 "const_prop.m"
                              {
#line 207 "const_prop.m"
                                {
#line 207 "const_prop.m"
                                  MR_Word base;
#line 207 "const_prop.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "const_prop.m"
                                  *transform_hlds__const_prop__HeadVar__7_7 = base;
#line 207 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 207 "const_prop.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__const_prop__OutputArgVal_14));
#line 207 "const_prop.m"
                                }
#line 207 "const_prop.m"
                                transform_hlds__const_prop__succeeded = MR_TRUE;
#line 207 "const_prop.m"
                              }
#line 211 "const_prop.m"
                          }
#line 207 "const_prop.m"
                      }
#line 207 "const_prop.m"
                  }
#line 211 "const_prop.m"
              }
#line 211 "const_prop.m"
          }
#line 207 "const_prop.m"
      }
#line 207 "const_prop.m"
    return transform_hlds__const_prop__succeeded;
#line 207 "const_prop.m"
  }
#line 202 "const_prop.m"
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
                      {
#line 199 "const_prop.m"
                        libs__int_emu__target_bits_per_int_2_p_0(transform_hlds__const_prop__Globals_8, &transform_hlds__const_prop__V_87_87);
                      }
#line 199 "const_prop.m"
                      transform_hlds__const_prop__OutputArgVal_86 = (MR_Integer) transform_hlds__const_prop__V_87_87;
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
#line 743 "const_prop.m"
      {
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta0_48;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__Inst_49;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__Delta_50;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_53_53;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_54_54;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_57_57;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__Goal_66;
#line 743 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 772 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 772 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 776 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_67_67;
#line 747 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_61_61;
#line 747 "const_prop.m"
        MR_Word transform_hlds__const_prop__V_62_62;

#line 772 "const_prop.m"
        {
#line 772 "const_prop.m"
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__const_prop__V_68_68, transform_hlds__const_prop__Cons_17, &transform_hlds__const_prop__Goal_66);
        }
#line 776 "const_prop.m"
        *transform_hlds__const_prop__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 0)));
#line 776 "const_prop.m"
        transform_hlds__const_prop__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__Goal_66, (MR_Integer) 1)));
#line 745 "const_prop.m"
        {
#line 745 "const_prop.m"
          transform_hlds__const_prop__Delta0_48 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21);
        }
#line 746 "const_prop.m"
        {
#line 746 "const_prop.m"
          transform_hlds__const_prop__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 0) = ((MR_Box) (transform_hlds__const_prop__Cons_17));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(0), transform_hlds__const_prop__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "const_prop.m"
        }
#line 746 "const_prop.m"
        {
#line 746 "const_prop.m"
          transform_hlds__const_prop__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 0) = ((MR_Box) (transform_hlds__const_prop__V_54_54));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(1), transform_hlds__const_prop__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "const_prop.m"
        }
#line 746 "const_prop.m"
        {
#line 746 "const_prop.m"
          transform_hlds__const_prop__Inst_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 746 "const_prop.m"
          MR_hl_field(MR_mktag(3), transform_hlds__const_prop__Inst_49, 3) = ((MR_Box) (transform_hlds__const_prop__V_53_53));
#line 746 "const_prop.m"
        }
#line 747 "const_prop.m"
        transform_hlds__const_prop__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 0)));
#line 747 "const_prop.m"
        transform_hlds__const_prop__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 1)));
#line 747 "const_prop.m"
        transform_hlds__const_prop__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__const_prop__OutputArg_16, (MR_Integer) 2)));
#line 747 "const_prop.m"
        {
#line 747 "const_prop.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__const_prop__V_57_57, transform_hlds__const_prop__Inst_49, transform_hlds__const_prop__Delta0_48, &transform_hlds__const_prop__Delta_50);
        }
#line 748 "const_prop.m"
        {
#line 748 "const_prop.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__const_prop__Delta_50, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_0_21, &transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58);
        }
#line 749 "const_prop.m"
        {
#line 749 "const_prop.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22_58, transform_hlds__const_prop__STATE_VARIABLE_GoalInfo_22);
        }
#line 743 "const_prop.m"
        transform_hlds__const_prop__succeeded = MR_TRUE;
#line 743 "const_prop.m"
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
#line 782 "const_prop.m"
            if ((transform_hlds__const_prop__Succeeded_18 == (MR_Integer) 0))
#line 783 "const_prop.m"
              {
#line 783 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__fail_goal_expr_0_f_0();
              }
#line 782 "const_prop.m"
            else
#line 782 "const_prop.m"
              {
#line 782 "const_prop.m"
                *transform_hlds__const_prop__GoalExpr_14 = hlds__make_goal__true_goal_expr_0_f_0();
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
