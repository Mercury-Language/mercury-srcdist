/*
** Automatically generated from `stm_expand.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module transform_hlds.stm_expand. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__stm_expand__init
ENDINIT
*/

#include "transform_hlds.stm_expand.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 156 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5];

#line 165 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5];

#line 168 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0;

#line 171 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1];

#line 174 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1];

#line 177 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1];

#line 180 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1];

#line 183 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7];

#line 186 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7];

#line 189 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0;

#line 192 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1];

#line 195 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1];

#line 198 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1];

#line 201 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1];

#line 204 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7];

#line 207 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7];

#line 210 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0;

#line 213 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1];

#line 216 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1];

#line 219 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1];

#line 222 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1];

#line 225 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
#line 228 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 230 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 233 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
#line 236 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 238 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 240 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 243 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
#line 246 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 248 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 251 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
#line 254 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 256 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 258 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 261 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
#line 264 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 266 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 269 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
#line 272 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 274 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 276 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 1733 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

#line 1733 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2592 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2591 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44);

#line 744 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
#line 744 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 744 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

#line 735 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_14,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_15,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
#line 735 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_20,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
#line 735 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);

#line 812 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
#line 812 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 812 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

#line 480 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalType_11,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Outer_14,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MainGoal_16,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
#line 480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

#line 1754 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_9,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_10,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src3_11,
#line 1754 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_12,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
#line 1754 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2592__1_3_p_0(
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
#line 2592 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2591__1_3_p_0(
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
#line 2591 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

#line 2076 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2076__1_4_p_0(
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_12,
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_35,
#line 2076 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_36);

#line 1797 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1797__1_6_p_0(
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_51,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_52,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_53,
#line 1797 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_54,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_55,
#line 1797 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_56);

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1783__1_4_p_0(
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_41,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44);

#line 1338 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1338__1_7_p_0(
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_36,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_37,
#line 1338 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_38,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_39,
#line 1338 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_40);

#line 989 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__989__1_5_p_0(
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_79,
#line 989 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_80,
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_81,
#line 989 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_82);

#line 975 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__975__1_5_p_0(
#line 975 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_50,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_51,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_52,
#line 975 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_53,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_54);

#line 787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__787__1_7_p_0(
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_43,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_44,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_89,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_90,
#line 787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_91,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_92,
#line 787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_93);

#line 575 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(
#line 575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_11,
#line 575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_12);

#line 220 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
#line 220 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 220 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 206 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
#line 206 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 206 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 233 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
#line 233 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 233 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
#line 2592 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2592 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2592 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
#line 2591 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2591 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2591 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2586 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
#line 2586 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2586 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputModes_5,
#line 2586 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputModes_6);

#line 2565 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
#line 2565 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
#line 2565 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_6,
#line 2565 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
#line 2565 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputTypes_8);

#line 2552 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
#line 2552 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2552 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Input_5,
#line 2552 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Output_6);

#line 2538 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
#line 2538 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
#line 2538 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_4);

#line 2518 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
#line 2518 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal_4,
#line 2518 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2518 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

#line 2503 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
#line 2503 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
#line 2503 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10);

#line 2493 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
#line 2493 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_4,
#line 2493 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
#line 2493 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8);

#line 2476 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
#line 2476 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPred_4,
#line 2476 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
#line 2476 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInfo_6);

#line 2465 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
#line 2465 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
#line 2465 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
#line 2465 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9);

#line 2379 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
#line 2379 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Prefix_14,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66);

#line 2345 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
#line 2345 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_7,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_8,
#line 2345 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10);

#line 2328 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
#line 2328 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
#line 2328 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ConjGoal_4);

#line 2310 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
#line 2310 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalIn_4,
#line 2310 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
#line 2310 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalOut_6);

#line 2294 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_8,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cases_9,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_10,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_11,
#line 2294 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 2294 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

#line 2278 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExistVars_10,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond_11,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then_12,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else_13,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_14,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_15,
#line 2278 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
#line 2278 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24);

#line 2252 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredProcID_9,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Args_10,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgModes_12,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2237 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleName_13,
#line 2237 "stm_expand.m"
  MR_String transform_hlds__stm_expand__ProcName_14,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Mode_16,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_17,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_18,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVars_19,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
#line 2237 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_22,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2237 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

#line 2211 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2211 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2211 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2186 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2186 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 2186 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

#line 2160 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2160 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2160 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2149 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cons_8,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_9,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName_10,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_12,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

#line 2120 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2120 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2120 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

#line 2103 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2103 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
#line 2103 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15);

#line 2073 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
#line 2073 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2073 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2073 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2056 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
#line 2056 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Name_9,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);

#line 2024 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_9,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_10,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_11,
#line 2024 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2024 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

#line 1980 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_9,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
#line 1980 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_12,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1980 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1964 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
#line 1964 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Types_3,
#line 1964 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ReturnType_4);

#line 1866 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_21,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
#line 1866 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
#line 1866 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1783 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 1783 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

#line 1777 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
#line 1777 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
#line 1777 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);

#line 1701 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
#line 1701 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__Count_5,
#line 1701 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Vars_6,
#line 1701 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
#line 1701 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);

#line 1672 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__EndBranch_22,
#line 1672 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 1672 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

#line 1640 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_10,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_11,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_12,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_13,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_14,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1640 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1608 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_11,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_12,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_13,
#line 1608 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
#line 1608 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);

#line 1575 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1516 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

#line 1507 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);

#line 1422 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1422 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
#line 1422 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);

#line 1370 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

#line 1316 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_12,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);

#line 1291 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11);

#line 1275 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDI_13,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUO_14,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44);

#line 1257 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_12,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 1218 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 1218 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
#line 1218 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 1200 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
#line 1200 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
#line 1200 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22);

#line 1131 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_12,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_15,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_16,
#line 1131 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_17,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_18,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
#line 1131 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);

#line 1093 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_9,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_11,
#line 1093 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
#line 1093 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);

#line 1068 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_6,
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_7,
#line 1068 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 1068 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

#line 1040 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
#line 1040 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
#line 1040 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);

#line 989 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 989 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 989 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

#line 975 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5);

#line 959 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 959 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 959 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

#line 924 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 924 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 924 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

#line 875 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_9,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
#line 875 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 875 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 829 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_10,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_11,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
#line 829 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
#line 829 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);

#line 690 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
#line 690 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInUO_12);

#line 659 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
#line 659 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4);

#line 589 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goals_12,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
#line 589 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
#line 589 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 570 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
#line 570 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_3,
#line 570 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalVar_4);

#line 532 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10);

#line 462 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 462 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
#line 462 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5);

#line 442 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_10,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond0_11,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then0_12,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else0_13,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Cond_14,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Then_15,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Else_16,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23);

#line 428 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 428 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
#line 428 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15);

#line 409 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_6,
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 409 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
#line 409 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19);

#line 299 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 299 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94,
#line 299 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_95);

#line 257 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
#line 257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_5,
#line 257 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__ProcId_6,
#line 257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);

#line 255 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 255 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3);

#line 249 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
#line 249 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_4,
#line 249 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
#line 249 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9);

#line 246 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 246 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[2][6];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[1][5];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[27][1];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][14];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "--temp-context--")),
    ((MR_Box) ((MR_Integer) 999))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__stm_expand__stm_process_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_top_level_pred_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[27][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "UnivPayload"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "RollbackExcpt"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "ValidResult"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "IsValidConst"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "ExceptUnivVar"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "ExceptionResult"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "ResultVar"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "STM0"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "STM"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "NewUO"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_IsValid"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_Rollback"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "STMDI"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "STMUO"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "InnSTM"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "RetryCons"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "RollbackCons"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "InnerSTM0"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "ExcptRes"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "BoringResult"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "SuccessResult"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "Closure"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "res"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "InterSTM"))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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



#line 2261 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2269 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2277 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2285 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2293 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2302 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2311 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2319 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2328 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5] = {
  (MR_String) "vars_input",
  (MR_String) "vars_local",
  (MR_String) "vars_output",
  (MR_String) "vars_innerDI",
  (MR_String) "vars_innerUO"
};

#line 2337 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 = {
  (MR_String) "stm_goal_vars",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0,
  NULL,
  NULL
};

#line 2352 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

#line 2357 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0
  }
};

#line 2366 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

#line 2371 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1] = {
  (MR_Integer) 0
};

#line 2376 "transform_hlds.stm_expand.c"
const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_goal_vars",
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0
  },
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0
};

#line 2397 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2408 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7] = {
  (MR_String) "stm_info_module_info",
  (MR_String) "stm_info_pred_id",
  (MR_String) "stm_info_proc_id",
  (MR_String) "stm_info_proc_info",
  (MR_String) "stm_info_pred_info",
  (MR_String) "stm_info_requalify",
  (MR_String) "stm_info_expand_id"
};

#line 2419 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 = {
  (MR_String) "stm_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0,
  NULL,
  NULL
};

#line 2434 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

#line 2439 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0
  }
};

#line 2448 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

#line 2453 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1] = {
  (MR_Integer) 0
};

#line 2458 "transform_hlds.stm_expand.c"
const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_info",
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0
  },
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0
};

#line 2479 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2490 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7] = {
  (MR_String) "new_pred_module_info",
  (MR_String) "new_pred_pred_id",
  (MR_String) "new_pred_proc_id",
  (MR_String) "new_pred_pred_info",
  (MR_String) "new_pred_proc_info",
  (MR_String) "new_pred_context",
  (MR_String) "new_pred_var_cnt"
};

#line 2501 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 = {
  (MR_String) "stm_new_pred_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0,
  NULL,
  NULL
};

#line 2516 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

#line 2521 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0
  }
};

#line 2530 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

#line 2535 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1] = {
  (MR_Integer) 0
};

#line 2540 "transform_hlds.stm_expand.c"
const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_new_pred_info",
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0
  },
  {
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0
};

#line 2561 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
#line 2564 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2566 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2568 "transform_hlds.stm_expand.c"
{
#line 2570 "transform_hlds.stm_expand.c"
  {
#line 2572 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2575 "transform_hlds.stm_expand.c"
    {
#line 2577 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2580 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2582 "transform_hlds.stm_expand.c"
  }
#line 2584 "transform_hlds.stm_expand.c"
}

#line 2587 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
#line 2590 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2592 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2594 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2596 "transform_hlds.stm_expand.c"
{
#line 2598 "transform_hlds.stm_expand.c"
  {
#line 2600 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2603 "transform_hlds.stm_expand.c"
    {
#line 2605 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2608 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2610 "transform_hlds.stm_expand.c"
  }
#line 2612 "transform_hlds.stm_expand.c"
}

#line 2615 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
#line 2618 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2620 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2622 "transform_hlds.stm_expand.c"
{
#line 2624 "transform_hlds.stm_expand.c"
  {
#line 2626 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2629 "transform_hlds.stm_expand.c"
    {
#line 2631 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2634 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2636 "transform_hlds.stm_expand.c"
  }
#line 2638 "transform_hlds.stm_expand.c"
}

#line 2641 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
#line 2644 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2646 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2648 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2650 "transform_hlds.stm_expand.c"
{
#line 2652 "transform_hlds.stm_expand.c"
  {
#line 2654 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2657 "transform_hlds.stm_expand.c"
    {
#line 2659 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2662 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2664 "transform_hlds.stm_expand.c"
  }
#line 2666 "transform_hlds.stm_expand.c"
}

#line 2669 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
#line 2672 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2674 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2676 "transform_hlds.stm_expand.c"
{
#line 2678 "transform_hlds.stm_expand.c"
  {
#line 2680 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2683 "transform_hlds.stm_expand.c"
    {
#line 2685 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2688 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2690 "transform_hlds.stm_expand.c"
  }
#line 2692 "transform_hlds.stm_expand.c"
}

#line 2695 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
#line 2698 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2700 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2702 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2704 "transform_hlds.stm_expand.c"
{
#line 2706 "transform_hlds.stm_expand.c"
  {
#line 2708 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2711 "transform_hlds.stm_expand.c"
    {
#line 2713 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2716 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2718 "transform_hlds.stm_expand.c"
  }
#line 2720 "transform_hlds.stm_expand.c"
}

#line 1733 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
#line 1733 "stm_expand.m"
{
#line 1743 "stm_expand.m"
  {
#line 1743 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1739 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1740 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1743 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1742 "stm_expand.m"
      {
#line 1742 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1742 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
#line 1742 "stm_expand.m"
      }
#line 1743 "stm_expand.m"
    else
#line 1750 "stm_expand.m"
      {
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_12;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_13;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_14;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_15;

#line 1744 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1744 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1744 "stm_expand.m"
          {
#line 1744 "stm_expand.m"
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
#line 1744 "stm_expand.m"
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
#line 1745 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1745 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1745 "stm_expand.m"
              {
#line 1745 "stm_expand.m"
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
#line 1745 "stm_expand.m"
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
#line 1745 "stm_expand.m"
              }
#line 1744 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1747 "stm_expand.m"
          {
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_16;
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_17;
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

#line 1747 "stm_expand.m"
            {
#line 1747 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__787__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
#line 1748 "stm_expand.m"
            {
#line 1748 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
#line 1749 "stm_expand.m"
            {
#line 1749 "stm_expand.m"
              MR_Word base;
#line 1749 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_10 = base;
#line 1749 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
#line 1749 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
#line 1749 "stm_expand.m"
            }
#line 1747 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
        else
#line 1751 "stm_expand.m"
          {
#line 1751 "stm_expand.m"
            {
#line 1751 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
#line 1751 "stm_expand.m"
              return;
            }
#line 1751 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
      }
#line 1743 "stm_expand.m"
  }
#line 1733 "stm_expand.m"
}

#line 1733 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1733 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1733 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
#line 1733 "stm_expand.m"
{
#line 1743 "stm_expand.m"
  {
#line 1743 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1739 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1740 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1743 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1742 "stm_expand.m"
      {
#line 1742 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1742 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
#line 1742 "stm_expand.m"
      }
#line 1743 "stm_expand.m"
    else
#line 1750 "stm_expand.m"
      {
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_12;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_13;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_14;
#line 1750 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_15;

#line 1744 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1744 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1744 "stm_expand.m"
          {
#line 1744 "stm_expand.m"
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
#line 1744 "stm_expand.m"
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
#line 1745 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1745 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1745 "stm_expand.m"
              {
#line 1745 "stm_expand.m"
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
#line 1745 "stm_expand.m"
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
#line 1745 "stm_expand.m"
              }
#line 1744 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1747 "stm_expand.m"
          {
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_16;
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_17;
#line 1747 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

#line 1747 "stm_expand.m"
            {
#line 1747 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1338__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
#line 1748 "stm_expand.m"
            {
#line 1748 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
#line 1749 "stm_expand.m"
            {
#line 1749 "stm_expand.m"
              MR_Word base;
#line 1749 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_10 = base;
#line 1749 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
#line 1749 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
#line 1749 "stm_expand.m"
            }
#line 1747 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
        else
#line 1751 "stm_expand.m"
          {
#line 1751 "stm_expand.m"
            {
#line 1751 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
#line 1751 "stm_expand.m"
              return;
            }
#line 1751 "stm_expand.m"
          }
#line 1750 "stm_expand.m"
      }
#line 1743 "stm_expand.m"
  }
#line 1733 "stm_expand.m"
}

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2592 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
#line 2592 "stm_expand.m"
{
#line 2580 "stm_expand.m"
  {
#line 2580 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2580 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__3_20 = transform_hlds__stm_expand__HeadVar__1_12;
#line 2580 "stm_expand.m"
  }
#line 2592 "stm_expand.m"
}

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2591 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
#line 2591 "stm_expand.m"
{
#line 2580 "stm_expand.m"
  {
#line 2580 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2580 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__3_14 = transform_hlds__stm_expand__HeadVar__1_10;
#line 2580 "stm_expand.m"
  }
#line 2591 "stm_expand.m"
}

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44)
#line 1783 "stm_expand.m"
{
#line 1783 "stm_expand.m"
  {
#line 1783 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1783 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;

#line 1785 "stm_expand.m"
    {
#line 1785 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1785 "stm_expand.m"
    {
#line 1785 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_45_45, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[26]), transform_hlds__stm_expand__HeadVar__2_42, transform_hlds__stm_expand__HeadVar__3_43, transform_hlds__stm_expand__HeadVar__4_44);
#line 1785 "stm_expand.m"
      return;
    }
#line 1783 "stm_expand.m"
  }
#line 1783 "stm_expand.m"
}

#line 744 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
#line 744 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 744 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 744 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
#line 744 "stm_expand.m"
{
#line 744 "stm_expand.m"
  {
#line 744 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

#line 744 "stm_expand.m"
    {
#line 744 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
#line 744 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
#line 744 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
#line 744 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
#line 744 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
#line 744 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
#line 744 "stm_expand.m"
  }
#line 744 "stm_expand.m"
}

#line 735 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_14,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_15,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
#line 735 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_20,
#line 735 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
#line 735 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55)
#line 735 "stm_expand.m"
{
#line 741 "stm_expand.m"
  {
#line 741 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_145_145;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_146_146;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoal_22;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainOuterDI_23;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainOuterUO_24;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainInnerDI_25;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainInnerUO_26;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseGoals_27;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseInnerDIs_30;
#line 741 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseInnerUOs_31;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 744 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 742 "stm_expand.m"
    {
#line 742 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__AtomicGoal0_18, &transform_hlds__stm_expand__AtomicGoal_22, &transform_hlds__stm_expand__MainOuterDI_23, &transform_hlds__stm_expand__MainOuterUO_24, &transform_hlds__stm_expand__MainInnerDI_25, &transform_hlds__stm_expand__MainInnerUO_26);
    }
#line 3175 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 3177 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_146_146 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 744 "stm_expand.m"
    {
#line 744 "stm_expand.m"
      mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[13], transform_hlds__stm_expand__OrElseGoals0_19, &transform_hlds__stm_expand__OrElseGoals_27, &transform_hlds__stm_expand__V_28_28, &transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__OrElseInnerDIs_30, &transform_hlds__stm_expand__OrElseInnerUOs_31);
    }
#line 755 "stm_expand.m"
    if ((transform_hlds__stm_expand__OrElseGoals_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "stm_expand.m"
      {
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyDIVars_32;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyUOVars_33;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_108_108;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_110_110;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_111_111;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_112_112;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_114_114;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_115_115;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_116_116;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_117_117;
#line 747 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_118_118;

#line 751 "stm_expand.m"
        {
#line 751 "stm_expand.m"
          transform_hlds__stm_expand__V_110_110 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 751 "stm_expand.m"
        {
#line 751 "stm_expand.m"
          transform_hlds__stm_expand__V_111_111 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 751 "stm_expand.m"
        {
#line 751 "stm_expand.m"
          transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 751 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
#line 751 "stm_expand.m"
        }
#line 750 "stm_expand.m"
        {
#line 750 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_108_108, &transform_hlds__stm_expand__CopyDIVars_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109);
        }
#line 753 "stm_expand.m"
        {
#line 753 "stm_expand.m"
          transform_hlds__stm_expand__V_114_114 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 753 "stm_expand.m"
        {
#line 753 "stm_expand.m"
          transform_hlds__stm_expand__V_115_115 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 753 "stm_expand.m"
        {
#line 753 "stm_expand.m"
          transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 753 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 753 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
#line 753 "stm_expand.m"
        }
#line 752 "stm_expand.m"
        {
#line 752 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_112_112, &transform_hlds__stm_expand__CopyUOVars_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
#line 754 "stm_expand.m"
        {
#line 754 "stm_expand.m"
          transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_33));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "stm_expand.m"
        }
#line 754 "stm_expand.m"
        {
#line 754 "stm_expand.m"
          transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
#line 754 "stm_expand.m"
        }
#line 754 "stm_expand.m"
        {
#line 754 "stm_expand.m"
          transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_32));
#line 754 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 754 "stm_expand.m"
        }
#line 754 "stm_expand.m"
        {
#line 754 "stm_expand.m"
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_116_116, transform_hlds__stm_expand__Goal_20);
#line 754 "stm_expand.m"
          return;
        }
#line 747 "stm_expand.m"
      }
#line 755 "stm_expand.m"
    else
#line 756 "stm_expand.m"
      {
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalList_37;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AtomicGoalVars_38;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AtomicGoalVarList1_39;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OutputTypes_42;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__ResultType_43;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__ResultVar_44;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__PPIDList_52;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OrElseCall_53;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_57_57;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_58_58;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_59_59;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_60_60;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_62_62;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_96_96;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_98_98;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_99_99;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_100_100;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_102_102;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_103_103;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_104_104;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_105_105;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_106_106;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyDIVars_125;
#line 756 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyUOVars_126;
#line 779 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;

#line 760 "stm_expand.m"
        {
#line 760 "stm_expand.m"
          transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal0_18));
#line 760 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals0_19));
#line 760 "stm_expand.m"
        }
#line 760 "stm_expand.m"
        {
#line 760 "stm_expand.m"
          transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_25));
#line 760 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_30));
#line 760 "stm_expand.m"
        }
#line 761 "stm_expand.m"
        {
#line 761 "stm_expand.m"
          transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_26));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_31));
#line 761 "stm_expand.m"
        }
#line 761 "stm_expand.m"
        {
#line 761 "stm_expand.m"
          transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_15));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "stm_expand.m"
        }
#line 761 "stm_expand.m"
        {
#line 761 "stm_expand.m"
          transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_14));
#line 761 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
#line 761 "stm_expand.m"
        }
#line 759 "stm_expand.m"
        {
#line 759 "stm_expand.m"
          transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__V_58_58, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61);
        }
#line 763 "stm_expand.m"
        {
#line 763 "stm_expand.m"
          transform_hlds__stm_expand__GoalList_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
#line 763 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_27));
#line 763 "stm_expand.m"
        }
#line 765 "stm_expand.m"
        {
#line 765 "stm_expand.m"
          transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__AtomicGoalVars_38);
        }
#line 779 "stm_expand.m"
        {
#line 779 "stm_expand.m"
          transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__V_41_41, &transform_hlds__stm_expand__OutputTypes_42);
        }
#line 780 "stm_expand.m"
        {
#line 780 "stm_expand.m"
          transform_hlds__stm_expand__make_return_type_2_p_0(transform_hlds__stm_expand__OutputTypes_42, &transform_hlds__stm_expand__ResultType_43);
        }
#line 781 "stm_expand.m"
        {
#line 781 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(transform_hlds__stm_expand__ResultType_43, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[25]), &transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87);
        }
#line 790 "stm_expand.m"
        {
#line 790 "stm_expand.m"
          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__GoalList_37, transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94);
        }
#line 793 "stm_expand.m"
        {
#line 793 "stm_expand.m"
          transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainInnerUO_26, &transform_hlds__stm_expand__OrElseCall_53, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95);
        }
#line 796 "stm_expand.m"
        {
#line 796 "stm_expand.m"
          transform_hlds__stm_expand__V_98_98 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 796 "stm_expand.m"
        {
#line 796 "stm_expand.m"
          transform_hlds__stm_expand__V_99_99 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 796 "stm_expand.m"
        {
#line 796 "stm_expand.m"
          transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__V_98_98));
#line 796 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_99_99));
#line 796 "stm_expand.m"
        }
#line 795 "stm_expand.m"
        {
#line 795 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_96_96, &transform_hlds__stm_expand__CopyDIVars_125, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97);
        }
#line 798 "stm_expand.m"
        {
#line 798 "stm_expand.m"
          transform_hlds__stm_expand__V_102_102 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 798 "stm_expand.m"
        {
#line 798 "stm_expand.m"
          transform_hlds__stm_expand__V_103_103 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 798 "stm_expand.m"
        {
#line 798 "stm_expand.m"
          transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_102_102));
#line 798 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_103_103));
#line 798 "stm_expand.m"
        }
#line 797 "stm_expand.m"
        {
#line 797 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_100_100, &transform_hlds__stm_expand__CopyUOVars_126, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
#line 799 "stm_expand.m"
        {
#line 799 "stm_expand.m"
          transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_126));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "stm_expand.m"
        }
#line 799 "stm_expand.m"
        {
#line 799 "stm_expand.m"
          transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__OrElseCall_53));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 799 "stm_expand.m"
        }
#line 799 "stm_expand.m"
        {
#line 799 "stm_expand.m"
          transform_hlds__stm_expand__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_125));
#line 799 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
#line 799 "stm_expand.m"
        }
#line 799 "stm_expand.m"
        {
#line 799 "stm_expand.m"
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_104_104, transform_hlds__stm_expand__Goal_20);
#line 799 "stm_expand.m"
          return;
        }
#line 756 "stm_expand.m"
      }
#line 741 "stm_expand.m"
  }
#line 735 "stm_expand.m"
}

#line 812 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
#line 812 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 812 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 812 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
#line 812 "stm_expand.m"
{
#line 812 "stm_expand.m"
  {
#line 812 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 812 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
#line 812 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
#line 812 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
#line 812 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
#line 812 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

#line 812 "stm_expand.m"
    {
#line 812 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
#line 812 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
#line 812 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
#line 812 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
#line 812 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
#line 812 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
#line 812 "stm_expand.m"
  }
#line 812 "stm_expand.m"
}

#line 480 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalType_11,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Outer_14,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MainGoal_16,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
#line 480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
#line 480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
#line 480 "stm_expand.m"
{
#line 485 "stm_expand.m"
  {
#line 485 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 485 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OuterDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 0)));
#line 485 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OuterUO_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 1)));
#line 485 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34;
#line 507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 507 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_39_39;
#line 507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 507 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43;
#line 507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;

#line 495 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalType_11 == (MR_Integer) 2))
#line 500 "stm_expand.m"
      {
#line 500 "stm_expand.m"
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__MainGoal_16, transform_hlds__stm_expand__OrElseGoals_17, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
      }
#line 495 "stm_expand.m"
    else
#line 495 "stm_expand.m"
      if ((transform_hlds__stm_expand__GoalType_11 == (MR_Integer) 1))
#line 810 "stm_expand.m"
        {
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeCtorInfo_50_82;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeInfo_51_83;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__AtomicGoal_56;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MainInnerDI_59;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MainInnerUO_60;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseGoals_61;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseInnerDIs_64;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseInnerUOs_65;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__AtomicGoalVarList_66;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_68_68;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_69_69;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_70_70;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_71_71;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72;
#line 810 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_73_73;
#line 811 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_57_57;
#line 811 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_58_58;
#line 812 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_62_62;
#line 812 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_63_63;

#line 811 "stm_expand.m"
          {
#line 811 "stm_expand.m"
            transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__MainGoal_16, &transform_hlds__stm_expand__AtomicGoal_56, &transform_hlds__stm_expand__V_57_57, &transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__MainInnerDI_59, &transform_hlds__stm_expand__MainInnerUO_60);
          }
#line 3715 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeCtorInfo_50_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 3717 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeInfo_51_83 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 812 "stm_expand.m"
          {
#line 812 "stm_expand.m"
            mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[12], transform_hlds__stm_expand__OrElseGoals_17, &transform_hlds__stm_expand__OrElseGoals_61, &transform_hlds__stm_expand__V_62_62, &transform_hlds__stm_expand__V_63_63, &transform_hlds__stm_expand__OrElseInnerDIs_64, &transform_hlds__stm_expand__OrElseInnerUOs_65);
          }
#line 819 "stm_expand.m"
          {
#line 819 "stm_expand.m"
            transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal_16));
#line 819 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_17));
#line 819 "stm_expand.m"
          }
#line 819 "stm_expand.m"
          {
#line 819 "stm_expand.m"
            transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_59));
#line 819 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_64));
#line 819 "stm_expand.m"
          }
#line 820 "stm_expand.m"
          {
#line 820 "stm_expand.m"
            transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_60));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_65));
#line 820 "stm_expand.m"
          }
#line 820 "stm_expand.m"
          {
#line 820 "stm_expand.m"
            transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_21));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "stm_expand.m"
          }
#line 820 "stm_expand.m"
          {
#line 820 "stm_expand.m"
            transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_20));
#line 820 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 820 "stm_expand.m"
          }
#line 818 "stm_expand.m"
          {
#line 818 "stm_expand.m"
            transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_68_68, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__V_70_70, transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72);
          }
#line 823 "stm_expand.m"
          {
#line 823 "stm_expand.m"
            transform_hlds__stm_expand__create_top_level_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__AtomicGoal_56, transform_hlds__stm_expand__OrElseGoals_61, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
          }
#line 810 "stm_expand.m"
        }
#line 495 "stm_expand.m"
      else
#line 504 "stm_expand.m"
        {
#line 505 "stm_expand.m"
          {
#line 505 "stm_expand.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/10", (MR_String) "unknown atomic goal type");
#line 505 "stm_expand.m"
            return;
          }
#line 504 "stm_expand.m"
        }
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 0)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 1)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 2)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 3)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 4)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 5)));
#line 507 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 6)));
#line 507 "stm_expand.m"
    {
#line 507 "stm_expand.m"
      MR_Word base;
#line 507 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 507 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = base;
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 507 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 507 "stm_expand.m"
    }
#line 485 "stm_expand.m"
  }
#line 480 "stm_expand.m"
}

#line 1754 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_9,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_10,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src3_11,
#line 1754 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_12,
#line 1754 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
#line 1754 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23)
#line 1754 "stm_expand.m"
{
#line 1765 "stm_expand.m"
  {
#line 1765 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1760 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1760 "stm_expand.m"
      {
#line 1761 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1762 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src3_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "stm_expand.m"
      }
#line 1765 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1764 "stm_expand.m"
      {
#line 1764 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1764 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_23 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22;
#line 1764 "stm_expand.m"
      }
#line 1765 "stm_expand.m"
    else
#line 1773 "stm_expand.m"
      {
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_14;
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_15;
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_16;
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_17;
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__U_18;
#line 1773 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Us_19;

#line 1766 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_9)) == (MR_mktag((MR_Integer) 1)));
#line 1766 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1766 "stm_expand.m"
          {
#line 1766 "stm_expand.m"
            transform_hlds__stm_expand__S_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 0)));
#line 1766 "stm_expand.m"
            transform_hlds__stm_expand__Ss_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 1)));
#line 1767 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_10)) == (MR_mktag((MR_Integer) 1)));
#line 1767 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1767 "stm_expand.m"
              {
#line 1767 "stm_expand.m"
                transform_hlds__stm_expand__T_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 0)));
#line 1767 "stm_expand.m"
                transform_hlds__stm_expand__Ts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 1)));
#line 1768 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src3_11)) == (MR_mktag((MR_Integer) 1)));
#line 1768 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 1768 "stm_expand.m"
                  {
#line 1768 "stm_expand.m"
                    transform_hlds__stm_expand__U_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 0)));
#line 1768 "stm_expand.m"
                    transform_hlds__stm_expand__Us_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 1)));
#line 1768 "stm_expand.m"
                  }
#line 1767 "stm_expand.m"
              }
#line 1766 "stm_expand.m"
          }
#line 1773 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1770 "stm_expand.m"
          {
#line 1770 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_20;
#line 1770 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_21;
#line 1770 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24;

#line 1770 "stm_expand.m"
            {
#line 1770 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1797__1_6_p_0(transform_hlds__stm_expand__S_14, transform_hlds__stm_expand__T_16, transform_hlds__stm_expand__U_18, &transform_hlds__stm_expand__R_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24);
            }
#line 1771 "stm_expand.m"
            {
#line 1771 "stm_expand.m"
              transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__Ss_15, transform_hlds__stm_expand__Ts_17, transform_hlds__stm_expand__Us_19, &transform_hlds__stm_expand__Rs_21, transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24, transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);
            }
#line 1772 "stm_expand.m"
            {
#line 1772 "stm_expand.m"
              MR_Word base;
#line 1772 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_12 = base;
#line 1772 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_20));
#line 1772 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_21));
#line 1772 "stm_expand.m"
            }
#line 1770 "stm_expand.m"
          }
#line 1773 "stm_expand.m"
        else
#line 1774 "stm_expand.m"
          {
#line 1774 "stm_expand.m"
            {
#line 1774 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
#line 1774 "stm_expand.m"
              return;
            }
#line 1774 "stm_expand.m"
          }
#line 1773 "stm_expand.m"
      }
#line 1765 "stm_expand.m"
  }
#line 1754 "stm_expand.m"
}

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2592__1_3_p_0(
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2592 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
#line 2592 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
#line 2592 "stm_expand.m"
{
#line 2580 "stm_expand.m"
  {
#line 2580 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2580 "stm_expand.m"
    {
#line 2580 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_50_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_12, transform_hlds__stm_expand__HeadVar__3_20);
#line 2580 "stm_expand.m"
      return;
    }
#line 2580 "stm_expand.m"
  }
#line 2592 "stm_expand.m"
}

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2591__1_3_p_0(
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2591 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
#line 2591 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
#line 2591 "stm_expand.m"
{
#line 2580 "stm_expand.m"
  {
#line 2580 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2580 "stm_expand.m"
    {
#line 2580 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_10, transform_hlds__stm_expand__HeadVar__3_14);
#line 2580 "stm_expand.m"
      return;
    }
#line 2580 "stm_expand.m"
  }
#line 2591 "stm_expand.m"
}

#line 2076 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2076__1_4_p_0(
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_12,
#line 2076 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_35,
#line 2076 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_36)
#line 2076 "stm_expand.m"
{
#line 2076 "stm_expand.m"
  {
#line 2076 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2074 "stm_expand.m"
    {
#line 2074 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_35)), ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)));
    }
#line 2076 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 2075 "stm_expand.m"
      *transform_hlds__stm_expand__HeadVar__4_36 = transform_hlds__stm_expand__ResultVar_12;
#line 2076 "stm_expand.m"
    else
#line 2077 "stm_expand.m"
      *transform_hlds__stm_expand__HeadVar__4_36 = transform_hlds__stm_expand__HeadVar__3_35;
#line 2076 "stm_expand.m"
  }
#line 2076 "stm_expand.m"
}

#line 1797 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1797__1_6_p_0(
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_51,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_52,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_53,
#line 1797 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_54,
#line 1797 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_55,
#line 1797 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_56)
#line 1797 "stm_expand.m"
{
#line 1797 "stm_expand.m"
  {
#line 1797 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 1797 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;

#line 1800 "stm_expand.m"
    {
#line 1800 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1803 "stm_expand.m"
    {
#line 1803 "stm_expand.m"
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_53));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1803 "stm_expand.m"
    }
#line 1803 "stm_expand.m"
    {
#line 1803 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__2_52));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 1803 "stm_expand.m"
    }
#line 1803 "stm_expand.m"
    {
#line 1803 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_51));
#line 1803 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1803 "stm_expand.m"
    }
#line 1804 "stm_expand.m"
    transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1804 "stm_expand.m"
    {
#line 1804 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1804 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_51));
#line 1804 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1804 "stm_expand.m"
    }
#line 1805 "stm_expand.m"
    {
#line 1805 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__2_52));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1805 "stm_expand.m"
    }
#line 1805 "stm_expand.m"
    {
#line 1805 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_53));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1805 "stm_expand.m"
    }
#line 1805 "stm_expand.m"
    {
#line 1805 "stm_expand.m"
      transform_hlds__stm_expand__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1805 "stm_expand.m"
    }
#line 1805 "stm_expand.m"
    {
#line 1805 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1805 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_77_77));
#line 1805 "stm_expand.m"
    }
#line 1804 "stm_expand.m"
    {
#line 1804 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 1804 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 1804 "stm_expand.m"
    }
#line 1804 "stm_expand.m"
    {
#line 1804 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
#line 1800 "stm_expand.m"
    {
#line 1800 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_57_57, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, transform_hlds__stm_expand__HeadVar__4_54, transform_hlds__stm_expand__HeadVar__5_55, transform_hlds__stm_expand__HeadVar__6_56);
#line 1800 "stm_expand.m"
      return;
    }
#line 1797 "stm_expand.m"
  }
#line 1797 "stm_expand.m"
}

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1783__1_4_p_0(
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_41,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1783 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1783 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44)
#line 1783 "stm_expand.m"
{
#line 1783 "stm_expand.m"
  {
#line 1783 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1783 "stm_expand.m"
    {
#line 1783 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_51_95_95_49_95_95_91_49_93_95_48_4_p_0(transform_hlds__stm_expand__HeadVar__2_42, transform_hlds__stm_expand__HeadVar__3_43, transform_hlds__stm_expand__HeadVar__4_44);
#line 1783 "stm_expand.m"
      return;
    }
#line 1783 "stm_expand.m"
  }
#line 1783 "stm_expand.m"
}

#line 1338 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1338__1_7_p_0(
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_36,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_37,
#line 1338 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_38,
#line 1338 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_39,
#line 1338 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_40)
#line 1338 "stm_expand.m"
{
#line 1513 "stm_expand.m"
  {
#line 1513 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1513 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1513 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;

#line 1513 "stm_expand.m"
    {
#line 1513 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__HeadVar__4_37, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__HeadVar__3_36, transform_hlds__stm_expand__HeadVar__5_38, &transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__V_27_27, transform_hlds__stm_expand__HeadVar__6_39, transform_hlds__stm_expand__HeadVar__7_40);
    }
#line 1513 "stm_expand.m"
  }
#line 1338 "stm_expand.m"
}

#line 989 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__989__1_5_p_0(
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_79,
#line 989 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_80,
#line 989 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_81,
#line 989 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_82)
#line 989 "stm_expand.m"
{
#line 989 "stm_expand.m"
  {
#line 989 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;

#line 991 "stm_expand.m"
    {
#line 991 "stm_expand.m"
      transform_hlds__stm_expand__V_84_84 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 991 "stm_expand.m"
    {
#line 991 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 991 "stm_expand.m"
    {
#line 991 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
#line 991 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 991 "stm_expand.m"
    }
#line 991 "stm_expand.m"
    {
#line 991 "stm_expand.m"
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__HeadVar__2_79, transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__V_83_83, transform_hlds__stm_expand__HeadVar__3_80, transform_hlds__stm_expand__HeadVar__4_81, transform_hlds__stm_expand__HeadVar__5_82);
#line 991 "stm_expand.m"
      return;
    }
#line 989 "stm_expand.m"
  }
#line 989 "stm_expand.m"
}

#line 975 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__975__1_5_p_0(
#line 975 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_50,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_51,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_52,
#line 975 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_53,
#line 975 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_54)
#line 975 "stm_expand.m"
{
#line 975 "stm_expand.m"
  {
#line 975 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NPI1_23;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;

#line 977 "stm_expand.m"
    {
#line 977 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 977 "stm_expand.m"
    {
#line 977 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), transform_hlds__stm_expand__HeadVar__3_52, transform_hlds__stm_expand__HeadVar__4_53, &transform_hlds__stm_expand__NPI1_23);
    }
#line 979 "stm_expand.m"
    {
#line 979 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 981 "stm_expand.m"
    {
#line 981 "stm_expand.m"
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (*transform_hlds__stm_expand__HeadVar__3_52));
#line 981 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "stm_expand.m"
    }
#line 981 "stm_expand.m"
    {
#line 981 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_50));
#line 981 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 981 "stm_expand.m"
    }
#line 982 "stm_expand.m"
    {
#line 982 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 982 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_50));
#line 982 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 982 "stm_expand.m"
    }
#line 983 "stm_expand.m"
    {
#line 983 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (*transform_hlds__stm_expand__HeadVar__3_52));
#line 983 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "stm_expand.m"
    }
#line 983 "stm_expand.m"
    {
#line 983 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 983 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "stm_expand.m"
    }
#line 982 "stm_expand.m"
    {
#line 982 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 982 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 982 "stm_expand.m"
    }
#line 982 "stm_expand.m"
    {
#line 982 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
#line 979 "stm_expand.m"
    {
#line 979 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_58_58, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_66_66, transform_hlds__stm_expand__HeadVar__2_51, transform_hlds__stm_expand__NPI1_23, transform_hlds__stm_expand__HeadVar__5_54);
#line 979 "stm_expand.m"
      return;
    }
#line 975 "stm_expand.m"
  }
#line 975 "stm_expand.m"
}

#line 787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__787__1_7_p_0(
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_43,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_44,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_89,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_90,
#line 787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_91,
#line 787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_92,
#line 787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_93)
#line 787 "stm_expand.m"
{
#line 787 "stm_expand.m"
  {
#line 787 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 787 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;

#line 787 "stm_expand.m"
    {
#line 787 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(transform_hlds__stm_expand__HeadVar__4_90, transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__HeadVar__3_89, transform_hlds__stm_expand__HeadVar__5_91, &transform_hlds__stm_expand__V_51_51, transform_hlds__stm_expand__HeadVar__6_92, transform_hlds__stm_expand__HeadVar__7_93);
    }
#line 787 "stm_expand.m"
  }
#line 787 "stm_expand.m"
}

#line 575 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(
#line 575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_11,
#line 575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_12)
#line 575 "stm_expand.m"
{
#line 575 "stm_expand.m"
  {
#line 575 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 575 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15;
#line 575 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 575 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17;
#line 575 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;

#line 575 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 0)));
#line 575 "stm_expand.m"
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 1)));
#line 575 "stm_expand.m"
    transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 2)));
#line 575 "stm_expand.m"
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 3)));
#line 575 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 4)));
#line 575 "stm_expand.m"
  }
#line 575 "stm_expand.m"
}

#line 220 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
#line 220 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 220 "stm_expand.m"
{
#line 220 "stm_expand.m"
  {
#line 220 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 220 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 220 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 220 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
#line 220 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 4603 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "stm_expand.m"
    else
#line 220 "stm_expand.m"
      {
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_18_18;

#line 220 "stm_expand.m"
        {
#line 220 "stm_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
#line 4645 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
#line 220 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
#line 220 "stm_expand.m"
        else
#line 220 "stm_expand.m"
          {
#line 220 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_19_19;

#line 220 "stm_expand.m"
            {
#line 220 "stm_expand.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
#line 4665 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
#line 220 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
#line 220 "stm_expand.m"
            else
#line 220 "stm_expand.m"
              {
#line 220 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_20_20;

#line 220 "stm_expand.m"
                {
#line 220 "stm_expand.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
#line 4685 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
#line 220 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
#line 220 "stm_expand.m"
                else
#line 220 "stm_expand.m"
                  {
#line 220 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_21_21;

#line 220 "stm_expand.m"
                    {
#line 220 "stm_expand.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
#line 4705 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
#line 220 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
#line 220 "stm_expand.m"
                    else
#line 220 "stm_expand.m"
                      {
#line 220 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__V_22_22;

#line 220 "stm_expand.m"
                        {
#line 220 "stm_expand.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
#line 4725 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
#line 220 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
#line 220 "stm_expand.m"
                        else
#line 220 "stm_expand.m"
                          {
#line 220 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__V_23_23;

#line 220 "stm_expand.m"
                            {
#line 220 "stm_expand.m"
                              mercury__term____Compare____context_0_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__V_16_16);
                            }
#line 4745 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
#line 220 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 220 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
#line 220 "stm_expand.m"
                            else
#line 220 "stm_expand.m"
                              {
#line 220 "stm_expand.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
#line 220 "stm_expand.m"
                                return;
                              }
#line 220 "stm_expand.m"
                          }
#line 220 "stm_expand.m"
                      }
#line 220 "stm_expand.m"
                  }
#line 220 "stm_expand.m"
              }
#line 220 "stm_expand.m"
          }
#line 220 "stm_expand.m"
      }
#line 220 "stm_expand.m"
  }
#line 220 "stm_expand.m"
}

#line 220 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 220 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 220 "stm_expand.m"
{
#line 220 "stm_expand.m"
  {
#line 220 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 220 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 220 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 220 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
#line 220 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 220 "stm_expand.m"
    else
#line 220 "stm_expand.m"
      {
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 220 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 220 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

#line 4836 "transform_hlds.stm_expand.c"
        {
#line 4838 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
#line 220 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
          {
#line 4845 "transform_hlds.stm_expand.c"
            {
#line 4847 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
#line 220 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
              {
#line 4854 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
#line 220 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                  {
#line 4860 "transform_hlds.stm_expand.c"
                    {
#line 4862 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
#line 220 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                      {
#line 4869 "transform_hlds.stm_expand.c"
                        {
#line 4871 "transform_hlds.stm_expand.c"
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
#line 220 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 220 "stm_expand.m"
                          {
#line 4878 "transform_hlds.stm_expand.c"
                            {
#line 4880 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = mercury__term____Unify____context_0_0(transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                            }
#line 220 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 4885 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
#line 220 "stm_expand.m"
                          }
#line 220 "stm_expand.m"
                      }
#line 220 "stm_expand.m"
                  }
#line 220 "stm_expand.m"
              }
#line 220 "stm_expand.m"
          }
#line 220 "stm_expand.m"
      }
#line 220 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 220 "stm_expand.m"
  }
#line 220 "stm_expand.m"
}

#line 206 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
#line 206 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 206 "stm_expand.m"
{
#line 206 "stm_expand.m"
  {
#line 206 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 206 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 206 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 206 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
#line 206 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 4930 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "stm_expand.m"
    else
#line 206 "stm_expand.m"
      {
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_18_18;

#line 206 "stm_expand.m"
        {
#line 206 "stm_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
#line 4972 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
#line 206 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
#line 206 "stm_expand.m"
        else
#line 206 "stm_expand.m"
          {
#line 206 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_19_19;

#line 206 "stm_expand.m"
            {
#line 206 "stm_expand.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
#line 4992 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
#line 206 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
#line 206 "stm_expand.m"
            else
#line 206 "stm_expand.m"
              {
#line 206 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_20_20;

#line 206 "stm_expand.m"
                {
#line 206 "stm_expand.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
#line 5012 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
#line 206 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
#line 206 "stm_expand.m"
                else
#line 206 "stm_expand.m"
                  {
#line 206 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_21_21;

#line 206 "stm_expand.m"
                    {
#line 206 "stm_expand.m"
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
#line 5032 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
#line 206 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
#line 206 "stm_expand.m"
                    else
#line 206 "stm_expand.m"
                      {
#line 206 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__V_22_22;

#line 206 "stm_expand.m"
                        {
#line 206 "stm_expand.m"
                          hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
#line 5052 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
#line 206 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
#line 206 "stm_expand.m"
                        else
#line 206 "stm_expand.m"
                          {
#line 206 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__V_23_23;
#line 206 "stm_expand.m"
                            MR_Integer transform_hlds__stm_expand__V_33_33 = (MR_Integer) transform_hlds__stm_expand__V_9_9;
#line 206 "stm_expand.m"
                            MR_Integer transform_hlds__stm_expand__V_34_34 = (MR_Integer) transform_hlds__stm_expand__V_16_16;

#line 206 "stm_expand.m"
                            {
#line 206 "stm_expand.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34);
                            }
#line 5076 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
#line 206 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 206 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
#line 206 "stm_expand.m"
                            else
#line 206 "stm_expand.m"
                              {
#line 206 "stm_expand.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
#line 206 "stm_expand.m"
                                return;
                              }
#line 206 "stm_expand.m"
                          }
#line 206 "stm_expand.m"
                      }
#line 206 "stm_expand.m"
                  }
#line 206 "stm_expand.m"
              }
#line 206 "stm_expand.m"
          }
#line 206 "stm_expand.m"
      }
#line 206 "stm_expand.m"
  }
#line 206 "stm_expand.m"
}

#line 206 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 206 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 206 "stm_expand.m"
{
#line 206 "stm_expand.m"
  {
#line 206 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 206 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 206 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 206 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
#line 206 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 206 "stm_expand.m"
    else
#line 206 "stm_expand.m"
      {
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 206 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 206 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

#line 5167 "transform_hlds.stm_expand.c"
        {
#line 5169 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
#line 206 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
          {
#line 5176 "transform_hlds.stm_expand.c"
            {
#line 5178 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
#line 206 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
              {
#line 5185 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
#line 206 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                  {
#line 5191 "transform_hlds.stm_expand.c"
                    {
#line 5193 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
#line 206 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                      {
#line 5200 "transform_hlds.stm_expand.c"
                        {
#line 5202 "transform_hlds.stm_expand.c"
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
#line 206 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 206 "stm_expand.m"
                          {
#line 5209 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_8_8 == transform_hlds__stm_expand__V_15_15);
#line 206 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 5213 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
#line 206 "stm_expand.m"
                          }
#line 206 "stm_expand.m"
                      }
#line 206 "stm_expand.m"
                  }
#line 206 "stm_expand.m"
              }
#line 206 "stm_expand.m"
          }
#line 206 "stm_expand.m"
      }
#line 206 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 206 "stm_expand.m"
  }
#line 206 "stm_expand.m"
}

#line 233 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
#line 233 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 233 "stm_expand.m"
{
#line 233 "stm_expand.m"
  {
#line 233 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 233 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 233 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_19 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 233 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_18 == transform_hlds__stm_expand__CastY_19);
#line 233 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 5258 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 233 "stm_expand.m"
    else
#line 233 "stm_expand.m"
      {
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14;

#line 233 "stm_expand.m"
        {
#line 233 "stm_expand.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_14_14, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
        }
#line 5292 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_14_14 == (MR_Integer) 0);
#line 233 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 233 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_14_14;
#line 233 "stm_expand.m"
        else
#line 233 "stm_expand.m"
          {
#line 233 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_15_15;

#line 233 "stm_expand.m"
            {
#line 233 "stm_expand.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_15_15, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
            }
#line 5312 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_15_15 == (MR_Integer) 0);
#line 233 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 233 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_15_15;
#line 233 "stm_expand.m"
            else
#line 233 "stm_expand.m"
              {
#line 233 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_16_16;

#line 233 "stm_expand.m"
                {
#line 233 "stm_expand.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_16_16, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                }
#line 5332 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_16_16 == (MR_Integer) 0);
#line 233 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 233 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_16_16;
#line 233 "stm_expand.m"
                else
#line 233 "stm_expand.m"
                  {
#line 233 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_17_17;

#line 233 "stm_expand.m"
                    {
#line 233 "stm_expand.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &transform_hlds__stm_expand__V_17_17, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                    }
#line 5352 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_17_17 == (MR_Integer) 0);
#line 233 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 233 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_17_17;
#line 233 "stm_expand.m"
                    else
#line 233 "stm_expand.m"
                      {
#line 233 "stm_expand.m"
                        {
#line 233 "stm_expand.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__HeadVar__1_1, ((MR_Box) (transform_hlds__stm_expand__V_8_8)), ((MR_Box) (transform_hlds__stm_expand__V_13_13)));
#line 233 "stm_expand.m"
                          return;
                        }
#line 233 "stm_expand.m"
                      }
#line 233 "stm_expand.m"
                  }
#line 233 "stm_expand.m"
              }
#line 233 "stm_expand.m"
          }
#line 233 "stm_expand.m"
      }
#line 233 "stm_expand.m"
  }
#line 233 "stm_expand.m"
}

#line 233 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 233 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 233 "stm_expand.m"
{
#line 233 "stm_expand.m"
  {
#line 233 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 233 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_13 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 233 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_14 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 233 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_13 == transform_hlds__stm_expand__CastY_14);
#line 233 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 233 "stm_expand.m"
    else
#line 233 "stm_expand.m"
      {
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_16_16;
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_18_18;
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_19_19;
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 233 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));

#line 5443 "transform_hlds.stm_expand.c"
        {
#line 5445 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__V_3_3)), ((MR_Box) (transform_hlds__stm_expand__V_8_8)));
        }
#line 233 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
          {
#line 5452 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__TypeInfo_16_16 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
#line 5454 "transform_hlds.stm_expand.c"
            {
#line 5456 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_16_16, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
            }
#line 233 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
              {
#line 5463 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
#line 5465 "transform_hlds.stm_expand.c"
                {
#line 5467 "transform_hlds.stm_expand.c"
                  transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_17_17, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
                }
#line 233 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
                  {
#line 5474 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__TypeInfo_18_18 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5476 "transform_hlds.stm_expand.c"
                    {
#line 5478 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_18_18, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                    }
#line 233 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 233 "stm_expand.m"
                      {
#line 5485 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__TypeInfo_19_19 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5487 "transform_hlds.stm_expand.c"
                        {
#line 5489 "transform_hlds.stm_expand.c"
                          return transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_19_19, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                        }
#line 233 "stm_expand.m"
                      }
#line 233 "stm_expand.m"
                  }
#line 233 "stm_expand.m"
              }
#line 233 "stm_expand.m"
          }
#line 233 "stm_expand.m"
      }
#line 233 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 233 "stm_expand.m"
  }
#line 233 "stm_expand.m"
}

#line 2592 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
#line 2592 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2592 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2592 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2592 "stm_expand.m"
{
#line 2592 "stm_expand.m"
  {
#line 2592 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2592 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__3_20;

#line 2592 "stm_expand.m"
    {
#line 2592 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2592__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_HeadVar__3_20);
    }
#line 2592 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__3_20));
#line 2592 "stm_expand.m"
  }
#line 2592 "stm_expand.m"
}

#line 2591 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
#line 2591 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2591 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2591 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2591 "stm_expand.m"
{
#line 2591 "stm_expand.m"
  {
#line 2591 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2591 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__3_14;

#line 2591 "stm_expand.m"
    {
#line 2591 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2591__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__3_14);
    }
#line 2591 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__3_14));
#line 2591 "stm_expand.m"
  }
#line 2591 "stm_expand.m"
}

#line 2586 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
#line 2586 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2586 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputModes_5,
#line 2586 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputModes_6)
#line 2586 "stm_expand.m"
{
#line 2589 "stm_expand.m"
  {
#line 2589 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_18_18;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_7;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_8;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12;
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
#line 2589 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__InputSet_26);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__OutputSet_27);
    }
#line 2591 "stm_expand.m"
    {
#line 2591 "stm_expand.m"
      transform_hlds__stm_expand__V_10_10 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 2591 "stm_expand.m"
    {
#line 2591 "stm_expand.m"
      transform_hlds__stm_expand__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2591 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
#line 2591 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
#line 2591 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2591 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 3) = ((MR_Box) (transform_hlds__stm_expand__V_10_10));
#line 2591 "stm_expand.m"
    }
#line 5642 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5644 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2591 "stm_expand.m"
    {
#line 2591 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__InputVars_7, transform_hlds__stm_expand__InputModes_5);
    }
#line 2592 "stm_expand.m"
    {
#line 2592 "stm_expand.m"
      transform_hlds__stm_expand__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 2592 "stm_expand.m"
    {
#line 2592 "stm_expand.m"
      transform_hlds__stm_expand__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2592 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
#line 2592 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
#line 2592 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2592 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 3) = ((MR_Box) (transform_hlds__stm_expand__V_12_12));
#line 2592 "stm_expand.m"
    }
#line 2592 "stm_expand.m"
    {
#line 2592 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_11_11, transform_hlds__stm_expand__OutputVars_8, transform_hlds__stm_expand__OutputModes_6);
#line 2592 "stm_expand.m"
      return;
    }
#line 2589 "stm_expand.m"
  }
#line 2586 "stm_expand.m"
}

#line 2565 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
#line 2565 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
#line 2565 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_6,
#line 2565 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
#line 2565 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputTypes_8)
#line 2565 "stm_expand.m"
{
#line 2568 "stm_expand.m"
  {
#line 2568 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_32;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 3)));
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_10;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_11;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_12;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_22;
#line 2568 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_23;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 0)));
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 1)));
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 2)));
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 4)));
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 5)));
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 6)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;

#line 2570 "stm_expand.m"
    {
#line 2570 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_9, &transform_hlds__stm_expand__VarTypes_10);
    }
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 0)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 4)));
#line 5747 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__InputSet_22);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__OutputSet_23);
    }
#line 2573 "stm_expand.m"
    {
#line 2573 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__InputVars_11, transform_hlds__stm_expand__InputTypes_7);
    }
#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__OutputVars_12, transform_hlds__stm_expand__OutputTypes_8);
#line 2574 "stm_expand.m"
      return;
    }
#line 2568 "stm_expand.m"
  }
#line 2565 "stm_expand.m"
}

#line 2552 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
#line 2552 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2552 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Input_5,
#line 2552 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Output_6)
#line 2552 "stm_expand.m"
{
#line 2555 "stm_expand.m"
  {
#line 2555 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2555 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2555 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
#line 2555 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      *transform_hlds__stm_expand__Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__InputSet_7);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      *transform_hlds__stm_expand__Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__OutputSet_8);
    }
#line 2555 "stm_expand.m"
  }
#line 2552 "stm_expand.m"
}

#line 2538 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
#line 2538 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
#line 2538 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_4)
#line 2538 "stm_expand.m"
{
#line 2540 "stm_expand.m"
  {
#line 2540 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2540 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 1)));
#line 2540 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 2)));
#line 2541 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 0)));
#line 2541 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 3)));
#line 2541 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 4)));
#line 2541 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 5)));
#line 2541 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 6)));

#line 2543 "stm_expand.m"
    {
#line 2543 "stm_expand.m"
      MR_Word base;
#line 2543 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2543 "stm_expand.m"
      *transform_hlds__stm_expand__PredProcId_4 = base;
#line 2543 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
#line 2543 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
#line 2543 "stm_expand.m"
    }
#line 2540 "stm_expand.m"
  }
#line 2538 "stm_expand.m"
}

#line 2518 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
#line 2518 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal_4,
#line 2518 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2518 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
#line 2518 "stm_expand.m"
{
#line 2521 "stm_expand.m"
  {
#line 2521 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_32_32;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVars_7;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVarsSet_8;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarSet0_9;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes0_10;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProgVarSet_11;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes_12;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo1_13;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo2_14;
#line 2521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_15;
#line 2522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2522 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2522 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2534 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 2534 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2534 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27;
#line 2534 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 2534 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2534 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_31_31;
#line 2534 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 2523 "stm_expand.m"
    {
#line 2523 "stm_expand.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__Goal_4, &transform_hlds__stm_expand__GoalVars_7);
    }
#line 5935 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2524 "stm_expand.m"
    {
#line 2524 "stm_expand.m"
      transform_hlds__stm_expand__GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVars_7);
    }
#line 2525 "stm_expand.m"
    {
#line 2525 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarSet0_9);
    }
#line 2526 "stm_expand.m"
    {
#line 2526 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarTypes0_10);
    }
#line 2528 "stm_expand.m"
    {
#line 2528 "stm_expand.m"
      mercury__varset__select_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarSet0_9, &transform_hlds__stm_expand__ProgVarSet_11);
    }
#line 2529 "stm_expand.m"
    {
#line 2529 "stm_expand.m"
      parse_tree__prog_data__vartypes_select_3_p_0(transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarTypes0_10, &transform_hlds__stm_expand__ProcVarTypes_12);
    }
#line 2531 "stm_expand.m"
    {
#line 2531 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__ProgVarSet_11, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo1_13);
    }
#line 2532 "stm_expand.m"
    {
#line 2532 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_4, transform_hlds__stm_expand__ProcInfo1_13, &transform_hlds__stm_expand__ProcInfo2_14);
    }
#line 2533 "stm_expand.m"
    {
#line 2533 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__ProcVarTypes_12, transform_hlds__stm_expand__ProcInfo2_14, &transform_hlds__stm_expand__ProcInfo_15);
    }
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2534 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2534 "stm_expand.m"
    {
#line 2534 "stm_expand.m"
      MR_Word base;
#line 2534 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2534 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_15));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2534 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2534 "stm_expand.m"
    }
#line 2521 "stm_expand.m"
  }
#line 2518 "stm_expand.m"
}

#line 2503 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
#line 2503 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
#line 2503 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10)
#line 2503 "stm_expand.m"
{
#line 2506 "stm_expand.m"
  {
#line 2506 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo1_6;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_8;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 2506 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_29_29;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2506 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 2506 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_33_33;
#line 2507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
#line 2507 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
#line 2507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
#line 2507 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
#line 2507 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
#line 2513 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 2513 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;

#line 2509 "stm_expand.m"
    {
#line 2509 "stm_expand.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__ProcInfo0_4, &transform_hlds__stm_expand__ProcInfo1_6);
    }
#line 2511 "stm_expand.m"
    {
#line 2511 "stm_expand.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__ProcInfo1_6, &transform_hlds__stm_expand__ProcInfo_7, transform_hlds__stm_expand__ModuleInfo0_5, &transform_hlds__stm_expand__ModuleInfo_8);
    }
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
#line 2513 "stm_expand.m"
    transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
#line 2514 "stm_expand.m"
    {
#line 2514 "stm_expand.m"
      MR_Word base;
#line 2514 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2514 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10 = base;
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_8));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_32_32));
#line 2514 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2514 "stm_expand.m"
    }
#line 2506 "stm_expand.m"
  }
#line 2503 "stm_expand.m"
}

#line 2493 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
#line 2493 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_4,
#line 2493 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
#line 2493 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8)
#line 2493 "stm_expand.m"
{
#line 2496 "stm_expand.m"
  {
#line 2496 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2496 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 0)));
#line 2497 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 1)));
#line 2497 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 2)));
#line 2497 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 3)));
#line 2497 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 4)));
#line 2497 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 5)));
#line 2497 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 6)));
#line 2498 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 1)));
#line 2498 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 2)));
#line 2498 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 3)));
#line 2498 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 4)));
#line 2498 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 5)));
#line 2498 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 6)));
#line 2498 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 0)));

#line 2498 "stm_expand.m"
    {
#line 2498 "stm_expand.m"
      MR_Word base;
#line 2498 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2498 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8 = base;
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_6));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
#line 2498 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 2498 "stm_expand.m"
    }
#line 2496 "stm_expand.m"
  }
#line 2493 "stm_expand.m"
}

#line 2476 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
#line 2476 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPred_4,
#line 2476 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
#line 2476 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInfo_6)
#line 2476 "stm_expand.m"
{
#line 2479 "stm_expand.m"
  {
#line 2479 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 1)));
#line 2479 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__OrigProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 2)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 3)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 4)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmExpanded_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 5)));
#line 2479 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpandNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 6)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 0)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 1)));
#line 2479 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 2)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 3)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 4)));
#line 2479 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo_21;
#line 2480 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 0)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 5)));
#line 2483 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 6)));

#line 2485 "stm_expand.m"
    {
#line 2485 "stm_expand.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_15, transform_hlds__stm_expand__NewProcId_16, transform_hlds__stm_expand__NewPredInfo_17, transform_hlds__stm_expand__NewProcInfo_18, transform_hlds__stm_expand__PredModuleInfo0_14, &transform_hlds__stm_expand__PredModuleInfo_21);
    }
#line 2487 "stm_expand.m"
    {
#line 2487 "stm_expand.m"
      MR_Word base;
#line 2487 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2487 "stm_expand.m"
      *transform_hlds__stm_expand__StmInfo_6 = base;
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_21));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_8));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_9));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_10));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_11));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_12));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_13));
#line 2487 "stm_expand.m"
    }
#line 2479 "stm_expand.m"
  }
#line 2476 "stm_expand.m"
}

#line 2465 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
#line 2465 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
#line 2465 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
#line 2465 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9)
#line 2465 "stm_expand.m"
{
#line 2468 "stm_expand.m"
  {
#line 2468 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2468 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
#line 2468 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
#line 2469 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
#line 2469 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
#line 2469 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
#line 2469 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
#line 2469 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
#line 2469 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
#line 2471 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17;
#line 2471 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;
#line 2471 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_19_19;
#line 2471 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20;
#line 2471 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 2471 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_23_23;
#line 2471 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;

#line 2470 "stm_expand.m"
    {
#line 2470 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_4, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo_7);
    }
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
#line 2471 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
#line 2471 "stm_expand.m"
    {
#line 2471 "stm_expand.m"
      MR_Word base;
#line 2471 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2471 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9 = base;
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 2471 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
#line 2471 "stm_expand.m"
    }
#line 2468 "stm_expand.m"
  }
#line 2465 "stm_expand.m"
}

#line 2379 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
#line 2379 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Prefix_14,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
#line 2379 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
#line 2379 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66)
#line 2379 "stm_expand.m"
{
#line 2385 "stm_expand.m"
  {
#line 2385 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_139_139;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpansionCnt0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Arity_25;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo0_27;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_28;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcContext_29;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarSet_30;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes_31;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInstVarSet_32;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcGoal_34;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcRttiVarMaps_35;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__HasParallelConj_36;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarNameRemap_37;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleName_39;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__OrigPredName_40;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredOrFunc_41;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredContext_42;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredName_43;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredOrigin_44;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredOrigin_45;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTypeVarSet_46;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredExistQVars_47;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredClassContext_48;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredAssertions_49;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Markers_50;
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_51;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_52;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredicateTable0_53;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_54;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredicateTable_55;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_56;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallExpr_57;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallNonLocals_58;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallInstmapDelta_59;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallDeterminism_60;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallPurity_61;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallContext_62;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_63;
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpansionCnt_64;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_69_69;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_71_71;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_72_72;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_74_74;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_75_75;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_77_77;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_78_78;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_79_79;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_81_81;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_82_82;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_83_83;
#line 2385 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_85_85;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 2385 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_126_126;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_127_127;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_128_128;
#line 2385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_129_129;
#line 2386 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
#line 2386 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
#line 2393 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2458 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_124_124;
#line 2458 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_130_130;

#line 2392 "stm_expand.m"
    {
#line 2392 "stm_expand.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__Arity_25);
    }
#line 2393 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 0)));
#line 2393 "stm_expand.m"
    transform_hlds__stm_expand__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 1)));
#line 2395 "stm_expand.m"
    {
#line 2395 "stm_expand.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__stm_expand__PredInfo_21, transform_hlds__stm_expand__ProcId_22, &transform_hlds__stm_expand__ProcInfo_28);
    }
#line 2396 "stm_expand.m"
    {
#line 2396 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcContext_29);
    }
#line 2397 "stm_expand.m"
    {
#line 2397 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarSet_30);
    }
#line 2398 "stm_expand.m"
    {
#line 2398 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarTypes_31);
    }
#line 2399 "stm_expand.m"
    {
#line 2399 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcInstVarSet_32);
    }
#line 2402 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeDetism_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2404 "stm_expand.m"
      {
#line 2404 "stm_expand.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__CallDeterminism_60);
      }
#line 2402 "stm_expand.m"
    else
#line 2401 "stm_expand.m"
      transform_hlds__stm_expand__CallDeterminism_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeDetism_16, (MR_Integer) 0)));
#line 2406 "stm_expand.m"
    {
#line 2406 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcGoal_34);
    }
#line 2407 "stm_expand.m"
    {
#line 2407 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcRttiVarMaps_35);
    }
#line 2408 "stm_expand.m"
    {
#line 2408 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__HasParallelConj_36);
    }
#line 2409 "stm_expand.m"
    {
#line 2409 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__VarNameRemap_37);
    }
#line 2410 "stm_expand.m"
    {
#line 2410 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__stm_expand__ProcContext_29, transform_hlds__stm_expand__ProcVarSet_30, transform_hlds__stm_expand__ProcVarTypes_31, transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcInstVarSet_32, transform_hlds__stm_expand__ProcHeadModes_13, (MR_Integer) 2, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__ProcGoal_34, transform_hlds__stm_expand__ProcRttiVarMaps_35, (MR_Integer) 1, transform_hlds__stm_expand__HasParallelConj_36, transform_hlds__stm_expand__VarNameRemap_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
#line 2414 "stm_expand.m"
    {
#line 2414 "stm_expand.m"
      transform_hlds__stm_expand__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2415 "stm_expand.m"
    {
#line 2415 "stm_expand.m"
      transform_hlds__stm_expand__OrigPredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2416 "stm_expand.m"
    {
#line 2416 "stm_expand.m"
      transform_hlds__stm_expand__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2417 "stm_expand.m"
    {
#line 2417 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredContext_42);
    }
#line 6620 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_139_139, ((MR_Box) (transform_hlds__stm_expand__Arity_25)));
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_82_82 = mercury__string__string_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__stm_expand__PredId_23)));
    }
#line 2421 "stm_expand.m"
    {
#line 2421 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_139_139, ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt0_24)));
    }
#line 2421 "stm_expand.m"
    {
#line 2421 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_85_85);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_82_82, transform_hlds__stm_expand__V_83_83);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_81_81);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_77_77 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_78_78, transform_hlds__stm_expand__V_79_79);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_77_77);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__OrigPredName_40, transform_hlds__stm_expand__V_75_75);
    }
#line 2419 "stm_expand.m"
    {
#line 2419 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_74_74);
    }
#line 2419 "stm_expand.m"
    {
#line 2419 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Prefix_14, transform_hlds__stm_expand__V_72_72);
    }
#line 2419 "stm_expand.m"
    {
#line 2419 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", transform_hlds__stm_expand__V_71_71);
    }
#line 2419 "stm_expand.m"
    {
#line 2419 "stm_expand.m"
      transform_hlds__stm_expand__NewPredName_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2419 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleName_39));
#line 2419 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 2419 "stm_expand.m"
    }
#line 2423 "stm_expand.m"
    {
#line 2423 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__OrigPredOrigin_44);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__NewPredOrigin_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2424 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2424 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredOrigin_44));
#line 2424 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 2) = ((MR_Box) (transform_hlds__stm_expand__PredId_23));
#line 2424 "stm_expand.m"
    }
#line 2427 "stm_expand.m"
    {
#line 2427 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredTypeVarSet_46);
    }
#line 2428 "stm_expand.m"
    {
#line 2428 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredExistQVars_47);
    }
#line 2429 "stm_expand.m"
    {
#line 2429 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredClassContext_48);
    }
#line 2430 "stm_expand.m"
    {
#line 2430 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredAssertions_49);
    }
#line 2431 "stm_expand.m"
    {
#line 2431 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__Markers_50);
    }
#line 2432 "stm_expand.m"
    {
#line 2432 "stm_expand.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__stm_expand__ModuleName_39, transform_hlds__stm_expand__NewPredName_43, transform_hlds__stm_expand__PredOrFunc_41, transform_hlds__stm_expand__PredContext_42, transform_hlds__stm_expand__NewPredOrigin_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__stm_expand__Markers_50, transform_hlds__stm_expand__PredArgTypes_12, transform_hlds__stm_expand__PredTypeVarSet_46, transform_hlds__stm_expand__PredExistQVars_47, transform_hlds__stm_expand__PredClassContext_48, transform_hlds__stm_expand__PredAssertions_49, transform_hlds__stm_expand__VarNameRemap_37, transform_hlds__stm_expand__NewProcInfo_38, &transform_hlds__stm_expand__NewProcId_51, &transform_hlds__stm_expand__NewPredInfo_52);
    }
#line 2437 "stm_expand.m"
    {
#line 2437 "stm_expand.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__PredicateTable0_53);
    }
#line 2438 "stm_expand.m"
    {
#line 2438 "stm_expand.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__stm_expand__NewPredInfo_52, &transform_hlds__stm_expand__NewPredId_54, transform_hlds__stm_expand__PredicateTable0_53, &transform_hlds__stm_expand__PredicateTable_55);
    }
#line 2440 "stm_expand.m"
    {
#line 2440 "stm_expand.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__stm_expand__PredicateTable_55, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__ModuleInfo_56);
    }
#line 2442 "stm_expand.m"
    {
#line 2442 "stm_expand.m"
      transform_hlds__stm_expand__CallExpr_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 0) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 1) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcHeadVars_11));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 3) = ((MR_Box) ((MR_Integer) 2));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2442 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 5) = ((MR_Box) (transform_hlds__stm_expand__NewPredName_43));
#line 2442 "stm_expand.m"
    }
#line 2445 "stm_expand.m"
    {
#line 2445 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__CallNonLocals_58);
    }
#line 2446 "stm_expand.m"
    {
#line 2446 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcHeadModes_13, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__CallInstmapDelta_59);
    }
#line 2450 "stm_expand.m"
    {
#line 2450 "stm_expand.m"
      transform_hlds__stm_expand__CallPurity_61 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
#line 2451 "stm_expand.m"
    {
#line 2451 "stm_expand.m"
      transform_hlds__stm_expand__CallContext_62 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
#line 2453 "stm_expand.m"
    {
#line 2453 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__CallNonLocals_58, transform_hlds__stm_expand__CallInstmapDelta_59, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__CallPurity_61, transform_hlds__stm_expand__CallContext_62, &transform_hlds__stm_expand__GoalInfo_63);
    }
#line 2455 "stm_expand.m"
    {
#line 2455 "stm_expand.m"
      MR_Word base;
#line 2455 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2455 "stm_expand.m"
      *transform_hlds__stm_expand__CallGoal_18 = base;
#line 2455 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__CallExpr_57));
#line 2455 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_63));
#line 2455 "stm_expand.m"
    }
#line 2457 "stm_expand.m"
    transform_hlds__stm_expand__ExpansionCnt_64 = (transform_hlds__stm_expand__ExpansionCnt0_24 + (MR_Integer) 1);
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
#line 2458 "stm_expand.m"
    transform_hlds__stm_expand__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
#line 2459 "stm_expand.m"
    {
#line 2459 "stm_expand.m"
      MR_Word base;
#line 2459 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2459 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66 = base;
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_128_128));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt_64));
#line 2459 "stm_expand.m"
    }
#line 2460 "stm_expand.m"
    {
#line 2460 "stm_expand.m"
      MR_Word base;
#line 2460 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2460 "stm_expand.m"
      *transform_hlds__stm_expand__NewStmPredInfo_17 = base;
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__NewPredInfo_52));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__CallContext_62));
#line 2460 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2460 "stm_expand.m"
    }
#line 2385 "stm_expand.m"
  }
#line 2379 "stm_expand.m"
}

#line 2345 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
#line 2345 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_7,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_8,
#line 2345 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
#line 2345 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10)
#line 2345 "stm_expand.m"
{
#line 2348 "stm_expand.m"
  {
#line 2348 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 0)));
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 1)));
#line 2348 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 2)));
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 3)));
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 4)));
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 5)));
#line 2348 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 6)));
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_18;
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_19;
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_20;
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_21;
#line 2348 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_22;

#line 2351 "stm_expand.m"
    {
#line 2351 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_11, transform_hlds__stm_expand__PredInfo0_14, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__PolyInfo0_18);
    }
#line 2352 "stm_expand.m"
    {
#line 2352 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__Context_16, transform_hlds__stm_expand__Var_7, transform_hlds__stm_expand__Goals_8, transform_hlds__stm_expand__PolyInfo0_18, &transform_hlds__stm_expand__PolyInfo_19);
    }
#line 2354 "stm_expand.m"
    {
#line 2354 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_19, transform_hlds__stm_expand__PredInfo0_14, &transform_hlds__stm_expand__PredInfo_20, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__ProcInfo_21, &transform_hlds__stm_expand__ModuleInfo_22);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      MR_Word base;
#line 2356 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2356 "stm_expand.m"
      *transform_hlds__stm_expand__NewPredInfo_10 = base;
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_22));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_12));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_13));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_20));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_21));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_16));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_17));
#line 2356 "stm_expand.m"
    }
#line 2348 "stm_expand.m"
  }
#line 2345 "stm_expand.m"
}

#line 2328 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
#line 2328 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
#line 2328 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ConjGoal_4)
#line 2328 "stm_expand.m"
{
#line 2330 "stm_expand.m"
  {
#line 2330 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConjGoalExpr_6;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_7;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_8;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_9;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Purity_10;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalAInfo_11;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConjGoalInfo_13;
#line 2330 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2337 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv0_V_14_14;
#line 2337 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15;

#line 2332 "stm_expand.m"
    {
#line 2332 "stm_expand.m"
      transform_hlds__stm_expand__ConjGoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2332 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2332 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2332 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalsInConj_3));
#line 2332 "stm_expand.m"
    }
#line 2333 "stm_expand.m"
    {
#line 2333 "stm_expand.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__NonLocals_7);
    }
#line 2334 "stm_expand.m"
    {
#line 2334 "stm_expand.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__InstMapDelta_8);
    }
#line 2335 "stm_expand.m"
    {
#line 2335 "stm_expand.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Detism_9);
    }
#line 2336 "stm_expand.m"
    {
#line 2336 "stm_expand.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Purity_10);
    }
#line 2337 "stm_expand.m"
    {
#line 2337 "stm_expand.m"
      transform_hlds__stm_expand__conv0_V_14_14 = mercury__list__det_head_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__GoalsInConj_3);
    }
#line 2337 "stm_expand.m"
    transform_hlds__stm_expand__V_14_14 = ((MR_Word) transform_hlds__stm_expand__conv0_V_14_14);
#line 2337 "stm_expand.m"
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 0)));
#line 2337 "stm_expand.m"
    transform_hlds__stm_expand__GoalAInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 1)));
#line 2338 "stm_expand.m"
    {
#line 2338 "stm_expand.m"
      transform_hlds__stm_expand__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalAInfo_11);
    }
#line 2339 "stm_expand.m"
    {
#line 2339 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_7, transform_hlds__stm_expand__InstMapDelta_8, transform_hlds__stm_expand__Detism_9, transform_hlds__stm_expand__Purity_10, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__ConjGoalInfo_13);
    }
#line 2341 "stm_expand.m"
    {
#line 2341 "stm_expand.m"
      MR_Word base;
#line 2341 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2341 "stm_expand.m"
      *transform_hlds__stm_expand__ConjGoal_4 = base;
#line 2341 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalExpr_6));
#line 2341 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalInfo_13));
#line 2341 "stm_expand.m"
    }
#line 2330 "stm_expand.m"
  }
#line 2328 "stm_expand.m"
}

#line 2310 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
#line 2310 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalIn_4,
#line 2310 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
#line 2310 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalOut_6)
#line 2310 "stm_expand.m"
{
#line 2313 "stm_expand.m"
  {
#line 2313 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 1)));
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_9;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_10;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_11;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_13;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_14;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Reason_15;
#line 2313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalOutExpr_16;
#line 2314 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 0)));

#line 2315 "stm_expand.m"
    {
#line 2315 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2316 "stm_expand.m"
    {
#line 2316 "stm_expand.m"
      transform_hlds__stm_expand__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2317 "stm_expand.m"
    {
#line 2317 "stm_expand.m"
      transform_hlds__stm_expand__Detism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2319 "stm_expand.m"
    {
#line 2319 "stm_expand.m"
      transform_hlds__stm_expand__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2320 "stm_expand.m"
    {
#line 2320 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_9, transform_hlds__stm_expand__InstMapDelta_10, transform_hlds__stm_expand__Detism_11, transform_hlds__stm_expand__ScopePurity_5, transform_hlds__stm_expand__Context_13, &transform_hlds__stm_expand__GoalInfo_14);
    }
#line 2322 "stm_expand.m"
    {
#line 2322 "stm_expand.m"
      transform_hlds__stm_expand__Reason_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__Reason_15, 0) = ((MR_Box) (transform_hlds__stm_expand__ScopePurity_5));
#line 2322 "stm_expand.m"
    }
#line 2323 "stm_expand.m"
    {
#line 2323 "stm_expand.m"
      transform_hlds__stm_expand__GoalOutExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_15));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalIn_4));
#line 2323 "stm_expand.m"
    }
#line 2324 "stm_expand.m"
    {
#line 2324 "stm_expand.m"
      MR_Word base;
#line 2324 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2324 "stm_expand.m"
      *transform_hlds__stm_expand__GoalOut_6 = base;
#line 2324 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalOutExpr_16));
#line 2324 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
#line 2324 "stm_expand.m"
    }
#line 2313 "stm_expand.m"
  }
#line 2310 "stm_expand.m"
}

#line 2294 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_8,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cases_9,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_10,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_11,
#line 2294 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
#line 2294 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 2294 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
#line 2294 "stm_expand.m"
{
#line 2299 "stm_expand.m"
  {
#line 2299 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2299 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 5)));
#line 2299 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_15;
#line 2299 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_16;
#line 2299 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutGoalExpr_17;
#line 2299 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_18;
#line 2300 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 0)));
#line 2300 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 1)));
#line 2300 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 2)));
#line 2300 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 3)));
#line 2300 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 4)));
#line 2300 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 6)));

#line 2301 "stm_expand.m"
    {
#line 2301 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 2302 "stm_expand.m"
    {
#line 2302 "stm_expand.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_16);
    }
#line 2303 "stm_expand.m"
    {
#line 2303 "stm_expand.m"
      transform_hlds__stm_expand__OutGoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2303 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 1) = ((MR_Box) (transform_hlds__stm_expand__ProgVar_8));
#line 2303 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 2) = ((MR_Box) ((MR_Integer) 1));
#line 2303 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_9));
#line 2303 "stm_expand.m"
    }
#line 2304 "stm_expand.m"
    {
#line 2304 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_15, transform_hlds__stm_expand__InstMapDelta_16, transform_hlds__stm_expand__Detism_10, transform_hlds__stm_expand__Purity_11, transform_hlds__stm_expand__Context_14, &transform_hlds__stm_expand__GoalInfo_18);
    }
#line 2306 "stm_expand.m"
    {
#line 2306 "stm_expand.m"
      MR_Word base;
#line 2306 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2306 "stm_expand.m"
      *transform_hlds__stm_expand__OutGoal_12 = base;
#line 2306 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_17));
#line 2306 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_18));
#line 2306 "stm_expand.m"
    }
#line 2306 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19;
#line 2299 "stm_expand.m"
  }
#line 2294 "stm_expand.m"
}

#line 2278 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExistVars_10,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond_11,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then_12,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else_13,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_14,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_15,
#line 2278 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
#line 2278 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
#line 2278 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24)
#line 2278 "stm_expand.m"
{
#line 2283 "stm_expand.m"
  {
#line 2283 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2283 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 5)));
#line 2283 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutGoalExpr_19;
#line 2283 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_20;
#line 2283 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_21;
#line 2283 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_22;
#line 2284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 0)));
#line 2284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 1)));
#line 2284 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 2)));
#line 2284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 3)));
#line 2284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 4)));
#line 2284 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 6)));

#line 2285 "stm_expand.m"
    {
#line 2285 "stm_expand.m"
      transform_hlds__stm_expand__OutGoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2285 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 1) = ((MR_Box) (transform_hlds__stm_expand__ExistVars_10));
#line 2285 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_11));
#line 2285 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_12));
#line 2285 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_13));
#line 2285 "stm_expand.m"
    }
#line 2286 "stm_expand.m"
    {
#line 2286 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 2287 "stm_expand.m"
    {
#line 2287 "stm_expand.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_21);
    }
#line 2288 "stm_expand.m"
    {
#line 2288 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_20, transform_hlds__stm_expand__InstMapDelta_21, transform_hlds__stm_expand__Detism_14, transform_hlds__stm_expand__Purity_15, transform_hlds__stm_expand__Context_18, &transform_hlds__stm_expand__GoalInfo_22);
    }
#line 2290 "stm_expand.m"
    {
#line 2290 "stm_expand.m"
      MR_Word base;
#line 2290 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2290 "stm_expand.m"
      *transform_hlds__stm_expand__OutGoal_16 = base;
#line 2290 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_19));
#line 2290 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_22));
#line 2290 "stm_expand.m"
    }
#line 2290 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23;
#line 2283 "stm_expand.m"
  }
#line 2278 "stm_expand.m"
}

#line 2252 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredProcID_9,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Args_10,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgModes_12,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
#line 2252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2252 "stm_expand.m"
{
#line 2257 "stm_expand.m"
  {
#line 2257 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ShroudPredProcID_16;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureType_17;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureCons_18;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignGoal0_19;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDelta_21;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignExpr_22;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo0_23;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo_24;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 2257 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;

#line 2258 "stm_expand.m"
    {
#line 2258 "stm_expand.m"
      transform_hlds__stm_expand__ShroudPredProcID_16 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__stm_expand__PredProcID_9);
    }
#line 2259 "stm_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2259 "stm_expand.m"
    {
#line 2259 "stm_expand.m"
      parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, transform_hlds__stm_expand__ArgTypes_11, &transform_hlds__stm_expand__ClosureType_17);
    }
#line 2261 "stm_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2261 "stm_expand.m"
    {
#line 2261 "stm_expand.m"
      transform_hlds__stm_expand__ClosureCons_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2261 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2261 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 1) = ((MR_Box) (transform_hlds__stm_expand__ShroudPredProcID_16));
#line 2261 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 2) = NULL;
#line 2261 "stm_expand.m"
    }
#line 2262 "stm_expand.m"
    {
#line 2262 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ClosureType_17, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[24]), transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
    }
#line 2263 "stm_expand.m"
    {
#line 2263 "stm_expand.m"
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__ClosureCons_18, transform_hlds__stm_expand__Args_10, &transform_hlds__stm_expand__ClosureAssignGoal0_19);
    }
#line 2266 "stm_expand.m"
    {
#line 2266 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (*transform_hlds__stm_expand__ClosureVar_13));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2266 "stm_expand.m"
    }
#line 2266 "stm_expand.m"
    {
#line 2266 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) ((MR_Integer) 0));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__ArgModes_12));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2266 "stm_expand.m"
    }
#line 2266 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__stm_expand__V_39_39);
#line 2266 "stm_expand.m"
    {
#line 2266 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2266 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 2) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 2266 "stm_expand.m"
    }
#line 2267 "stm_expand.m"
    {
#line 2267 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2267 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__V_36_36));
#line 2267 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2267 "stm_expand.m"
    }
#line 2265 "stm_expand.m"
    {
#line 2265 "stm_expand.m"
      transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_35_35);
    }
#line 2268 "stm_expand.m"
    {
#line 2268 "stm_expand.m"
      transform_hlds__stm_expand__ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20);
    }
#line 2271 "stm_expand.m"
    transform_hlds__stm_expand__ClosureAssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 0)));
#line 2271 "stm_expand.m"
    transform_hlds__stm_expand__ClosureAssignInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 1)));
#line 2272 "stm_expand.m"
    {
#line 2272 "stm_expand.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__stm_expand__ClosureAssignInstmapDelta_21, transform_hlds__stm_expand__ClosureAssignInfo0_23, &transform_hlds__stm_expand__ClosureAssignInfo_24);
    }
#line 2274 "stm_expand.m"
    {
#line 2274 "stm_expand.m"
      MR_Word base;
#line 2274 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2274 "stm_expand.m"
      *transform_hlds__stm_expand__ClosureAssignGoal_14 = base;
#line 2274 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignExpr_22));
#line 2274 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignInfo_24));
#line 2274 "stm_expand.m"
    }
#line 2257 "stm_expand.m"
  }
#line 2252 "stm_expand.m"
}

#line 2237 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleName_13,
#line 2237 "stm_expand.m"
  MR_String transform_hlds__stm_expand__ProcName_14,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Mode_16,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_17,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_18,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVars_19,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
#line 2237 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_22,
#line 2237 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2237 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
#line 2237 "stm_expand.m"
{
#line 2243 "stm_expand.m"
  {
#line 2243 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2243 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 5)));
#line 2243 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 0)));
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 1)));
#line 2244 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 2)));
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 3)));
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 4)));
#line 2244 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 6)));

#line 2246 "stm_expand.m"
    {
#line 2246 "stm_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__ModuleName_13, transform_hlds__stm_expand__ProcName_14, transform_hlds__stm_expand__PredOrFunc_15, transform_hlds__stm_expand__Mode_16, transform_hlds__stm_expand__Detism_17, transform_hlds__stm_expand__Purity_18, transform_hlds__stm_expand__ProgVars_19, transform_hlds__stm_expand__GoalFeatures_20, transform_hlds__stm_expand__InstmapDelta_21, transform_hlds__stm_expand__ModuleInfo_25, transform_hlds__stm_expand__Context_24, transform_hlds__stm_expand__Goal_22);
    }
#line 2246 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
#line 2243 "stm_expand.m"
  }
#line 2237 "stm_expand.m"
}

#line 2211 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2211 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2211 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2211 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2211 "stm_expand.m"
{
#line 2214 "stm_expand.m"
  {
#line 2214 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2214 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2215 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
#line 2215 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
#line 2215 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
#line 2215 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
#line 2215 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

#line 2218 "stm_expand.m"
    {
#line 2218 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2218 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2218 "stm_expand.m"
    }
#line 2219 "stm_expand.m"
    {
#line 2219 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2219 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2219 "stm_expand.m"
    }
#line 2221 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2221 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2223 "stm_expand.m"
    }
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2223 "stm_expand.m"
    }
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2223 "stm_expand.m"
    }
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2223 "stm_expand.m"
    }
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2225 "stm_expand.m"
    {
#line 2225 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2225 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2225 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2225 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2225 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2225 "stm_expand.m"
    }
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2230 "stm_expand.m"
    {
#line 2230 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2232 "stm_expand.m"
    {
#line 2232 "stm_expand.m"
      MR_Word base;
#line 2232 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2232 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2232 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2232 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2232 "stm_expand.m"
    }
#line 2232 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
#line 2214 "stm_expand.m"
  }
#line 2211 "stm_expand.m"
}

#line 2186 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2186 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2186 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 2186 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
#line 2186 "stm_expand.m"
{
#line 2189 "stm_expand.m"
  {
#line 2189 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 0)));
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2189 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 2191 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 1)));
#line 2191 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 2)));
#line 2191 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 3)));
#line 2191 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 4)));
#line 2191 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 5)));
#line 2191 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 6)));

#line 2193 "stm_expand.m"
    {
#line 2193 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2193 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2193 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2193 "stm_expand.m"
    }
#line 2194 "stm_expand.m"
    {
#line 2194 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2194 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2194 "stm_expand.m"
    }
#line 2196 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2196 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2198 "stm_expand.m"
    }
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2198 "stm_expand.m"
    }
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2198 "stm_expand.m"
    }
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 1) = ((MR_Box) (transform_hlds__stm_expand__V_35_35));
#line 2198 "stm_expand.m"
    }
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_31_31, transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2200 "stm_expand.m"
    {
#line 2200 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2200 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2200 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2200 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2200 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2200 "stm_expand.m"
    }
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2205 "stm_expand.m"
    {
#line 2205 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[6], &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2207 "stm_expand.m"
    {
#line 2207 "stm_expand.m"
      MR_Word base;
#line 2207 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2207 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2207 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2207 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2207 "stm_expand.m"
    }
#line 2207 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25;
#line 2189 "stm_expand.m"
  }
#line 2186 "stm_expand.m"
}

#line 2160 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2160 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2160 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2160 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2160 "stm_expand.m"
{
#line 2163 "stm_expand.m"
  {
#line 2163 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2163 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2164 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
#line 2164 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
#line 2164 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
#line 2164 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
#line 2164 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

#line 2167 "stm_expand.m"
    {
#line 2167 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2167 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2167 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 2) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2167 "stm_expand.m"
    }
#line 2168 "stm_expand.m"
    {
#line 2168 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2168 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2168 "stm_expand.m"
    }
#line 2170 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2170 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2172 "stm_expand.m"
    }
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2172 "stm_expand.m"
    }
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2172 "stm_expand.m"
    }
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2172 "stm_expand.m"
    }
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2174 "stm_expand.m"
    {
#line 2174 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2174 "stm_expand.m"
    }
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2179 "stm_expand.m"
    {
#line 2179 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2181 "stm_expand.m"
    {
#line 2181 "stm_expand.m"
      MR_Word base;
#line 2181 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2181 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2181 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2181 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2181 "stm_expand.m"
    }
#line 2181 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
#line 2163 "stm_expand.m"
  }
#line 2160 "stm_expand.m"
}

#line 2149 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cons_8,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_9,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName_10,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_12,
#line 2149 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 2149 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
#line 2149 "stm_expand.m"
{
#line 2154 "stm_expand.m"
  {
#line 2154 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2155 "stm_expand.m"
    {
#line 2155 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Type_9, transform_hlds__stm_expand__MaybeName_10, transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
#line 2144 "stm_expand.m"
    {
#line 2144 "stm_expand.m"
      hlds__make_goal__make_const_construction_3_p_0(*transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__Cons_8, transform_hlds__stm_expand__Goal_11);
#line 2144 "stm_expand.m"
      return;
    }
#line 2154 "stm_expand.m"
  }
#line 2149 "stm_expand.m"
}

#line 2120 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2120 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2120 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2120 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
#line 2120 "stm_expand.m"
{
#line 2123 "stm_expand.m"
  {
#line 2123 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2123 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Cnt0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MaybeName_12;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_14;
#line 2123 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Cnt_15;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 2123 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_39_39;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 2123 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 2124 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2124 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2124 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2124 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2124 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2135 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 2135 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43;

#line 2129 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2128 "stm_expand.m"
      transform_hlds__stm_expand__MaybeName_12 = transform_hlds__stm_expand__MaybeName0_7;
#line 2129 "stm_expand.m"
    else
#line 2130 "stm_expand.m"
      {
#line 2130 "stm_expand.m"
        MR_String transform_hlds__stm_expand__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
#line 2130 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_18_18;
#line 2130 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_19_19;
#line 2130 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_21_21;

#line 2131 "stm_expand.m"
        {
#line 2131 "stm_expand.m"
          transform_hlds__stm_expand__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__stm_expand__Cnt0_11)));
        }
#line 2131 "stm_expand.m"
        {
#line 2131 "stm_expand.m"
          transform_hlds__stm_expand__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", transform_hlds__stm_expand__V_21_21);
        }
#line 2131 "stm_expand.m"
        {
#line 2131 "stm_expand.m"
          transform_hlds__stm_expand__V_18_18 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_13, transform_hlds__stm_expand__V_19_19);
        }
#line 2131 "stm_expand.m"
        {
#line 2131 "stm_expand.m"
          transform_hlds__stm_expand__MaybeName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_12, 0) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2131 "stm_expand.m"
        }
#line 2130 "stm_expand.m"
      }
#line 2133 "stm_expand.m"
    {
#line 2133 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_12, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_14);
    }
#line 2134 "stm_expand.m"
    transform_hlds__stm_expand__Cnt_15 = (transform_hlds__stm_expand__Cnt0_11 + (MR_Integer) 1);
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2135 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2136 "stm_expand.m"
    {
#line 2136 "stm_expand.m"
      MR_Word base;
#line 2136 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2136 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_14));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 2136 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__Cnt_15));
#line 2136 "stm_expand.m"
    }
#line 2123 "stm_expand.m"
  }
#line 2120 "stm_expand.m"
}

#line 2103 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2103 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2103 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
#line 2103 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15)
#line 2103 "stm_expand.m"
{
#line 2106 "stm_expand.m"
  {
#line 2106 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2106 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
#line 2106 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MaybeName_11;
#line 2106 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_13;
#line 2107 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
#line 2107 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
#line 2107 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
#line 2107 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
#line 2107 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
#line 2107 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
#line 2116 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 2116 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2116 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27;
#line 2116 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2116 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2116 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_31_31;
#line 2116 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;

#line 2111 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2110 "stm_expand.m"
      transform_hlds__stm_expand__MaybeName_11 = transform_hlds__stm_expand__MaybeName0_7;
#line 2111 "stm_expand.m"
    else
#line 2112 "stm_expand.m"
      {
#line 2112 "stm_expand.m"
        MR_String transform_hlds__stm_expand__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
#line 2112 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_16_16;

#line 2113 "stm_expand.m"
        {
#line 2113 "stm_expand.m"
          transform_hlds__stm_expand__V_16_16 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_12, (MR_String) "_Aux_STM");
        }
#line 2113 "stm_expand.m"
        {
#line 2113 "stm_expand.m"
          transform_hlds__stm_expand__MaybeName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_11, 0) = ((MR_Box) (transform_hlds__stm_expand__V_16_16));
#line 2113 "stm_expand.m"
        }
#line 2112 "stm_expand.m"
      }
#line 2115 "stm_expand.m"
    {
#line 2115 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_11, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_13);
    }
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
#line 2116 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
#line 2116 "stm_expand.m"
    {
#line 2116 "stm_expand.m"
      MR_Word base;
#line 2116 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2116 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15 = base;
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_13));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2116 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2116 "stm_expand.m"
    }
#line 2106 "stm_expand.m"
  }
#line 2103 "stm_expand.m"
}

#line 2073 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
#line 2073 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2073 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2073 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2073 "stm_expand.m"
{
#line 2073 "stm_expand.m"
  {
#line 2073 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2073 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__4_36;

#line 2073 "stm_expand.m"
    {
#line 2073 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2076__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__4_36);
    }
#line 2073 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__4_36));
#line 2073 "stm_expand.m"
  }
#line 2073 "stm_expand.m"
}

#line 2056 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
#line 2056 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Name_9,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
#line 2056 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
#line 2056 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34)
#line 2056 "stm_expand.m"
{
#line 2061 "stm_expand.m"
  {
#line 2061 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_54_54;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_55_55;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_16;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_17;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewHeadVars0_18;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet1_19;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes1_20;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet_21;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_22;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping_23;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MapLambda_24;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewHeadVars_27;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo1_28;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo2_29;
#line 2061 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_30;
#line 2062 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
#line 2062 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
#line 2062 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
#line 2062 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
#line 2062 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
#line 2062 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
#line 2086 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 2086 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 2086 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_49_49;
#line 2086 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 2086 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 2086 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_53_53;
#line 2086 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;

#line 2063 "stm_expand.m"
    {
#line 2063 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarSet0_16);
    }
#line 2064 "stm_expand.m"
    {
#line 2064 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarTypes0_17);
    }
#line 2065 "stm_expand.m"
    {
#line 2065 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewHeadVars0_18);
    }
#line 8576 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2066 "stm_expand.m"
    {
#line 2066 "stm_expand.m"
      mercury__varset__delete_var_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarSet0_16, &transform_hlds__stm_expand__NewPredVarSet1_19);
    }
#line 2067 "stm_expand.m"
    {
#line 2067 "stm_expand.m"
      parse_tree__prog_data__delete_var_type_3_p_0(transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarTypes0_17, &transform_hlds__stm_expand__NewPredVarTypes1_20);
    }
#line 2069 "stm_expand.m"
    {
#line 2069 "stm_expand.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__Name_9, transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__NewPredVarSet1_19, &transform_hlds__stm_expand__NewPredVarSet_21);
    }
#line 2070 "stm_expand.m"
    {
#line 2070 "stm_expand.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__NewPredVarTypes1_20, &transform_hlds__stm_expand__NewPredVarTypes_22);
    }
#line 8598 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_55_55 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 2071 "stm_expand.m"
    {
#line 2071 "stm_expand.m"
      transform_hlds__stm_expand__VarMapping_23 = mercury__map__singleton_2_f_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)), ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12)));
    }
#line 2073 "stm_expand.m"
    {
#line 2073 "stm_expand.m"
      transform_hlds__stm_expand__MapLambda_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2073 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2]));
#line 2073 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
#line 2073 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2073 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 3) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10));
#line 2073 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 4) = ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12));
#line 2073 "stm_expand.m"
    }
#line 2080 "stm_expand.m"
    {
#line 2080 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__MapLambda_24, transform_hlds__stm_expand__NewHeadVars0_18, &transform_hlds__stm_expand__NewHeadVars_27);
    }
#line 2082 "stm_expand.m"
    {
#line 2082 "stm_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_23, transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33, transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);
    }
#line 2083 "stm_expand.m"
    {
#line 2083 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_21, transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewProcInfo1_28);
    }
#line 2084 "stm_expand.m"
    {
#line 2084 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_22, transform_hlds__stm_expand__NewProcInfo1_28, &transform_hlds__stm_expand__NewProcInfo2_29);
    }
#line 2085 "stm_expand.m"
    {
#line 2085 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_27, transform_hlds__stm_expand__NewProcInfo2_29, &transform_hlds__stm_expand__NewProcInfo_30);
    }
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
#line 2086 "stm_expand.m"
    transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
#line 2086 "stm_expand.m"
    {
#line 2086 "stm_expand.m"
      MR_Word base;
#line 2086 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2086 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32 = base;
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_30));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 2086 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 2086 "stm_expand.m"
    }
#line 2061 "stm_expand.m"
  }
#line 2056 "stm_expand.m"
}

#line 2024 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_9,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_10,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_11,
#line 2024 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 2024 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2024 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
#line 2024 "stm_expand.m"
{
#line 2029 "stm_expand.m"
  {
#line 2029 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_84;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_15;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_61;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_62;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_63;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_64;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_74;
#line 2029 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_75;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 2559 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_67_67;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_70_70;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__InputSet_46);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__OutputSet_47);
    }
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 0)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 1)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 2)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 3)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 4)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 5)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 6)));
#line 2570 "stm_expand.m"
    {
#line 2570 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_61, &transform_hlds__stm_expand__VarTypes_62);
    }
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 8804 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_63 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__InputSet_74);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__OutputSet_75);
    }
#line 2573 "stm_expand.m"
    {
#line 2573 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__InputVars_63, &transform_hlds__stm_expand__V_16_16);
    }
#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__OutputVars_64, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 2038 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2033 "stm_expand.m"
      {
#line 2033 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_18;
#line 2033 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_36_36;

#line 2036 "stm_expand.m"
        {
#line 2036 "stm_expand.m"
          transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
        }
#line 2144 "stm_expand.m"
        {
#line 2144 "stm_expand.m"
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__Goal_18);
        }
#line 2037 "stm_expand.m"
        {
#line 2037 "stm_expand.m"
          MR_Word base;
#line 2037 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 2037 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_18));
#line 2037 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2037 "stm_expand.m"
        }
#line 2037 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
#line 2033 "stm_expand.m"
      }
#line 2038 "stm_expand.m"
    else
#line 2038 "stm_expand.m"
      {
#line 2038 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 2039 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 2038 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2039 "stm_expand.m"
          {
#line 2039 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutVar_20;
#line 2039 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_31_31;
#line 2039 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_33_33;
#line 2039 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_34_34;
#line 2039 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal_38;
#line 2042 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

#line 2042 "stm_expand.m"
            {
#line 2042 "stm_expand.m"
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__OutputVars_15);
            }
#line 2042 "stm_expand.m"
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
#line 2043 "stm_expand.m"
            {
#line 2043 "stm_expand.m"
              transform_hlds__stm_expand__V_33_33 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 2043 "stm_expand.m"
            {
#line 2043 "stm_expand.m"
              transform_hlds__stm_expand__V_34_34 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 2043 "stm_expand.m"
            {
#line 2043 "stm_expand.m"
              transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2043 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2043 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
#line 2043 "stm_expand.m"
            }
#line 2043 "stm_expand.m"
            {
#line 2043 "stm_expand.m"
              transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutVar_20, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__Goal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
#line 2045 "stm_expand.m"
            {
#line 2045 "stm_expand.m"
              MR_Word base;
#line 2045 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2045 "stm_expand.m"
              *transform_hlds__stm_expand__Goals_12 = base;
#line 2045 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_38));
#line 2045 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2045 "stm_expand.m"
            }
#line 2039 "stm_expand.m"
          }
#line 2038 "stm_expand.m"
        else
#line 2047 "stm_expand.m"
          {
#line 2047 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__MakeType_25;
#line 2047 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal_39;
#line 2049 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_24_24;

#line 2049 "stm_expand.m"
            {
#line 2049 "stm_expand.m"
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ResultType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
#line 2050 "stm_expand.m"
            {
#line 2050 "stm_expand.m"
              hlds__make_goal__construct_tuple_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__Goal_39);
            }
#line 2051 "stm_expand.m"
            {
#line 2051 "stm_expand.m"
              MR_Word base;
#line 2051 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "stm_expand.m"
              *transform_hlds__stm_expand__Goals_12 = base;
#line 2051 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_39));
#line 2051 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
#line 2051 "stm_expand.m"
            }
#line 2047 "stm_expand.m"
          }
#line 2038 "stm_expand.m"
      }
#line 2029 "stm_expand.m"
  }
#line 2024 "stm_expand.m"
}

#line 1980 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_9,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
#line 1980 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_12,
#line 1980 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1980 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1980 "stm_expand.m"
{
#line 1985 "stm_expand.m"
  {
#line 1985 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_95;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_15;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_72;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_73;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_74;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_75;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_85;
#line 1985 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_86;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 2559 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_78_78;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2569 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 2569 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_81_81;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_89_89;
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_90_90;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__InputSet_57);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__OutputSet_58);
    }
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 0)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 1)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 2)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 3)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 4)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 5)));
#line 2569 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 6)));
#line 2570 "stm_expand.m"
    {
#line 2570 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_72, &transform_hlds__stm_expand__VarTypes_73);
    }
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    transform_hlds__stm_expand__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 9096 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_74 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__InputSet_85);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__OutputSet_86);
    }
#line 2573 "stm_expand.m"
    {
#line 2573 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__InputVars_74, &transform_hlds__stm_expand__V_16_16);
    }
#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__OutputVars_75, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 1998 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1990 "stm_expand.m"
      {
#line 1990 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SuccessResultVar_18;
#line 1990 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_47_47;
#line 1990 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_48_48;

#line 1994 "stm_expand.m"
        {
#line 1994 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[22]), &transform_hlds__stm_expand__SuccessResultVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
        }
#line 1996 "stm_expand.m"
        {
#line 1996 "stm_expand.m"
          transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        }
#line 1997 "stm_expand.m"
        {
#line 1997 "stm_expand.m"
          transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1997 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_18));
#line 1997 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1997 "stm_expand.m"
        }
#line 1996 "stm_expand.m"
        {
#line 1996 "stm_expand.m"
          hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_47_47, transform_hlds__stm_expand__V_48_48, transform_hlds__stm_expand__Goal_11);
#line 1996 "stm_expand.m"
          return;
        }
#line 1990 "stm_expand.m"
      }
#line 1998 "stm_expand.m"
    else
#line 1998 "stm_expand.m"
      {
#line 1998 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 1999 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 1998 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1999 "stm_expand.m"
          {
#line 1999 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutVar_20;
#line 1999 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_41_41;
#line 1999 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_42_42;
#line 2002 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

#line 2002 "stm_expand.m"
            {
#line 2002 "stm_expand.m"
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__OutputVars_15);
            }
#line 2002 "stm_expand.m"
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
#line 2003 "stm_expand.m"
            {
#line 2003 "stm_expand.m"
              transform_hlds__stm_expand__V_41_41 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
#line 2004 "stm_expand.m"
            {
#line 2004 "stm_expand.m"
              transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2004 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__OutVar_20));
#line 2004 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2004 "stm_expand.m"
            }
#line 2003 "stm_expand.m"
            {
#line 2003 "stm_expand.m"
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_41_41, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__Goal_11);
            }
#line 2003 "stm_expand.m"
            *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28;
#line 1999 "stm_expand.m"
          }
#line 1998 "stm_expand.m"
        else
#line 2006 "stm_expand.m"
          {
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__MakeType_25;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__DeconstructGoal_26;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__UnifyOutputGoal_27;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_35_35;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_36_36;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_38_38;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_39_39;
#line 2006 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__SuccessResultVar_50;
#line 2008 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_24_24;

#line 2008 "stm_expand.m"
            {
#line 2008 "stm_expand.m"
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
            }
#line 2009 "stm_expand.m"
            {
#line 2009 "stm_expand.m"
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[23]), &transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
            }
#line 2011 "stm_expand.m"
            {
#line 2011 "stm_expand.m"
              transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
#line 2012 "stm_expand.m"
            {
#line 2012 "stm_expand.m"
              transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2012 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_50));
#line 2012 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2012 "stm_expand.m"
            }
#line 2011 "stm_expand.m"
            {
#line 2011 "stm_expand.m"
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__DeconstructGoal_26);
            }
#line 2013 "stm_expand.m"
            {
#line 2013 "stm_expand.m"
              hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__UnifyOutputGoal_27);
            }
#line 2015 "stm_expand.m"
            {
#line 2015 "stm_expand.m"
              transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__UnifyOutputGoal_27));
#line 2015 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
#line 2015 "stm_expand.m"
            }
#line 2015 "stm_expand.m"
            {
#line 2015 "stm_expand.m"
              transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_26));
#line 2015 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 1) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 2015 "stm_expand.m"
            }
#line 2015 "stm_expand.m"
            {
#line 2015 "stm_expand.m"
              transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_38_38, transform_hlds__stm_expand__Goal_11);
#line 2015 "stm_expand.m"
              return;
            }
#line 2006 "stm_expand.m"
          }
#line 1998 "stm_expand.m"
      }
#line 1985 "stm_expand.m"
  }
#line 1980 "stm_expand.m"
}

#line 1964 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
#line 1964 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Types_3,
#line 1964 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ReturnType_4)
#line 1964 "stm_expand.m"
{
#line 1968 "stm_expand.m"
  {
#line 1968 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1968 "stm_expand.m"
    if ((transform_hlds__stm_expand__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        *transform_hlds__stm_expand__ReturnType_4 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1968 "stm_expand.m"
    else
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 1)));
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 0)));

#line 1968 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1971 "stm_expand.m"
          *transform_hlds__stm_expand__ReturnType_4 = transform_hlds__stm_expand__V_12_12;
#line 1968 "stm_expand.m"
        else
#line 1973 "stm_expand.m"
          {
#line 1974 "stm_expand.m"
            {
#line 1974 "stm_expand.m"
              MR_Word base;
#line 1974 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "stm_expand.m"
              *transform_hlds__stm_expand__ReturnType_4 = base;
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Types_3));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1974 "stm_expand.m"
            }
#line 1973 "stm_expand.m"
          }
#line 1968 "stm_expand.m"
      }
#line 1968 "stm_expand.m"
  }
#line 1964 "stm_expand.m"
}

#line 1866 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_21,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
#line 1866 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1866 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
#line 1866 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50)
#line 1866 "stm_expand.m"
{
#line 1873 "stm_expand.m"
  {
#line 1873 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_26;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_28;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_30;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerSTM0Var_32;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_34;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssign_35;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateNestedLogCall_36;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TryStmCall_37;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructGoal_38;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeNestedLogsCall_39;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__SuccessBranch_40;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DiscardCall_41;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RethrowCall_42;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_43;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructException_44;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NotRetryBranch_45;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IfRetryGoal_46;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptionBranch_47;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_48;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_88_88;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_89_89;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_102_102;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_104_104;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_107_107;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_108_108;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_109_109;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_110_110;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_112_112;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_113_113;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_117_117;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_118_118;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_122_122;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_126_126;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_131_131;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_141_141;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_143_143;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_145_145;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_146_146;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_148_148;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_149_149;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_153_153;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_158_158;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_159_159;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_162_162;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_163_163;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_165_165;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_173_173;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_176_176;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_182_182;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_188_188;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_190_190;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_192_192;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_197_197;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_201_201;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_202_202;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_204_204;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_205_205;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_207_207;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_209_209;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_210_210;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_212_212;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_216_216;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_217_217;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_219_219;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_220_220;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_221_221;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_224_224;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_225_225;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_226_226;
#line 1873 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_227_227;
#line 1874 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1875 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 1876 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;

#line 1874 "stm_expand.m"
    {
#line 1874 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputVars_26, &transform_hlds__stm_expand__V_27_27);
    }
#line 1875 "stm_expand.m"
    {
#line 1875 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__StmInfo_24, &transform_hlds__stm_expand__InputTypes_28, &transform_hlds__stm_expand__V_29_29);
    }
#line 1876 "stm_expand.m"
    {
#line 1876 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputModes_30, &transform_hlds__stm_expand__V_31_31);
    }
#line 1878 "stm_expand.m"
    {
#line 1878 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1878 "stm_expand.m"
    {
#line 1878 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_51_51, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[20]), &transform_hlds__stm_expand__InnerSTM0Var_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53);
    }
#line 1880 "stm_expand.m"
    {
#line 1880 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_15);
    }
#line 1880 "stm_expand.m"
    {
#line 1880 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[21]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57);
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1884 "stm_expand.m"
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 1884 "stm_expand.m"
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_15));
#line 1884 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 1884 "stm_expand.m"
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_28, transform_hlds__stm_expand__V_62_62);
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1885 "stm_expand.m"
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1885 "stm_expand.m"
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 1885 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 1885 "stm_expand.m"
    }
#line 1885 "stm_expand.m"
    {
#line 1885 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_30, transform_hlds__stm_expand__V_68_68);
    }
#line 1883 "stm_expand.m"
    {
#line 1883 "stm_expand.m"
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_21, transform_hlds__stm_expand__InputVars_26, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicClosureVar_34, &transform_hlds__stm_expand__ClosureAssign_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61);
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1891 "stm_expand.m"
    {
#line 1891 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1891 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1891 "stm_expand.m"
    }
#line 1891 "stm_expand.m"
    {
#line 1891 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1891 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 1891 "stm_expand.m"
    }
#line 1892 "stm_expand.m"
    transform_hlds__stm_expand__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1892 "stm_expand.m"
    {
#line 1892 "stm_expand.m"
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1892 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1892 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1892 "stm_expand.m"
    }
#line 1893 "stm_expand.m"
    {
#line 1893 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1893 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1893 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1893 "stm_expand.m"
    }
#line 1893 "stm_expand.m"
    {
#line 1893 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1893 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1893 "stm_expand.m"
    }
#line 1892 "stm_expand.m"
    {
#line 1892 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1892 "stm_expand.m"
    }
#line 1892 "stm_expand.m"
    {
#line 1892 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_75_75, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__CreateNestedLogCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
#line 1896 "stm_expand.m"
    {
#line 1896 "stm_expand.m"
      transform_hlds__stm_expand__V_96_96 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1899 "stm_expand.m"
    {
#line 1899 "stm_expand.m"
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1899 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1899 "stm_expand.m"
    }
#line 1899 "stm_expand.m"
    {
#line 1899 "stm_expand.m"
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1899 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 1899 "stm_expand.m"
    }
#line 1898 "stm_expand.m"
    {
#line 1898 "stm_expand.m"
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
#line 1898 "stm_expand.m"
    }
#line 1898 "stm_expand.m"
    {
#line 1898 "stm_expand.m"
      transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
#line 1898 "stm_expand.m"
    }
#line 1898 "stm_expand.m"
    {
#line 1898 "stm_expand.m"
      transform_hlds__stm_expand__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 1) = ((MR_Box) (transform_hlds__stm_expand__V_107_107));
#line 1898 "stm_expand.m"
    }
#line 1902 "stm_expand.m"
    transform_hlds__stm_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 1902 "stm_expand.m"
    {
#line 1902 "stm_expand.m"
      transform_hlds__stm_expand__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 1902 "stm_expand.m"
    }
#line 1903 "stm_expand.m"
    {
#line 1903 "stm_expand.m"
      transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 1903 "stm_expand.m"
    }
#line 1904 "stm_expand.m"
    {
#line 1904 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1904 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1904 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1904 "stm_expand.m"
    }
#line 1905 "stm_expand.m"
    {
#line 1905 "stm_expand.m"
      transform_hlds__stm_expand__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1905 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1905 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1905 "stm_expand.m"
    }
#line 1906 "stm_expand.m"
    {
#line 1906 "stm_expand.m"
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1906 "stm_expand.m"
    }
#line 1906 "stm_expand.m"
    {
#line 1906 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1906 "stm_expand.m"
    }
#line 1905 "stm_expand.m"
    {
#line 1905 "stm_expand.m"
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
#line 1905 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
#line 1905 "stm_expand.m"
    }
#line 1904 "stm_expand.m"
    {
#line 1904 "stm_expand.m"
      transform_hlds__stm_expand__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 0) = ((MR_Box) (transform_hlds__stm_expand__V_123_123));
#line 1904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 1904 "stm_expand.m"
    }
#line 1903 "stm_expand.m"
    {
#line 1903 "stm_expand.m"
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_122_122));
#line 1903 "stm_expand.m"
    }
#line 1902 "stm_expand.m"
    {
#line 1902 "stm_expand.m"
      transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_113_113));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 1902 "stm_expand.m"
    }
#line 1901 "stm_expand.m"
    {
#line 1901 "stm_expand.m"
      transform_hlds__stm_expand__V_104_104 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_112_112);
    }
#line 1896 "stm_expand.m"
    {
#line 1896 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_96_96, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_102_102, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_104_104, &transform_hlds__stm_expand__TryStmCall_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105);
    }
#line 1910 "stm_expand.m"
    {
#line 1910 "stm_expand.m"
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__DeconstructGoal_38, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134);
    }
#line 1912 "stm_expand.m"
    {
#line 1912 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1914 "stm_expand.m"
    {
#line 1914 "stm_expand.m"
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1914 "stm_expand.m"
    }
#line 1914 "stm_expand.m"
    {
#line 1914 "stm_expand.m"
      transform_hlds__stm_expand__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
#line 1914 "stm_expand.m"
    }
#line 1914 "stm_expand.m"
    {
#line 1914 "stm_expand.m"
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1914 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (transform_hlds__stm_expand__V_145_145));
#line 1914 "stm_expand.m"
    }
#line 1915 "stm_expand.m"
    {
#line 1915 "stm_expand.m"
      transform_hlds__stm_expand__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1915 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1915 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1915 "stm_expand.m"
    }
#line 1916 "stm_expand.m"
    {
#line 1916 "stm_expand.m"
      transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1916 "stm_expand.m"
    }
#line 1916 "stm_expand.m"
    {
#line 1916 "stm_expand.m"
      transform_hlds__stm_expand__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 0) = ((MR_Box) (transform_hlds__stm_expand__V_159_159));
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1916 "stm_expand.m"
    }
#line 1916 "stm_expand.m"
    {
#line 1916 "stm_expand.m"
      transform_hlds__stm_expand__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1916 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 1) = ((MR_Box) (transform_hlds__stm_expand__V_158_158));
#line 1916 "stm_expand.m"
    }
#line 1915 "stm_expand.m"
    {
#line 1915 "stm_expand.m"
      transform_hlds__stm_expand__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
#line 1915 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 1) = ((MR_Box) (transform_hlds__stm_expand__V_153_153));
#line 1915 "stm_expand.m"
    }
#line 1915 "stm_expand.m"
    {
#line 1915 "stm_expand.m"
      transform_hlds__stm_expand__V_143_143 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_148_148);
    }
#line 1912 "stm_expand.m"
    {
#line 1912 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_135_135, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_141_141, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_143_143, &transform_hlds__stm_expand__MergeNestedLogsCall_39, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144);
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__MergeNestedLogsCall_39));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1919 "stm_expand.m"
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_38));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 1) = ((MR_Box) (transform_hlds__stm_expand__V_163_163));
#line 1919 "stm_expand.m"
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_162_162, &transform_hlds__stm_expand__SuccessBranch_40);
    }
#line 1922 "stm_expand.m"
    {
#line 1922 "stm_expand.m"
      transform_hlds__stm_expand__V_165_165 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1925 "stm_expand.m"
    {
#line 1925 "stm_expand.m"
      transform_hlds__stm_expand__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
#line 1925 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "stm_expand.m"
    }
#line 1925 "stm_expand.m"
    {
#line 1925 "stm_expand.m"
      transform_hlds__stm_expand__V_173_173 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_176_176);
    }
#line 1922 "stm_expand.m"
    {
#line 1922 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_165_165, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_110_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_173_173, &transform_hlds__stm_expand__DiscardCall_41, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174);
    }
#line 1927 "stm_expand.m"
    {
#line 1927 "stm_expand.m"
      transform_hlds__stm_expand__V_182_182 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1929 "stm_expand.m"
    {
#line 1929 "stm_expand.m"
      transform_hlds__stm_expand__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1929 "stm_expand.m"
    }
#line 1929 "stm_expand.m"
    {
#line 1929 "stm_expand.m"
      transform_hlds__stm_expand__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 1) = ((MR_Box) (transform_hlds__stm_expand__V_192_192));
#line 1929 "stm_expand.m"
    }
#line 1930 "stm_expand.m"
    {
#line 1930 "stm_expand.m"
      transform_hlds__stm_expand__V_190_190 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_188_188);
    }
#line 1927 "stm_expand.m"
    {
#line 1927 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_182_182, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_188_188, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_190_190, &transform_hlds__stm_expand__RethrowCall_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191);
    }
#line 1934 "stm_expand.m"
    {
#line 1934 "stm_expand.m"
      transform_hlds__stm_expand__V_197_197 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
#line 1934 "stm_expand.m"
    {
#line 1934 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_197_197, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199);
    }
#line 1936 "stm_expand.m"
    {
#line 1936 "stm_expand.m"
      transform_hlds__stm_expand__V_201_201 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1937 "stm_expand.m"
    {
#line 1937 "stm_expand.m"
      transform_hlds__stm_expand__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_43));
#line 1937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1937 "stm_expand.m"
    }
#line 1936 "stm_expand.m"
    {
#line 1936 "stm_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_201_201, transform_hlds__stm_expand__V_202_202, &transform_hlds__stm_expand__DeconstructException_44);
    }
#line 1939 "stm_expand.m"
    {
#line 1939 "stm_expand.m"
      transform_hlds__stm_expand__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 0) = ((MR_Box) (transform_hlds__stm_expand__RethrowCall_42));
#line 1939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1939 "stm_expand.m"
    }
#line 1939 "stm_expand.m"
    {
#line 1939 "stm_expand.m"
      transform_hlds__stm_expand__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 0) = ((MR_Box) (transform_hlds__stm_expand__DiscardCall_41));
#line 1939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 1) = ((MR_Box) (transform_hlds__stm_expand__V_205_205));
#line 1939 "stm_expand.m"
    }
#line 1939 "stm_expand.m"
    {
#line 1939 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_204_204, &transform_hlds__stm_expand__NotRetryBranch_45);
    }
#line 1943 "stm_expand.m"
    {
#line 1943 "stm_expand.m"
      transform_hlds__stm_expand__V_207_207 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1942 "stm_expand.m"
    {
#line 1942 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__V_207_207, transform_hlds__stm_expand__RetryBranch_22, transform_hlds__stm_expand__NotRetryBranch_45, &transform_hlds__stm_expand__IfRetryGoal_46, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208);
    }
#line 1946 "stm_expand.m"
    {
#line 1946 "stm_expand.m"
      transform_hlds__stm_expand__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 0) = ((MR_Box) (transform_hlds__stm_expand__IfRetryGoal_46));
#line 1946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1946 "stm_expand.m"
    }
#line 1946 "stm_expand.m"
    {
#line 1946 "stm_expand.m"
      transform_hlds__stm_expand__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_44));
#line 1946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 1) = ((MR_Box) (transform_hlds__stm_expand__V_210_210));
#line 1946 "stm_expand.m"
    }
#line 1946 "stm_expand.m"
    {
#line 1946 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_209_209, &transform_hlds__stm_expand__ExceptionBranch_47);
    }
#line 1948 "stm_expand.m"
    {
#line 1948 "stm_expand.m"
      transform_hlds__stm_expand__V_217_217 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1948 "stm_expand.m"
    {
#line 1948 "stm_expand.m"
      transform_hlds__stm_expand__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1948 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 0) = ((MR_Box) (transform_hlds__stm_expand__V_217_217));
#line 1948 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1948 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 2) = ((MR_Box) (transform_hlds__stm_expand__ExceptionBranch_47));
#line 1948 "stm_expand.m"
    }
#line 1949 "stm_expand.m"
    {
#line 1949 "stm_expand.m"
      transform_hlds__stm_expand__V_221_221 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 1949 "stm_expand.m"
    {
#line 1949 "stm_expand.m"
      transform_hlds__stm_expand__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1949 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 0) = ((MR_Box) (transform_hlds__stm_expand__V_221_221));
#line 1949 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1949 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 2) = ((MR_Box) (transform_hlds__stm_expand__SuccessBranch_40));
#line 1949 "stm_expand.m"
    }
#line 1949 "stm_expand.m"
    {
#line 1949 "stm_expand.m"
      transform_hlds__stm_expand__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 0) = ((MR_Box) (transform_hlds__stm_expand__V_220_220));
#line 1949 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1949 "stm_expand.m"
    }
#line 1948 "stm_expand.m"
    {
#line 1948 "stm_expand.m"
      transform_hlds__stm_expand__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 0) = ((MR_Box) (transform_hlds__stm_expand__V_216_216));
#line 1948 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 1) = ((MR_Box) (transform_hlds__stm_expand__V_219_219));
#line 1948 "stm_expand.m"
    }
#line 1947 "stm_expand.m"
    {
#line 1947 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_212_212, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_48, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);
    }
#line 1953 "stm_expand.m"
    {
#line 1953 "stm_expand.m"
      transform_hlds__stm_expand__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_48));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "stm_expand.m"
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 0) = ((MR_Box) (transform_hlds__stm_expand__TryStmCall_37));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 1) = ((MR_Box) (transform_hlds__stm_expand__V_227_227));
#line 1952 "stm_expand.m"
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_35));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 1) = ((MR_Box) (transform_hlds__stm_expand__V_226_226));
#line 1952 "stm_expand.m"
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 0) = ((MR_Box) (transform_hlds__stm_expand__CreateNestedLogCall_36));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 1) = ((MR_Box) (transform_hlds__stm_expand__V_225_225));
#line 1952 "stm_expand.m"
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_224_224, transform_hlds__stm_expand__Goal_23);
#line 1952 "stm_expand.m"
      return;
    }
#line 1873 "stm_expand.m"
  }
#line 1866 "stm_expand.m"
}

#line 1783 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1783 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 1783 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 1783 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
#line 1783 "stm_expand.m"
{
#line 1783 "stm_expand.m"
  {
#line 1783 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 1783 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__2_42;
#line 1783 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__4_44;

#line 1783 "stm_expand.m"
    {
#line 1783 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1783__1_4_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_HeadVar__2_42, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv0_HeadVar__4_44);
    }
#line 1783 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__2_42));
#line 1783 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__4_44));
#line 1783 "stm_expand.m"
  }
#line 1783 "stm_expand.m"
}

#line 1777 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
#line 1777 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1777 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
#line 1777 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40)
#line 1777 "stm_expand.m"
{
#line 1782 "stm_expand.m"
  {
#line 1782 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_156_156 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmVarsMinusHead_19;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IntermediateStmVars_20;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeStmVarsIn_21;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeStmVarsOut_22;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeGoals_28;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnlockCall_29;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignRetryCons_30;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryConsVar_31;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryCall_32;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidGoal_33;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignRollbackCons_34;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackConsVar_35;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ThrowCall_36;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InvalidGoal_37;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goals_38;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_94_94;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_95_95;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_99_99;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_107_107;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_109_109;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_115_115;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_116_116;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_117_117;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_119_119;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_120_120;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_124_124;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_132_132;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_139_139;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_140_140;
#line 1782 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_141_141;
#line 1791 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48;

#line 1790 "stm_expand.m"
    {
#line 1790 "stm_expand.m"
      transform_hlds__stm_expand__StmVarsMinusHead_19 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__StmVars_8);
    }
#line 1791 "stm_expand.m"
    {
#line 1791 "stm_expand.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__TypeInfo_156_156, (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[11], transform_hlds__stm_expand__StmVarsMinusHead_19, &transform_hlds__stm_expand__IntermediateStmVars_20, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39)), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
    }
#line 1791 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48 = ((MR_Word) transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
#line 1794 "stm_expand.m"
    {
#line 1794 "stm_expand.m"
      transform_hlds__stm_expand__MergeStmVarsIn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMDI_9));
#line 1794 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 1) = ((MR_Box) (transform_hlds__stm_expand__IntermediateStmVars_20));
#line 1794 "stm_expand.m"
    }
#line 1795 "stm_expand.m"
    {
#line 1795 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1795 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMUO_10));
#line 1795 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1795 "stm_expand.m"
    }
#line 1795 "stm_expand.m"
    {
#line 1795 "stm_expand.m"
      transform_hlds__stm_expand__MergeStmVarsOut_22 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__IntermediateStmVars_20, transform_hlds__stm_expand__V_49_49);
    }
#line 1809 "stm_expand.m"
    {
#line 1809 "stm_expand.m"
      transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__StmVars_8, transform_hlds__stm_expand__MergeStmVarsIn_21, transform_hlds__stm_expand__MergeStmVarsOut_22, &transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83);
    }
#line 1812 "stm_expand.m"
    {
#line 1812 "stm_expand.m"
      transform_hlds__stm_expand__V_84_84 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1814 "stm_expand.m"
    {
#line 1814 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1812 "stm_expand.m"
    {
#line 1812 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_84_84, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_92_92, &transform_hlds__stm_expand__UnlockCall_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93);
    }
#line 1816 "stm_expand.m"
    {
#line 1816 "stm_expand.m"
      transform_hlds__stm_expand__V_94_94 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1817 "stm_expand.m"
    {
#line 1817 "stm_expand.m"
      transform_hlds__stm_expand__V_95_95 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1816 "stm_expand.m"
    {
#line 1816 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_94_94, transform_hlds__stm_expand__V_95_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[18]), &transform_hlds__stm_expand__AssignRetryCons_30, &transform_hlds__stm_expand__RetryConsVar_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97);
    }
#line 1819 "stm_expand.m"
    {
#line 1819 "stm_expand.m"
      transform_hlds__stm_expand__V_99_99 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1821 "stm_expand.m"
    {
#line 1821 "stm_expand.m"
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryConsVar_31));
#line 1821 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1821 "stm_expand.m"
    }
#line 1821 "stm_expand.m"
    {
#line 1821 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
#line 1821 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
#line 1821 "stm_expand.m"
    }
#line 1822 "stm_expand.m"
    {
#line 1822 "stm_expand.m"
      transform_hlds__stm_expand__V_107_107 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_105_105);
    }
#line 1819 "stm_expand.m"
    {
#line 1819 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_99_99, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_107_107, &transform_hlds__stm_expand__RetryCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108);
    }
#line 1830 "stm_expand.m"
    {
#line 1830 "stm_expand.m"
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryCall_32));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1830 "stm_expand.m"
    }
#line 1830 "stm_expand.m"
    {
#line 1830 "stm_expand.m"
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRetryCons_30));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 1830 "stm_expand.m"
    }
#line 1830 "stm_expand.m"
    {
#line 1830 "stm_expand.m"
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
#line 1830 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
#line 1830 "stm_expand.m"
    }
#line 1830 "stm_expand.m"
    {
#line 1830 "stm_expand.m"
      transform_hlds__stm_expand__V_114_114 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__V_115_115);
    }
#line 1830 "stm_expand.m"
    {
#line 1830 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__ValidGoal_33);
    }
#line 1835 "stm_expand.m"
    {
#line 1835 "stm_expand.m"
      transform_hlds__stm_expand__V_119_119 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1836 "stm_expand.m"
    {
#line 1836 "stm_expand.m"
      transform_hlds__stm_expand__V_120_120 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1835 "stm_expand.m"
    {
#line 1835 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_119_119, transform_hlds__stm_expand__V_120_120, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[19]), &transform_hlds__stm_expand__AssignRollbackCons_34, &transform_hlds__stm_expand__RollbackConsVar_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
#line 1838 "stm_expand.m"
    {
#line 1838 "stm_expand.m"
      transform_hlds__stm_expand__V_124_124 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1840 "stm_expand.m"
    {
#line 1840 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1840 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackConsVar_35));
#line 1840 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1840 "stm_expand.m"
    }
#line 1839 "stm_expand.m"
    {
#line 1839 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
#line 1839 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_134_134));
#line 1839 "stm_expand.m"
    }
#line 1841 "stm_expand.m"
    {
#line 1841 "stm_expand.m"
      transform_hlds__stm_expand__V_132_132 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_130_130);
    }
#line 1838 "stm_expand.m"
    {
#line 1838 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_124_124, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_130_130, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_132_132, &transform_hlds__stm_expand__ThrowCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133);
    }
#line 1843 "stm_expand.m"
    {
#line 1843 "stm_expand.m"
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__ThrowCall_36));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1843 "stm_expand.m"
    }
#line 1843 "stm_expand.m"
    {
#line 1843 "stm_expand.m"
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRollbackCons_34));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_141_141));
#line 1843 "stm_expand.m"
    }
#line 1843 "stm_expand.m"
    {
#line 1843 "stm_expand.m"
      transform_hlds__stm_expand__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 1) = ((MR_Box) (transform_hlds__stm_expand__V_140_140));
#line 1843 "stm_expand.m"
    }
#line 1843 "stm_expand.m"
    {
#line 1843 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_139_139, &transform_hlds__stm_expand__InvalidGoal_37);
    }
#line 1846 "stm_expand.m"
    {
#line 1846 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(transform_hlds__stm_expand__StmVars_8, (MR_Integer) 0, transform_hlds__stm_expand__ValidGoal_33, transform_hlds__stm_expand__InvalidGoal_37, &transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);
    }
#line 1848 "stm_expand.m"
    {
#line 1848 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__Goal_12);
#line 1848 "stm_expand.m"
      return;
    }
#line 1782 "stm_expand.m"
  }
#line 1777 "stm_expand.m"
}

#line 1701 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
#line 1701 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__Count_5,
#line 1701 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Vars_6,
#line 1701 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
#line 1701 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12)
#line 1701 "stm_expand.m"
{
#line 1707 "stm_expand.m"
  {
#line 1707 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 == (MR_Integer) 0);

#line 1707 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1706 "stm_expand.m"
      {
#line 1706 "stm_expand.m"
        *transform_hlds__stm_expand__Vars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1706 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11;
#line 1706 "stm_expand.m"
      }
#line 1707 "stm_expand.m"
    else
#line 1712 "stm_expand.m"
      {
#line 1707 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 > (MR_Integer) 0);
#line 1712 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1708 "stm_expand.m"
          {
#line 1708 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Var_8;
#line 1708 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__Count1_9;
#line 1708 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Vars0_10;
#line 1708 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_14_14;
#line 1708 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16;

#line 1708 "stm_expand.m"
            {
#line 1708 "stm_expand.m"
              transform_hlds__stm_expand__V_14_14 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
            }
#line 1708 "stm_expand.m"
            {
#line 1708 "stm_expand.m"
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[17]), &transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16);
            }
#line 1709 "stm_expand.m"
            transform_hlds__stm_expand__Count1_9 = (transform_hlds__stm_expand__Count_5 - (MR_Integer) 1);
#line 1710 "stm_expand.m"
            {
#line 1710 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__Count1_9, &transform_hlds__stm_expand__Vars0_10, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);
            }
#line 1711 "stm_expand.m"
            {
#line 1711 "stm_expand.m"
              MR_Word base;
#line 1711 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "stm_expand.m"
              *transform_hlds__stm_expand__Vars_6 = base;
#line 1711 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_8));
#line 1711 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars0_10));
#line 1711 "stm_expand.m"
            }
#line 1708 "stm_expand.m"
          }
#line 1712 "stm_expand.m"
        else
#line 1713 "stm_expand.m"
          {
#line 1713 "stm_expand.m"
            {
#line 1713 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
#line 1713 "stm_expand.m"
              return;
            }
#line 1713 "stm_expand.m"
          }
#line 1712 "stm_expand.m"
      }
#line 1707 "stm_expand.m"
  }
#line 1701 "stm_expand.m"
}

#line 1672 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__EndBranch_22,
#line 1672 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1672 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 1672 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
#line 1672 "stm_expand.m"
{
#line 1686 "stm_expand.m"
  {
#line 1686 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerSTMVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1681 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1681 "stm_expand.m"
      {
#line 1682 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__WrapperIDs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1681 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1683 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__AtomicGoalVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1681 "stm_expand.m"
      }
#line 1686 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1685 "stm_expand.m"
      {
#line 1685 "stm_expand.m"
        *transform_hlds__stm_expand__Goal_23 = transform_hlds__stm_expand__EndBranch_22;
#line 1685 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33;
#line 1685 "stm_expand.m"
      }
#line 1686 "stm_expand.m"
    else
#line 1697 "stm_expand.m"
      {
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AGV_26;
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AGVs_27;
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InnerVar_28;
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InnerSTMVars0_29;
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__WrapID_30;
#line 1697 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__WrapperIDs0_31;

#line 1687 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__AtomicGoalVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1687 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1687 "stm_expand.m"
          {
#line 1687 "stm_expand.m"
            transform_hlds__stm_expand__AGV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 0)));
#line 1687 "stm_expand.m"
            transform_hlds__stm_expand__AGVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 1)));
#line 1688 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerSTMVars_18)) == (MR_mktag((MR_Integer) 1)));
#line 1688 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1688 "stm_expand.m"
              {
#line 1688 "stm_expand.m"
                transform_hlds__stm_expand__InnerVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 0)));
#line 1688 "stm_expand.m"
                transform_hlds__stm_expand__InnerSTMVars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 1)));
#line 1689 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__WrapperIDs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1689 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 1689 "stm_expand.m"
                  {
#line 1689 "stm_expand.m"
                    transform_hlds__stm_expand__WrapID_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 0)));
#line 1689 "stm_expand.m"
                    transform_hlds__stm_expand__WrapperIDs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 1)));
#line 1689 "stm_expand.m"
                  }
#line 1688 "stm_expand.m"
              }
#line 1687 "stm_expand.m"
          }
#line 1697 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1693 "stm_expand.m"
          {
#line 1693 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal0_32;
#line 1693 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;

#line 1691 "stm_expand.m"
            {
#line 1691 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AGVs_27, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerSTMVars0_29, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapperIDs0_31, transform_hlds__stm_expand__EndBranch_22, &transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
            }
#line 1694 "stm_expand.m"
            {
#line 1694 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_branch_13_p_0(transform_hlds__stm_expand__AGV_26, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerVar_28, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapID_30, transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__Goal_23, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
#line 1694 "stm_expand.m"
              return;
            }
#line 1693 "stm_expand.m"
          }
#line 1697 "stm_expand.m"
        else
#line 1698 "stm_expand.m"
          {
#line 1698 "stm_expand.m"
            {
#line 1698 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/13", (MR_String) "mismatched lists");
#line 1698 "stm_expand.m"
              return;
            }
#line 1698 "stm_expand.m"
          }
#line 1697 "stm_expand.m"
      }
#line 1686 "stm_expand.m"
  }
#line 1672 "stm_expand.m"
}

#line 1640 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_10,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_11,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_12,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_13,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_14,
#line 1640 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1640 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1640 "stm_expand.m"
{
#line 1645 "stm_expand.m"
  {
#line 1645 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_43_43;
#line 1645 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ClosureCount_16;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerSTMVars_17;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnRttiVar_18;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateRetTypeInfo_19;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRttiVar_20;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateExceptTypeInfo_21;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__EndBranchGoal_22;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal0_23;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_24;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_25;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal1_26;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal_27;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_49;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_50;
#line 1645 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_51;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_52;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_53;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_54;
#line 1645 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_55;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_56;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_57;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_58;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_59;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_60;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_66;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_67;
#line 1645 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_68;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_69;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_70;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_71;
#line 1645 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_72;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_73;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_74;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_75;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_76;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_77;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInInfo_82;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_83;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_84;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_85;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_87;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_88;
#line 1645 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalOutExpr_90;
#line 2314 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;

#line 1647 "stm_expand.m"
    {
#line 1647 "stm_expand.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__stm_expand__Closures_10, &transform_hlds__stm_expand__ClosureCount_16);
    }
#line 1648 "stm_expand.m"
    {
#line 1648 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__ClosureCount_16, &transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30);
    }
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 0)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 1)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 2)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 3)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 4)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 5)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 6)));
#line 2351 "stm_expand.m"
    {
#line 2351 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_49, transform_hlds__stm_expand__PredInfo0_52, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__PolyInfo0_56);
    }
#line 2352 "stm_expand.m"
    {
#line 2352 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__Context_54, &transform_hlds__stm_expand__ReturnRttiVar_18, &transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__PolyInfo0_56, &transform_hlds__stm_expand__PolyInfo_57);
    }
#line 2354 "stm_expand.m"
    {
#line 2354 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_57, transform_hlds__stm_expand__PredInfo0_52, &transform_hlds__stm_expand__PredInfo_58, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__ProcInfo_59, &transform_hlds__stm_expand__ModuleInfo_60);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_60));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_50));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_51));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_58));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_59));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_54));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_55));
#line 2356 "stm_expand.m"
    }
#line 1652 "stm_expand.m"
    {
#line 1652 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 0)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 1)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 2)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 3)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 4)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__Context_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 5)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 6)));
#line 2351 "stm_expand.m"
    {
#line 2351 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_66, transform_hlds__stm_expand__PredInfo0_69, transform_hlds__stm_expand__ProcInfo0_70, &transform_hlds__stm_expand__PolyInfo0_73);
    }
#line 2352 "stm_expand.m"
    {
#line 2352 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__Context_71, &transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__PolyInfo0_73, &transform_hlds__stm_expand__PolyInfo_74);
    }
#line 2354 "stm_expand.m"
    {
#line 2354 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_74, transform_hlds__stm_expand__PredInfo0_69, &transform_hlds__stm_expand__PredInfo_75, transform_hlds__stm_expand__ProcInfo0_70, &transform_hlds__stm_expand__ProcInfo_76, &transform_hlds__stm_expand__ModuleInfo_77);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_77));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_67));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_68));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_75));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_76));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_71));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_72));
#line 2356 "stm_expand.m"
    }
#line 1655 "stm_expand.m"
    {
#line 1655 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__EndBranchGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 1658 "stm_expand.m"
    {
#line 1658 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__ReturnRttiVar_18, transform_hlds__stm_expand__ExceptRttiVar_20, transform_hlds__stm_expand__Closures_10, transform_hlds__stm_expand__EndBranchGoal_22, &transform_hlds__stm_expand__MainGoal0_23, transform_hlds__stm_expand__StmInfo_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
#line 11313 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1663 "stm_expand.m"
    {
#line 1663 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal0_23));
#line 1663 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1663 "stm_expand.m"
    }
#line 1662 "stm_expand.m"
    {
#line 1662 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__V_37_37);
    }
#line 1662 "stm_expand.m"
    {
#line 1662 "stm_expand.m"
      transform_hlds__stm_expand__TopLevelGoalList0_24 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__V_36_36);
    }
#line 1664 "stm_expand.m"
    {
#line 1664 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_24, &transform_hlds__stm_expand__TopLevelGoalList_25);
    }
#line 1666 "stm_expand.m"
    {
#line 1666 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_25, &transform_hlds__stm_expand__MainGoal1_26);
    }
#line 2314 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal1_26, (MR_Integer) 0)));
#line 2314 "stm_expand.m"
    transform_hlds__stm_expand__GoalInInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal1_26, (MR_Integer) 1)));
#line 2315 "stm_expand.m"
    {
#line 2315 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_83 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2316 "stm_expand.m"
    {
#line 2316 "stm_expand.m"
      transform_hlds__stm_expand__InstMapDelta_84 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2317 "stm_expand.m"
    {
#line 2317 "stm_expand.m"
      transform_hlds__stm_expand__Detism_85 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2319 "stm_expand.m"
    {
#line 2319 "stm_expand.m"
      transform_hlds__stm_expand__Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2320 "stm_expand.m"
    {
#line 2320 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_83, transform_hlds__stm_expand__InstMapDelta_84, transform_hlds__stm_expand__Detism_85, (MR_Integer) 0, transform_hlds__stm_expand__Context_87, &transform_hlds__stm_expand__GoalInfo_88);
    }
#line 2323 "stm_expand.m"
    {
#line 2323 "stm_expand.m"
      transform_hlds__stm_expand__GoalOutExpr_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__stm_expand_scalar_common_6[16])));
#line 2323 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 2) = ((MR_Box) (transform_hlds__stm_expand__MainGoal1_26));
#line 2323 "stm_expand.m"
    }
#line 2324 "stm_expand.m"
    {
#line 2324 "stm_expand.m"
      transform_hlds__stm_expand__MainGoal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2324 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal_27, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalOutExpr_90));
#line 2324 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal_27, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_88));
#line 2324 "stm_expand.m"
    }
#line 1669 "stm_expand.m"
    {
#line 1669 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__MainGoal_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40);
    }
#line 1670 "stm_expand.m"
    {
#line 1670 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
#line 1670 "stm_expand.m"
      return;
    }
#line 1645 "stm_expand.m"
  }
#line 1640 "stm_expand.m"
}

#line 1608 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_11,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_12,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_13,
#line 1608 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1608 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
#line 1608 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32)
#line 1608 "stm_expand.m"
{
#line 1613 "stm_expand.m"
  {
#line 1613 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_67_67;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_68_68;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_69_69;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_16;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_17;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_18;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_19;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_20;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_21;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnType_23;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewStmDI_25;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewStmUO_27;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo3_29;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_30;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 0)));
#line 1613 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 2)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 1)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 3)));
#line 2556 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 4)));

#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__InputSet_73);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__OutputSet_74);
    }
#line 1615 "stm_expand.m"
    {
#line 1615 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__InputTypes_18, &transform_hlds__stm_expand__OutputTypes_19);
    }
#line 1616 "stm_expand.m"
    {
#line 1616 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, &transform_hlds__stm_expand__InputModes_20, &transform_hlds__stm_expand__OutputModes_21);
    }
#line 1968 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        transform_hlds__stm_expand__ReturnType_23 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1968 "stm_expand.m"
    else
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 1)));
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 0)));

#line 1968 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1971 "stm_expand.m"
          transform_hlds__stm_expand__ReturnType_23 = transform_hlds__stm_expand__V_93_93;
#line 1968 "stm_expand.m"
        else
#line 1973 "stm_expand.m"
          {
#line 1974 "stm_expand.m"
            {
#line 1974 "stm_expand.m"
              transform_hlds__stm_expand__ReturnType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_19));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1974 "stm_expand.m"
            }
#line 1973 "stm_expand.m"
          }
#line 1968 "stm_expand.m"
      }
#line 11593 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_67_67 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1622 "stm_expand.m"
    {
#line 1622 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1622 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_13));
#line 1622 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1622 "stm_expand.m"
    }
#line 1622 "stm_expand.m"
    {
#line 1622 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1622 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__StmDI_12));
#line 1622 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 1622 "stm_expand.m"
    }
#line 1622 "stm_expand.m"
    {
#line 1622 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_40_40);
    }
#line 1622 "stm_expand.m"
    {
#line 1622 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_39_39);
    }
#line 11625 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1623 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1623 "stm_expand.m"
    }
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 1623 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1623 "stm_expand.m"
    }
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__OutputTypes_19, transform_hlds__stm_expand__V_44_44);
    }
#line 1623 "stm_expand.m"
    {
#line 1623 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__InputTypes_18, transform_hlds__stm_expand__V_43_43);
    }
#line 11667 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1624 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1624 "stm_expand.m"
    }
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 1624 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1624 "stm_expand.m"
    }
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__OutputModes_21, transform_hlds__stm_expand__V_50_50);
    }
#line 1624 "stm_expand.m"
    {
#line 1624 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__InputModes_20, transform_hlds__stm_expand__V_49_49);
    }
#line 1625 "stm_expand.m"
    {
#line 1625 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = hlds__make_goal__true_goal_0_f_0();
    }
#line 1622 "stm_expand.m"
    {
#line 1622 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "or_else", transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[14]), &transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
#line 1630 "stm_expand.m"
    {
#line 1630 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1630 "stm_expand.m"
    {
#line 1630 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_58_58, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[15]), &transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmUO_27));
#line 1632 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1632 "stm_expand.m"
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmDI_25));
#line 1632 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 1632 "stm_expand.m"
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_63_63);
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_62_62);
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo3_29);
    }
#line 1635 "stm_expand.m"
    {
#line 1635 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(transform_hlds__stm_expand__BranchGoalVars_10, transform_hlds__stm_expand__Closures_11, transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__ReturnType_23, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__NewPredInfo3_29, &transform_hlds__stm_expand__NewPredInfo_30);
    }
#line 1638 "stm_expand.m"
    {
#line 1638 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_30, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);
#line 1638 "stm_expand.m"
      return;
    }
#line 1613 "stm_expand.m"
  }
#line 1608 "stm_expand.m"
}

#line 1575 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1575 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1575 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1575 "stm_expand.m"
{
#line 1581 "stm_expand.m"
  {
#line 1581 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignResult_22;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Call1_23;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Call2_24;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_26;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_27;
#line 1581 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;

#line 1582 "stm_expand.m"
    {
#line 1582 "stm_expand.m"
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 1568 "stm_expand.m"
    transform_hlds__stm_expand__Call1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1568 "stm_expand.m"
    transform_hlds__stm_expand__Call2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1589 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CopySTM_18 == (MR_Integer) 1);
#line 1594 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1591 "stm_expand.m"
      {
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeCtorInfo_48_48;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopySTMAssign_25;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_35_35;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_37_37;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_38_38;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_39_39;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_40_40;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;
#line 1591 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_43_43;

#line 1590 "stm_expand.m"
        {
#line 1590 "stm_expand.m"
          transform_hlds__stm_expand__V_37_37 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 1590 "stm_expand.m"
        {
#line 1590 "stm_expand.m"
          transform_hlds__stm_expand__V_38_38 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 1590 "stm_expand.m"
        {
#line 1590 "stm_expand.m"
          transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1590 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 1590 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 1590 "stm_expand.m"
        }
#line 1590 "stm_expand.m"
        {
#line 1590 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__CopySTMAssign_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
        }
#line 11894 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1592 "stm_expand.m"
        {
#line 1592 "stm_expand.m"
          transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1592 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1592 "stm_expand.m"
        }
#line 1592 "stm_expand.m"
        {
#line 1592 "stm_expand.m"
          transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_25));
#line 1592 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 1592 "stm_expand.m"
        }
#line 1592 "stm_expand.m"
        {
#line 1592 "stm_expand.m"
          transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
        }
#line 1592 "stm_expand.m"
        {
#line 1592 "stm_expand.m"
          transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__V_40_40, transform_hlds__stm_expand__V_43_43);
        }
#line 1592 "stm_expand.m"
        {
#line 1592 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_39_39);
        }
#line 1591 "stm_expand.m"
      }
#line 1594 "stm_expand.m"
    else
#line 1595 "stm_expand.m"
      {
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_44_44;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_45_45;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_47_47;

#line 1595 "stm_expand.m"
        {
#line 1595 "stm_expand.m"
          transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1595 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1595 "stm_expand.m"
        }
#line 1595 "stm_expand.m"
        {
#line 1595 "stm_expand.m"
          transform_hlds__stm_expand__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
        }
#line 1595 "stm_expand.m"
        {
#line 1595 "stm_expand.m"
          transform_hlds__stm_expand__V_44_44 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__V_45_45, transform_hlds__stm_expand__V_47_47);
        }
#line 1595 "stm_expand.m"
        {
#line 1595 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_44_44);
        }
#line 1595 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1595 "stm_expand.m"
      }
#line 1598 "stm_expand.m"
    {
#line 1598 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_26, &transform_hlds__stm_expand__TopLevelGoalList_27);
    }
#line 1599 "stm_expand.m"
    {
#line 1599 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_27, transform_hlds__stm_expand__Goal_19);
#line 1599 "stm_expand.m"
      return;
    }
#line 1581 "stm_expand.m"
  }
#line 1575 "stm_expand.m"
}

#line 1516 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1516 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1516 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
#line 1516 "stm_expand.m"
{
#line 1521 "stm_expand.m"
  {
#line 1521 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_26;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyStm_27;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_28;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1521 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
#line 1522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
#line 1522 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1527 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1525 "stm_expand.m"
    {
#line 1525 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1526 "stm_expand.m"
    {
#line 1526 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1527 "stm_expand.m"
    {
#line 1527 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 12131 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "stm_expand.m"
    }
#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 1529 "stm_expand.m"
    }
#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1529 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 1529 "stm_expand.m"
    }
#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "stm_expand.m"
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1530 "stm_expand.m"
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
#line 1530 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1530 "stm_expand.m"
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1531 "stm_expand.m"
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1531 "stm_expand.m"
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1531 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1531 "stm_expand.m"
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "simple_wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
#line 1536 "stm_expand.m"
    {
#line 1536 "stm_expand.m"
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
#line 1544 "stm_expand.m"
    {
#line 1544 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
#line 1548 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1545 "stm_expand.m"
      {
#line 1545 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_64_64;

#line 1545 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
#line 1546 "stm_expand.m"
        {
#line 1546 "stm_expand.m"
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
#line 1546 "stm_expand.m"
        {
#line 1546 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
#line 1545 "stm_expand.m"
      }
#line 1548 "stm_expand.m"
    else
#line 1549 "stm_expand.m"
      {
#line 1549 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
#line 1550 "stm_expand.m"
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
#line 1550 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1549 "stm_expand.m"
      }
#line 1553 "stm_expand.m"
    {
#line 1553 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1557 "stm_expand.m"
    }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1557 "stm_expand.m"
    }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar_26));
#line 1557 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1557 "stm_expand.m"
    }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
#line 1558 "stm_expand.m"
    {
#line 1558 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1559 "stm_expand.m"
    {
#line 1559 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
#line 1560 "stm_expand.m"
    {
#line 1560 "stm_expand.m"
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
#line 1561 "stm_expand.m"
      return;
    }
#line 1521 "stm_expand.m"
  }
#line 1516 "stm_expand.m"
}

#line 1507 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
#line 1507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18)
#line 1507 "stm_expand.m"
{
#line 1513 "stm_expand.m"
  {
#line 1513 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1513 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 1513 "stm_expand.m"
    {
#line 1513 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar0_11, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_16_16, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);
    }
#line 1513 "stm_expand.m"
  }
#line 1507 "stm_expand.m"
}

#line 1422 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1422 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1422 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
#line 1422 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48)
#line 1422 "stm_expand.m"
{
#line 1428 "stm_expand.m"
  {
#line 1428 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_169_169;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmModuleName_22;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptionModuleName_23;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignResult_24;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVar_25;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidTrueFunctor_26;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidFalseFunctor_27;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackCons_28;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConstRollbackGoal_29;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackVar_30;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmLock_Call_31;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmUnLock_Call_32;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmValidate_Call_33;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmCommit_Call_34;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoVar_35;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_36;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_38;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_39;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_40;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicTopLevelList_41;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicGoal0_42;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicGoal_43;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_45;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_46;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_88_88;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_103_103;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_108_108;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_121_121;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_131_131;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_133_133;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_137_137;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_138_138;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_140_140;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_144_144;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_146_146;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_147_147;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_150_150;
#line 1428 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_151_151;

#line 1429 "stm_expand.m"
    {
#line 1429 "stm_expand.m"
      transform_hlds__stm_expand__StmModuleName_22 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1430 "stm_expand.m"
    {
#line 1430 "stm_expand.m"
      transform_hlds__stm_expand__ExceptionModuleName_23 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1432 "stm_expand.m"
    {
#line 1432 "stm_expand.m"
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
#line 1434 "stm_expand.m"
    {
#line 1434 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 1434 "stm_expand.m"
    {
#line 1434 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_50_50, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[12]), &transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52);
    }
#line 1437 "stm_expand.m"
    {
#line 1437 "stm_expand.m"
      transform_hlds__stm_expand__ValidTrueFunctor_26 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 1438 "stm_expand.m"
    {
#line 1438 "stm_expand.m"
      transform_hlds__stm_expand__ValidFalseFunctor_27 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
#line 1439 "stm_expand.m"
    {
#line 1439 "stm_expand.m"
      transform_hlds__stm_expand__RollbackCons_28 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1443 "stm_expand.m"
    {
#line 1443 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1443 "stm_expand.m"
    {
#line 1443 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackCons_28, transform_hlds__stm_expand__V_54_54, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[13]), &transform_hlds__stm_expand__ConstRollbackGoal_29, &transform_hlds__stm_expand__RollbackVar_30, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
#line 1447 "stm_expand.m"
    {
#line 1447 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1446 "stm_expand.m"
    {
#line 1446 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, &transform_hlds__stm_expand__Goal_StmLock_Call_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
    }
#line 1450 "stm_expand.m"
    {
#line 1450 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1449 "stm_expand.m"
    {
#line 1449 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_74_74, &transform_hlds__stm_expand__Goal_StmUnLock_Call_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1453 "stm_expand.m"
    {
#line 1453 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
#line 1453 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "stm_expand.m"
    }
#line 1453 "stm_expand.m"
    {
#line 1453 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1453 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 1453 "stm_expand.m"
    }
#line 1454 "stm_expand.m"
    {
#line 1454 "stm_expand.m"
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1454 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 1454 "stm_expand.m"
    }
#line 1455 "stm_expand.m"
    {
#line 1455 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
#line 1455 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
#line 1455 "stm_expand.m"
    }
#line 1455 "stm_expand.m"
    {
#line 1455 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1455 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "stm_expand.m"
    }
#line 1454 "stm_expand.m"
    {
#line 1454 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1454 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1454 "stm_expand.m"
    }
#line 1454 "stm_expand.m"
    {
#line 1454 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
#line 1452 "stm_expand.m"
    {
#line 1452 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__Goal_StmValidate_Call_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
#line 1458 "stm_expand.m"
    {
#line 1458 "stm_expand.m"
      transform_hlds__stm_expand__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "stm_expand.m"
    }
#line 1459 "stm_expand.m"
    {
#line 1459 "stm_expand.m"
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1459 "stm_expand.m"
    }
#line 1459 "stm_expand.m"
    {
#line 1459 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_108_108);
    }
#line 1457 "stm_expand.m"
    {
#line 1457 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_103_103, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_105_105, &transform_hlds__stm_expand__Goal_StmCommit_Call_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106);
    }
#line 1462 "stm_expand.m"
    {
#line 1462 "stm_expand.m"
      transform_hlds__stm_expand__V_114_114 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1462 "stm_expand.m"
    {
#line 1462 "stm_expand.m"
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__TypeInfoVar_35, &transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115);
    }
#line 1466 "stm_expand.m"
    {
#line 1466 "stm_expand.m"
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackVar_30));
#line 1466 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "stm_expand.m"
    }
#line 1466 "stm_expand.m"
    {
#line 1466 "stm_expand.m"
      transform_hlds__stm_expand__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_35));
#line 1466 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 1466 "stm_expand.m"
    }
#line 1467 "stm_expand.m"
    {
#line 1467 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_121_121);
    }
#line 1465 "stm_expand.m"
    {
#line 1465 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_121_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_123_123, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124);
    }
#line 1471 "stm_expand.m"
    {
#line 1471 "stm_expand.m"
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
#line 1471 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "stm_expand.m"
    }
#line 1471 "stm_expand.m"
    {
#line 1471 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCommit_Call_34));
#line 1471 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
#line 1471 "stm_expand.m"
    }
#line 1471 "stm_expand.m"
    {
#line 1471 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_130_130, &transform_hlds__stm_expand__Goal_ValidBranch_38);
    }
#line 12825 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1473 "stm_expand.m"
    {
#line 1473 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ConstRollbackGoal_29));
#line 1473 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "stm_expand.m"
    }
#line 1473 "stm_expand.m"
    {
#line 1473 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
#line 1473 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__V_135_135));
#line 1473 "stm_expand.m"
    }
#line 1474 "stm_expand.m"
    {
#line 1474 "stm_expand.m"
      transform_hlds__stm_expand__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37));
#line 1474 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "stm_expand.m"
    }
#line 1474 "stm_expand.m"
    {
#line 1474 "stm_expand.m"
      transform_hlds__stm_expand__V_137_137 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__V_138_138);
    }
#line 1473 "stm_expand.m"
    {
#line 1473 "stm_expand.m"
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_137_137);
    }
#line 1473 "stm_expand.m"
    {
#line 1473 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal_InvalidBranch_39);
    }
#line 1478 "stm_expand.m"
    {
#line 1478 "stm_expand.m"
      transform_hlds__stm_expand__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidTrueFunctor_26));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_ValidBranch_38));
#line 1478 "stm_expand.m"
    }
#line 1479 "stm_expand.m"
    {
#line 1479 "stm_expand.m"
      transform_hlds__stm_expand__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidFalseFunctor_27));
#line 1479 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1479 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_InvalidBranch_39));
#line 1479 "stm_expand.m"
    }
#line 1479 "stm_expand.m"
    {
#line 1479 "stm_expand.m"
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__V_147_147));
#line 1479 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1479 "stm_expand.m"
    }
#line 1478 "stm_expand.m"
    {
#line 1478 "stm_expand.m"
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__V_144_144));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
#line 1478 "stm_expand.m"
    }
#line 1477 "stm_expand.m"
    {
#line 1477 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__V_140_140, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143);
    }
#line 1484 "stm_expand.m"
    {
#line 1484 "stm_expand.m"
      transform_hlds__stm_expand__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_40));
#line 1484 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1484 "stm_expand.m"
    }
#line 1484 "stm_expand.m"
    {
#line 1484 "stm_expand.m"
      transform_hlds__stm_expand__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmValidate_Call_33));
#line 1484 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 1) = ((MR_Box) (transform_hlds__stm_expand__V_151_151));
#line 1484 "stm_expand.m"
    }
#line 1483 "stm_expand.m"
    {
#line 1483 "stm_expand.m"
      transform_hlds__stm_expand__PostAtomicTopLevelList_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmLock_Call_31));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_150_150));
#line 1483 "stm_expand.m"
    }
#line 1486 "stm_expand.m"
    {
#line 1486 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__PostAtomicTopLevelList_41, &transform_hlds__stm_expand__PostAtomicGoal0_42);
    }
#line 1487 "stm_expand.m"
    {
#line 1487 "stm_expand.m"
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__PostAtomicGoal0_42, (MR_Integer) 0, &transform_hlds__stm_expand__PostAtomicGoal_43);
    }
#line 1496 "stm_expand.m"
    if ((transform_hlds__stm_expand__CopySTM_18 == (MR_Integer) 0))
#line 1497 "stm_expand.m"
      {
#line 1497 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_154_154;
#line 1497 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_156_156;
#line 1497 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_157_157;

#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "stm_expand.m"
        }
#line 1499 "stm_expand.m"
        {
#line 1499 "stm_expand.m"
          transform_hlds__stm_expand__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
#line 1499 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "stm_expand.m"
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__V_156_156 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_157_157);
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_154_154, transform_hlds__stm_expand__V_156_156);
        }
#line 1499 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
#line 1497 "stm_expand.m"
      }
#line 1496 "stm_expand.m"
    else
#line 1491 "stm_expand.m"
      {
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopySTMAssign_44;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_159_159;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_161_161;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_162_162;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_163_163;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_165_165;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_166_166;
#line 1491 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_167_167;

#line 1492 "stm_expand.m"
        {
#line 1492 "stm_expand.m"
          transform_hlds__stm_expand__V_161_161 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 1492 "stm_expand.m"
        {
#line 1492 "stm_expand.m"
          transform_hlds__stm_expand__V_162_162 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 1492 "stm_expand.m"
        {
#line 1492 "stm_expand.m"
          transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__V_161_161));
#line 1492 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (transform_hlds__stm_expand__V_162_162));
#line 1492 "stm_expand.m"
        }
#line 1492 "stm_expand.m"
        {
#line 1492 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_159_159, &transform_hlds__stm_expand__CopySTMAssign_44, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);
        }
#line 1494 "stm_expand.m"
        {
#line 1494 "stm_expand.m"
          transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1494 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "stm_expand.m"
        }
#line 1495 "stm_expand.m"
        {
#line 1495 "stm_expand.m"
          transform_hlds__stm_expand__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
#line 1495 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1495 "stm_expand.m"
        }
#line 1494 "stm_expand.m"
        {
#line 1494 "stm_expand.m"
          transform_hlds__stm_expand__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_44));
#line 1494 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 1) = ((MR_Box) (transform_hlds__stm_expand__V_167_167));
#line 1494 "stm_expand.m"
        }
#line 1494 "stm_expand.m"
        {
#line 1494 "stm_expand.m"
          transform_hlds__stm_expand__V_165_165 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_166_166);
        }
#line 1494 "stm_expand.m"
        {
#line 1494 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_163_163, transform_hlds__stm_expand__V_165_165);
        }
#line 1491 "stm_expand.m"
      }
#line 1502 "stm_expand.m"
    {
#line 1502 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_45, &transform_hlds__stm_expand__TopLevelGoalList_46);
    }
#line 1503 "stm_expand.m"
    {
#line 1503 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_46, transform_hlds__stm_expand__Goal_19);
#line 1503 "stm_expand.m"
      return;
    }
#line 1428 "stm_expand.m"
  }
#line 1422 "stm_expand.m"
}

#line 1370 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1370 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1370 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
#line 1370 "stm_expand.m"
{
#line 1375 "stm_expand.m"
  {
#line 1375 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_26;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyStm_27;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_28;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1375 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1376 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
#line 1376 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
#line 1376 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1380 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1381 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1379 "stm_expand.m"
    {
#line 1379 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1380 "stm_expand.m"
    {
#line 1380 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1381 "stm_expand.m"
    {
#line 1381 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 13250 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "stm_expand.m"
    }
#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 1383 "stm_expand.m"
    }
#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1383 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 1383 "stm_expand.m"
    }
#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "stm_expand.m"
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1384 "stm_expand.m"
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
#line 1384 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1384 "stm_expand.m"
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "stm_expand.m"
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1385 "stm_expand.m"
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1385 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1385 "stm_expand.m"
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
#line 1390 "stm_expand.m"
    {
#line 1390 "stm_expand.m"
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
#line 1398 "stm_expand.m"
    {
#line 1398 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
#line 1402 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1399 "stm_expand.m"
      {
#line 1399 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_64_64;

#line 1399 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
#line 1400 "stm_expand.m"
        {
#line 1400 "stm_expand.m"
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
#line 1400 "stm_expand.m"
        {
#line 1400 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
#line 1399 "stm_expand.m"
      }
#line 1402 "stm_expand.m"
    else
#line 1403 "stm_expand.m"
      {
#line 1403 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
#line 1404 "stm_expand.m"
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
#line 1404 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1403 "stm_expand.m"
      }
#line 1407 "stm_expand.m"
    {
#line 1407 "stm_expand.m"
      transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "stm_expand.m"
    }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1411 "stm_expand.m"
    }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1411 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1411 "stm_expand.m"
    }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
#line 1412 "stm_expand.m"
    {
#line 1412 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1413 "stm_expand.m"
    {
#line 1413 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
#line 1414 "stm_expand.m"
    {
#line 1414 "stm_expand.m"
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
#line 1415 "stm_expand.m"
      return;
    }
#line 1375 "stm_expand.m"
  }
#line 1370 "stm_expand.m"
}

#line 1316 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_12,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1316 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
#line 1316 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34)
#line 1316 "stm_expand.m"
{
#line 1323 "stm_expand.m"
  {
#line 1323 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1323 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "stm_expand.m"
      {
#line 1324 "stm_expand.m"
        {
#line 1324 "stm_expand.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_wrapper_for_goal_list\'/8", (MR_String) "empty list");
#line 1324 "stm_expand.m"
          return;
        }
#line 1323 "stm_expand.m"
      }
#line 1323 "stm_expand.m"
    else
#line 1323 "stm_expand.m"
      {
#line 1323 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 1)));
#line 1323 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 0)));

#line 1323 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "stm_expand.m"
          {
#line 1326 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
#line 1327 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_AtomicGoalVars_17;
#line 1367 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_79_79;

#line 1327 "stm_expand.m"
            {
#line 1327 "stm_expand.m"
              transform_hlds__stm_expand__conv0_AtomicGoalVars_17 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0, transform_hlds__stm_expand__AtomicGoalVarList_9);
            }
#line 1327 "stm_expand.m"
            transform_hlds__stm_expand__AtomicGoalVars_17 = ((MR_Word) transform_hlds__stm_expand__conv0_AtomicGoalVars_17);
#line 1367 "stm_expand.m"
            {
#line 1367 "stm_expand.m"
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_79_79, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
#line 1326 "stm_expand.m"
          }
#line 1323 "stm_expand.m"
        else
#line 1331 "stm_expand.m"
          {
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__PPIDList_28;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmDI_30;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmUO_31;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__NewAtomicGoal_32;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
#line 1331 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_54;
#line 1349 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_55_55;
#line 1349 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_56_56;
#line 1349 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 1367 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_90_90;

#line 1341 "stm_expand.m"
            {
#line 1341 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__GoalList_12, transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
            }
#line 1344 "stm_expand.m"
            {
#line 1344 "stm_expand.m"
              transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__AtomicGoalVars_54);
            }
#line 1349 "stm_expand.m"
            transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 0)));
#line 1349 "stm_expand.m"
            transform_hlds__stm_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 1)));
#line 1349 "stm_expand.m"
            transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 2)));
#line 1349 "stm_expand.m"
            transform_hlds__stm_expand__StmDI_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 3)));
#line 1349 "stm_expand.m"
            transform_hlds__stm_expand__StmUO_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 4)));
#line 1352 "stm_expand.m"
            {
#line 1352 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__StmDI_30, transform_hlds__stm_expand__StmUO_31, &transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
            }
#line 1367 "stm_expand.m"
            {
#line 1367 "stm_expand.m"
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_90_90, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
#line 1331 "stm_expand.m"
          }
#line 1323 "stm_expand.m"
      }
#line 1323 "stm_expand.m"
  }
#line 1316 "stm_expand.m"
}

#line 1291 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
#line 1291 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
#line 1291 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11)
#line 1291 "stm_expand.m"
{
#line 1291 "stm_expand.m"
  {
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29;

#line 1291 "stm_expand.m"
    {
#line 1291 "stm_expand.m"
      transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_6), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_8), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_10), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29);
    }
#line 1291 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21));
#line 1291 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23));
#line 1291 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_7 = ((MR_Box) (transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25));
#line 1291 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_9 = ((MR_Box) (transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27));
#line 1291 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_11 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29));
#line 1291 "stm_expand.m"
  }
#line 1291 "stm_expand.m"
}

#line 1275 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDI_13,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUO_14,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
#line 1275 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
#line 1275 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44)
#line 1275 "stm_expand.m"
{
#line 1280 "stm_expand.m"
  {
#line 1280 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_75_75;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_87_87;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_88_88;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_19;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_20;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarSet0_21;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarTypes0_22;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LocalVars_24;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigInnerDI_26;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigInnerUO_27;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LocalVarList_28;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping0_29;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet_30;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_31;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarSet_32;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarTypes_33;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping1_34;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping_35;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo1_37;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo1_39;
#line 1280 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo_40;
#line 1281 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
#line 1281 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
#line 1281 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
#line 1281 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
#line 1281 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
#line 1281 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
#line 1282 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
#line 1282 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
#line 1282 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
#line 1282 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
#line 1282 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
#line 1282 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
#line 1287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv9_NewPredVarSet_30;
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv8_NewPredVarTypes_31;
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv7_OldPredVarSet_32;
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv6_OldPredVarTypes_33;
#line 1291 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv5_VarMapping1_34;
#line 1308 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1308 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1308 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_62_62;
#line 1308 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1308 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1308 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_66_66;
#line 1308 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1309 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 1309 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1309 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_69_69;
#line 1309 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1309 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1309 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_73_73;
#line 1309 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;

#line 1283 "stm_expand.m"
    {
#line 1283 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarSet0_19);
    }
#line 1284 "stm_expand.m"
    {
#line 1284 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarTypes0_20);
    }
#line 1285 "stm_expand.m"
    {
#line 1285 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarSet0_21);
    }
#line 1286 "stm_expand.m"
    {
#line 1286 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarTypes0_22);
    }
#line 1287 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 0)));
#line 1287 "stm_expand.m"
    transform_hlds__stm_expand__LocalVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 1)));
#line 1287 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 2)));
#line 1287 "stm_expand.m"
    transform_hlds__stm_expand__OrigInnerDI_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 3)));
#line 1287 "stm_expand.m"
    transform_hlds__stm_expand__OrigInnerUO_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 4)));
#line 1288 "stm_expand.m"
    {
#line 1288 "stm_expand.m"
      transform_hlds__stm_expand__LocalVarList_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__LocalVars_24);
    }
#line 13887 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_75_75 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1290 "stm_expand.m"
    {
#line 1290 "stm_expand.m"
      transform_hlds__stm_expand__VarMapping0_29 = mercury__map__init_0_f_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75);
    }
#line 13894 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_87_87 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[3];
#line 13896 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1291 "stm_expand.m"
    {
#line 1291 "stm_expand.m"
      mercury__list__foldl5_12_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeCtorInfo_88_88, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeCtorInfo_88_88, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[10], transform_hlds__stm_expand__LocalVarList_28, ((MR_Box) (transform_hlds__stm_expand__NewPredVarSet0_19)), &transform_hlds__stm_expand__conv9_NewPredVarSet_30, ((MR_Box) (transform_hlds__stm_expand__NewPredVarTypes0_20)), &transform_hlds__stm_expand__conv8_NewPredVarTypes_31, ((MR_Box) (transform_hlds__stm_expand__OldPredVarSet0_21)), &transform_hlds__stm_expand__conv7_OldPredVarSet_32, ((MR_Box) (transform_hlds__stm_expand__OldPredVarTypes0_22)), &transform_hlds__stm_expand__conv6_OldPredVarTypes_33, ((MR_Box) (transform_hlds__stm_expand__VarMapping0_29)), &transform_hlds__stm_expand__conv5_VarMapping1_34);
    }
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__NewPredVarSet_30 = ((MR_Word) transform_hlds__stm_expand__conv9_NewPredVarSet_30);
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__NewPredVarTypes_31 = ((MR_Word) transform_hlds__stm_expand__conv8_NewPredVarTypes_31);
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__OldPredVarSet_32 = ((MR_Word) transform_hlds__stm_expand__conv7_OldPredVarSet_32);
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__OldPredVarTypes_33 = ((MR_Word) transform_hlds__stm_expand__conv6_OldPredVarTypes_33);
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__VarMapping1_34 = ((MR_Word) transform_hlds__stm_expand__conv5_VarMapping1_34);
#line 1296 "stm_expand.m"
    {
#line 1296 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)));
    }
#line 1298 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1297 "stm_expand.m"
      {
#line 1297 "stm_expand.m"
        mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping_35);
      }
#line 1298 "stm_expand.m"
    else
#line 1299 "stm_expand.m"
      {
#line 1299 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__VarMapping2_36;

#line 1299 "stm_expand.m"
        {
#line 1299 "stm_expand.m"
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping2_36);
        }
#line 1300 "stm_expand.m"
        {
#line 1300 "stm_expand.m"
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)), ((MR_Box) (transform_hlds__stm_expand__InnerUO_14)), transform_hlds__stm_expand__VarMapping2_36, &transform_hlds__stm_expand__VarMapping_35);
        }
#line 1299 "stm_expand.m"
      }
#line 1303 "stm_expand.m"
    {
#line 1303 "stm_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_35, transform_hlds__stm_expand__AtomicGoal0_10, transform_hlds__stm_expand__AtomicGoal_11);
    }
#line 1304 "stm_expand.m"
    {
#line 1304 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_30, transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewProcInfo1_37);
    }
#line 1305 "stm_expand.m"
    {
#line 1305 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_31, transform_hlds__stm_expand__NewProcInfo1_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
#line 1306 "stm_expand.m"
    {
#line 1306 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__OldPredVarSet_32, transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldProcInfo1_39);
    }
#line 1307 "stm_expand.m"
    {
#line 1307 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__OldPredVarTypes_33, transform_hlds__stm_expand__OldProcInfo1_39, &transform_hlds__stm_expand__OldProcInfo_40);
    }
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
#line 1308 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
#line 1308 "stm_expand.m"
    {
#line 1308 "stm_expand.m"
      MR_Word base;
#line 1308 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42 = base;
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 1308 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1308 "stm_expand.m"
    }
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
#line 1309 "stm_expand.m"
    transform_hlds__stm_expand__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
#line 1309 "stm_expand.m"
    {
#line 1309 "stm_expand.m"
      MR_Word base;
#line 1309 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44 = base;
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OldProcInfo_40));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1309 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1309 "stm_expand.m"
    }
#line 1280 "stm_expand.m"
  }
#line 1275 "stm_expand.m"
}

#line 1257 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_12,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
#line 1257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
#line 1257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29)
#line 1257 "stm_expand.m"
{
#line 1263 "stm_expand.m"
  {
#line 1263 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_34_34;
#line 1263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProgType_18;
#line 1263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProgVar_19;

#line 1264 "stm_expand.m"
    {
#line 1264 "stm_expand.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26, transform_hlds__stm_expand__ProgVar_12, &transform_hlds__stm_expand__ProgType_18);
    }
#line 1267 "stm_expand.m"
    {
#line 1267 "stm_expand.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21);
    }
#line 1268 "stm_expand.m"
    {
#line 1268 "stm_expand.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__ProgType_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23);
    }
#line 14103 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_34_34 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1269 "stm_expand.m"
    {
#line 1269 "stm_expand.m"
      mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_34_34, transform_hlds__stm_expand__TypeInfo_34_34, ((MR_Box) (transform_hlds__stm_expand__ProgVar_12)), ((MR_Box) (transform_hlds__stm_expand__NewProgVar_19)), transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28, transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);
    }
#line 1269 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26;
#line 1269 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24;
#line 1263 "stm_expand.m"
  }
#line 1257 "stm_expand.m"
}

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 574 "stm_expand.m"
{
#line 574 "stm_expand.m"
  {
#line 574 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 574 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 574 "stm_expand.m"
    {
#line 574 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 574 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 574 "stm_expand.m"
  }
#line 574 "stm_expand.m"
}

#line 1218 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 1218 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
#line 1218 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
#line 1218 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29)
#line 1218 "stm_expand.m"
{
#line 1223 "stm_expand.m"
  {
#line 1223 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_69 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_15;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultType_18;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_19;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_20;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_21;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcessGoalList_22;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperID_23;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackGoal_25;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_53;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_54;
#line 1223 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_55;
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_55;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1226 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 1237 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;

#line 576 "stm_expand.m"
    {
#line 576 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[9], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_53);
    }
#line 577 "stm_expand.m"
    {
#line 577 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_54 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_53);
    }
#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_55 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
#line 578 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_55 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_55);
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 0)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 1)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 2)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 3)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 4)));
#line 579 "stm_expand.m"
    {
#line 579 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_54));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 2) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 3) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 4) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 579 "stm_expand.m"
    }
#line 1226 "stm_expand.m"
    {
#line 1226 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__V_16_16, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 1968 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        transform_hlds__stm_expand__ResultType_18 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1968 "stm_expand.m"
    else
#line 1968 "stm_expand.m"
      {
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 1968 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 1968 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1971 "stm_expand.m"
          transform_hlds__stm_expand__ResultType_18 = transform_hlds__stm_expand__V_81_81;
#line 1968 "stm_expand.m"
        else
#line 1973 "stm_expand.m"
          {
#line 1974 "stm_expand.m"
            {
#line 1974 "stm_expand.m"
              transform_hlds__stm_expand__ResultType_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_17));
#line 1974 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1974 "stm_expand.m"
            }
#line 1973 "stm_expand.m"
          }
#line 1968 "stm_expand.m"
      }
#line 1228 "stm_expand.m"
    {
#line 1228 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ResultType_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[8]), &transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
    }
#line 1229 "stm_expand.m"
    {
#line 1229 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1229 "stm_expand.m"
    {
#line 1229 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[9]), &transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
#line 1230 "stm_expand.m"
    {
#line 1230 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1230 "stm_expand.m"
    {
#line 1230 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[10]), &transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39);
    }
#line 1234 "stm_expand.m"
    {
#line 1234 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
    }
#line 1236 "stm_expand.m"
    {
#line 1236 "stm_expand.m"
      transform_hlds__stm_expand__ProcessGoalList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_11));
#line 1236 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_12));
#line 1236 "stm_expand.m"
    }
#line 1237 "stm_expand.m"
    {
#line 1237 "stm_expand.m"
      transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__ProcessGoalList_22, &transform_hlds__stm_expand__WrapperID_23, &transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
    }
#line 1241 "stm_expand.m"
    {
#line 1241 "stm_expand.m"
      transform_hlds__stm_expand__update_new_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43);
    }
#line 1243 "stm_expand.m"
    {
#line 1243 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__WrapperID_23, transform_hlds__stm_expand__RecCallGoal_10, &transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1245 "stm_expand.m"
    {
#line 1245 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45);
    }
#line 1246 "stm_expand.m"
    {
#line 1246 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
    }
#line 1247 "stm_expand.m"
    {
#line 1247 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);
#line 1247 "stm_expand.m"
      return;
    }
#line 1223 "stm_expand.m"
  }
#line 1218 "stm_expand.m"
}

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 574 "stm_expand.m"
{
#line 574 "stm_expand.m"
  {
#line 574 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 574 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 574 "stm_expand.m"
    {
#line 574 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 574 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 574 "stm_expand.m"
  }
#line 574 "stm_expand.m"
}

#line 1200 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
#line 1200 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
#line 1200 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
#line 1200 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22)
#line 1200 "stm_expand.m"
{
#line 1204 "stm_expand.m"
  {
#line 1204 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_55 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_71;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_12;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_13;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_14;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_15;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_16;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_17;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_18;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_19;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_20;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_39;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_41;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_61;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_62;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredId_76;
#line 1204 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__OrigProcId_77;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigProcInfo_78;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredInfo_79;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmExpanded_80;
#line 1204 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpandNum_81;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_82;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_83;
#line 1204 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_84;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_85;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_86;
#line 1204 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo_89;
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_41;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 2480 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_75;
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 2483 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_88_88;

#line 576 "stm_expand.m"
    {
#line 576 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[8], transform_hlds__stm_expand__AtomicGoalVarList_7, &transform_hlds__stm_expand__InputVarList_39);
    }
#line 577 "stm_expand.m"
    {
#line 577 "stm_expand.m"
      transform_hlds__stm_expand__InputSet_61 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_39);
    }
#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_41 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, transform_hlds__stm_expand__AtomicGoalVarList_7);
    }
#line 578 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_41 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_41);
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 0)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 1)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 2)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 3)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 4)));
#line 579 "stm_expand.m"
    {
#line 579 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 0) = ((MR_Box) (transform_hlds__stm_expand__InputSet_61));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputSet_62));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 3) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 4) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 579 "stm_expand.m"
    }
#line 14577 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2559 "stm_expand.m"
    {
#line 2559 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__InputSet_61);
    }
#line 2560 "stm_expand.m"
    {
#line 2560 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__OutputSet_62);
    }
#line 1207 "stm_expand.m"
    {
#line 1207 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__InputTypes_15, &transform_hlds__stm_expand__OutputTypes_16);
    }
#line 1208 "stm_expand.m"
    {
#line 1208 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, &transform_hlds__stm_expand__InputModes_17, &transform_hlds__stm_expand__OutputModes_18);
    }
#line 1210 "stm_expand.m"
    {
#line 1210 "stm_expand.m"
      transform_hlds__stm_expand__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__InputVars_13, transform_hlds__stm_expand__OutputVars_14);
    }
#line 1210 "stm_expand.m"
    {
#line 1210 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_15, transform_hlds__stm_expand__OutputTypes_16);
    }
#line 1211 "stm_expand.m"
    {
#line 1211 "stm_expand.m"
      transform_hlds__stm_expand__V_25_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_17, transform_hlds__stm_expand__OutputModes_18);
    }
#line 1210 "stm_expand.m"
    {
#line 1210 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__V_25_25, (MR_String) "rollback", transform_hlds__stm_expand__AtomicGoal_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_19, transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28);
    }
#line 1214 "stm_expand.m"
    {
#line 1214 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_7, *transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__AtomicGoal_9, transform_hlds__stm_expand__OrElseGoals_10, transform_hlds__stm_expand__NewPredInfo0_19, &transform_hlds__stm_expand__NewPredInfo_20, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29);
    }
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand___StmModuleInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 0)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__OrigPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 1)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__OrigProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 2)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__OrigProcInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 3)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__OrigPredInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 4)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__StmExpanded_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 5)));
#line 2480 "stm_expand.m"
    transform_hlds__stm_expand__ExpandNum_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 6)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__PredModuleInfo0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 0)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__NewPredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 1)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__NewProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 2)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__NewPredInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 3)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__NewProcInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 4)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 5)));
#line 2483 "stm_expand.m"
    transform_hlds__stm_expand__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 6)));
#line 2485 "stm_expand.m"
    {
#line 2485 "stm_expand.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_83, transform_hlds__stm_expand__NewProcId_84, transform_hlds__stm_expand__NewPredInfo_85, transform_hlds__stm_expand__NewProcInfo_86, transform_hlds__stm_expand__PredModuleInfo0_82, &transform_hlds__stm_expand__PredModuleInfo_89);
    }
#line 2487 "stm_expand.m"
    {
#line 2487 "stm_expand.m"
      MR_Word base;
#line 2487 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2487 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22 = base;
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_89));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_76));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_77));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_78));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_79));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_80));
#line 2487 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_81));
#line 2487 "stm_expand.m"
    }
#line 1204 "stm_expand.m"
  }
#line 1200 "stm_expand.m"
}

#line 1131 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_12,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_15,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_16,
#line 1131 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_17,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_18,
#line 1131 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
#line 1131 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41)
#line 1131 "stm_expand.m"
{
#line 1137 "stm_expand.m"
  {
#line 1137 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_26;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssign_27;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RttiTypeVar_28;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RttiTypeVarAssign_29;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Exception_Result_Type_30;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRes_Success_Functor_31;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRes_Failure_Functor_32;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmCreate_34;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_TryStm_35;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Branch_AtomicSuccess_36;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Branch_AtomicException_37;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_38;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal0_39;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_90_90;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_91_91;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_95_95;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_97_97;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_100_100;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_101_101;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_106_106;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_110_110;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_111_111;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_115_115;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_116_116;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_127_127;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_129_129;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_133_133;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_136_136;
#line 1137 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_137_137;
#line 1138 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1139 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1140 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1138 "stm_expand.m"
    {
#line 1138 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1139 "stm_expand.m"
    {
#line 1139 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__StmInfo_18, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1140 "stm_expand.m"
    {
#line 1140 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "stm_expand.m"
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1143 "stm_expand.m"
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_12));
#line 1143 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1143 "stm_expand.m"
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "stm_expand.m"
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1144 "stm_expand.m"
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1144 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1144 "stm_expand.m"
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1142 "stm_expand.m"
    {
#line 1142 "stm_expand.m"
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_15, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__AtomicClosureVar_26, &transform_hlds__stm_expand__ClosureAssign_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_12, &transform_hlds__stm_expand__RttiTypeVar_28, &transform_hlds__stm_expand__RttiTypeVarAssign_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
#line 1152 "stm_expand.m"
    {
#line 1152 "stm_expand.m"
      transform_hlds__stm_expand__Exception_Result_Type_30 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_12);
    }
#line 1153 "stm_expand.m"
    {
#line 1153 "stm_expand.m"
      transform_hlds__stm_expand__ExceptRes_Success_Functor_31 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 1154 "stm_expand.m"
    {
#line 1154 "stm_expand.m"
      transform_hlds__stm_expand__ExceptRes_Failure_Functor_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1156 "stm_expand.m"
    {
#line 1156 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Exception_Result_Type_30, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[6]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60);
    }
#line 1159 "stm_expand.m"
    {
#line 1159 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1161 "stm_expand.m"
    {
#line 1161 "stm_expand.m"
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1161 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "stm_expand.m"
    }
#line 1162 "stm_expand.m"
    transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1162 "stm_expand.m"
    {
#line 1162 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1162 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1162 "stm_expand.m"
    }
#line 1162 "stm_expand.m"
    {
#line 1162 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 1162 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1162 "stm_expand.m"
    }
#line 1162 "stm_expand.m"
    {
#line 1162 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_73_73);
    }
#line 1159 "stm_expand.m"
    {
#line 1159 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_62_62, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_68_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_70_70, &transform_hlds__stm_expand__Goal_StmCreate_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71);
    }
#line 1168 "stm_expand.m"
    {
#line 1168 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1170 "stm_expand.m"
    {
#line 1170 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1170 "stm_expand.m"
    }
#line 1170 "stm_expand.m"
    {
#line 1170 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1170 "stm_expand.m"
    }
#line 1170 "stm_expand.m"
    {
#line 1170 "stm_expand.m"
      transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1170 "stm_expand.m"
    }
#line 1170 "stm_expand.m"
    {
#line 1170 "stm_expand.m"
      transform_hlds__stm_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 1) = ((MR_Box) (transform_hlds__stm_expand__V_91_91));
#line 1170 "stm_expand.m"
    }
#line 1170 "stm_expand.m"
    {
#line 1170 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
#line 1170 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (transform_hlds__stm_expand__V_90_90));
#line 1170 "stm_expand.m"
    }
#line 1173 "stm_expand.m"
    transform_hlds__stm_expand__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 1173 "stm_expand.m"
    {
#line 1173 "stm_expand.m"
      transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
#line 1173 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1173 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1174 "stm_expand.m"
    }
#line 1175 "stm_expand.m"
    {
#line 1175 "stm_expand.m"
      transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1175 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1175 "stm_expand.m"
    }
#line 1176 "stm_expand.m"
    {
#line 1176 "stm_expand.m"
      transform_hlds__stm_expand__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1176 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1176 "stm_expand.m"
    }
#line 1177 "stm_expand.m"
    {
#line 1177 "stm_expand.m"
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1177 "stm_expand.m"
    }
#line 1177 "stm_expand.m"
    {
#line 1177 "stm_expand.m"
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "stm_expand.m"
    }
#line 1176 "stm_expand.m"
    {
#line 1176 "stm_expand.m"
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
#line 1176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
#line 1176 "stm_expand.m"
    }
#line 1175 "stm_expand.m"
    {
#line 1175 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 1175 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 1175 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_101_101));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
#line 1174 "stm_expand.m"
    }
#line 1173 "stm_expand.m"
    {
#line 1173 "stm_expand.m"
      transform_hlds__stm_expand__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 0) = ((MR_Box) (transform_hlds__stm_expand__V_96_96));
#line 1173 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 1) = ((MR_Box) (transform_hlds__stm_expand__V_100_100));
#line 1173 "stm_expand.m"
    }
#line 1172 "stm_expand.m"
    {
#line 1172 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_95_95);
    }
#line 1168 "stm_expand.m"
    {
#line 1168 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_79_79, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_87_87, &transform_hlds__stm_expand__Goal_TryStm_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88);
    }
#line 1181 "stm_expand.m"
    {
#line 1181 "stm_expand.m"
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__Branch_AtomicSuccess_36, transform_hlds__stm_expand__StmInfo_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121);
    }
#line 1183 "stm_expand.m"
    {
#line 1183 "stm_expand.m"
      transform_hlds__stm_expand__create_test_on_exception_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__StmVarUO_14, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__RecCall_16, &transform_hlds__stm_expand__Branch_AtomicException_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
#line 1187 "stm_expand.m"
    {
#line 1187 "stm_expand.m"
      transform_hlds__stm_expand__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Failure_Functor_32));
#line 1187 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicException_37));
#line 1187 "stm_expand.m"
    }
#line 1188 "stm_expand.m"
    {
#line 1188 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Success_Functor_31));
#line 1188 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicSuccess_36));
#line 1188 "stm_expand.m"
    }
#line 1188 "stm_expand.m"
    {
#line 1188 "stm_expand.m"
      transform_hlds__stm_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 0) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
#line 1188 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "stm_expand.m"
    }
#line 1187 "stm_expand.m"
    {
#line 1187 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
#line 1187 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
#line 1187 "stm_expand.m"
    }
#line 1186 "stm_expand.m"
    {
#line 1186 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_123_123, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);
    }
#line 1191 "stm_expand.m"
    {
#line 1191 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCreate_34));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVarAssign_29));
#line 1191 "stm_expand.m"
    }
#line 1192 "stm_expand.m"
    {
#line 1192 "stm_expand.m"
      transform_hlds__stm_expand__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_38));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "stm_expand.m"
    }
#line 1192 "stm_expand.m"
    {
#line 1192 "stm_expand.m"
      transform_hlds__stm_expand__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_TryStm_35));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 1) = ((MR_Box) (transform_hlds__stm_expand__V_137_137));
#line 1192 "stm_expand.m"
    }
#line 1192 "stm_expand.m"
    {
#line 1192 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_27));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (transform_hlds__stm_expand__V_136_136));
#line 1192 "stm_expand.m"
    }
#line 1191 "stm_expand.m"
    {
#line 1191 "stm_expand.m"
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_135_135);
    }
#line 1191 "stm_expand.m"
    {
#line 1191 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal0_39);
    }
#line 1193 "stm_expand.m"
    {
#line 1193 "stm_expand.m"
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__Goal0_39, (MR_Integer) 0, transform_hlds__stm_expand__Goal_17);
#line 1193 "stm_expand.m"
      return;
    }
#line 1137 "stm_expand.m"
  }
#line 1131 "stm_expand.m"
}

#line 1093 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_9,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_11,
#line 1093 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1093 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
#line 1093 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25)
#line 1093 "stm_expand.m"
{
#line 1098 "stm_expand.m"
  {
#line 1098 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_67_67;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_14;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructException_15;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackVar_16;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackAssign_17;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateGoal_18;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TrueGoal_19;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RethrowBranch_20;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryBranch_21;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__FalseGoal_22;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IfThenElseGoal_23;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_73;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_74;
#line 1098 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_75;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_76;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_77;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_78;
#line 1098 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_79;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_80;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_81;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_82;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_83;
#line 1098 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_84;

#line 1099 "stm_expand.m"
    {
#line 1099 "stm_expand.m"
      transform_hlds__stm_expand__V_26_26 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
#line 1099 "stm_expand.m"
    {
#line 1099 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28);
    }
#line 1101 "stm_expand.m"
    {
#line 1101 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1102 "stm_expand.m"
    {
#line 1102 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_14));
#line 1102 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1102 "stm_expand.m"
    }
#line 1101 "stm_expand.m"
    {
#line 1101 "stm_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__DeconstructException_15);
    }
#line 1103 "stm_expand.m"
    {
#line 1103 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 0)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 1)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 2)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 3)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 4)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 5)));
#line 2349 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 6)));
#line 2351 "stm_expand.m"
    {
#line 2351 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_73, transform_hlds__stm_expand__PredInfo0_76, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__PolyInfo0_80);
    }
#line 2352 "stm_expand.m"
    {
#line 2352 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__Context_78, &transform_hlds__stm_expand__TypeInfoRollbackVar_16, &transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__PolyInfo0_80, &transform_hlds__stm_expand__PolyInfo_81);
    }
#line 2354 "stm_expand.m"
    {
#line 2354 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_81, transform_hlds__stm_expand__PredInfo0_76, &transform_hlds__stm_expand__PredInfo_82, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__ProcInfo_83, &transform_hlds__stm_expand__ModuleInfo_84);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_84));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_74));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_75));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_82));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_83));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_78));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_79));
#line 2356 "stm_expand.m"
    }
#line 1105 "stm_expand.m"
    {
#line 1105 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1107 "stm_expand.m"
    {
#line 1107 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
#line 1107 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "stm_expand.m"
    }
#line 1108 "stm_expand.m"
    {
#line 1108 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
#line 1108 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1108 "stm_expand.m"
    }
#line 1108 "stm_expand.m"
    {
#line 1108 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1108 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1108 "stm_expand.m"
    }
#line 1108 "stm_expand.m"
    {
#line 1108 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_46_46);
    }
#line 1105 "stm_expand.m"
    {
#line 1105 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__DropStateGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1111 "stm_expand.m"
    {
#line 1111 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_11));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "stm_expand.m"
    }
#line 1111 "stm_expand.m"
    {
#line 1111 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateGoal_18));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1111 "stm_expand.m"
    }
#line 1111 "stm_expand.m"
    {
#line 1111 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_52_52, &transform_hlds__stm_expand__TrueGoal_19);
    }
#line 1112 "stm_expand.m"
    {
#line 1112 "stm_expand.m"
      transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RethrowBranch_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55);
    }
#line 1115 "stm_expand.m"
    {
#line 1115 "stm_expand.m"
      transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
#line 1118 "stm_expand.m"
    {
#line 1118 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1117 "stm_expand.m"
    {
#line 1117 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__RethrowBranch_20, &transform_hlds__stm_expand__FalseGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
#line 1121 "stm_expand.m"
    {
#line 1121 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1120 "stm_expand.m"
    {
#line 1120 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__TrueGoal_19, transform_hlds__stm_expand__FalseGoal_22, &transform_hlds__stm_expand__IfThenElseGoal_23, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);
    }
#line 15637 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1123 "stm_expand.m"
    {
#line 1123 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_15));
#line 1123 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "stm_expand.m"
    }
#line 1124 "stm_expand.m"
    {
#line 1124 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__IfThenElseGoal_23));
#line 1124 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "stm_expand.m"
    }
#line 1123 "stm_expand.m"
    {
#line 1123 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__V_65_65);
    }
#line 1123 "stm_expand.m"
    {
#line 1123 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__V_62_62, transform_hlds__stm_expand__V_64_64);
    }
#line 1123 "stm_expand.m"
    {
#line 1123 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__Goal_12);
#line 1123 "stm_expand.m"
      return;
    }
#line 1098 "stm_expand.m"
  }
#line 1093 "stm_expand.m"
}

#line 1068 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_6,
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_7,
#line 1068 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 1068 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 1068 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
#line 1068 "stm_expand.m"
{
#line 1071 "stm_expand.m"
  {
#line 1071 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__BlockGoal_10;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnlockGoal_11;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockAndValidateGoals_12;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateCall_13;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_74;
#line 1071 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_75;
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 2244 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_78_78;
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 2244 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_81_81;

#line 1072 "stm_expand.m"
    {
#line 1072 "stm_expand.m"
      transform_hlds__stm_expand__V_16_16 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1073 "stm_expand.m"
    {
#line 1073 "stm_expand.m"
      transform_hlds__stm_expand__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
#line 1073 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "stm_expand.m"
    }
#line 1074 "stm_expand.m"
    {
#line 1074 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__stm_expand__StmVar_6);
    }
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 0)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 1)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 2)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 3)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 4)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 5)));
#line 2244 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 6)));
#line 2246 "stm_expand.m"
    {
#line 2246 "stm_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__V_16_16, (MR_String) "stm_block", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__ModuleInfo_75, transform_hlds__stm_expand__Context_74, &transform_hlds__stm_expand__BlockGoal_10);
    }
#line 1075 "stm_expand.m"
    {
#line 1075 "stm_expand.m"
      transform_hlds__stm_expand__V_27_27 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1077 "stm_expand.m"
    {
#line 1077 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1075 "stm_expand.m"
    {
#line 1075 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_27_27, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__UnlockGoal_11, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36);
    }
#line 1078 "stm_expand.m"
    {
#line 1078 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_6, (MR_Integer) 0, transform_hlds__stm_expand__BlockGoal_10, transform_hlds__stm_expand__UnlockGoal_11, &transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
#line 1080 "stm_expand.m"
    {
#line 1080 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1083 "stm_expand.m"
    {
#line 1083 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
#line 1083 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1083 "stm_expand.m"
    }
#line 1083 "stm_expand.m"
    {
#line 1083 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 1083 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1083 "stm_expand.m"
    }
#line 1083 "stm_expand.m"
    {
#line 1083 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_50_50);
    }
#line 1080 "stm_expand.m"
    {
#line 1080 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_39_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_47_47, &transform_hlds__stm_expand__DropStateCall_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
#line 1085 "stm_expand.m"
    {
#line 1085 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_7));
#line 1085 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "stm_expand.m"
    }
#line 1085 "stm_expand.m"
    {
#line 1085 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_13));
#line 1085 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__V_58_58));
#line 1085 "stm_expand.m"
    }
#line 1085 "stm_expand.m"
    {
#line 1085 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__V_57_57);
    }
#line 1085 "stm_expand.m"
    {
#line 1085 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_56_56, transform_hlds__stm_expand__Goal_8);
#line 1085 "stm_expand.m"
      return;
    }
#line 1071 "stm_expand.m"
  }
#line 1068 "stm_expand.m"
}

#line 1040 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
#line 1040 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1040 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
#line 1040 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22)
#line 1040 "stm_expand.m"
{
#line 1045 "stm_expand.m"
  {
#line 1045 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoVar_14;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_15;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_17;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateCall_18;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_19;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goals_20;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 0)));
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 1)));
#line 1045 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 2)));
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 3)));
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 4)));
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 5)));
#line 1045 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 6)));
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_77;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_78;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_79;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_80;
#line 1045 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_81;

#line 2351 "stm_expand.m"
    {
#line 2351 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_70, transform_hlds__stm_expand__PredInfo0_73, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__PolyInfo0_77);
    }
#line 2352 "stm_expand.m"
    {
#line 2352 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__Context_75, &transform_hlds__stm_expand__TypeInfoVar_14, &transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__PolyInfo0_77, &transform_hlds__stm_expand__PolyInfo_78);
    }
#line 2354 "stm_expand.m"
    {
#line 2354 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_78, transform_hlds__stm_expand__PredInfo0_73, &transform_hlds__stm_expand__PredInfo_79, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__ProcInfo_80, &transform_hlds__stm_expand__ModuleInfo_81);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_81));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_71));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_72));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_79));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_80));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_75));
#line 2356 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_76));
#line 2356 "stm_expand.m"
    }
#line 1047 "stm_expand.m"
    {
#line 1047 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1048 "stm_expand.m"
    {
#line 1048 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionVar_9));
#line 1048 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1048 "stm_expand.m"
    }
#line 1048 "stm_expand.m"
    {
#line 1048 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_14));
#line 1048 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
#line 1048 "stm_expand.m"
    }
#line 1049 "stm_expand.m"
    {
#line 1049 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_30_30);
    }
#line 1047 "stm_expand.m"
    {
#line 1047 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_24_24, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_32_32, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
#line 1051 "stm_expand.m"
    {
#line 1051 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16));
#line 1051 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "stm_expand.m"
    }
#line 1051 "stm_expand.m"
    {
#line 1051 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__V_40_40);
    }
#line 1051 "stm_expand.m"
    {
#line 1051 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_39_39, &transform_hlds__stm_expand__Goal_ValidBranch_17);
    }
#line 1053 "stm_expand.m"
    {
#line 1053 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 1055 "stm_expand.m"
    {
#line 1055 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 1055 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "stm_expand.m"
    }
#line 1056 "stm_expand.m"
    {
#line 1056 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 1056 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1056 "stm_expand.m"
    }
#line 1056 "stm_expand.m"
    {
#line 1056 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1056 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "stm_expand.m"
    }
#line 1056 "stm_expand.m"
    {
#line 1056 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_53_53);
    }
#line 1053 "stm_expand.m"
    {
#line 1053 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_42_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_48_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_50_50, &transform_hlds__stm_expand__DropStateCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51);
    }
#line 1058 "stm_expand.m"
    {
#line 1058 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__RecursiveCall_11));
#line 1058 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "stm_expand.m"
    }
#line 1058 "stm_expand.m"
    {
#line 1058 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_18));
#line 1058 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 1058 "stm_expand.m"
    }
#line 1058 "stm_expand.m"
    {
#line 1058 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_59_59, &transform_hlds__stm_expand__Goal_InvalidBranch_19);
    }
#line 1059 "stm_expand.m"
    {
#line 1059 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_8, (MR_Integer) 1, transform_hlds__stm_expand__Goal_ValidBranch_17, transform_hlds__stm_expand__Goal_InvalidBranch_19, &transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);
    }
#line 1061 "stm_expand.m"
    {
#line 1061 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__Goal_12);
#line 1061 "stm_expand.m"
      return;
    }
#line 1045 "stm_expand.m"
  }
#line 1040 "stm_expand.m"
}

#line 989 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 989 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 989 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 989 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
#line 989 "stm_expand.m"
{
#line 989 "stm_expand.m"
  {
#line 989 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv5_HeadVar__3_80;
#line 989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_HeadVar__5_82;

#line 989 "stm_expand.m"
    {
#line 989 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__989__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv5_HeadVar__3_80, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv4_HeadVar__5_82);
    }
#line 989 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv5_HeadVar__3_80));
#line 989 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv4_HeadVar__5_82));
#line 989 "stm_expand.m"
  }
#line 989 "stm_expand.m"
}

#line 975 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 975 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 975 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5)
#line 975 "stm_expand.m"
{
#line 975 "stm_expand.m"
  {
#line 975 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_HeadVar__2_51;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__3_52;
#line 975 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__5_54;

#line 975 "stm_expand.m"
    {
#line 975 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__975__1_5_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv2_HeadVar__2_51, &transform_hlds__stm_expand__conv1_HeadVar__3_52, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv0_HeadVar__5_54);
    }
#line 975 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv2_HeadVar__2_51));
#line 975 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__3_52));
#line 975 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__5_54));
#line 975 "stm_expand.m"
  }
#line 975 "stm_expand.m"
}

#line 959 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 959 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 959 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 959 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
#line 959 "stm_expand.m"
{
#line 964 "stm_expand.m"
  {
#line 964 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_119_119;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_120_120;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_121_121;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignValidConst_14;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidConstVar_15;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockCall_16;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidCalls_24;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVars_25;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateValidTests_26;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestValidGoals_29;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestValidCond_30;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ITEGoal_31;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86;
#line 964 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
#line 986 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78;
#line 995 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86;

#line 965 "stm_expand.m"
    {
#line 965 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 966 "stm_expand.m"
    {
#line 966 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 965 "stm_expand.m"
    {
#line 965 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[4]), &transform_hlds__stm_expand__AssignValidConst_14, &transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
#line 969 "stm_expand.m"
    {
#line 969 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 971 "stm_expand.m"
    {
#line 971 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 969 "stm_expand.m"
    {
#line 969 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_40_40, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_48_48, &transform_hlds__stm_expand__LockCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
#line 16335 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_119_119 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 16337 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 16339 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
#line 986 "stm_expand.m"
    {
#line 986 "stm_expand.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_121_121, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[6], transform_hlds__stm_expand__StmVars_8, &transform_hlds__stm_expand__ValidCalls_24, &transform_hlds__stm_expand__IsValidVars_25, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49)), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
    }
#line 986 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78 = ((MR_Word) transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
#line 989 "stm_expand.m"
    {
#line 989 "stm_expand.m"
      transform_hlds__stm_expand__CreateValidTests_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[1]));
#line 989 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2));
#line 989 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 3) = ((MR_Box) (transform_hlds__stm_expand__IsValidConstVar_15));
#line 989 "stm_expand.m"
    }
#line 995 "stm_expand.m"
    {
#line 995 "stm_expand.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeCtorInfo_121_121, transform_hlds__stm_expand__CreateValidTests_26, transform_hlds__stm_expand__IsValidVars_25, &transform_hlds__stm_expand__TestValidGoals_29, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78)), &transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
    }
#line 995 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86 = ((MR_Word) transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
#line 997 "stm_expand.m"
    {
#line 997 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TestValidGoals_29, &transform_hlds__stm_expand__TestValidCond_30);
    }
#line 999 "stm_expand.m"
    {
#line 999 "stm_expand.m"
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__TestValidCond_30, transform_hlds__stm_expand__ValidGoal_10, transform_hlds__stm_expand__InvalidGoal_11, (MR_Integer) 4, (MR_Integer) 2, &transform_hlds__stm_expand__ITEGoal_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90);
    }
#line 1009 "stm_expand.m"
    if ((transform_hlds__stm_expand__UnlockAfterwards_9 == (MR_Integer) 0))
#line 1010 "stm_expand.m"
      {
#line 1010 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_91_91;
#line 1010 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_92_92;
#line 1010 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_93_93;

#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
#line 1011 "stm_expand.m"
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1011 "stm_expand.m"
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "stm_expand.m"
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_91_91, transform_hlds__stm_expand__V_93_93);
        }
#line 1011 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
#line 1010 "stm_expand.m"
      }
#line 1009 "stm_expand.m"
    else
#line 1003 "stm_expand.m"
      {
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__UnlockCall_32;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_95_95;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_103_103;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_105_105;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_106_106;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_107_107;
#line 1003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_108_108;

#line 1004 "stm_expand.m"
        {
#line 1004 "stm_expand.m"
          transform_hlds__stm_expand__V_95_95 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
        }
#line 1006 "stm_expand.m"
        {
#line 1006 "stm_expand.m"
          transform_hlds__stm_expand__V_103_103 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 1004 "stm_expand.m"
        {
#line 1004 "stm_expand.m"
          transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_95_95, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_103_103, &transform_hlds__stm_expand__UnlockCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
        }
#line 1007 "stm_expand.m"
        {
#line 1007 "stm_expand.m"
          transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
#line 1007 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
#line 1007 "stm_expand.m"
        }
#line 1007 "stm_expand.m"
        {
#line 1007 "stm_expand.m"
          transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
#line 1007 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 1007 "stm_expand.m"
        }
#line 1008 "stm_expand.m"
        {
#line 1008 "stm_expand.m"
          transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
#line 1008 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1008 "stm_expand.m"
        }
#line 1008 "stm_expand.m"
        {
#line 1008 "stm_expand.m"
          transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_32));
#line 1008 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
#line 1008 "stm_expand.m"
        }
#line 1007 "stm_expand.m"
        {
#line 1007 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_105_105, transform_hlds__stm_expand__V_107_107);
        }
#line 1003 "stm_expand.m"
      }
#line 964 "stm_expand.m"
  }
#line 959 "stm_expand.m"
}

#line 924 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 924 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 924 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 924 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
#line 924 "stm_expand.m"
{
#line 929 "stm_expand.m"
  {
#line 929 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVar_14;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockCall_15;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidCall_16;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_17;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 929 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;

#line 930 "stm_expand.m"
    {
#line 930 "stm_expand.m"
      transform_hlds__stm_expand__V_21_21 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 930 "stm_expand.m"
    {
#line 930 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_21_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), &transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23);
    }
#line 932 "stm_expand.m"
    {
#line 932 "stm_expand.m"
      transform_hlds__stm_expand__V_25_25 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 934 "stm_expand.m"
    {
#line 934 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 932 "stm_expand.m"
    {
#line 932 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_25_25, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_33_33, &transform_hlds__stm_expand__LockCall_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 935 "stm_expand.m"
    {
#line 935 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
    }
#line 937 "stm_expand.m"
    {
#line 937 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
#line 937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "stm_expand.m"
    }
#line 937 "stm_expand.m"
    {
#line 937 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 937 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 937 "stm_expand.m"
    }
#line 938 "stm_expand.m"
    {
#line 938 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 938 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 938 "stm_expand.m"
    }
#line 939 "stm_expand.m"
    {
#line 939 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
#line 939 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "stm_expand.m"
    }
#line 939 "stm_expand.m"
    {
#line 939 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 939 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "stm_expand.m"
    }
#line 938 "stm_expand.m"
    {
#line 938 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 938 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 938 "stm_expand.m"
    }
#line 938 "stm_expand.m"
    {
#line 938 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_47_47);
    }
#line 935 "stm_expand.m"
    {
#line 935 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__ValidCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 2) = ((MR_Box) (transform_hlds__stm_expand__ValidGoal_10));
#line 942 "stm_expand.m"
    }
#line 943 "stm_expand.m"
    {
#line 943 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
#line 943 "stm_expand.m"
    {
#line 943 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 2) = ((MR_Box) (transform_hlds__stm_expand__InvalidGoal_11));
#line 943 "stm_expand.m"
    }
#line 943 "stm_expand.m"
    {
#line 943 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "stm_expand.m"
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 942 "stm_expand.m"
    }
#line 941 "stm_expand.m"
    {
#line 941 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__V_56_56, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59);
    }
#line 951 "stm_expand.m"
    if ((transform_hlds__stm_expand__UnlockAfterwards_9 == (MR_Integer) 0))
#line 952 "stm_expand.m"
      {
#line 952 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_68_68;
#line 952 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_69_69;

#line 953 "stm_expand.m"
        {
#line 953 "stm_expand.m"
          transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "stm_expand.m"
        }
#line 953 "stm_expand.m"
        {
#line 953 "stm_expand.m"
          transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 953 "stm_expand.m"
        }
#line 953 "stm_expand.m"
        {
#line 953 "stm_expand.m"
          MR_Word base;
#line 953 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
#line 953 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 953 "stm_expand.m"
        }
#line 953 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 952 "stm_expand.m"
      }
#line 951 "stm_expand.m"
    else
#line 946 "stm_expand.m"
      {
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__UnlockCall_18;
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_71_71;
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_79_79;
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_81_81;
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_82_82;
#line 946 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_83_83;

#line 947 "stm_expand.m"
        {
#line 947 "stm_expand.m"
          transform_hlds__stm_expand__V_71_71 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
        }
#line 949 "stm_expand.m"
        {
#line 949 "stm_expand.m"
          transform_hlds__stm_expand__V_79_79 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 947 "stm_expand.m"
        {
#line 947 "stm_expand.m"
          transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_71_71, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__UnlockCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);
        }
#line 950 "stm_expand.m"
        {
#line 950 "stm_expand.m"
          transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 950 "stm_expand.m"
        }
#line 950 "stm_expand.m"
        {
#line 950 "stm_expand.m"
          transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_18));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
#line 950 "stm_expand.m"
        }
#line 950 "stm_expand.m"
        {
#line 950 "stm_expand.m"
          transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 950 "stm_expand.m"
        }
#line 950 "stm_expand.m"
        {
#line 950 "stm_expand.m"
          MR_Word base;
#line 950 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
#line 950 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
#line 950 "stm_expand.m"
        }
#line 946 "stm_expand.m"
      }
#line 929 "stm_expand.m"
  }
#line 924 "stm_expand.m"
}

#line 875 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_9,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
#line 875 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 875 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 875 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 875 "stm_expand.m"
{
#line 880 "stm_expand.m"
  {
#line 880 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnivPayloadVar_16;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignGoal_17;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackExceptVar_18;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnivCall_19;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestGoal_21;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondGoal_22;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_82_82;
#line 892 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___UnifyCall_20;

#line 881 "stm_expand.m"
    {
#line 881 "stm_expand.m"
      transform_hlds__stm_expand__V_27_27 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 881 "stm_expand.m"
    {
#line 881 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_27_27, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[0]), &transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29);
    }
#line 884 "stm_expand.m"
    {
#line 884 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 883 "stm_expand.m"
    {
#line 883 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackExceptCons_11, transform_hlds__stm_expand__V_31_31, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[1]), &transform_hlds__stm_expand__AssignGoal_17, &transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
#line 886 "stm_expand.m"
    {
#line 886 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__prim_data__mercury_univ_module_0_f_0();
    }
#line 888 "stm_expand.m"
    {
#line 888 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "stm_expand.m"
    }
#line 888 "stm_expand.m"
    {
#line 888 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 888 "stm_expand.m"
    }
#line 888 "stm_expand.m"
    {
#line 888 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 888 "stm_expand.m"
    }
#line 889 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 889 "stm_expand.m"
    {
#line 889 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 889 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 889 "stm_expand.m"
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 890 "stm_expand.m"
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "stm_expand.m"
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "stm_expand.m"
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 890 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
#line 890 "stm_expand.m"
    }
#line 889 "stm_expand.m"
    {
#line 889 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
#line 889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 889 "stm_expand.m"
    }
#line 889 "stm_expand.m"
    {
#line 889 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_49_49);
    }
#line 886 "stm_expand.m"
    {
#line 886 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "type_to_univ", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[2]), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__UnivCall_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 892 "stm_expand.m"
    {
#line 892 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackExceptVar_18));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 894 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 894 "stm_expand.m"
    }
#line 895 "stm_expand.m"
    {
#line 895 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 892 "stm_expand.m"
    {
#line 892 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_63_63, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_69_69, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand___UnifyCall_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72);
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
#line 896 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 1) = ((MR_Box) (transform_hlds__stm_expand__V_79_79));
#line 896 "stm_expand.m"
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__V_76_76, &transform_hlds__stm_expand__TestGoal_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77);
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__TestGoal_21));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 900 "stm_expand.m"
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivCall_19));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 900 "stm_expand.m"
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignGoal_17));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
#line 900 "stm_expand.m"
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_80_80, &transform_hlds__stm_expand__CondGoal_22);
    }
#line 905 "stm_expand.m"
    {
#line 905 "stm_expand.m"
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__CondGoal_22, transform_hlds__stm_expand__TrueGoal_12, transform_hlds__stm_expand__FalseGoal_13, (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
#line 905 "stm_expand.m"
      return;
    }
#line 880 "stm_expand.m"
  }
#line 875 "stm_expand.m"
}

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 574 "stm_expand.m"
{
#line 574 "stm_expand.m"
  {
#line 574 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 574 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 574 "stm_expand.m"
    {
#line 574 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 574 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 574 "stm_expand.m"
  }
#line 574 "stm_expand.m"
}

#line 829 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_10,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_11,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
#line 829 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 829 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
#line 829 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31)
#line 829 "stm_expand.m"
{
#line 834 "stm_expand.m"
  {
#line 834 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_62_62;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_63_63;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_64_64;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_86;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperCall_16;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_18;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_19;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_20;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_21;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_22;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_23;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyIOAssign_25;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoal_27;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_29;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_70;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_71;
#line 834 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_72;
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_72;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_82_82;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;

#line 835 "stm_expand.m"
    {
#line 835 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_pred_6_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__WrapperCall_16, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__OrElseGoals_13, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32);
    }
#line 17383 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_24_86 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 576 "stm_expand.m"
    {
#line 576 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[3], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_70);
    }
#line 577 "stm_expand.m"
    {
#line 577 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_71 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_70);
    }
#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_72 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
#line 578 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_72 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_72);
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 0)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 1)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 2)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 3)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 4)));
#line 579 "stm_expand.m"
    {
#line 579 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_71));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 2) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 3) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 4) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 579 "stm_expand.m"
    }
#line 839 "stm_expand.m"
    {
#line 839 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputVars_18, &transform_hlds__stm_expand__OutputVars_19);
    }
#line 840 "stm_expand.m"
    {
#line 840 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__InputTypes_20, &transform_hlds__stm_expand__OutputTypes_21);
    }
#line 841 "stm_expand.m"
    {
#line 841 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputModes_22, &transform_hlds__stm_expand__OutputModes_23);
    }
#line 17443 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_62_62 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_11));
#line 843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "stm_expand.m"
    }
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_10));
#line 843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 843 "stm_expand.m"
    }
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__OutputVars_19, transform_hlds__stm_expand__V_40_40);
    }
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__InputVars_18, transform_hlds__stm_expand__V_39_39);
    }
#line 17475 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "stm_expand.m"
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 844 "stm_expand.m"
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__OutputTypes_21, transform_hlds__stm_expand__V_44_44);
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__InputTypes_20, transform_hlds__stm_expand__V_43_43);
    }
#line 17517 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 845 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "stm_expand.m"
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 845 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 845 "stm_expand.m"
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__OutputModes_23, transform_hlds__stm_expand__V_50_50);
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__InputModes_22, transform_hlds__stm_expand__V_49_49);
    }
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "toplevel", transform_hlds__stm_expand__AtomicGoal_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_57_57));
#line 848 "stm_expand.m"
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__OuterUO_11, transform_hlds__stm_expand__OuterDI_10, transform_hlds__stm_expand__V_55_55, &transform_hlds__stm_expand__CopyIOAssign_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
#line 850 "stm_expand.m"
    {
#line 850 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyIOAssign_25));
#line 850 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "stm_expand.m"
    }
#line 850 "stm_expand.m"
    {
#line 850 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__WrapperCall_16));
#line 850 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
#line 850 "stm_expand.m"
    }
#line 850 "stm_expand.m"
    {
#line 850 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__TopLevelGoal_27);
    }
#line 852 "stm_expand.m"
    {
#line 852 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__TopLevelGoal_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
#line 853 "stm_expand.m"
    {
#line 853 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo_29);
    }
#line 854 "stm_expand.m"
    {
#line 854 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);
#line 854 "stm_expand.m"
      return;
    }
#line 834 "stm_expand.m"
  }
#line 829 "stm_expand.m"
}

#line 690 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
#line 690 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
#line 690 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInUO_12)
#line 690 "stm_expand.m"
{
#line 721 "stm_expand.m"
  {
#line 721 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 721 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalList0_13;
#line 721 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));
#line 695 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
#line 695 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 695 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = ((((MR_tag((MR_Word) transform_hlds__stm_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 695 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 695 "stm_expand.m"
      {
#line 695 "stm_expand.m"
        transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 1)));
#line 695 "stm_expand.m"
        transform_hlds__stm_expand__GoalList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 2)));
#line 695 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_29_29 == (MR_Integer) 0);
#line 695 "stm_expand.m"
      }
#line 721 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 699 "stm_expand.m"
      if ((transform_hlds__stm_expand__GoalList0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "stm_expand.m"
        {
#line 698 "stm_expand.m"
          {
#line 698 "stm_expand.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "empty conjunction");
#line 698 "stm_expand.m"
            return;
          }
#line 697 "stm_expand.m"
        }
#line 699 "stm_expand.m"
      else
#line 700 "stm_expand.m"
        {
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeInfo_41_41;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__GoalList_17;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutVarPair_18;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInVarPair_19;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInDI_20;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInUO_21;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutDI_22;
#line 700 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutUO_23;
#line 702 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv0_MaybeInDI_20;
#line 703 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv1_MaybeInUO_21;
#line 704 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv2_MaybeOutDI_22;
#line 705 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv3_MaybeOutUO_23;
#line 717 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmInDI0_24;
#line 717 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmInUO0_25;
#line 717 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmOutDI0_26;
#line 717 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmOutUO0_27;

#line 701 "stm_expand.m"
          {
#line 701 "stm_expand.m"
            transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__GoalList0_13, &transform_hlds__stm_expand__GoalList_17, &transform_hlds__stm_expand__MaybeOutVarPair_18, &transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 17737 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeInfo_41_41 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[2];
#line 702 "stm_expand.m"
          {
#line 702 "stm_expand.m"
            transform_hlds__stm_expand__conv0_MaybeInDI_20 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 702 "stm_expand.m"
          transform_hlds__stm_expand__MaybeInDI_20 = ((MR_Word) transform_hlds__stm_expand__conv0_MaybeInDI_20);
#line 703 "stm_expand.m"
          {
#line 703 "stm_expand.m"
            transform_hlds__stm_expand__conv1_MaybeInUO_21 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 703 "stm_expand.m"
          transform_hlds__stm_expand__MaybeInUO_21 = ((MR_Word) transform_hlds__stm_expand__conv1_MaybeInUO_21);
#line 704 "stm_expand.m"
          {
#line 704 "stm_expand.m"
            transform_hlds__stm_expand__conv2_MaybeOutDI_22 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
#line 704 "stm_expand.m"
          transform_hlds__stm_expand__MaybeOutDI_22 = ((MR_Word) transform_hlds__stm_expand__conv2_MaybeOutDI_22);
#line 705 "stm_expand.m"
          {
#line 705 "stm_expand.m"
            transform_hlds__stm_expand__conv3_MaybeOutUO_23 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
#line 705 "stm_expand.m"
          transform_hlds__stm_expand__MaybeOutUO_23 = ((MR_Word) transform_hlds__stm_expand__conv3_MaybeOutUO_23);
#line 707 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInDI_20)) == (MR_mktag((MR_Integer) 1)));
#line 707 "stm_expand.m"
          if (transform_hlds__stm_expand__succeeded)
#line 707 "stm_expand.m"
            {
#line 707 "stm_expand.m"
              transform_hlds__stm_expand__StmInDI0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_20, (MR_Integer) 0)));
#line 708 "stm_expand.m"
              transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInUO_21)) == (MR_mktag((MR_Integer) 1)));
#line 708 "stm_expand.m"
              if (transform_hlds__stm_expand__succeeded)
#line 708 "stm_expand.m"
                {
#line 708 "stm_expand.m"
                  transform_hlds__stm_expand__StmInUO0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_21, (MR_Integer) 0)));
#line 709 "stm_expand.m"
                  transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutDI_22)) == (MR_mktag((MR_Integer) 1)));
#line 709 "stm_expand.m"
                  if (transform_hlds__stm_expand__succeeded)
#line 709 "stm_expand.m"
                    {
#line 709 "stm_expand.m"
                      transform_hlds__stm_expand__StmOutDI0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_22, (MR_Integer) 0)));
#line 710 "stm_expand.m"
                      transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutUO_23)) == (MR_mktag((MR_Integer) 1)));
#line 710 "stm_expand.m"
                      if (transform_hlds__stm_expand__succeeded)
#line 710 "stm_expand.m"
                        transform_hlds__stm_expand__StmOutUO0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_23, (MR_Integer) 0)));
#line 709 "stm_expand.m"
                    }
#line 708 "stm_expand.m"
                }
#line 707 "stm_expand.m"
            }
#line 717 "stm_expand.m"
          if (transform_hlds__stm_expand__succeeded)
#line 712 "stm_expand.m"
            {
#line 712 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__V_30_30;

#line 712 "stm_expand.m"
              *transform_hlds__stm_expand__StmInDI_11 = transform_hlds__stm_expand__StmInDI0_24;
#line 713 "stm_expand.m"
              *transform_hlds__stm_expand__StmInUO_12 = transform_hlds__stm_expand__StmInUO0_25;
#line 714 "stm_expand.m"
              *transform_hlds__stm_expand__StmOutDI_9 = transform_hlds__stm_expand__StmOutDI0_26;
#line 715 "stm_expand.m"
              *transform_hlds__stm_expand__StmOutUO_10 = transform_hlds__stm_expand__StmOutUO0_27;
#line 716 "stm_expand.m"
              {
#line 716 "stm_expand.m"
                transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 716 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 716 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 716 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalList_17));
#line 716 "stm_expand.m"
              }
#line 716 "stm_expand.m"
              {
#line 716 "stm_expand.m"
                MR_Word base;
#line 716 "stm_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 716 "stm_expand.m"
                *transform_hlds__stm_expand__Goal_8 = base;
#line 716 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 716 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
#line 716 "stm_expand.m"
              }
#line 712 "stm_expand.m"
            }
#line 717 "stm_expand.m"
          else
#line 718 "stm_expand.m"
            {
#line 718 "stm_expand.m"
              {
#line 718 "stm_expand.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "Vars not extracted");
#line 718 "stm_expand.m"
                return;
              }
#line 718 "stm_expand.m"
            }
#line 700 "stm_expand.m"
        }
#line 721 "stm_expand.m"
    else
#line 722 "stm_expand.m"
      {
#line 722 "stm_expand.m"
        {
#line 722 "stm_expand.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "atomic_goal not a conj");
#line 722 "stm_expand.m"
          return;
        }
#line 722 "stm_expand.m"
      }
#line 721 "stm_expand.m"
  }
#line 690 "stm_expand.m"
}

#line 659 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
#line 659 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 659 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4)
#line 659 "stm_expand.m"
{
#line 663 "stm_expand.m"
  {
#line 663 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 663 "stm_expand.m"
    if ((transform_hlds__stm_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "stm_expand.m"
      {
#line 663 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[4];
#line 663 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__4_4 = *transform_hlds__stm_expand__HeadVar__3_3;
#line 663 "stm_expand.m"
      }
#line 663 "stm_expand.m"
    else
#line 664 "stm_expand.m"
      {
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__G_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Gs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutDI_12;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutUO_13;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInDI_14;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInUO_15;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_16;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutDI0_17;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutUO0_18;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInDI0_19;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInUO0_20;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_35_35;
#line 664 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_36_36;
#line 673 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__X_24;
#line 673 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_25;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_37_37;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_38_38;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_39_39;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_40_40;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_42_42;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_51_51;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_55_55;
#line 667 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_56_56;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_28_28;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_21_21;
#line 667 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_22_22;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_26_26;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_27_27;
#line 667 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_23_23;

#line 665 "stm_expand.m"
        {
#line 665 "stm_expand.m"
          transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__Gs_10, &transform_hlds__stm_expand__Goals0_16, &transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__V_36_36);
        }
#line 665 "stm_expand.m"
        transform_hlds__stm_expand__MaybeOutDI0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 0)));
#line 665 "stm_expand.m"
        transform_hlds__stm_expand__MaybeOutUO0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 1)));
#line 666 "stm_expand.m"
        transform_hlds__stm_expand__MaybeInDI0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 0)));
#line 666 "stm_expand.m"
        transform_hlds__stm_expand__MaybeInUO0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 1)));
#line 667 "stm_expand.m"
        transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 0)));
#line 667 "stm_expand.m"
        transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 1)));
#line 667 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_37_37)) == (MR_mktag((MR_Integer) 2)));
#line 667 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 667 "stm_expand.m"
          {
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 0)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 1)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 2)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 3)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 4)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 5)));
#line 667 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 667 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 667 "stm_expand.m"
              {
#line 667 "stm_expand.m"
                transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 0)));
#line 667 "stm_expand.m"
                transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 1)));
#line 667 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 667 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 667 "stm_expand.m"
                  {
#line 667 "stm_expand.m"
                    transform_hlds__stm_expand__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 0)));
#line 667 "stm_expand.m"
                    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 1)));
#line 667 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 667 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 667 "stm_expand.m"
                      {
#line 667 "stm_expand.m"
                        transform_hlds__stm_expand__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, (MR_Integer) 0)));
#line 667 "stm_expand.m"
                        transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, (MR_Integer) 1)));
#line 667 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 667 "stm_expand.m"
                          {
#line 2604 "stm_expand.m"
                            {
#line 2604 "stm_expand.m"
                              transform_hlds__stm_expand__V_55_55 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
                            }
#line 2604 "stm_expand.m"
                            transform_hlds__stm_expand__V_56_56 = (MR_String) "stm_from_outer_to_inner";
#line 2604 "stm_expand.m"
                            {
#line 2604 "stm_expand.m"
                              transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2604 "stm_expand.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 2604 "stm_expand.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 2604 "stm_expand.m"
                            }
#line 667 "stm_expand.m"
                            {
#line 667 "stm_expand.m"
                              transform_hlds__stm_expand__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__V_51_51);
                            }
#line 667 "stm_expand.m"
                          }
#line 667 "stm_expand.m"
                      }
#line 667 "stm_expand.m"
                  }
#line 667 "stm_expand.m"
              }
#line 667 "stm_expand.m"
          }
#line 673 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 668 "stm_expand.m"
          {
#line 668 "stm_expand.m"
            {
#line 668 "stm_expand.m"
              transform_hlds__stm_expand__MaybeInDI_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_14, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25));
#line 668 "stm_expand.m"
            }
#line 669 "stm_expand.m"
            transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
#line 670 "stm_expand.m"
            {
#line 670 "stm_expand.m"
              transform_hlds__stm_expand__MaybeOutDI_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_12, 0) = ((MR_Box) (transform_hlds__stm_expand__X_24));
#line 670 "stm_expand.m"
            }
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
#line 672 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__Goals0_16;
#line 668 "stm_expand.m"
          }
#line 673 "stm_expand.m"
        else
#line 679 "stm_expand.m"
          {
#line 679 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__X_49;
#line 679 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_50;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 0)));
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_44_44;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_45_45;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_46_46;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_47_47;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_48_48;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_52_52;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 673 "stm_expand.m"
            MR_String transform_hlds__stm_expand__V_58_58;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 1)));
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_29_29;
#line 673 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_30_30;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_32_32;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_33_33;
#line 673 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_31_31;

#line 673 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_43_43)) == (MR_mktag((MR_Integer) 2)));
#line 673 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 673 "stm_expand.m"
              {
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 0)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 1)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 2)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 3)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 4)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 5)));
#line 673 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 673 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 673 "stm_expand.m"
                  {
#line 673 "stm_expand.m"
                    transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 0)));
#line 673 "stm_expand.m"
                    transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 1)));
#line 673 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 673 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 673 "stm_expand.m"
                      {
#line 673 "stm_expand.m"
                        transform_hlds__stm_expand__V_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, (MR_Integer) 0)));
#line 673 "stm_expand.m"
                        transform_hlds__stm_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, (MR_Integer) 1)));
#line 673 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 673 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 673 "stm_expand.m"
                          {
#line 673 "stm_expand.m"
                            transform_hlds__stm_expand__X_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, (MR_Integer) 0)));
#line 673 "stm_expand.m"
                            transform_hlds__stm_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, (MR_Integer) 1)));
#line 673 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 673 "stm_expand.m"
                              {
#line 2602 "stm_expand.m"
                                {
#line 2602 "stm_expand.m"
                                  transform_hlds__stm_expand__V_57_57 = mdbcomp__prim_data__mercury_stm_builtin_module_0_f_0();
                                }
#line 2602 "stm_expand.m"
                                transform_hlds__stm_expand__V_58_58 = (MR_String) "stm_from_inner_to_outer";
#line 2602 "stm_expand.m"
                                {
#line 2602 "stm_expand.m"
                                  transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2602 "stm_expand.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_57_57));
#line 2602 "stm_expand.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (transform_hlds__stm_expand__V_58_58));
#line 2602 "stm_expand.m"
                                }
#line 673 "stm_expand.m"
                                {
#line 673 "stm_expand.m"
                                  transform_hlds__stm_expand__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__stm_expand__V_48_48, transform_hlds__stm_expand__V_52_52);
                                }
#line 673 "stm_expand.m"
                              }
#line 673 "stm_expand.m"
                          }
#line 673 "stm_expand.m"
                      }
#line 673 "stm_expand.m"
                  }
#line 673 "stm_expand.m"
              }
#line 679 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 674 "stm_expand.m"
              {
#line 674 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
#line 675 "stm_expand.m"
                {
#line 675 "stm_expand.m"
                  transform_hlds__stm_expand__MaybeInUO_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_15, 0) = ((MR_Box) (transform_hlds__stm_expand__V_50));
#line 675 "stm_expand.m"
                }
#line 676 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
#line 677 "stm_expand.m"
                {
#line 677 "stm_expand.m"
                  transform_hlds__stm_expand__MaybeOutUO_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_13, 0) = ((MR_Box) (transform_hlds__stm_expand__X_49));
#line 677 "stm_expand.m"
                }
#line 678 "stm_expand.m"
                *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__Goals0_16;
#line 674 "stm_expand.m"
              }
#line 679 "stm_expand.m"
            else
#line 680 "stm_expand.m"
              {
#line 680 "stm_expand.m"
                {
#line 680 "stm_expand.m"
                  MR_Word base;
#line 680 "stm_expand.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__2_2 = base;
#line 680 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__G_9));
#line 680 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals0_16));
#line 680 "stm_expand.m"
                }
#line 681 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
#line 682 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
#line 683 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
#line 684 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
#line 680 "stm_expand.m"
              }
#line 679 "stm_expand.m"
          }
#line 664 "stm_expand.m"
        {
#line 664 "stm_expand.m"
          MR_Word base;
#line 664 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
#line 664 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutDI_12));
#line 664 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutUO_13));
#line 664 "stm_expand.m"
        }
#line 664 "stm_expand.m"
        {
#line 664 "stm_expand.m"
          MR_Word base;
#line 664 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__4_4 = base;
#line 664 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeInDI_14));
#line 664 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeInUO_15));
#line 664 "stm_expand.m"
        }
#line 664 "stm_expand.m"
      }
#line 663 "stm_expand.m"
  }
#line 659 "stm_expand.m"
}

#line 589 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goals_12,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
#line 589 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
#line 589 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
#line 589 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28)
#line 589 "stm_expand.m"
{
#line 601 "stm_expand.m"
  {
#line 601 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 596 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 596 "stm_expand.m"
      {
#line 597 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerDIs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 598 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerUOs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "stm_expand.m"
      }
#line 601 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 600 "stm_expand.m"
      {
#line 600 "stm_expand.m"
        *transform_hlds__stm_expand__StmGoalVarList_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27;
#line 600 "stm_expand.m"
      }
#line 601 "stm_expand.m"
    else
#line 614 "stm_expand.m"
      {
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadGoal_18;
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailGoals_19;
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadInnerDI_20;
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailInnerDIs_21;
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadInnerUO_22;
#line 614 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailInnerUOs_23;

#line 602 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Goals_12)) == (MR_mktag((MR_Integer) 1)));
#line 602 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 602 "stm_expand.m"
          {
#line 602 "stm_expand.m"
            transform_hlds__stm_expand__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 0)));
#line 602 "stm_expand.m"
            transform_hlds__stm_expand__TailGoals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 1)));
#line 603 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerDIs_13)) == (MR_mktag((MR_Integer) 1)));
#line 603 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 603 "stm_expand.m"
              {
#line 603 "stm_expand.m"
                transform_hlds__stm_expand__HeadInnerDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 0)));
#line 603 "stm_expand.m"
                transform_hlds__stm_expand__TailInnerDIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 1)));
#line 604 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerUOs_14)) == (MR_mktag((MR_Integer) 1)));
#line 604 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 604 "stm_expand.m"
                  {
#line 604 "stm_expand.m"
                    transform_hlds__stm_expand__HeadInnerUO_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 0)));
#line 604 "stm_expand.m"
                    transform_hlds__stm_expand__TailInnerUOs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 1)));
#line 604 "stm_expand.m"
                  }
#line 603 "stm_expand.m"
              }
#line 602 "stm_expand.m"
          }
#line 614 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 606 "stm_expand.m"
          {
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__TypeCtorInfo_44_69;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__IgnoreVarList_24;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmGoalVar_25;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmGoalVarList0_26;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_29_29;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__ModuleInfo_45;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVars0_46;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVars_47;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVarList_48;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalInfo_50;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet0_51;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet_52;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocals_53;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__LocalVarsList_54;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InputVarsList_55;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutputVarsList_59;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__LocalVars_60;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InputVars_61;
#line 606 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutputVars_62;
#line 628 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_63_63;
#line 628 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_64_64;
#line 628 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_65_65;
#line 628 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_66_66;
#line 628 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_67_67;
#line 628 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_68_68;
#line 634 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_49_49;
#line 529 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_56_56;
#line 529 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 529 "stm_expand.m"
            MR_Word transform_hlds__stm_expand___InputVarsList_58;

#line 606 "stm_expand.m"
            {
#line 606 "stm_expand.m"
              transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
#line 606 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__IgnoreVarList0_15));
#line 606 "stm_expand.m"
            }
#line 606 "stm_expand.m"
            {
#line 606 "stm_expand.m"
              transform_hlds__stm_expand__IgnoreVarList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
#line 606 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 1) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 606 "stm_expand.m"
            }
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__ModuleInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 0)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 1)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 2)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 3)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 4)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 5)));
#line 628 "stm_expand.m"
            transform_hlds__stm_expand__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 6)));
#line 630 "stm_expand.m"
            {
#line 630 "stm_expand.m"
              hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__HeadGoal_18, &transform_hlds__stm_expand__GoalVars0_46);
            }
#line 18528 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__TypeCtorInfo_44_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 631 "stm_expand.m"
            {
#line 631 "stm_expand.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalVars0_46, &transform_hlds__stm_expand__GoalVars_47);
            }
#line 632 "stm_expand.m"
            {
#line 632 "stm_expand.m"
              transform_hlds__stm_expand__GoalVarList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalVars_47);
            }
#line 634 "stm_expand.m"
            transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 0)));
#line 634 "stm_expand.m"
            transform_hlds__stm_expand__GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 1)));
#line 635 "stm_expand.m"
            {
#line 635 "stm_expand.m"
              transform_hlds__stm_expand__GoalNonLocalSet0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInfo_50);
            }
#line 636 "stm_expand.m"
            {
#line 636 "stm_expand.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalNonLocalSet0_51, &transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
#line 637 "stm_expand.m"
            {
#line 637 "stm_expand.m"
              transform_hlds__stm_expand__GoalNonLocals_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
#line 529 "stm_expand.m"
            {
#line 529 "stm_expand.m"
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalVarList_48, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__LocalVarsList_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__InputVarsList_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_56_56);
            }
#line 529 "stm_expand.m"
            {
#line 529 "stm_expand.m"
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalNonLocals_53, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_57_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand___InputVarsList_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__OutputVarsList_59);
            }
#line 644 "stm_expand.m"
            {
#line 644 "stm_expand.m"
              transform_hlds__stm_expand__LocalVars_60 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__LocalVarsList_54);
            }
#line 645 "stm_expand.m"
            {
#line 645 "stm_expand.m"
              transform_hlds__stm_expand__InputVars_61 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__InputVarsList_55);
            }
#line 646 "stm_expand.m"
            {
#line 646 "stm_expand.m"
              transform_hlds__stm_expand__OutputVars_62 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__OutputVarsList_59);
            }
#line 648 "stm_expand.m"
            {
#line 648 "stm_expand.m"
              transform_hlds__stm_expand__StmGoalVar_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 648 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_61));
#line 648 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 1) = ((MR_Box) (transform_hlds__stm_expand__LocalVars_60));
#line 648 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputVars_62));
#line 648 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 3) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
#line 648 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 4) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
#line 648 "stm_expand.m"
            }
#line 610 "stm_expand.m"
            {
#line 610 "stm_expand.m"
              transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, transform_hlds__stm_expand__TailGoals_19, transform_hlds__stm_expand__TailInnerDIs_21, transform_hlds__stm_expand__TailInnerUOs_23, transform_hlds__stm_expand__IgnoreVarList_24, &transform_hlds__stm_expand__StmGoalVarList0_26, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);
            }
#line 613 "stm_expand.m"
            {
#line 613 "stm_expand.m"
              MR_Word base;
#line 613 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "stm_expand.m"
              *transform_hlds__stm_expand__StmGoalVarList_16 = base;
#line 613 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVar_25));
#line 613 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVarList0_26));
#line 613 "stm_expand.m"
            }
#line 606 "stm_expand.m"
          }
#line 614 "stm_expand.m"
        else
#line 615 "stm_expand.m"
          {
#line 615 "stm_expand.m"
            {
#line 615 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/9", (MR_String) "lengths mismatch");
#line 615 "stm_expand.m"
              return;
            }
#line 615 "stm_expand.m"
          }
#line 614 "stm_expand.m"
      }
#line 601 "stm_expand.m"
  }
#line 589 "stm_expand.m"
}

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 574 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 574 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 574 "stm_expand.m"
{
#line 574 "stm_expand.m"
  {
#line 574 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 574 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 574 "stm_expand.m"
    {
#line 574 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__575__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 574 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 574 "stm_expand.m"
  }
#line 574 "stm_expand.m"
}

#line 570 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
#line 570 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_3,
#line 570 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalVar_4)
#line 570 "stm_expand.m"
{
#line 573 "stm_expand.m"
  {
#line 573 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_8;
#line 573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_9;
#line 573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_10;
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_10;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19;

#line 576 "stm_expand.m"
    {
#line 576 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[2], transform_hlds__stm_expand__GoalList_3, &transform_hlds__stm_expand__InputVarList_8);
    }
#line 577 "stm_expand.m"
    {
#line 577 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_8);
    }
#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_10 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__GoalList_3);
    }
#line 578 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_10 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_10);
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 0)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 1)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 2)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 3)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 4)));
#line 579 "stm_expand.m"
    {
#line 579 "stm_expand.m"
      MR_Word base;
#line 579 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "stm_expand.m"
      *transform_hlds__stm_expand__GoalVar_4 = base;
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_9));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 579 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
#line 579 "stm_expand.m"
    }
#line 573 "stm_expand.m"
  }
#line 570 "stm_expand.m"
}

#line 532 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
#line 532 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
#line 532 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10)
#line 532 "stm_expand.m"
{
#line 537 "stm_expand.m"
  while (MR_TRUE)
#line 537 "stm_expand.m"
    {
#line 537 "stm_expand.m"
      /* tailcall optimized into a loop */
#line 537 "stm_expand.m"
      {
#line 537 "stm_expand.m"
        MR_bool transform_hlds__stm_expand__succeeded;

#line 537 "stm_expand.m"
        if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "stm_expand.m"
          {
#line 537 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__10_10 = transform_hlds__stm_expand__HeadVar__9_9;
#line 537 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__8_8 = transform_hlds__stm_expand__HeadVar__7_7;
#line 537 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__6_6 = transform_hlds__stm_expand__HeadVar__5_5;
#line 537 "stm_expand.m"
          }
#line 537 "stm_expand.m"
        else
#line 539 "stm_expand.m"
          {
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InitVarInst_31;
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__FinalVarInst_32;
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;
#line 539 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;

#line 540 "stm_expand.m"
            {
#line 540 "stm_expand.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__InitInstmap_3, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__InitVarInst_31);
            }
#line 541 "stm_expand.m"
            {
#line 541 "stm_expand.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__FinalInstmap_4, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__FinalVarInst_32);
            }
#line 543 "stm_expand.m"
            {
#line 543 "stm_expand.m"
              transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
            }
#line 543 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 544 "stm_expand.m"
              {
#line 544 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
              }
#line 547 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 546 "stm_expand.m"
              {
#line 546 "stm_expand.m"
                {
#line 546 "stm_expand.m"
                  transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 546 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__5_5));
#line 546 "stm_expand.m"
                }
#line 546 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
#line 546 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
#line 546 "stm_expand.m"
              }
#line 547 "stm_expand.m"
            else
#line 552 "stm_expand.m"
              {
#line 548 "stm_expand.m"
                {
#line 548 "stm_expand.m"
                  transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                }
#line 548 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 549 "stm_expand.m"
                  {
#line 549 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                  }
#line 552 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 551 "stm_expand.m"
                  {
#line 551 "stm_expand.m"
                    {
#line 551 "stm_expand.m"
                      transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "stm_expand.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 551 "stm_expand.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__9_9));
#line 551 "stm_expand.m"
                    }
#line 551 "stm_expand.m"
                    transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
#line 551 "stm_expand.m"
                  }
#line 552 "stm_expand.m"
                else
#line 557 "stm_expand.m"
                  {
#line 553 "stm_expand.m"
                    {
#line 553 "stm_expand.m"
                      transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                    }
#line 553 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 554 "stm_expand.m"
                      {
#line 554 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                      }
#line 557 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 556 "stm_expand.m"
                      {
#line 556 "stm_expand.m"
                        transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "stm_expand.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 556 "stm_expand.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__7_7));
#line 556 "stm_expand.m"
                      }
#line 557 "stm_expand.m"
                    else
#line 558 "stm_expand.m"
                      {
#line 558 "stm_expand.m"
                        {
#line 558 "stm_expand.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
#line 558 "stm_expand.m"
                          return;
                        }
#line 558 "stm_expand.m"
                      }
#line 558 "stm_expand.m"
                    transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
#line 557 "stm_expand.m"
                  }
#line 558 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = transform_hlds__stm_expand__HeadVar__5_5;
#line 552 "stm_expand.m"
              }
#line 560 "stm_expand.m"
            /* direct tailcall eliminated */
#line 560 "stm_expand.m"
            {
#line 560 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__2__tmp_copy_2 = transform_hlds__stm_expand__Vars_25;
#line 560 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__5__tmp_copy_5 = transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
#line 560 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__7__tmp_copy_7 = transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;
#line 560 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__9__tmp_copy_9 = transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;

#line 560 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__9_9 = transform_hlds__stm_expand__HeadVar__9__tmp_copy_9;
#line 560 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__7_7 = transform_hlds__stm_expand__HeadVar__7__tmp_copy_7;
#line 560 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__5_5 = transform_hlds__stm_expand__HeadVar__5__tmp_copy_5;
#line 560 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__HeadVar__2__tmp_copy_2;
#line 560 "stm_expand.m"
            }
#line 560 "stm_expand.m"
            continue;
#line 539 "stm_expand.m"
          }
#line 537 "stm_expand.m"
      }
#line 537 "stm_expand.m"
      break;
#line 537 "stm_expand.m"
    }
#line 532 "stm_expand.m"
}

#line 462 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 462 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 462 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
#line 462 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5)
#line 462 "stm_expand.m"
{
#line 465 "stm_expand.m"
  {
#line 465 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 465 "stm_expand.m"
    if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "stm_expand.m"
      {
#line 465 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_5 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4;
#line 465 "stm_expand.m"
      }
#line 465 "stm_expand.m"
    else
#line 466 "stm_expand.m"
      {
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Case_13;
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Cases_14;
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 0)));
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 1)));
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 2)));
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_19;
#line 466 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22;

#line 468 "stm_expand.m"
        {
#line 468 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Goal0_18, &transform_hlds__stm_expand__Goal_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4, &transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22);
        }
#line 469 "stm_expand.m"
        {
#line 469 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Cases0_12, &transform_hlds__stm_expand__Cases_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_5);
        }
#line 470 "stm_expand.m"
        {
#line 470 "stm_expand.m"
          transform_hlds__stm_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 0) = ((MR_Box) (transform_hlds__stm_expand__MainConsId_16));
#line 470 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 1) = ((MR_Box) (transform_hlds__stm_expand__OtherConsIds_17));
#line 470 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_19));
#line 470 "stm_expand.m"
        }
#line 466 "stm_expand.m"
        {
#line 466 "stm_expand.m"
          MR_Word base;
#line 466 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
#line 466 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Case_13));
#line 466 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Cases_14));
#line 466 "stm_expand.m"
        }
#line 466 "stm_expand.m"
      }
#line 465 "stm_expand.m"
  }
#line 462 "stm_expand.m"
}

#line 442 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_10,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond0_11,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then0_12,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else0_13,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Cond_14,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Then_15,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Else_16,
#line 442 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
#line 442 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23)
#line 442 "stm_expand.m"
{
#line 447 "stm_expand.m"
  {
#line 447 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 447 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondInfo_19;
#line 447 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondInstmapDelta_20;
#line 447 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapAfterCond_21;
#line 447 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24;
#line 447 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25;
#line 456 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;

#line 448 "stm_expand.m"
    {
#line 448 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Cond0_11, transform_hlds__stm_expand__Cond_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24);
    }
#line 456 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 0)));
#line 456 "stm_expand.m"
    transform_hlds__stm_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 1)));
#line 457 "stm_expand.m"
    {
#line 457 "stm_expand.m"
      transform_hlds__stm_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__CondInfo_19);
    }
#line 458 "stm_expand.m"
    {
#line 458 "stm_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__CondInstmapDelta_20, &transform_hlds__stm_expand__InstmapAfterCond_21);
    }
#line 459 "stm_expand.m"
    {
#line 459 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InstmapAfterCond_21, transform_hlds__stm_expand__Then0_12, transform_hlds__stm_expand__Then_15, transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24, &transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25);
    }
#line 460 "stm_expand.m"
    {
#line 460 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Else0_13, transform_hlds__stm_expand__Else_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25, transform_hlds__stm_expand__STATE_VARIABLE_Info_23);
#line 460 "stm_expand.m"
      return;
    }
#line 447 "stm_expand.m"
  }
#line 442 "stm_expand.m"
}

#line 428 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 428 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 428 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
#line 428 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15)
#line 428 "stm_expand.m"
{
#line 433 "stm_expand.m"
  {
#line 433 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 433 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "stm_expand.m"
      {
#line 434 "stm_expand.m"
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 434 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_15 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14;
#line 433 "stm_expand.m"
      }
#line 433 "stm_expand.m"
    else
#line 436 "stm_expand.m"
      {
#line 436 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
#line 436 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
#line 436 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_12;
#line 436 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals_13;
#line 436 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16;

#line 437 "stm_expand.m"
        {
#line 437 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_12, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16);
        }
#line 438 "stm_expand.m"
        {
#line 438 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_13, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_15);
        }
#line 439 "stm_expand.m"
        {
#line 439 "stm_expand.m"
          MR_Word base;
#line 439 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "stm_expand.m"
          *transform_hlds__stm_expand__GoalList_8 = base;
#line 439 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_12));
#line 439 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_13));
#line 439 "stm_expand.m"
        }
#line 436 "stm_expand.m"
      }
#line 433 "stm_expand.m"
  }
#line 428 "stm_expand.m"
}

#line 409 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_6,
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 409 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 409 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
#line 409 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19)
#line 409 "stm_expand.m"
{
#line 414 "stm_expand.m"
  {
#line 414 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 414 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "stm_expand.m"
      {
#line 415 "stm_expand.m"
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_19 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18;
#line 414 "stm_expand.m"
      }
#line 414 "stm_expand.m"
    else
#line 417 "stm_expand.m"
      {
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InstmapDelta_12;
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalInfo_13;
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_14;
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Instmap_16;
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals_17;
#line 417 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20;
#line 422 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15;

#line 420 "stm_expand.m"
        {
#line 420 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20);
        }
#line 422 "stm_expand.m"
        transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 0)));
#line 422 "stm_expand.m"
        transform_hlds__stm_expand__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 1)));
#line 418 "stm_expand.m"
        {
#line 418 "stm_expand.m"
          transform_hlds__stm_expand__InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo_13);
        }
#line 423 "stm_expand.m"
        {
#line 423 "stm_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__InstmapDelta_12, &transform_hlds__stm_expand__Instmap_16);
        }
#line 424 "stm_expand.m"
        {
#line 424 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_16, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_17, transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Info_19);
        }
#line 425 "stm_expand.m"
        {
#line 425 "stm_expand.m"
          MR_Word base;
#line 425 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "stm_expand.m"
          *transform_hlds__stm_expand__GoalList_8 = base;
#line 425 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_14));
#line 425 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_17));
#line 425 "stm_expand.m"
        }
#line 417 "stm_expand.m"
      }
#line 414 "stm_expand.m"
  }
#line 409 "stm_expand.m"
}

#line 299 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 299 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 299 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94,
#line 299 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_95)
#line 299 "stm_expand.m"
{
#line 302 "stm_expand.m"
  {
#line 302 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 302 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
#line 302 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));

#line 307 "stm_expand.m"
    if (((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 318 "stm_expand.m"
      {
#line 318 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__stm_expand__GoalExpr0_10), (MR_Integer) 0);
#line 318 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SubGoal_24;
#line 318 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalExpr_118;

#line 319 "stm_expand.m"
        {
#line 319 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__SubGoal0_23, &transform_hlds__stm_expand__SubGoal_24, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
        }
#line 320 "stm_expand.m"
        transform_hlds__stm_expand__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__stm_expand__SubGoal_24);
#line 321 "stm_expand.m"
        {
#line 321 "stm_expand.m"
          MR_Word base;
#line 321 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "stm_expand.m"
          *transform_hlds__stm_expand__Goal_8 = base;
#line 321 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_118));
#line 321 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 321 "stm_expand.m"
        }
#line 318 "stm_expand.m"
      }
#line 307 "stm_expand.m"
    else
#line 307 "stm_expand.m"
      if (((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 305 "stm_expand.m"
        {
#line 306 "stm_expand.m"
          *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 306 "stm_expand.m"
          *transform_hlds__stm_expand__STATE_VARIABLE_Info_95 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94;
#line 305 "stm_expand.m"
        }
#line 307 "stm_expand.m"
      else
#line 307 "stm_expand.m"
        if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 308 "stm_expand.m"
          {
#line 308 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 308 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 308 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Conjuncts_19;
#line 308 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalExpr_20;

#line 309 "stm_expand.m"
            {
#line 309 "stm_expand.m"
              transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Conjuncts0_18, &transform_hlds__stm_expand__Conjuncts_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
            }
#line 310 "stm_expand.m"
            {
#line 310 "stm_expand.m"
              transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjType_17));
#line 310 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__Conjuncts_19));
#line 310 "stm_expand.m"
            }
#line 311 "stm_expand.m"
            {
#line 311 "stm_expand.m"
              MR_Word base;
#line 311 "stm_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "stm_expand.m"
              *transform_hlds__stm_expand__Goal_8 = base;
#line 311 "stm_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 311 "stm_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 311 "stm_expand.m"
            }
#line 308 "stm_expand.m"
          }
#line 307 "stm_expand.m"
        else
#line 307 "stm_expand.m"
          if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 313 "stm_expand.m"
            {
#line 313 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 313 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__Disjuncts_22;
#line 313 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__GoalExpr_117;

#line 314 "stm_expand.m"
              {
#line 314 "stm_expand.m"
                transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Disjuncts0_21, &transform_hlds__stm_expand__Disjuncts_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
              }
#line 315 "stm_expand.m"
              {
#line 315 "stm_expand.m"
                transform_hlds__stm_expand__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 315 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__stm_expand__Disjuncts_22));
#line 315 "stm_expand.m"
              }
#line 316 "stm_expand.m"
              {
#line 316 "stm_expand.m"
                MR_Word base;
#line 316 "stm_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "stm_expand.m"
                *transform_hlds__stm_expand__Goal_8 = base;
#line 316 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_117));
#line 316 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 316 "stm_expand.m"
              }
#line 313 "stm_expand.m"
            }
#line 307 "stm_expand.m"
          else
#line 307 "stm_expand.m"
            if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 367 "stm_expand.m"
              {
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Cond0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Then0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Else0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Cond_54;
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Then_55;
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Else_56;
#line 367 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__GoalExpr_127;

#line 368 "stm_expand.m"
                {
#line 368 "stm_expand.m"
                  transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cond0_51, transform_hlds__stm_expand__Then0_52, transform_hlds__stm_expand__Else0_53, &transform_hlds__stm_expand__Cond_54, &transform_hlds__stm_expand__Then_55, &transform_hlds__stm_expand__Else_56, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
                }
#line 370 "stm_expand.m"
                {
#line 370 "stm_expand.m"
                  transform_hlds__stm_expand__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 370 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 370 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_127, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars_50));
#line 370 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_127, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_54));
#line 370 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_127, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_55));
#line 370 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_127, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_56));
#line 370 "stm_expand.m"
                }
#line 371 "stm_expand.m"
                {
#line 371 "stm_expand.m"
                  MR_Word base;
#line 371 "stm_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "stm_expand.m"
                  *transform_hlds__stm_expand__Goal_8 = base;
#line 371 "stm_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_127));
#line 371 "stm_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 371 "stm_expand.m"
                }
#line 367 "stm_expand.m"
              }
#line 307 "stm_expand.m"
            else
#line 307 "stm_expand.m"
              if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 328 "stm_expand.m"
                {
#line 328 "stm_expand.m"
                  MR_Word transform_hlds__stm_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 328 "stm_expand.m"
                  MR_Word transform_hlds__stm_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 347 "stm_expand.m"
                  if (((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 330 "stm_expand.m"
                    {
#line 330 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 2)));
#line 330 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 1)));

#line 337 "stm_expand.m"
                      if ((transform_hlds__stm_expand__FGT_32 == (MR_Integer) 0))
#line 343 "stm_expand.m"
                        {
#line 345 "stm_expand.m"
                          {
#line 345 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
#line 345 "stm_expand.m"
                            return;
                          }
#line 343 "stm_expand.m"
                        }
#line 337 "stm_expand.m"
                      else
#line 337 "stm_expand.m"
                        if ((transform_hlds__stm_expand__FGT_32 == (MR_Integer) 3))
#line 338 "stm_expand.m"
                          {
#line 338 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__InnerGoal_33;
#line 338 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__GoalExpr_120;

#line 339 "stm_expand.m"
                            {
#line 339 "stm_expand.m"
                              transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_33, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
                            }
#line 340 "stm_expand.m"
                            {
#line 340 "stm_expand.m"
                              transform_hlds__stm_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 340 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 340 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_120, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
#line 340 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_120, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_33));
#line 340 "stm_expand.m"
                            }
#line 341 "stm_expand.m"
                            {
#line 341 "stm_expand.m"
                              MR_Word base;
#line 341 "stm_expand.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "stm_expand.m"
                              *transform_hlds__stm_expand__Goal_8 = base;
#line 341 "stm_expand.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_120));
#line 341 "stm_expand.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 341 "stm_expand.m"
                            }
#line 338 "stm_expand.m"
                          }
#line 337 "stm_expand.m"
                        else
#line 334 "stm_expand.m"
                          {
#line 336 "stm_expand.m"
                            *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 336 "stm_expand.m"
                            *transform_hlds__stm_expand__STATE_VARIABLE_Info_95 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94;
#line 334 "stm_expand.m"
                          }
#line 330 "stm_expand.m"
                    }
#line 347 "stm_expand.m"
                  else
#line 347 "stm_expand.m"
                    if (((((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 0))))))
#line 362 "stm_expand.m"
                      {
#line 364 "stm_expand.m"
                        {
#line 364 "stm_expand.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
#line 364 "stm_expand.m"
                          return;
                        }
#line 362 "stm_expand.m"
                      }
#line 347 "stm_expand.m"
                    else
#line 355 "stm_expand.m"
                      {
#line 355 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalExpr_123;
#line 355 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__InnerGoal_124;

#line 356 "stm_expand.m"
                        {
#line 356 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_124, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
                        }
#line 357 "stm_expand.m"
                        {
#line 357 "stm_expand.m"
                          transform_hlds__stm_expand__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 357 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_123, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
#line 357 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_123, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_124));
#line 357 "stm_expand.m"
                        }
#line 358 "stm_expand.m"
                        {
#line 358 "stm_expand.m"
                          MR_Word base;
#line 358 "stm_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "stm_expand.m"
                          *transform_hlds__stm_expand__Goal_8 = base;
#line 358 "stm_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_123));
#line 358 "stm_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 358 "stm_expand.m"
                        }
#line 355 "stm_expand.m"
                      }
#line 328 "stm_expand.m"
                }
#line 307 "stm_expand.m"
              else
#line 307 "stm_expand.m"
                if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 380 "stm_expand.m"
                  {
#line 380 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__ShortHand0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 400 "stm_expand.m"
                    if (((MR_tag((MR_Word) transform_hlds__stm_expand__ShortHand0_75)) == (MR_mktag((MR_Integer) 1))))
#line 384 "stm_expand.m"
                      {
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__TypeCtorInfo_128_128;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalType_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 0)));
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Outer_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 1)));
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalDisj_84;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__MainGoal_85;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__OrElseGoals_86;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__InstmapDelta_87;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__FinalInstmap_88;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_102_102;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 4)));
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goals0_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 5)));
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goal_137;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goals_138;
#line 384 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_139;
#line 383 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Inner_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 2)));
#line 383 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand___MaybeOutputVars_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 3)));
#line 383 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand___OrElseInners_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_75, (MR_Integer) 6)));
#line 388 "stm_expand.m"
                        MR_Box transform_hlds__stm_expand__conv0_MainGoal_85;

#line 437 "stm_expand.m"
                        {
#line 437 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_135, &transform_hlds__stm_expand__Goal_137, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_139);
                        }
#line 438 "stm_expand.m"
                        {
#line 438 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_136, &transform_hlds__stm_expand__Goals_138, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_139, &transform_hlds__stm_expand__STATE_VARIABLE_Info_102_102);
                        }
#line 439 "stm_expand.m"
                        {
#line 439 "stm_expand.m"
                          transform_hlds__stm_expand__GoalDisj_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "stm_expand.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_84, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_137));
#line 439 "stm_expand.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_84, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_138));
#line 439 "stm_expand.m"
                        }
#line 19771 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 388 "stm_expand.m"
                        {
#line 388 "stm_expand.m"
                          transform_hlds__stm_expand__conv0_MainGoal_85 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_128_128, transform_hlds__stm_expand__GoalDisj_84);
                        }
#line 388 "stm_expand.m"
                        transform_hlds__stm_expand__MainGoal_85 = ((MR_Word) transform_hlds__stm_expand__conv0_MainGoal_85);
#line 389 "stm_expand.m"
                        {
#line 389 "stm_expand.m"
                          transform_hlds__stm_expand__OrElseGoals_86 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_128_128, transform_hlds__stm_expand__GoalDisj_84);
                        }
#line 391 "stm_expand.m"
                        {
#line 391 "stm_expand.m"
                          transform_hlds__stm_expand__InstmapDelta_87 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo0_11);
                        }
#line 392 "stm_expand.m"
                        {
#line 392 "stm_expand.m"
                          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InstmapDelta_87, &transform_hlds__stm_expand__FinalInstmap_88);
                        }
#line 398 "stm_expand.m"
                        {
#line 398 "stm_expand.m"
                          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(transform_hlds__stm_expand__GoalType_76, transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__FinalInstmap_88, transform_hlds__stm_expand__Outer_77, transform_hlds__stm_expand__MainGoal_85, transform_hlds__stm_expand__OrElseGoals_86, transform_hlds__stm_expand__Goal_8, transform_hlds__stm_expand__STATE_VARIABLE_Info_102_102, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
#line 398 "stm_expand.m"
                          return;
                        }
#line 384 "stm_expand.m"
                      }
#line 400 "stm_expand.m"
                    else
#line 400 "stm_expand.m"
                      if (((MR_tag((MR_Word) transform_hlds__stm_expand__ShortHand0_75)) == (MR_mktag((MR_Integer) 0))))
#line 404 "stm_expand.m"
                        {
#line 405 "stm_expand.m"
                          {
#line 405 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
#line 405 "stm_expand.m"
                            return;
                          }
#line 404 "stm_expand.m"
                        }
#line 400 "stm_expand.m"
                      else
#line 401 "stm_expand.m"
                        {
#line 402 "stm_expand.m"
                          {
#line 402 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "try_goal");
#line 402 "stm_expand.m"
                            return;
                          }
#line 401 "stm_expand.m"
                        }
#line 380 "stm_expand.m"
                  }
#line 307 "stm_expand.m"
                else
#line 307 "stm_expand.m"
                  if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 323 "stm_expand.m"
                    {
#line 323 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 323 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 323 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 323 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Cases_28;
#line 323 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__GoalExpr_119;

#line 324 "stm_expand.m"
                      {
#line 324 "stm_expand.m"
                        transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cases0_27, &transform_hlds__stm_expand__Cases_28, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94, transform_hlds__stm_expand__STATE_VARIABLE_Info_95);
                      }
#line 325 "stm_expand.m"
                      {
#line 325 "stm_expand.m"
                        transform_hlds__stm_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 325 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 325 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 1) = ((MR_Box) (transform_hlds__stm_expand__Var_25));
#line 325 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 2) = ((MR_Box) (transform_hlds__stm_expand__CanFail_26));
#line 325 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_28));
#line 325 "stm_expand.m"
                      }
#line 326 "stm_expand.m"
                      {
#line 326 "stm_expand.m"
                        MR_Word base;
#line 326 "stm_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "stm_expand.m"
                        *transform_hlds__stm_expand__Goal_8 = base;
#line 326 "stm_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_119));
#line 326 "stm_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 326 "stm_expand.m"
                      }
#line 323 "stm_expand.m"
                    }
#line 307 "stm_expand.m"
                  else
#line 376 "stm_expand.m"
                    {
#line 377 "stm_expand.m"
                      *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 377 "stm_expand.m"
                      *transform_hlds__stm_expand__STATE_VARIABLE_Info_95 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_94;
#line 376 "stm_expand.m"
                    }
#line 302 "stm_expand.m"
  }
#line 299 "stm_expand.m"
}

#line 257 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
#line 257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_5,
#line 257 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__ProcId_6,
#line 257 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 257 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20)
#line 257 "stm_expand.m"
{
#line 260 "stm_expand.m"
  {
#line 260 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_23_23;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_25_25;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_26_26;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable0_8;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_9;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable0_10;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_11;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_12;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo1_13;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable1_14;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable_15;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_16;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable1_17;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable_18;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal0_38;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InitInstmap_39;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmInfo0_40;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_41;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmInfo_42;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RecalcInfo_45;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50;
#line 260 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
#line 262 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv0_PredInfo0_9;
#line 264 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_ProcInfo0_11;
#line 286 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 286 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_44_44;
#line 286 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_46_46;

#line 261 "stm_expand.m"
    {
#line 261 "stm_expand.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__PredTable0_8);
    }
#line 19984 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 19986 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 262 "stm_expand.m"
    {
#line 262 "stm_expand.m"
      mercury__map__lookup_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__PredTable0_8, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), &transform_hlds__stm_expand__conv0_PredInfo0_9);
    }
#line 262 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_9 = ((MR_Word) transform_hlds__stm_expand__conv0_PredInfo0_9);
#line 263 "stm_expand.m"
    {
#line 263 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__stm_expand__PredInfo0_9, &transform_hlds__stm_expand__ProcTable0_10);
    }
#line 20000 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 20002 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 264 "stm_expand.m"
    {
#line 264 "stm_expand.m"
      mercury__map__lookup_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_25_25, transform_hlds__stm_expand__TypeCtorInfo_26_26, transform_hlds__stm_expand__ProcTable0_10, ((MR_Box) (transform_hlds__stm_expand__ProcId_6)), &transform_hlds__stm_expand__conv1_ProcInfo0_11);
    }
#line 264 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_11 = ((MR_Word) transform_hlds__stm_expand__conv1_ProcInfo0_11);
#line 281 "stm_expand.m"
    {
#line 281 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo0_11, &transform_hlds__stm_expand__Goal0_38);
    }
#line 282 "stm_expand.m"
    {
#line 282 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__stm_expand__ProcInfo0_11, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__InitInstmap_39);
    }
#line 283 "stm_expand.m"
    {
#line 283 "stm_expand.m"
      transform_hlds__stm_expand__StmInfo0_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 0) = ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo0_11));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 4) = ((MR_Box) (transform_hlds__stm_expand__PredInfo0_9));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 5) = ((MR_Box) ((MR_Integer) 0));
#line 283 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 6) = ((MR_Box) ((MR_Integer) 0));
#line 283 "stm_expand.m"
    }
#line 285 "stm_expand.m"
    {
#line 285 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InitInstmap_39, transform_hlds__stm_expand__Goal0_38, &transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__StmInfo0_40, &transform_hlds__stm_expand__StmInfo_42);
    }
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 0)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 1)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 2)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 3)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 4)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__RecalcInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 5)));
#line 286 "stm_expand.m"
    transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 6)));
#line 288 "stm_expand.m"
    {
#line 288 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52);
    }
#line 295 "stm_expand.m"
    if ((transform_hlds__stm_expand__RecalcInfo_45 == (MR_Integer) 0))
#line 296 "stm_expand.m"
      {
#line 296 "stm_expand.m"
        transform_hlds__stm_expand__ProcInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
#line 296 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21 = transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
#line 296 "stm_expand.m"
      }
#line 295 "stm_expand.m"
    else
#line 291 "stm_expand.m"
      {
#line 291 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54;

#line 292 "stm_expand.m"
        {
#line 292 "stm_expand.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54);
        }
#line 293 "stm_expand.m"
        {
#line 293 "stm_expand.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54, &transform_hlds__stm_expand__ProcInfo_12, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49, &transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 291 "stm_expand.m"
      }
#line 269 "stm_expand.m"
    {
#line 269 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__ProcTable1_14);
    }
#line 270 "stm_expand.m"
    {
#line 270 "stm_expand.m"
      mercury__map__det_update_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_25_25, transform_hlds__stm_expand__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__stm_expand__ProcId_6)), ((MR_Box) (transform_hlds__stm_expand__ProcInfo_12)), transform_hlds__stm_expand__ProcTable1_14, &transform_hlds__stm_expand__ProcTable_15);
    }
#line 271 "stm_expand.m"
    {
#line 271 "stm_expand.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__stm_expand__ProcTable_15, transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__PredInfo_16);
    }
#line 272 "stm_expand.m"
    {
#line 272 "stm_expand.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__stm_expand__PredTable1_17);
    }
#line 273 "stm_expand.m"
    {
#line 273 "stm_expand.m"
      mercury__map__det_update_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), ((MR_Box) (transform_hlds__stm_expand__PredInfo_16)), transform_hlds__stm_expand__PredTable1_17, &transform_hlds__stm_expand__PredTable_18);
    }
#line 274 "stm_expand.m"
    {
#line 274 "stm_expand.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__stm_expand__PredTable_18, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);
#line 274 "stm_expand.m"
      return;
    }
#line 260 "stm_expand.m"
  }
#line 257 "stm_expand.m"
}

#line 255 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 255 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 255 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
#line 255 "stm_expand.m"
{
#line 255 "stm_expand.m"
  {
#line 255 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 255 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 255 "stm_expand.m"
    {
#line 255 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 255 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 255 "stm_expand.m"
  }
#line 255 "stm_expand.m"
}

#line 249 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
#line 249 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_4,
#line 249 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
#line 249 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9)
#line 249 "stm_expand.m"
{
#line 252 "stm_expand.m"
  {
#line 252 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 252 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_6;
#line 252 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcIds_7;
#line 252 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10;
#line 255 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 253 "stm_expand.m"
    {
#line 253 "stm_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__stm_expand__PredId_4, &transform_hlds__stm_expand__PredInfo_6);
    }
#line 254 "stm_expand.m"
    {
#line 254 "stm_expand.m"
      transform_hlds__stm_expand__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__stm_expand__PredInfo_6);
    }
#line 255 "stm_expand.m"
    {
#line 255 "stm_expand.m"
      transform_hlds__stm_expand__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 255 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0]));
#line 255 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
#line 255 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 255 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 3) = ((MR_Box) (transform_hlds__stm_expand__PredId_4));
#line 255 "stm_expand.m"
    }
#line 255 "stm_expand.m"
    {
#line 255 "stm_expand.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__ProcIds_7, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 255 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 252 "stm_expand.m"
  }
#line 249 "stm_expand.m"
}

#line 246 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 246 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 246 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
#line 246 "stm_expand.m"
{
#line 246 "stm_expand.m"
  {
#line 246 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 246 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 246 "stm_expand.m"
    {
#line 246 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 246 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 246 "stm_expand.m"
  }
#line 246 "stm_expand.m"
}

#line 162 "stm_expand.m"
void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0(
#line 162 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5,
#line 162 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_6)
#line 162 "stm_expand.m"
{
#line 244 "stm_expand.m"
  {
#line 244 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredIds_4;
#line 244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7;
#line 244 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9;
#line 246 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9;

#line 245 "stm_expand.m"
    {
#line 245 "stm_expand.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__stm_expand__PredIds_4, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7);
    }
#line 246 "stm_expand.m"
    {
#line 246 "stm_expand.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[1], transform_hlds__stm_expand__PredIds_4, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 246 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9);
#line 247 "stm_expand.m"
    {
#line 247 "stm_expand.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_6);
#line 247 "stm_expand.m"
      return;
    }
#line 244 "stm_expand.m"
  }
#line 162 "stm_expand.m"
}

void mercury__transform_hlds__stm_expand__init(void)
{
}

void mercury__transform_hlds__stm_expand__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0);
}

void mercury__transform_hlds__stm_expand__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.stm_expand. */
