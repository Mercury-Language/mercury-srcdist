/*
** Automatically generated from `stm_expand.m'
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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




#line 143 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 158 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5];

#line 167 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5];

#line 170 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0;

#line 173 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1];

#line 176 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1];

#line 179 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1];

#line 182 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1];

#line 185 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7];

#line 188 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7];

#line 191 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0;

#line 194 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1];

#line 197 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1];

#line 200 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1];

#line 203 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1];

#line 206 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7];

#line 209 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7];

#line 212 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0;

#line 215 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1];

#line 218 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1];

#line 221 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1];

#line 224 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1];

#line 227 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
#line 230 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 232 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 235 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
#line 238 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 240 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 242 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 245 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
#line 248 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 250 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 253 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
#line 256 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 258 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 260 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 263 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
#line 266 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 268 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

#line 271 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
#line 274 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 276 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 278 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

#line 1737 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

#line 1737 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_54_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2596 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2595 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_55_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44);

#line 748 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
#line 748 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 748 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

#line 739 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_14,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_15,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
#line 739 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_20,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
#line 739 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);

#line 816 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
#line 816 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 816 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

#line 484 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalType_11,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Outer_14,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MainGoal_16,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
#line 484 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 484 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

#line 1758 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_9,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_10,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src3_11,
#line 1758 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_12,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
#line 1758 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2596__1_3_p_0(
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
#line 2596 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2595__1_3_p_0(
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
#line 2595 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

#line 2080 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2080__1_4_p_0(
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_12,
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_35,
#line 2080 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_36);

#line 1801 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1801__1_6_p_0(
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_51,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_52,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_53,
#line 1801 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_54,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_55,
#line 1801 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_56);

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1787__1_4_p_0(
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_41,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44);

#line 1342 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1342__1_7_p_0(
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_36,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_37,
#line 1342 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_38,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_39,
#line 1342 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_40);

#line 993 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__993__1_5_p_0(
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_79,
#line 993 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_80,
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_81,
#line 993 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_82);

#line 979 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__979__1_5_p_0(
#line 979 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_50,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_51,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_52,
#line 979 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_53,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_54);

#line 791 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__791__1_7_p_0(
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_43,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_44,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_89,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_90,
#line 791 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_91,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_92,
#line 791 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_93);

#line 579 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(
#line 579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_11,
#line 579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_12);

#line 223 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
#line 223 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 223 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 209 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
#line 209 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 209 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 236 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
#line 236 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

#line 236 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
#line 2596 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2596 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2596 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
#line 2595 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2595 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2595 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2590 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
#line 2590 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2590 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputModes_5,
#line 2590 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputModes_6);

#line 2569 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
#line 2569 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
#line 2569 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_6,
#line 2569 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
#line 2569 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputTypes_8);

#line 2556 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
#line 2556 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2556 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Input_5,
#line 2556 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Output_6);

#line 2542 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
#line 2542 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
#line 2542 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_4);

#line 2522 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
#line 2522 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal_4,
#line 2522 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2522 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

#line 2507 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
#line 2507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
#line 2507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10);

#line 2497 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
#line 2497 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_4,
#line 2497 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
#line 2497 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8);

#line 2480 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
#line 2480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPred_4,
#line 2480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
#line 2480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInfo_6);

#line 2469 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
#line 2469 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
#line 2469 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
#line 2469 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9);

#line 2383 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
#line 2383 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Prefix_14,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66);

#line 2349 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
#line 2349 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_7,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_8,
#line 2349 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10);

#line 2332 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
#line 2332 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
#line 2332 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ConjGoal_4);

#line 2314 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
#line 2314 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalIn_4,
#line 2314 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
#line 2314 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalOut_6);

#line 2298 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_8,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cases_9,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_10,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_11,
#line 2298 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 2298 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

#line 2282 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExistVars_10,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond_11,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then_12,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else_13,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_14,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_15,
#line 2282 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
#line 2282 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24);

#line 2256 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredProcID_9,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Args_10,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgModes_12,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2241 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleName_13,
#line 2241 "stm_expand.m"
  MR_String transform_hlds__stm_expand__ProcName_14,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Mode_16,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_17,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_18,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVars_19,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
#line 2241 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_22,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2241 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

#line 2215 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2215 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2215 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2190 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2190 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 2190 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

#line 2164 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2164 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2164 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 2153 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cons_8,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_9,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName_10,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_12,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

#line 2124 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2124 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2124 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

#line 2107 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2107 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
#line 2107 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15);

#line 2077 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
#line 2077 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2077 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2077 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 2060 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
#line 2060 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Name_9,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);

#line 2028 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_9,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_10,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_11,
#line 2028 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2028 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

#line 1984 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_9,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
#line 1984 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_12,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1984 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1968 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
#line 1968 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Types_3,
#line 1968 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ReturnType_4);

#line 1870 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_21,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
#line 1870 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
#line 1870 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1787 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 1787 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

#line 1781 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
#line 1781 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
#line 1781 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);

#line 1705 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
#line 1705 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__Count_5,
#line 1705 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Vars_6,
#line 1705 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
#line 1705 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);

#line 1676 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__EndBranch_22,
#line 1676 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 1676 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

#line 1644 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_10,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_11,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_12,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_13,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_14,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1644 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1612 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_11,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_12,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_13,
#line 1612 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
#line 1612 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);

#line 1579 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

#line 1520 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

#line 1511 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);

#line 1426 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1426 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
#line 1426 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);

#line 1374 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

#line 1320 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_12,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);

#line 1295 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11);

#line 1279 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDI_13,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUO_14,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44);

#line 1261 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_12,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 1222 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 1222 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
#line 1222 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 1204 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
#line 1204 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
#line 1204 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22);

#line 1135 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_12,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_15,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_16,
#line 1135 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_17,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_18,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
#line 1135 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);

#line 1097 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_9,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_11,
#line 1097 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
#line 1097 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);

#line 1072 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_6,
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_7,
#line 1072 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 1072 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

#line 1044 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
#line 1044 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
#line 1044 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);

#line 993 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 993 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 993 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

#line 979 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5);

#line 963 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 963 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 963 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

#line 928 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 928 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 928 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

#line 879 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_9,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
#line 879 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 879 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 833 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_10,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_11,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
#line 833 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
#line 833 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);

#line 694 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
#line 694 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInUO_12);

#line 663 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
#line 663 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4);

#line 593 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goals_12,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
#line 593 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
#line 593 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
#line 574 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_3,
#line 574 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalVar_4);

#line 536 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10);

#line 466 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 466 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
#line 466 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5);

#line 446 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_10,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond0_11,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then0_12,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else0_13,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Cond_14,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Then_15,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Else_16,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23);

#line 432 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 432 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
#line 432 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15);

#line 413 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_6,
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 413 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
#line 413 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19);

#line 302 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 302 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96,
#line 302 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_97);

#line 260 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
#line 260 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_5,
#line 260 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__ProcId_6,
#line 260 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 260 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);

#line 258 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 258 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3);

#line 252 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
#line 252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_4,
#line 252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
#line 252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9);

#line 249 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 249 "stm_expand.m"
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
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 2263 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2271 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2279 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2287 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2295 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2304 "transform_hlds.stm_expand.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2313 "transform_hlds.stm_expand.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2321 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2330 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5] = {
  (MR_String) "vars_input",
  (MR_String) "vars_local",
  (MR_String) "vars_output",
  (MR_String) "vars_innerDI",
  (MR_String) "vars_innerUO"
};

#line 2339 "transform_hlds.stm_expand.c"
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

#line 2354 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

#line 2359 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0
  }
};

#line 2368 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

#line 2373 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1] = {
  (MR_Integer) 0
};

#line 2378 "transform_hlds.stm_expand.c"
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

#line 2399 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2410 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7] = {
  (MR_String) "stm_info_module_info",
  (MR_String) "stm_info_pred_id",
  (MR_String) "stm_info_proc_id",
  (MR_String) "stm_info_proc_info",
  (MR_String) "stm_info_pred_info",
  (MR_String) "stm_info_requalify",
  (MR_String) "stm_info_expand_id"
};

#line 2421 "transform_hlds.stm_expand.c"
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

#line 2436 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

#line 2441 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0
  }
};

#line 2450 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

#line 2455 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1] = {
  (MR_Integer) 0
};

#line 2460 "transform_hlds.stm_expand.c"
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

#line 2481 "transform_hlds.stm_expand.c"
static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2492 "transform_hlds.stm_expand.c"
static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7] = {
  (MR_String) "new_pred_module_info",
  (MR_String) "new_pred_pred_id",
  (MR_String) "new_pred_proc_id",
  (MR_String) "new_pred_pred_info",
  (MR_String) "new_pred_proc_info",
  (MR_String) "new_pred_context",
  (MR_String) "new_pred_var_cnt"
};

#line 2503 "transform_hlds.stm_expand.c"
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

#line 2518 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

#line 2523 "transform_hlds.stm_expand.c"
static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0
  }
};

#line 2532 "transform_hlds.stm_expand.c"
static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

#line 2537 "transform_hlds.stm_expand.c"
static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1] = {
  (MR_Integer) 0
};

#line 2542 "transform_hlds.stm_expand.c"
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

#line 2563 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
#line 2566 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2568 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2570 "transform_hlds.stm_expand.c"
{
#line 2572 "transform_hlds.stm_expand.c"
  {
#line 2574 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2577 "transform_hlds.stm_expand.c"
    {
#line 2579 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2582 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2584 "transform_hlds.stm_expand.c"
  }
#line 2586 "transform_hlds.stm_expand.c"
}

#line 2589 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
#line 2592 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2594 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2596 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2598 "transform_hlds.stm_expand.c"
{
#line 2600 "transform_hlds.stm_expand.c"
  {
#line 2602 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2605 "transform_hlds.stm_expand.c"
    {
#line 2607 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2610 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2612 "transform_hlds.stm_expand.c"
  }
#line 2614 "transform_hlds.stm_expand.c"
}

#line 2617 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
#line 2620 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2622 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2624 "transform_hlds.stm_expand.c"
{
#line 2626 "transform_hlds.stm_expand.c"
  {
#line 2628 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2631 "transform_hlds.stm_expand.c"
    {
#line 2633 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2636 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2638 "transform_hlds.stm_expand.c"
  }
#line 2640 "transform_hlds.stm_expand.c"
}

#line 2643 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
#line 2646 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2648 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2650 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2652 "transform_hlds.stm_expand.c"
{
#line 2654 "transform_hlds.stm_expand.c"
  {
#line 2656 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2659 "transform_hlds.stm_expand.c"
    {
#line 2661 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2664 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2666 "transform_hlds.stm_expand.c"
  }
#line 2668 "transform_hlds.stm_expand.c"
}

#line 2671 "transform_hlds.stm_expand.c"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
#line 2674 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2676 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
#line 2678 "transform_hlds.stm_expand.c"
{
#line 2680 "transform_hlds.stm_expand.c"
  {
#line 2682 "transform_hlds.stm_expand.c"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2685 "transform_hlds.stm_expand.c"
    {
#line 2687 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
#line 2690 "transform_hlds.stm_expand.c"
    return transform_hlds__stm_expand__succeeded;
#line 2692 "transform_hlds.stm_expand.c"
  }
#line 2694 "transform_hlds.stm_expand.c"
}

#line 2697 "transform_hlds.stm_expand.c"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
#line 2700 "transform_hlds.stm_expand.c"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
#line 2702 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 2704 "transform_hlds.stm_expand.c"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
#line 2706 "transform_hlds.stm_expand.c"
{
#line 2708 "transform_hlds.stm_expand.c"
  {
#line 2710 "transform_hlds.stm_expand.c"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

#line 2713 "transform_hlds.stm_expand.c"
    {
#line 2715 "transform_hlds.stm_expand.c"
      transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
#line 2718 "transform_hlds.stm_expand.c"
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
#line 2720 "transform_hlds.stm_expand.c"
  }
#line 2722 "transform_hlds.stm_expand.c"
}

#line 1737 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
#line 1737 "stm_expand.m"
{
#line 1747 "stm_expand.m"
  {
#line 1747 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1743 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1744 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1747 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1746 "stm_expand.m"
      {
#line 1746 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1746 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
#line 1746 "stm_expand.m"
      }
#line 1747 "stm_expand.m"
    else
#line 1754 "stm_expand.m"
      {
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_12;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_13;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_14;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_15;

#line 1748 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1748 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1748 "stm_expand.m"
          {
#line 1748 "stm_expand.m"
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
#line 1748 "stm_expand.m"
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
#line 1749 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1749 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1749 "stm_expand.m"
              {
#line 1749 "stm_expand.m"
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
#line 1749 "stm_expand.m"
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
#line 1749 "stm_expand.m"
              }
#line 1748 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1751 "stm_expand.m"
          {
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_16;
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_17;
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

#line 1751 "stm_expand.m"
            {
#line 1751 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__791__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
#line 1752 "stm_expand.m"
            {
#line 1752 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
#line 1753 "stm_expand.m"
            {
#line 1753 "stm_expand.m"
              MR_Word base;
#line 1753 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_10 = base;
#line 1753 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
#line 1753 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
#line 1753 "stm_expand.m"
            }
#line 1751 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
        else
#line 1755 "stm_expand.m"
          {
#line 1755 "stm_expand.m"
            {
#line 1755 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
#line 1755 "stm_expand.m"
              return;
            }
#line 1755 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
      }
#line 1747 "stm_expand.m"
  }
#line 1737 "stm_expand.m"
}

#line 1737 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_29_29,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__V_30_30,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_8,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_9,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_10,
#line 1737 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
#line 1737 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
#line 1737 "stm_expand.m"
{
#line 1747 "stm_expand.m"
  {
#line 1747 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1743 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1744 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1747 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1746 "stm_expand.m"
      {
#line 1746 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1746 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
#line 1746 "stm_expand.m"
      }
#line 1747 "stm_expand.m"
    else
#line 1754 "stm_expand.m"
      {
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_12;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_13;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_14;
#line 1754 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_15;

#line 1748 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
#line 1748 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1748 "stm_expand.m"
          {
#line 1748 "stm_expand.m"
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
#line 1748 "stm_expand.m"
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
#line 1749 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
#line 1749 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1749 "stm_expand.m"
              {
#line 1749 "stm_expand.m"
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
#line 1749 "stm_expand.m"
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
#line 1749 "stm_expand.m"
              }
#line 1748 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1751 "stm_expand.m"
          {
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_16;
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_17;
#line 1751 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

#line 1751 "stm_expand.m"
            {
#line 1751 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1342__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
#line 1752 "stm_expand.m"
            {
#line 1752 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
#line 1753 "stm_expand.m"
            {
#line 1753 "stm_expand.m"
              MR_Word base;
#line 1753 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_10 = base;
#line 1753 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
#line 1753 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
#line 1753 "stm_expand.m"
            }
#line 1751 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
        else
#line 1755 "stm_expand.m"
          {
#line 1755 "stm_expand.m"
            {
#line 1755 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
#line 1755 "stm_expand.m"
              return;
            }
#line 1755 "stm_expand.m"
          }
#line 1754 "stm_expand.m"
      }
#line 1747 "stm_expand.m"
  }
#line 1737 "stm_expand.m"
}

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_54_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2596 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
#line 2596 "stm_expand.m"
{
#line 2584 "stm_expand.m"
  {
#line 2584 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2584 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__3_20 = transform_hlds__stm_expand__HeadVar__1_12;
#line 2584 "stm_expand.m"
  }
#line 2596 "stm_expand.m"
}

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2595 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
#line 2595 "stm_expand.m"
{
#line 2584 "stm_expand.m"
  {
#line 2584 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2584 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__3_14 = transform_hlds__stm_expand__HeadVar__1_10;
#line 2584 "stm_expand.m"
  }
#line 2595 "stm_expand.m"
}

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_55_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44)
#line 1787 "stm_expand.m"
{
#line 1787 "stm_expand.m"
  {
#line 1787 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1787 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;

#line 1789 "stm_expand.m"
    {
#line 1789 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1789 "stm_expand.m"
    {
#line 1789 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_45_45, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[26]), transform_hlds__stm_expand__HeadVar__2_42, transform_hlds__stm_expand__HeadVar__3_43, transform_hlds__stm_expand__HeadVar__4_44);
#line 1789 "stm_expand.m"
      return;
    }
#line 1787 "stm_expand.m"
  }
#line 1787 "stm_expand.m"
}

#line 748 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
#line 748 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 748 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 748 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
#line 748 "stm_expand.m"
{
#line 748 "stm_expand.m"
  {
#line 748 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

#line 748 "stm_expand.m"
    {
#line 748 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
#line 748 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
#line 748 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
#line 748 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
#line 748 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
#line 748 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
#line 748 "stm_expand.m"
  }
#line 748 "stm_expand.m"
}

#line 739 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_14,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_15,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
#line 739 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_20,
#line 739 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
#line 739 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55)
#line 739 "stm_expand.m"
{
#line 745 "stm_expand.m"
  {
#line 745 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_145_145;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_146_146;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoal_22;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainOuterDI_23;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainOuterUO_24;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainInnerDI_25;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainInnerUO_26;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseGoals_27;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseInnerDIs_30;
#line 745 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrElseInnerUOs_31;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 748 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 746 "stm_expand.m"
    {
#line 746 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__AtomicGoal0_18, &transform_hlds__stm_expand__AtomicGoal_22, &transform_hlds__stm_expand__MainOuterDI_23, &transform_hlds__stm_expand__MainOuterUO_24, &transform_hlds__stm_expand__MainInnerDI_25, &transform_hlds__stm_expand__MainInnerUO_26);
    }
#line 3177 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 3179 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_146_146 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 748 "stm_expand.m"
    {
#line 748 "stm_expand.m"
      mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[13], transform_hlds__stm_expand__OrElseGoals0_19, &transform_hlds__stm_expand__OrElseGoals_27, &transform_hlds__stm_expand__V_28_28, &transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__OrElseInnerDIs_30, &transform_hlds__stm_expand__OrElseInnerUOs_31);
    }
#line 759 "stm_expand.m"
    if ((transform_hlds__stm_expand__OrElseGoals_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "stm_expand.m"
      {
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyDIVars_32;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyUOVars_33;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_108_108;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_110_110;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_111_111;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_112_112;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_114_114;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_115_115;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_116_116;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_117_117;
#line 751 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_118_118;

#line 755 "stm_expand.m"
        {
#line 755 "stm_expand.m"
          transform_hlds__stm_expand__V_110_110 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 755 "stm_expand.m"
        {
#line 755 "stm_expand.m"
          transform_hlds__stm_expand__V_111_111 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 755 "stm_expand.m"
        {
#line 755 "stm_expand.m"
          transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 755 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 755 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
#line 755 "stm_expand.m"
        }
#line 754 "stm_expand.m"
        {
#line 754 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_108_108, &transform_hlds__stm_expand__CopyDIVars_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109);
        }
#line 757 "stm_expand.m"
        {
#line 757 "stm_expand.m"
          transform_hlds__stm_expand__V_114_114 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 757 "stm_expand.m"
        {
#line 757 "stm_expand.m"
          transform_hlds__stm_expand__V_115_115 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 757 "stm_expand.m"
        {
#line 757 "stm_expand.m"
          transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 757 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
#line 757 "stm_expand.m"
        }
#line 756 "stm_expand.m"
        {
#line 756 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_112_112, &transform_hlds__stm_expand__CopyUOVars_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
#line 758 "stm_expand.m"
        {
#line 758 "stm_expand.m"
          transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_33));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "stm_expand.m"
        }
#line 758 "stm_expand.m"
        {
#line 758 "stm_expand.m"
          transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
#line 758 "stm_expand.m"
        }
#line 758 "stm_expand.m"
        {
#line 758 "stm_expand.m"
          transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_32));
#line 758 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 758 "stm_expand.m"
        }
#line 758 "stm_expand.m"
        {
#line 758 "stm_expand.m"
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_116_116, transform_hlds__stm_expand__Goal_20);
#line 758 "stm_expand.m"
          return;
        }
#line 751 "stm_expand.m"
      }
#line 759 "stm_expand.m"
    else
#line 760 "stm_expand.m"
      {
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalList_37;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AtomicGoalVars_38;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AtomicGoalVarList1_39;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OutputTypes_42;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__ResultType_43;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__ResultVar_44;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__PPIDList_52;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OrElseCall_53;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_57_57;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_58_58;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_59_59;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_60_60;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_62_62;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_96_96;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_98_98;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_99_99;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_100_100;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_102_102;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_103_103;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_104_104;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_105_105;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_106_106;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyDIVars_125;
#line 760 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopyUOVars_126;
#line 783 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;

#line 764 "stm_expand.m"
        {
#line 764 "stm_expand.m"
          transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal0_18));
#line 764 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals0_19));
#line 764 "stm_expand.m"
        }
#line 764 "stm_expand.m"
        {
#line 764 "stm_expand.m"
          transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_25));
#line 764 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_30));
#line 764 "stm_expand.m"
        }
#line 765 "stm_expand.m"
        {
#line 765 "stm_expand.m"
          transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_26));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_31));
#line 765 "stm_expand.m"
        }
#line 765 "stm_expand.m"
        {
#line 765 "stm_expand.m"
          transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_15));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "stm_expand.m"
        }
#line 765 "stm_expand.m"
        {
#line 765 "stm_expand.m"
          transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_14));
#line 765 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
#line 765 "stm_expand.m"
        }
#line 763 "stm_expand.m"
        {
#line 763 "stm_expand.m"
          transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__V_58_58, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61);
        }
#line 767 "stm_expand.m"
        {
#line 767 "stm_expand.m"
          transform_hlds__stm_expand__GoalList_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
#line 767 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_27));
#line 767 "stm_expand.m"
        }
#line 769 "stm_expand.m"
        {
#line 769 "stm_expand.m"
          transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__AtomicGoalVars_38);
        }
#line 783 "stm_expand.m"
        {
#line 783 "stm_expand.m"
          transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__V_41_41, &transform_hlds__stm_expand__OutputTypes_42);
        }
#line 784 "stm_expand.m"
        {
#line 784 "stm_expand.m"
          transform_hlds__stm_expand__make_return_type_2_p_0(transform_hlds__stm_expand__OutputTypes_42, &transform_hlds__stm_expand__ResultType_43);
        }
#line 785 "stm_expand.m"
        {
#line 785 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(transform_hlds__stm_expand__ResultType_43, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[25]), &transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87);
        }
#line 794 "stm_expand.m"
        {
#line 794 "stm_expand.m"
          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__GoalList_37, transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94);
        }
#line 797 "stm_expand.m"
        {
#line 797 "stm_expand.m"
          transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainInnerUO_26, &transform_hlds__stm_expand__OrElseCall_53, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95);
        }
#line 800 "stm_expand.m"
        {
#line 800 "stm_expand.m"
          transform_hlds__stm_expand__V_98_98 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 800 "stm_expand.m"
        {
#line 800 "stm_expand.m"
          transform_hlds__stm_expand__V_99_99 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 800 "stm_expand.m"
        {
#line 800 "stm_expand.m"
          transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__V_98_98));
#line 800 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_99_99));
#line 800 "stm_expand.m"
        }
#line 799 "stm_expand.m"
        {
#line 799 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_96_96, &transform_hlds__stm_expand__CopyDIVars_125, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97);
        }
#line 802 "stm_expand.m"
        {
#line 802 "stm_expand.m"
          transform_hlds__stm_expand__V_102_102 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 802 "stm_expand.m"
        {
#line 802 "stm_expand.m"
          transform_hlds__stm_expand__V_103_103 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 802 "stm_expand.m"
        {
#line 802 "stm_expand.m"
          transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_102_102));
#line 802 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_103_103));
#line 802 "stm_expand.m"
        }
#line 801 "stm_expand.m"
        {
#line 801 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_100_100, &transform_hlds__stm_expand__CopyUOVars_126, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
#line 803 "stm_expand.m"
        {
#line 803 "stm_expand.m"
          transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_126));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "stm_expand.m"
        }
#line 803 "stm_expand.m"
        {
#line 803 "stm_expand.m"
          transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__OrElseCall_53));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 803 "stm_expand.m"
        }
#line 803 "stm_expand.m"
        {
#line 803 "stm_expand.m"
          transform_hlds__stm_expand__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_125));
#line 803 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
#line 803 "stm_expand.m"
        }
#line 803 "stm_expand.m"
        {
#line 803 "stm_expand.m"
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_104_104, transform_hlds__stm_expand__Goal_20);
#line 803 "stm_expand.m"
          return;
        }
#line 760 "stm_expand.m"
      }
#line 745 "stm_expand.m"
  }
#line 739 "stm_expand.m"
}

#line 816 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
#line 816 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 816 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 816 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
#line 816 "stm_expand.m"
{
#line 816 "stm_expand.m"
  {
#line 816 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 816 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
#line 816 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
#line 816 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
#line 816 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
#line 816 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

#line 816 "stm_expand.m"
    {
#line 816 "stm_expand.m"
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
#line 816 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
#line 816 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
#line 816 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
#line 816 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
#line 816 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
#line 816 "stm_expand.m"
  }
#line 816 "stm_expand.m"
}

#line 484 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalType_11,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Outer_14,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MainGoal_16,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
#line 484 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
#line 484 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 484 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
#line 484 "stm_expand.m"
{
#line 489 "stm_expand.m"
  {
#line 489 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 489 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OuterDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 0)));
#line 489 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OuterUO_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 1)));
#line 489 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34;
#line 511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 511 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_39_39;
#line 511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 511 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43;
#line 511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;

#line 499 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalType_11 == (MR_Integer) 2))
#line 504 "stm_expand.m"
      {
#line 504 "stm_expand.m"
        transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__MainGoal_16, transform_hlds__stm_expand__OrElseGoals_17, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
      }
#line 499 "stm_expand.m"
    else
#line 499 "stm_expand.m"
      if ((transform_hlds__stm_expand__GoalType_11 == (MR_Integer) 1))
#line 814 "stm_expand.m"
        {
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeCtorInfo_50_82;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeInfo_51_83;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__AtomicGoal_56;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MainInnerDI_59;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MainInnerUO_60;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseGoals_61;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseInnerDIs_64;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__OrElseInnerUOs_65;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__AtomicGoalVarList_66;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_68_68;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_69_69;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_70_70;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_71_71;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72;
#line 814 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_73_73;
#line 815 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_57_57;
#line 815 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_58_58;
#line 816 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_62_62;
#line 816 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__V_63_63;

#line 815 "stm_expand.m"
          {
#line 815 "stm_expand.m"
            transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__MainGoal_16, &transform_hlds__stm_expand__AtomicGoal_56, &transform_hlds__stm_expand__V_57_57, &transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__MainInnerDI_59, &transform_hlds__stm_expand__MainInnerUO_60);
          }
#line 3717 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeCtorInfo_50_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 3719 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeInfo_51_83 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 816 "stm_expand.m"
          {
#line 816 "stm_expand.m"
            mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[12], transform_hlds__stm_expand__OrElseGoals_17, &transform_hlds__stm_expand__OrElseGoals_61, &transform_hlds__stm_expand__V_62_62, &transform_hlds__stm_expand__V_63_63, &transform_hlds__stm_expand__OrElseInnerDIs_64, &transform_hlds__stm_expand__OrElseInnerUOs_65);
          }
#line 823 "stm_expand.m"
          {
#line 823 "stm_expand.m"
            transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal_16));
#line 823 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_17));
#line 823 "stm_expand.m"
          }
#line 823 "stm_expand.m"
          {
#line 823 "stm_expand.m"
            transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_59));
#line 823 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_64));
#line 823 "stm_expand.m"
          }
#line 824 "stm_expand.m"
          {
#line 824 "stm_expand.m"
            transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_60));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_65));
#line 824 "stm_expand.m"
          }
#line 824 "stm_expand.m"
          {
#line 824 "stm_expand.m"
            transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_21));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "stm_expand.m"
          }
#line 824 "stm_expand.m"
          {
#line 824 "stm_expand.m"
            transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_20));
#line 824 "stm_expand.m"
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 824 "stm_expand.m"
          }
#line 822 "stm_expand.m"
          {
#line 822 "stm_expand.m"
            transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_68_68, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__V_70_70, transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72);
          }
#line 827 "stm_expand.m"
          {
#line 827 "stm_expand.m"
            transform_hlds__stm_expand__create_top_level_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__AtomicGoal_56, transform_hlds__stm_expand__OrElseGoals_61, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
          }
#line 814 "stm_expand.m"
        }
#line 499 "stm_expand.m"
      else
#line 508 "stm_expand.m"
        {
#line 509 "stm_expand.m"
          {
#line 509 "stm_expand.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/10", (MR_String) "unknown atomic goal type");
#line 509 "stm_expand.m"
            return;
          }
#line 508 "stm_expand.m"
        }
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 0)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 1)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 2)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 3)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 4)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 5)));
#line 511 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 6)));
#line 511 "stm_expand.m"
    {
#line 511 "stm_expand.m"
      MR_Word base;
#line 511 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 511 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = base;
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 511 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 511 "stm_expand.m"
    }
#line 489 "stm_expand.m"
  }
#line 484 "stm_expand.m"
}

#line 1758 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src1_9,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src2_10,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Src3_11,
#line 1758 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Dest_12,
#line 1758 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
#line 1758 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23)
#line 1758 "stm_expand.m"
{
#line 1769 "stm_expand.m"
  {
#line 1769 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1764 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1764 "stm_expand.m"
      {
#line 1765 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1764 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1766 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src3_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1764 "stm_expand.m"
      }
#line 1769 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1768 "stm_expand.m"
      {
#line 1768 "stm_expand.m"
        *transform_hlds__stm_expand__Dest_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1768 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_23 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22;
#line 1768 "stm_expand.m"
      }
#line 1769 "stm_expand.m"
    else
#line 1777 "stm_expand.m"
      {
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__S_14;
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ss_15;
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__T_16;
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Ts_17;
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__U_18;
#line 1777 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Us_19;

#line 1770 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_9)) == (MR_mktag((MR_Integer) 1)));
#line 1770 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1770 "stm_expand.m"
          {
#line 1770 "stm_expand.m"
            transform_hlds__stm_expand__S_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 0)));
#line 1770 "stm_expand.m"
            transform_hlds__stm_expand__Ss_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 1)));
#line 1771 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_10)) == (MR_mktag((MR_Integer) 1)));
#line 1771 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1771 "stm_expand.m"
              {
#line 1771 "stm_expand.m"
                transform_hlds__stm_expand__T_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 0)));
#line 1771 "stm_expand.m"
                transform_hlds__stm_expand__Ts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 1)));
#line 1772 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src3_11)) == (MR_mktag((MR_Integer) 1)));
#line 1772 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 1772 "stm_expand.m"
                  {
#line 1772 "stm_expand.m"
                    transform_hlds__stm_expand__U_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 0)));
#line 1772 "stm_expand.m"
                    transform_hlds__stm_expand__Us_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 1)));
#line 1772 "stm_expand.m"
                  }
#line 1771 "stm_expand.m"
              }
#line 1770 "stm_expand.m"
          }
#line 1777 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1774 "stm_expand.m"
          {
#line 1774 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__R_20;
#line 1774 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Rs_21;
#line 1774 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24;

#line 1774 "stm_expand.m"
            {
#line 1774 "stm_expand.m"
              transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1801__1_6_p_0(transform_hlds__stm_expand__S_14, transform_hlds__stm_expand__T_16, transform_hlds__stm_expand__U_18, &transform_hlds__stm_expand__R_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24);
            }
#line 1775 "stm_expand.m"
            {
#line 1775 "stm_expand.m"
              transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__Ss_15, transform_hlds__stm_expand__Ts_17, transform_hlds__stm_expand__Us_19, &transform_hlds__stm_expand__Rs_21, transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24, transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);
            }
#line 1776 "stm_expand.m"
            {
#line 1776 "stm_expand.m"
              MR_Word base;
#line 1776 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "stm_expand.m"
              *transform_hlds__stm_expand__Dest_12 = base;
#line 1776 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_20));
#line 1776 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_21));
#line 1776 "stm_expand.m"
            }
#line 1774 "stm_expand.m"
          }
#line 1777 "stm_expand.m"
        else
#line 1778 "stm_expand.m"
          {
#line 1778 "stm_expand.m"
            {
#line 1778 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
#line 1778 "stm_expand.m"
              return;
            }
#line 1778 "stm_expand.m"
          }
#line 1777 "stm_expand.m"
      }
#line 1769 "stm_expand.m"
  }
#line 1758 "stm_expand.m"
}

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2596__1_3_p_0(
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
#line 2596 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
#line 2596 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
#line 2596 "stm_expand.m"
{
#line 2584 "stm_expand.m"
  {
#line 2584 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2584 "stm_expand.m"
    {
#line 2584 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_54_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_12, transform_hlds__stm_expand__HeadVar__3_20);
#line 2584 "stm_expand.m"
      return;
    }
#line 2584 "stm_expand.m"
  }
#line 2596 "stm_expand.m"
}

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2595__1_3_p_0(
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
#line 2595 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
#line 2595 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
#line 2595 "stm_expand.m"
{
#line 2584 "stm_expand.m"
  {
#line 2584 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2584 "stm_expand.m"
    {
#line 2584 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_53_57_53_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_10, transform_hlds__stm_expand__HeadVar__3_14);
#line 2584 "stm_expand.m"
      return;
    }
#line 2584 "stm_expand.m"
  }
#line 2595 "stm_expand.m"
}

#line 2080 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2080__1_4_p_0(
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_12,
#line 2080 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_35,
#line 2080 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_36)
#line 2080 "stm_expand.m"
{
#line 2080 "stm_expand.m"
  {
#line 2080 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2078 "stm_expand.m"
    {
#line 2078 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_35)), ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)));
    }
#line 2080 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 2079 "stm_expand.m"
      *transform_hlds__stm_expand__HeadVar__4_36 = transform_hlds__stm_expand__ResultVar_12;
#line 2080 "stm_expand.m"
    else
#line 2081 "stm_expand.m"
      *transform_hlds__stm_expand__HeadVar__4_36 = transform_hlds__stm_expand__HeadVar__3_35;
#line 2080 "stm_expand.m"
  }
#line 2080 "stm_expand.m"
}

#line 1801 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1801__1_6_p_0(
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_51,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_52,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_53,
#line 1801 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_54,
#line 1801 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_55,
#line 1801 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_56)
#line 1801 "stm_expand.m"
{
#line 1801 "stm_expand.m"
  {
#line 1801 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 1801 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;

#line 1804 "stm_expand.m"
    {
#line 1804 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1807 "stm_expand.m"
    {
#line 1807 "stm_expand.m"
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_53));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1807 "stm_expand.m"
    }
#line 1807 "stm_expand.m"
    {
#line 1807 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__2_52));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 1807 "stm_expand.m"
    }
#line 1807 "stm_expand.m"
    {
#line 1807 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_51));
#line 1807 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1807 "stm_expand.m"
    }
#line 1808 "stm_expand.m"
    transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1808 "stm_expand.m"
    {
#line 1808 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1808 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_51));
#line 1808 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1808 "stm_expand.m"
    }
#line 1809 "stm_expand.m"
    {
#line 1809 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__2_52));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1809 "stm_expand.m"
    }
#line 1809 "stm_expand.m"
    {
#line 1809 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__3_53));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1809 "stm_expand.m"
    }
#line 1809 "stm_expand.m"
    {
#line 1809 "stm_expand.m"
      transform_hlds__stm_expand__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1809 "stm_expand.m"
    }
#line 1809 "stm_expand.m"
    {
#line 1809 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1809 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_77_77));
#line 1809 "stm_expand.m"
    }
#line 1808 "stm_expand.m"
    {
#line 1808 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 1808 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 1808 "stm_expand.m"
    }
#line 1808 "stm_expand.m"
    {
#line 1808 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
#line 1804 "stm_expand.m"
    {
#line 1804 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_57_57, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, transform_hlds__stm_expand__HeadVar__4_54, transform_hlds__stm_expand__HeadVar__5_55, transform_hlds__stm_expand__HeadVar__6_56);
#line 1804 "stm_expand.m"
      return;
    }
#line 1801 "stm_expand.m"
  }
#line 1801 "stm_expand.m"
}

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1787__1_4_p_0(
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_41,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_42,
#line 1787 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_43,
#line 1787 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_44)
#line 1787 "stm_expand.m"
{
#line 1787 "stm_expand.m"
  {
#line 1787 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1787 "stm_expand.m"
    {
#line 1787 "stm_expand.m"
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_55_56_55_95_95_49_95_95_91_49_93_95_48_4_p_0(transform_hlds__stm_expand__HeadVar__2_42, transform_hlds__stm_expand__HeadVar__3_43, transform_hlds__stm_expand__HeadVar__4_44);
#line 1787 "stm_expand.m"
      return;
    }
#line 1787 "stm_expand.m"
  }
#line 1787 "stm_expand.m"
}

#line 1342 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1342__1_7_p_0(
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_36,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_37,
#line 1342 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_38,
#line 1342 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_39,
#line 1342 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_40)
#line 1342 "stm_expand.m"
{
#line 1517 "stm_expand.m"
  {
#line 1517 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1517 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1517 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;

#line 1517 "stm_expand.m"
    {
#line 1517 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__HeadVar__4_37, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__HeadVar__3_36, transform_hlds__stm_expand__HeadVar__5_38, &transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__V_27_27, transform_hlds__stm_expand__HeadVar__6_39, transform_hlds__stm_expand__HeadVar__7_40);
    }
#line 1517 "stm_expand.m"
  }
#line 1342 "stm_expand.m"
}

#line 993 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__993__1_5_p_0(
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_79,
#line 993 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_80,
#line 993 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_81,
#line 993 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_82)
#line 993 "stm_expand.m"
{
#line 993 "stm_expand.m"
  {
#line 993 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 993 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 993 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 993 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;

#line 995 "stm_expand.m"
    {
#line 995 "stm_expand.m"
      transform_hlds__stm_expand__V_84_84 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 995 "stm_expand.m"
    {
#line 995 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 995 "stm_expand.m"
    {
#line 995 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
#line 995 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 995 "stm_expand.m"
    }
#line 995 "stm_expand.m"
    {
#line 995 "stm_expand.m"
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__HeadVar__2_79, transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__V_83_83, transform_hlds__stm_expand__HeadVar__3_80, transform_hlds__stm_expand__HeadVar__4_81, transform_hlds__stm_expand__HeadVar__5_82);
#line 995 "stm_expand.m"
      return;
    }
#line 993 "stm_expand.m"
  }
#line 993 "stm_expand.m"
}

#line 979 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__979__1_5_p_0(
#line 979 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_50,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_51,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_52,
#line 979 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_53,
#line 979 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_54)
#line 979 "stm_expand.m"
{
#line 979 "stm_expand.m"
  {
#line 979 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NPI1_23;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;

#line 981 "stm_expand.m"
    {
#line 981 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 981 "stm_expand.m"
    {
#line 981 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), transform_hlds__stm_expand__HeadVar__3_52, transform_hlds__stm_expand__HeadVar__4_53, &transform_hlds__stm_expand__NPI1_23);
    }
#line 983 "stm_expand.m"
    {
#line 983 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 985 "stm_expand.m"
    {
#line 985 "stm_expand.m"
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (*transform_hlds__stm_expand__HeadVar__3_52));
#line 985 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "stm_expand.m"
    }
#line 985 "stm_expand.m"
    {
#line 985 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_50));
#line 985 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 985 "stm_expand.m"
    }
#line 986 "stm_expand.m"
    {
#line 986 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 986 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__1_50));
#line 986 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 986 "stm_expand.m"
    }
#line 987 "stm_expand.m"
    {
#line 987 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (*transform_hlds__stm_expand__HeadVar__3_52));
#line 987 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "stm_expand.m"
    }
#line 987 "stm_expand.m"
    {
#line 987 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 987 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "stm_expand.m"
    }
#line 986 "stm_expand.m"
    {
#line 986 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 986 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 986 "stm_expand.m"
    }
#line 986 "stm_expand.m"
    {
#line 986 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
#line 983 "stm_expand.m"
    {
#line 983 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_58_58, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_66_66, transform_hlds__stm_expand__HeadVar__2_51, transform_hlds__stm_expand__NPI1_23, transform_hlds__stm_expand__HeadVar__5_54);
#line 983 "stm_expand.m"
      return;
    }
#line 979 "stm_expand.m"
  }
#line 979 "stm_expand.m"
}

#line 791 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__791__1_7_p_0(
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_43,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_44,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_89,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__4_90,
#line 791 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__5_91,
#line 791 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__6_92,
#line 791 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__7_93)
#line 791 "stm_expand.m"
{
#line 791 "stm_expand.m"
  {
#line 791 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 791 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;

#line 791 "stm_expand.m"
    {
#line 791 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(transform_hlds__stm_expand__HeadVar__4_90, transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__HeadVar__3_89, transform_hlds__stm_expand__HeadVar__5_91, &transform_hlds__stm_expand__V_51_51, transform_hlds__stm_expand__HeadVar__6_92, transform_hlds__stm_expand__HeadVar__7_93);
    }
#line 791 "stm_expand.m"
  }
#line 791 "stm_expand.m"
}

#line 579 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(
#line 579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_11,
#line 579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_12)
#line 579 "stm_expand.m"
{
#line 579 "stm_expand.m"
  {
#line 579 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17;
#line 579 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;

#line 579 "stm_expand.m"
    *transform_hlds__stm_expand__HeadVar__2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 0)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 1)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 2)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 3)));
#line 579 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_11, (MR_Integer) 4)));
#line 579 "stm_expand.m"
  }
#line 579 "stm_expand.m"
}

#line 223 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
#line 223 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 223 "stm_expand.m"
{
#line 223 "stm_expand.m"
  {
#line 223 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 223 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 223 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 223 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
#line 223 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 4605 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "stm_expand.m"
    else
#line 223 "stm_expand.m"
      {
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_18_18;

#line 223 "stm_expand.m"
        {
#line 223 "stm_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
#line 4647 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
#line 223 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
#line 223 "stm_expand.m"
        else
#line 223 "stm_expand.m"
          {
#line 223 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_19_19;

#line 223 "stm_expand.m"
            {
#line 223 "stm_expand.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
#line 4667 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
#line 223 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
#line 223 "stm_expand.m"
            else
#line 223 "stm_expand.m"
              {
#line 223 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_20_20;

#line 223 "stm_expand.m"
                {
#line 223 "stm_expand.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
#line 4687 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
#line 223 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
#line 223 "stm_expand.m"
                else
#line 223 "stm_expand.m"
                  {
#line 223 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_21_21;

#line 223 "stm_expand.m"
                    {
#line 223 "stm_expand.m"
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
#line 4707 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
#line 223 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
#line 223 "stm_expand.m"
                    else
#line 223 "stm_expand.m"
                      {
#line 223 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__V_22_22;

#line 223 "stm_expand.m"
                        {
#line 223 "stm_expand.m"
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
#line 4727 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
#line 223 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
#line 223 "stm_expand.m"
                        else
#line 223 "stm_expand.m"
                          {
#line 223 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__V_23_23;

#line 223 "stm_expand.m"
                            {
#line 223 "stm_expand.m"
                              mercury__term____Compare____context_0_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__V_16_16);
                            }
#line 4747 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
#line 223 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 223 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
#line 223 "stm_expand.m"
                            else
#line 223 "stm_expand.m"
                              {
#line 223 "stm_expand.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
#line 223 "stm_expand.m"
                                return;
                              }
#line 223 "stm_expand.m"
                          }
#line 223 "stm_expand.m"
                      }
#line 223 "stm_expand.m"
                  }
#line 223 "stm_expand.m"
              }
#line 223 "stm_expand.m"
          }
#line 223 "stm_expand.m"
      }
#line 223 "stm_expand.m"
  }
#line 223 "stm_expand.m"
}

#line 223 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 223 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 223 "stm_expand.m"
{
#line 223 "stm_expand.m"
  {
#line 223 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 223 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 223 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 223 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
#line 223 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 223 "stm_expand.m"
    else
#line 223 "stm_expand.m"
      {
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 223 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 223 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

#line 4838 "transform_hlds.stm_expand.c"
        {
#line 4840 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
#line 223 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
          {
#line 4847 "transform_hlds.stm_expand.c"
            {
#line 4849 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
#line 223 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
              {
#line 4856 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
#line 223 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                  {
#line 4862 "transform_hlds.stm_expand.c"
                    {
#line 4864 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
#line 223 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                      {
#line 4871 "transform_hlds.stm_expand.c"
                        {
#line 4873 "transform_hlds.stm_expand.c"
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
#line 223 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 223 "stm_expand.m"
                          {
#line 4880 "transform_hlds.stm_expand.c"
                            {
#line 4882 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = mercury__term____Unify____context_0_0(transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                            }
#line 223 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 4887 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
#line 223 "stm_expand.m"
                          }
#line 223 "stm_expand.m"
                      }
#line 223 "stm_expand.m"
                  }
#line 223 "stm_expand.m"
              }
#line 223 "stm_expand.m"
          }
#line 223 "stm_expand.m"
      }
#line 223 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 223 "stm_expand.m"
  }
#line 223 "stm_expand.m"
}

#line 209 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
#line 209 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 209 "stm_expand.m"
{
#line 209 "stm_expand.m"
  {
#line 209 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 209 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 209 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 209 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
#line 209 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 4932 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "stm_expand.m"
    else
#line 209 "stm_expand.m"
      {
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_18_18;

#line 209 "stm_expand.m"
        {
#line 209 "stm_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
#line 4974 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
#line 209 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
#line 209 "stm_expand.m"
        else
#line 209 "stm_expand.m"
          {
#line 209 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_19_19;

#line 209 "stm_expand.m"
            {
#line 209 "stm_expand.m"
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
#line 4994 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
#line 209 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
#line 209 "stm_expand.m"
            else
#line 209 "stm_expand.m"
              {
#line 209 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_20_20;

#line 209 "stm_expand.m"
                {
#line 209 "stm_expand.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
#line 5014 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
#line 209 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
#line 209 "stm_expand.m"
                else
#line 209 "stm_expand.m"
                  {
#line 209 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_21_21;

#line 209 "stm_expand.m"
                    {
#line 209 "stm_expand.m"
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
#line 5034 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
#line 209 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
#line 209 "stm_expand.m"
                    else
#line 209 "stm_expand.m"
                      {
#line 209 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__V_22_22;

#line 209 "stm_expand.m"
                        {
#line 209 "stm_expand.m"
                          hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
#line 5054 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
#line 209 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
#line 209 "stm_expand.m"
                        else
#line 209 "stm_expand.m"
                          {
#line 209 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__V_23_23;
#line 209 "stm_expand.m"
                            MR_Integer transform_hlds__stm_expand__V_33_33 = (MR_Integer) transform_hlds__stm_expand__V_9_9;
#line 209 "stm_expand.m"
                            MR_Integer transform_hlds__stm_expand__V_34_34 = (MR_Integer) transform_hlds__stm_expand__V_16_16;

#line 209 "stm_expand.m"
                            {
#line 209 "stm_expand.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34);
                            }
#line 5078 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
#line 209 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 209 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
#line 209 "stm_expand.m"
                            else
#line 209 "stm_expand.m"
                              {
#line 209 "stm_expand.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
#line 209 "stm_expand.m"
                                return;
                              }
#line 209 "stm_expand.m"
                          }
#line 209 "stm_expand.m"
                      }
#line 209 "stm_expand.m"
                  }
#line 209 "stm_expand.m"
              }
#line 209 "stm_expand.m"
          }
#line 209 "stm_expand.m"
      }
#line 209 "stm_expand.m"
  }
#line 209 "stm_expand.m"
}

#line 209 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 209 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 209 "stm_expand.m"
{
#line 209 "stm_expand.m"
  {
#line 209 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 209 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 209 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 209 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
#line 209 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 209 "stm_expand.m"
    else
#line 209 "stm_expand.m"
      {
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 209 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
#line 209 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

#line 5169 "transform_hlds.stm_expand.c"
        {
#line 5171 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
#line 209 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
          {
#line 5178 "transform_hlds.stm_expand.c"
            {
#line 5180 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
#line 209 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
              {
#line 5187 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
#line 209 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                  {
#line 5193 "transform_hlds.stm_expand.c"
                    {
#line 5195 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
#line 209 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                      {
#line 5202 "transform_hlds.stm_expand.c"
                        {
#line 5204 "transform_hlds.stm_expand.c"
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
#line 209 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 209 "stm_expand.m"
                          {
#line 5211 "transform_hlds.stm_expand.c"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_8_8 == transform_hlds__stm_expand__V_15_15);
#line 209 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 5215 "transform_hlds.stm_expand.c"
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
#line 209 "stm_expand.m"
                          }
#line 209 "stm_expand.m"
                      }
#line 209 "stm_expand.m"
                  }
#line 209 "stm_expand.m"
              }
#line 209 "stm_expand.m"
          }
#line 209 "stm_expand.m"
      }
#line 209 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 209 "stm_expand.m"
  }
#line 209 "stm_expand.m"
}

#line 236 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
#line 236 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
#line 236 "stm_expand.m"
{
#line 236 "stm_expand.m"
  {
#line 236 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 236 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
#line 236 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_19 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

#line 236 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_18 == transform_hlds__stm_expand__CastY_19);
#line 236 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 5260 "transform_hlds.stm_expand.c"
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "stm_expand.m"
    else
#line 236 "stm_expand.m"
      {
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_14_14;

#line 236 "stm_expand.m"
        {
#line 236 "stm_expand.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_14_14, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
        }
#line 5294 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_14_14 == (MR_Integer) 0);
#line 236 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 236 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_14_14;
#line 236 "stm_expand.m"
        else
#line 236 "stm_expand.m"
          {
#line 236 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_15_15;

#line 236 "stm_expand.m"
            {
#line 236 "stm_expand.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_15_15, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
            }
#line 5314 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_15_15 == (MR_Integer) 0);
#line 236 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 236 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_15_15;
#line 236 "stm_expand.m"
            else
#line 236 "stm_expand.m"
              {
#line 236 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__V_16_16;

#line 236 "stm_expand.m"
                {
#line 236 "stm_expand.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_16_16, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                }
#line 5334 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_16_16 == (MR_Integer) 0);
#line 236 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 236 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_16_16;
#line 236 "stm_expand.m"
                else
#line 236 "stm_expand.m"
                  {
#line 236 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__V_17_17;

#line 236 "stm_expand.m"
                    {
#line 236 "stm_expand.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &transform_hlds__stm_expand__V_17_17, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                    }
#line 5354 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_17_17 == (MR_Integer) 0);
#line 236 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
#line 236 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_17_17;
#line 236 "stm_expand.m"
                    else
#line 236 "stm_expand.m"
                      {
#line 236 "stm_expand.m"
                        {
#line 236 "stm_expand.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__HeadVar__1_1, ((MR_Box) (transform_hlds__stm_expand__V_8_8)), ((MR_Box) (transform_hlds__stm_expand__V_13_13)));
#line 236 "stm_expand.m"
                          return;
                        }
#line 236 "stm_expand.m"
                      }
#line 236 "stm_expand.m"
                  }
#line 236 "stm_expand.m"
              }
#line 236 "stm_expand.m"
          }
#line 236 "stm_expand.m"
      }
#line 236 "stm_expand.m"
  }
#line 236 "stm_expand.m"
}

#line 236 "stm_expand.m"
static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 236 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
#line 236 "stm_expand.m"
{
#line 236 "stm_expand.m"
  {
#line 236 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 236 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastX_13 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
#line 236 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__CastY_14 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

#line 236 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_13 == transform_hlds__stm_expand__CastY_14);
#line 236 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = MR_TRUE;
#line 236 "stm_expand.m"
    else
#line 236 "stm_expand.m"
      {
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_16_16;
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_18_18;
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeInfo_19_19;
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));

#line 5445 "transform_hlds.stm_expand.c"
        {
#line 5447 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__V_3_3)), ((MR_Box) (transform_hlds__stm_expand__V_8_8)));
        }
#line 236 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
          {
#line 5454 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__TypeInfo_16_16 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
#line 5456 "transform_hlds.stm_expand.c"
            {
#line 5458 "transform_hlds.stm_expand.c"
              transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_16_16, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
            }
#line 236 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
              {
#line 5465 "transform_hlds.stm_expand.c"
                transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
#line 5467 "transform_hlds.stm_expand.c"
                {
#line 5469 "transform_hlds.stm_expand.c"
                  transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_17_17, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
                }
#line 236 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
                  {
#line 5476 "transform_hlds.stm_expand.c"
                    transform_hlds__stm_expand__TypeInfo_18_18 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5478 "transform_hlds.stm_expand.c"
                    {
#line 5480 "transform_hlds.stm_expand.c"
                      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_18_18, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                    }
#line 236 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 236 "stm_expand.m"
                      {
#line 5487 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__TypeInfo_19_19 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5489 "transform_hlds.stm_expand.c"
                        {
#line 5491 "transform_hlds.stm_expand.c"
                          return transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_19_19, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                        }
#line 236 "stm_expand.m"
                      }
#line 236 "stm_expand.m"
                  }
#line 236 "stm_expand.m"
              }
#line 236 "stm_expand.m"
          }
#line 236 "stm_expand.m"
      }
#line 236 "stm_expand.m"
    return transform_hlds__stm_expand__succeeded;
#line 236 "stm_expand.m"
  }
#line 236 "stm_expand.m"
}

#line 2596 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
#line 2596 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2596 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2596 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2596 "stm_expand.m"
{
#line 2596 "stm_expand.m"
  {
#line 2596 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2596 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__3_20;

#line 2596 "stm_expand.m"
    {
#line 2596 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2596__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_HeadVar__3_20);
    }
#line 2596 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__3_20));
#line 2596 "stm_expand.m"
  }
#line 2596 "stm_expand.m"
}

#line 2595 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
#line 2595 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2595 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2595 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2595 "stm_expand.m"
{
#line 2595 "stm_expand.m"
  {
#line 2595 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2595 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__3_14;

#line 2595 "stm_expand.m"
    {
#line 2595 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2595__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__3_14);
    }
#line 2595 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__3_14));
#line 2595 "stm_expand.m"
  }
#line 2595 "stm_expand.m"
}

#line 2590 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
#line 2590 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2590 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputModes_5,
#line 2590 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputModes_6)
#line 2590 "stm_expand.m"
{
#line 2593 "stm_expand.m"
  {
#line 2593 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_18_18;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_7;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_8;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12;
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
#line 2593 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__InputSet_26);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__OutputSet_27);
    }
#line 2595 "stm_expand.m"
    {
#line 2595 "stm_expand.m"
      transform_hlds__stm_expand__V_10_10 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 2595 "stm_expand.m"
    {
#line 2595 "stm_expand.m"
      transform_hlds__stm_expand__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2595 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
#line 2595 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
#line 2595 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2595 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 3) = ((MR_Box) (transform_hlds__stm_expand__V_10_10));
#line 2595 "stm_expand.m"
    }
#line 5644 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 5646 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 2595 "stm_expand.m"
    {
#line 2595 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__InputVars_7, transform_hlds__stm_expand__InputModes_5);
    }
#line 2596 "stm_expand.m"
    {
#line 2596 "stm_expand.m"
      transform_hlds__stm_expand__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 2596 "stm_expand.m"
    {
#line 2596 "stm_expand.m"
      transform_hlds__stm_expand__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2596 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
#line 2596 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
#line 2596 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2596 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 3) = ((MR_Box) (transform_hlds__stm_expand__V_12_12));
#line 2596 "stm_expand.m"
    }
#line 2596 "stm_expand.m"
    {
#line 2596 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_11_11, transform_hlds__stm_expand__OutputVars_8, transform_hlds__stm_expand__OutputModes_6);
#line 2596 "stm_expand.m"
      return;
    }
#line 2593 "stm_expand.m"
  }
#line 2590 "stm_expand.m"
}

#line 2569 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
#line 2569 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
#line 2569 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_6,
#line 2569 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
#line 2569 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutputTypes_8)
#line 2569 "stm_expand.m"
{
#line 2572 "stm_expand.m"
  {
#line 2572 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_32;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 3)));
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_10;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_11;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_12;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_22;
#line 2572 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_23;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 0)));
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 1)));
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 2)));
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 4)));
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 5)));
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 6)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;

#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_9, &transform_hlds__stm_expand__VarTypes_10);
    }
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 0)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 4)));
#line 5749 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__InputSet_22);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__OutputSet_23);
    }
#line 2577 "stm_expand.m"
    {
#line 2577 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__InputVars_11, transform_hlds__stm_expand__InputTypes_7);
    }
#line 2578 "stm_expand.m"
    {
#line 2578 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__OutputVars_12, transform_hlds__stm_expand__OutputTypes_8);
#line 2578 "stm_expand.m"
      return;
    }
#line 2572 "stm_expand.m"
  }
#line 2569 "stm_expand.m"
}

#line 2556 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
#line 2556 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
#line 2556 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Input_5,
#line 2556 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Output_6)
#line 2556 "stm_expand.m"
{
#line 2559 "stm_expand.m"
  {
#line 2559 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2559 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2559 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
#line 2559 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      *transform_hlds__stm_expand__Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__InputSet_7);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      *transform_hlds__stm_expand__Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__OutputSet_8);
    }
#line 2559 "stm_expand.m"
  }
#line 2556 "stm_expand.m"
}

#line 2542 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
#line 2542 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
#line 2542 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_4)
#line 2542 "stm_expand.m"
{
#line 2544 "stm_expand.m"
  {
#line 2544 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2544 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 1)));
#line 2544 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 2)));
#line 2545 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 0)));
#line 2545 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 3)));
#line 2545 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 4)));
#line 2545 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 5)));
#line 2545 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 6)));

#line 2547 "stm_expand.m"
    {
#line 2547 "stm_expand.m"
      MR_Word base;
#line 2547 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2547 "stm_expand.m"
      *transform_hlds__stm_expand__PredProcId_4 = base;
#line 2547 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
#line 2547 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
#line 2547 "stm_expand.m"
    }
#line 2544 "stm_expand.m"
  }
#line 2542 "stm_expand.m"
}

#line 2522 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
#line 2522 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal_4,
#line 2522 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2522 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
#line 2522 "stm_expand.m"
{
#line 2525 "stm_expand.m"
  {
#line 2525 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_32_32;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVars_7;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVarsSet_8;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarSet0_9;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes0_10;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProgVarSet_11;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes_12;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo1_13;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo2_14;
#line 2525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_15;
#line 2526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2526 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2526 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2538 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 2538 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2538 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27;
#line 2538 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 2538 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2538 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_31_31;
#line 2538 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 2527 "stm_expand.m"
    {
#line 2527 "stm_expand.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__Goal_4, &transform_hlds__stm_expand__GoalVars_7);
    }
#line 5937 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2528 "stm_expand.m"
    {
#line 2528 "stm_expand.m"
      transform_hlds__stm_expand__GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVars_7);
    }
#line 2529 "stm_expand.m"
    {
#line 2529 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarSet0_9);
    }
#line 2530 "stm_expand.m"
    {
#line 2530 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarTypes0_10);
    }
#line 2532 "stm_expand.m"
    {
#line 2532 "stm_expand.m"
      mercury__varset__select_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarSet0_9, &transform_hlds__stm_expand__ProgVarSet_11);
    }
#line 2533 "stm_expand.m"
    {
#line 2533 "stm_expand.m"
      parse_tree__prog_data__vartypes_select_3_p_0(transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarTypes0_10, &transform_hlds__stm_expand__ProcVarTypes_12);
    }
#line 2535 "stm_expand.m"
    {
#line 2535 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__ProgVarSet_11, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo1_13);
    }
#line 2536 "stm_expand.m"
    {
#line 2536 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_4, transform_hlds__stm_expand__ProcInfo1_13, &transform_hlds__stm_expand__ProcInfo2_14);
    }
#line 2537 "stm_expand.m"
    {
#line 2537 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__ProcVarTypes_12, transform_hlds__stm_expand__ProcInfo2_14, &transform_hlds__stm_expand__ProcInfo_15);
    }
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2538 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2538 "stm_expand.m"
    {
#line 2538 "stm_expand.m"
      MR_Word base;
#line 2538 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2538 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_15));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2538 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2538 "stm_expand.m"
    }
#line 2525 "stm_expand.m"
  }
#line 2522 "stm_expand.m"
}

#line 2507 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
#line 2507 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
#line 2507 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10)
#line 2507 "stm_expand.m"
{
#line 2510 "stm_expand.m"
  {
#line 2510 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo1_6;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_8;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;
#line 2510 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_29_29;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2510 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 2510 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_33_33;
#line 2511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
#line 2511 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
#line 2511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
#line 2511 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
#line 2511 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
#line 2517 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 2517 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;

#line 2513 "stm_expand.m"
    {
#line 2513 "stm_expand.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__ProcInfo0_4, &transform_hlds__stm_expand__ProcInfo1_6);
    }
#line 2515 "stm_expand.m"
    {
#line 2515 "stm_expand.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__ProcInfo1_6, &transform_hlds__stm_expand__ProcInfo_7, transform_hlds__stm_expand__ModuleInfo0_5, &transform_hlds__stm_expand__ModuleInfo_8);
    }
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
#line 2517 "stm_expand.m"
    transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
#line 2518 "stm_expand.m"
    {
#line 2518 "stm_expand.m"
      MR_Word base;
#line 2518 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2518 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10 = base;
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_8));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_32_32));
#line 2518 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2518 "stm_expand.m"
    }
#line 2510 "stm_expand.m"
  }
#line 2507 "stm_expand.m"
}

#line 2497 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
#line 2497 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_4,
#line 2497 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
#line 2497 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8)
#line 2497 "stm_expand.m"
{
#line 2500 "stm_expand.m"
  {
#line 2500 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2500 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 0)));
#line 2501 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 1)));
#line 2501 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 2)));
#line 2501 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 3)));
#line 2501 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 4)));
#line 2501 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 5)));
#line 2501 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 6)));
#line 2502 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 1)));
#line 2502 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 2)));
#line 2502 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 3)));
#line 2502 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 4)));
#line 2502 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 5)));
#line 2502 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 6)));
#line 2502 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 0)));

#line 2502 "stm_expand.m"
    {
#line 2502 "stm_expand.m"
      MR_Word base;
#line 2502 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2502 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8 = base;
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_6));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
#line 2502 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 2502 "stm_expand.m"
    }
#line 2500 "stm_expand.m"
  }
#line 2497 "stm_expand.m"
}

#line 2480 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
#line 2480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPred_4,
#line 2480 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
#line 2480 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInfo_6)
#line 2480 "stm_expand.m"
{
#line 2483 "stm_expand.m"
  {
#line 2483 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 1)));
#line 2483 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__OrigProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 2)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 3)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 4)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmExpanded_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 5)));
#line 2483 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpandNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 6)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 0)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 1)));
#line 2483 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 2)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 3)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 4)));
#line 2483 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo_21;
#line 2484 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 0)));
#line 2487 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 5)));
#line 2487 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 6)));

#line 2489 "stm_expand.m"
    {
#line 2489 "stm_expand.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_15, transform_hlds__stm_expand__NewProcId_16, transform_hlds__stm_expand__NewPredInfo_17, transform_hlds__stm_expand__NewProcInfo_18, transform_hlds__stm_expand__PredModuleInfo0_14, &transform_hlds__stm_expand__PredModuleInfo_21);
    }
#line 2491 "stm_expand.m"
    {
#line 2491 "stm_expand.m"
      MR_Word base;
#line 2491 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2491 "stm_expand.m"
      *transform_hlds__stm_expand__StmInfo_6 = base;
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_21));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_8));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_9));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_10));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_11));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_12));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_13));
#line 2491 "stm_expand.m"
    }
#line 2483 "stm_expand.m"
  }
#line 2480 "stm_expand.m"
}

#line 2469 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
#line 2469 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
#line 2469 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
#line 2469 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9)
#line 2469 "stm_expand.m"
{
#line 2472 "stm_expand.m"
  {
#line 2472 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2472 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
#line 2472 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
#line 2473 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
#line 2473 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
#line 2473 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
#line 2473 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
#line 2473 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
#line 2473 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
#line 2475 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_17_17;
#line 2475 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;
#line 2475 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_19_19;
#line 2475 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20;
#line 2475 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 2475 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_23_23;
#line 2475 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;

#line 2474 "stm_expand.m"
    {
#line 2474 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_4, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo_7);
    }
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
#line 2475 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
#line 2475 "stm_expand.m"
    {
#line 2475 "stm_expand.m"
      MR_Word base;
#line 2475 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2475 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9 = base;
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 2475 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
#line 2475 "stm_expand.m"
    }
#line 2472 "stm_expand.m"
  }
#line 2469 "stm_expand.m"
}

#line 2383 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
#line 2383 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Prefix_14,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
#line 2383 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
#line 2383 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66)
#line 2383 "stm_expand.m"
{
#line 2389 "stm_expand.m"
  {
#line 2389 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_139_139;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpansionCnt0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Arity_25;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo0_27;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_28;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcContext_29;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarSet_30;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcVarTypes_31;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInstVarSet_32;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcGoal_34;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcRttiVarMaps_35;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__HasParallelConj_36;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarNameRemap_37;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleName_39;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__OrigPredName_40;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredOrFunc_41;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredContext_42;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredName_43;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredOrigin_44;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredOrigin_45;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTypeVarSet_46;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredExistQVars_47;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredClassContext_48;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredAssertions_49;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Markers_50;
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_51;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_52;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredicateTable0_53;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_54;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredicateTable_55;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_56;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallExpr_57;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallNonLocals_58;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallInstmapDelta_59;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallDeterminism_60;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallPurity_61;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CallContext_62;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_63;
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpansionCnt_64;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_69_69;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_71_71;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_72_72;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_74_74;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_75_75;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_77_77;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_78_78;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_79_79;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_81_81;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_82_82;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_83_83;
#line 2389 "stm_expand.m"
    MR_String transform_hlds__stm_expand__V_85_85;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 2389 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_126_126;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_127_127;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_128_128;
#line 2389 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_129_129;
#line 2390 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
#line 2390 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
#line 2397 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2462 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_124_124;
#line 2462 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_130_130;

#line 2396 "stm_expand.m"
    {
#line 2396 "stm_expand.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__Arity_25);
    }
#line 2397 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 0)));
#line 2397 "stm_expand.m"
    transform_hlds__stm_expand__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 1)));
#line 2399 "stm_expand.m"
    {
#line 2399 "stm_expand.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__stm_expand__PredInfo_21, transform_hlds__stm_expand__ProcId_22, &transform_hlds__stm_expand__ProcInfo_28);
    }
#line 2400 "stm_expand.m"
    {
#line 2400 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcContext_29);
    }
#line 2401 "stm_expand.m"
    {
#line 2401 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarSet_30);
    }
#line 2402 "stm_expand.m"
    {
#line 2402 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarTypes_31);
    }
#line 2403 "stm_expand.m"
    {
#line 2403 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcInstVarSet_32);
    }
#line 2406 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeDetism_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2408 "stm_expand.m"
      {
#line 2408 "stm_expand.m"
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__CallDeterminism_60);
      }
#line 2406 "stm_expand.m"
    else
#line 2405 "stm_expand.m"
      transform_hlds__stm_expand__CallDeterminism_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeDetism_16, (MR_Integer) 0)));
#line 2410 "stm_expand.m"
    {
#line 2410 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcGoal_34);
    }
#line 2411 "stm_expand.m"
    {
#line 2411 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcRttiVarMaps_35);
    }
#line 2412 "stm_expand.m"
    {
#line 2412 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__HasParallelConj_36);
    }
#line 2413 "stm_expand.m"
    {
#line 2413 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__VarNameRemap_37);
    }
#line 2414 "stm_expand.m"
    {
#line 2414 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__stm_expand__ProcContext_29, transform_hlds__stm_expand__ProcVarSet_30, transform_hlds__stm_expand__ProcVarTypes_31, transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcInstVarSet_32, transform_hlds__stm_expand__ProcHeadModes_13, (MR_Integer) 2, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__ProcGoal_34, transform_hlds__stm_expand__ProcRttiVarMaps_35, (MR_Integer) 1, transform_hlds__stm_expand__HasParallelConj_36, transform_hlds__stm_expand__VarNameRemap_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
#line 2418 "stm_expand.m"
    {
#line 2418 "stm_expand.m"
      transform_hlds__stm_expand__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2419 "stm_expand.m"
    {
#line 2419 "stm_expand.m"
      transform_hlds__stm_expand__OrigPredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2420 "stm_expand.m"
    {
#line 2420 "stm_expand.m"
      transform_hlds__stm_expand__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
#line 2421 "stm_expand.m"
    {
#line 2421 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredContext_42);
    }
#line 6622 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_139_139, ((MR_Box) (transform_hlds__stm_expand__Arity_25)));
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_82_82 = mercury__string__string_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__stm_expand__PredId_23)));
    }
#line 2425 "stm_expand.m"
    {
#line 2425 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_139_139, ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt0_24)));
    }
#line 2425 "stm_expand.m"
    {
#line 2425 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_85_85);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_82_82, transform_hlds__stm_expand__V_83_83);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_81_81);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_77_77 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_78_78, transform_hlds__stm_expand__V_79_79);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_77_77);
    }
#line 2424 "stm_expand.m"
    {
#line 2424 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__OrigPredName_40, transform_hlds__stm_expand__V_75_75);
    }
#line 2423 "stm_expand.m"
    {
#line 2423 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_74_74);
    }
#line 2423 "stm_expand.m"
    {
#line 2423 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Prefix_14, transform_hlds__stm_expand__V_72_72);
    }
#line 2423 "stm_expand.m"
    {
#line 2423 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", transform_hlds__stm_expand__V_71_71);
    }
#line 2423 "stm_expand.m"
    {
#line 2423 "stm_expand.m"
      transform_hlds__stm_expand__NewPredName_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2423 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleName_39));
#line 2423 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 2423 "stm_expand.m"
    }
#line 2427 "stm_expand.m"
    {
#line 2427 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__OrigPredOrigin_44);
    }
#line 2428 "stm_expand.m"
    {
#line 2428 "stm_expand.m"
      transform_hlds__stm_expand__NewPredOrigin_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2428 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2428 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredOrigin_44));
#line 2428 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 2) = ((MR_Box) (transform_hlds__stm_expand__PredId_23));
#line 2428 "stm_expand.m"
    }
#line 2431 "stm_expand.m"
    {
#line 2431 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredTypeVarSet_46);
    }
#line 2432 "stm_expand.m"
    {
#line 2432 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredExistQVars_47);
    }
#line 2433 "stm_expand.m"
    {
#line 2433 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredClassContext_48);
    }
#line 2434 "stm_expand.m"
    {
#line 2434 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredAssertions_49);
    }
#line 2435 "stm_expand.m"
    {
#line 2435 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__Markers_50);
    }
#line 2436 "stm_expand.m"
    {
#line 2436 "stm_expand.m"
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__stm_expand__ModuleName_39, transform_hlds__stm_expand__NewPredName_43, transform_hlds__stm_expand__PredOrFunc_41, transform_hlds__stm_expand__PredContext_42, transform_hlds__stm_expand__NewPredOrigin_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__stm_expand__Markers_50, transform_hlds__stm_expand__PredArgTypes_12, transform_hlds__stm_expand__PredTypeVarSet_46, transform_hlds__stm_expand__PredExistQVars_47, transform_hlds__stm_expand__PredClassContext_48, transform_hlds__stm_expand__PredAssertions_49, transform_hlds__stm_expand__VarNameRemap_37, transform_hlds__stm_expand__NewProcInfo_38, &transform_hlds__stm_expand__NewProcId_51, &transform_hlds__stm_expand__NewPredInfo_52);
    }
#line 2441 "stm_expand.m"
    {
#line 2441 "stm_expand.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__PredicateTable0_53);
    }
#line 2442 "stm_expand.m"
    {
#line 2442 "stm_expand.m"
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__stm_expand__NewPredInfo_52, &transform_hlds__stm_expand__NewPredId_54, transform_hlds__stm_expand__PredicateTable0_53, &transform_hlds__stm_expand__PredicateTable_55);
    }
#line 2444 "stm_expand.m"
    {
#line 2444 "stm_expand.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__stm_expand__PredicateTable_55, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__ModuleInfo_56);
    }
#line 2446 "stm_expand.m"
    {
#line 2446 "stm_expand.m"
      transform_hlds__stm_expand__CallExpr_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 0) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 1) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcHeadVars_11));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 3) = ((MR_Box) ((MR_Integer) 2));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2446 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 5) = ((MR_Box) (transform_hlds__stm_expand__NewPredName_43));
#line 2446 "stm_expand.m"
    }
#line 2449 "stm_expand.m"
    {
#line 2449 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__CallNonLocals_58);
    }
#line 2450 "stm_expand.m"
    {
#line 2450 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcHeadModes_13, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__CallInstmapDelta_59);
    }
#line 2454 "stm_expand.m"
    {
#line 2454 "stm_expand.m"
      transform_hlds__stm_expand__CallPurity_61 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
#line 2455 "stm_expand.m"
    {
#line 2455 "stm_expand.m"
      transform_hlds__stm_expand__CallContext_62 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
#line 2457 "stm_expand.m"
    {
#line 2457 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__CallNonLocals_58, transform_hlds__stm_expand__CallInstmapDelta_59, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__CallPurity_61, transform_hlds__stm_expand__CallContext_62, &transform_hlds__stm_expand__GoalInfo_63);
    }
#line 2459 "stm_expand.m"
    {
#line 2459 "stm_expand.m"
      MR_Word base;
#line 2459 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2459 "stm_expand.m"
      *transform_hlds__stm_expand__CallGoal_18 = base;
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__CallExpr_57));
#line 2459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_63));
#line 2459 "stm_expand.m"
    }
#line 2461 "stm_expand.m"
    transform_hlds__stm_expand__ExpansionCnt_64 = (transform_hlds__stm_expand__ExpansionCnt0_24 + (MR_Integer) 1);
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
#line 2462 "stm_expand.m"
    transform_hlds__stm_expand__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
#line 2463 "stm_expand.m"
    {
#line 2463 "stm_expand.m"
      MR_Word base;
#line 2463 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2463 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66 = base;
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_128_128));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
#line 2463 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt_64));
#line 2463 "stm_expand.m"
    }
#line 2464 "stm_expand.m"
    {
#line 2464 "stm_expand.m"
      MR_Word base;
#line 2464 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2464 "stm_expand.m"
      *transform_hlds__stm_expand__NewStmPredInfo_17 = base;
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__NewPredInfo_52));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__CallContext_62));
#line 2464 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2464 "stm_expand.m"
    }
#line 2389 "stm_expand.m"
  }
#line 2383 "stm_expand.m"
}

#line 2349 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
#line 2349 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_7,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_8,
#line 2349 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
#line 2349 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10)
#line 2349 "stm_expand.m"
{
#line 2352 "stm_expand.m"
  {
#line 2352 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 0)));
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 1)));
#line 2352 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 2)));
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 3)));
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 4)));
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 5)));
#line 2352 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 6)));
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_18;
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_19;
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_20;
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_21;
#line 2352 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_22;

#line 2355 "stm_expand.m"
    {
#line 2355 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_11, transform_hlds__stm_expand__PredInfo0_14, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__PolyInfo0_18);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__Context_16, transform_hlds__stm_expand__Var_7, transform_hlds__stm_expand__Goals_8, transform_hlds__stm_expand__PolyInfo0_18, &transform_hlds__stm_expand__PolyInfo_19);
    }
#line 2358 "stm_expand.m"
    {
#line 2358 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_19, transform_hlds__stm_expand__PredInfo0_14, &transform_hlds__stm_expand__PredInfo_20, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__ProcInfo_21, &transform_hlds__stm_expand__ModuleInfo_22);
    }
#line 2360 "stm_expand.m"
    {
#line 2360 "stm_expand.m"
      MR_Word base;
#line 2360 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2360 "stm_expand.m"
      *transform_hlds__stm_expand__NewPredInfo_10 = base;
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_22));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_12));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_13));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_20));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_21));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_16));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_17));
#line 2360 "stm_expand.m"
    }
#line 2352 "stm_expand.m"
  }
#line 2349 "stm_expand.m"
}

#line 2332 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
#line 2332 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
#line 2332 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ConjGoal_4)
#line 2332 "stm_expand.m"
{
#line 2334 "stm_expand.m"
  {
#line 2334 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConjGoalExpr_6;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_7;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_8;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_9;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Purity_10;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalAInfo_11;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConjGoalInfo_13;
#line 2334 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2341 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv0_V_14_14;
#line 2341 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_15_15;

#line 2336 "stm_expand.m"
    {
#line 2336 "stm_expand.m"
      transform_hlds__stm_expand__ConjGoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2336 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2336 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2336 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalsInConj_3));
#line 2336 "stm_expand.m"
    }
#line 2337 "stm_expand.m"
    {
#line 2337 "stm_expand.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__NonLocals_7);
    }
#line 2338 "stm_expand.m"
    {
#line 2338 "stm_expand.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__InstMapDelta_8);
    }
#line 2339 "stm_expand.m"
    {
#line 2339 "stm_expand.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Detism_9);
    }
#line 2340 "stm_expand.m"
    {
#line 2340 "stm_expand.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Purity_10);
    }
#line 2341 "stm_expand.m"
    {
#line 2341 "stm_expand.m"
      transform_hlds__stm_expand__conv0_V_14_14 = mercury__list__det_head_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__GoalsInConj_3);
    }
#line 2341 "stm_expand.m"
    transform_hlds__stm_expand__V_14_14 = ((MR_Word) transform_hlds__stm_expand__conv0_V_14_14);
#line 2341 "stm_expand.m"
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 0)));
#line 2341 "stm_expand.m"
    transform_hlds__stm_expand__GoalAInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 1)));
#line 2342 "stm_expand.m"
    {
#line 2342 "stm_expand.m"
      transform_hlds__stm_expand__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalAInfo_11);
    }
#line 2343 "stm_expand.m"
    {
#line 2343 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_7, transform_hlds__stm_expand__InstMapDelta_8, transform_hlds__stm_expand__Detism_9, transform_hlds__stm_expand__Purity_10, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__ConjGoalInfo_13);
    }
#line 2345 "stm_expand.m"
    {
#line 2345 "stm_expand.m"
      MR_Word base;
#line 2345 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2345 "stm_expand.m"
      *transform_hlds__stm_expand__ConjGoal_4 = base;
#line 2345 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalExpr_6));
#line 2345 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalInfo_13));
#line 2345 "stm_expand.m"
    }
#line 2334 "stm_expand.m"
  }
#line 2332 "stm_expand.m"
}

#line 2314 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
#line 2314 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalIn_4,
#line 2314 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
#line 2314 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalOut_6)
#line 2314 "stm_expand.m"
{
#line 2317 "stm_expand.m"
  {
#line 2317 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 1)));
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_9;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_10;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_11;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_13;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_14;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Reason_15;
#line 2317 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalOutExpr_16;
#line 2318 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 0)));

#line 2319 "stm_expand.m"
    {
#line 2319 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2320 "stm_expand.m"
    {
#line 2320 "stm_expand.m"
      transform_hlds__stm_expand__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2321 "stm_expand.m"
    {
#line 2321 "stm_expand.m"
      transform_hlds__stm_expand__Detism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2323 "stm_expand.m"
    {
#line 2323 "stm_expand.m"
      transform_hlds__stm_expand__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
#line 2324 "stm_expand.m"
    {
#line 2324 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_9, transform_hlds__stm_expand__InstMapDelta_10, transform_hlds__stm_expand__Detism_11, transform_hlds__stm_expand__ScopePurity_5, transform_hlds__stm_expand__Context_13, &transform_hlds__stm_expand__GoalInfo_14);
    }
#line 2326 "stm_expand.m"
    {
#line 2326 "stm_expand.m"
      transform_hlds__stm_expand__Reason_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__Reason_15, 0) = ((MR_Box) (transform_hlds__stm_expand__ScopePurity_5));
#line 2326 "stm_expand.m"
    }
#line 2327 "stm_expand.m"
    {
#line 2327 "stm_expand.m"
      transform_hlds__stm_expand__GoalOutExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_15));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalIn_4));
#line 2327 "stm_expand.m"
    }
#line 2328 "stm_expand.m"
    {
#line 2328 "stm_expand.m"
      MR_Word base;
#line 2328 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2328 "stm_expand.m"
      *transform_hlds__stm_expand__GoalOut_6 = base;
#line 2328 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalOutExpr_16));
#line 2328 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
#line 2328 "stm_expand.m"
    }
#line 2317 "stm_expand.m"
  }
#line 2314 "stm_expand.m"
}

#line 2298 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_8,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cases_9,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_10,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_11,
#line 2298 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
#line 2298 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 2298 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
#line 2298 "stm_expand.m"
{
#line 2303 "stm_expand.m"
  {
#line 2303 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2303 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 5)));
#line 2303 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_15;
#line 2303 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_16;
#line 2303 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutGoalExpr_17;
#line 2303 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_18;
#line 2304 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 0)));
#line 2304 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 1)));
#line 2304 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 2)));
#line 2304 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 3)));
#line 2304 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 4)));
#line 2304 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 6)));

#line 2305 "stm_expand.m"
    {
#line 2305 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 2306 "stm_expand.m"
    {
#line 2306 "stm_expand.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_16);
    }
#line 2307 "stm_expand.m"
    {
#line 2307 "stm_expand.m"
      transform_hlds__stm_expand__OutGoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2307 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 1) = ((MR_Box) (transform_hlds__stm_expand__ProgVar_8));
#line 2307 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 2) = ((MR_Box) ((MR_Integer) 1));
#line 2307 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_9));
#line 2307 "stm_expand.m"
    }
#line 2308 "stm_expand.m"
    {
#line 2308 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_15, transform_hlds__stm_expand__InstMapDelta_16, transform_hlds__stm_expand__Detism_10, transform_hlds__stm_expand__Purity_11, transform_hlds__stm_expand__Context_14, &transform_hlds__stm_expand__GoalInfo_18);
    }
#line 2310 "stm_expand.m"
    {
#line 2310 "stm_expand.m"
      MR_Word base;
#line 2310 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2310 "stm_expand.m"
      *transform_hlds__stm_expand__OutGoal_12 = base;
#line 2310 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_17));
#line 2310 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_18));
#line 2310 "stm_expand.m"
    }
#line 2310 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19;
#line 2303 "stm_expand.m"
  }
#line 2298 "stm_expand.m"
}

#line 2282 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExistVars_10,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond_11,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then_12,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else_13,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_14,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_15,
#line 2282 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
#line 2282 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
#line 2282 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24)
#line 2282 "stm_expand.m"
{
#line 2287 "stm_expand.m"
  {
#line 2287 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 5)));
#line 2287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutGoalExpr_19;
#line 2287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_20;
#line 2287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_21;
#line 2287 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_22;
#line 2288 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 0)));
#line 2288 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 1)));
#line 2288 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 2)));
#line 2288 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 3)));
#line 2288 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 4)));
#line 2288 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 6)));

#line 2289 "stm_expand.m"
    {
#line 2289 "stm_expand.m"
      transform_hlds__stm_expand__OutGoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2289 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 1) = ((MR_Box) (transform_hlds__stm_expand__ExistVars_10));
#line 2289 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_11));
#line 2289 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_12));
#line 2289 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_13));
#line 2289 "stm_expand.m"
    }
#line 2290 "stm_expand.m"
    {
#line 2290 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 2291 "stm_expand.m"
    {
#line 2291 "stm_expand.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_21);
    }
#line 2292 "stm_expand.m"
    {
#line 2292 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_20, transform_hlds__stm_expand__InstMapDelta_21, transform_hlds__stm_expand__Detism_14, transform_hlds__stm_expand__Purity_15, transform_hlds__stm_expand__Context_18, &transform_hlds__stm_expand__GoalInfo_22);
    }
#line 2294 "stm_expand.m"
    {
#line 2294 "stm_expand.m"
      MR_Word base;
#line 2294 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2294 "stm_expand.m"
      *transform_hlds__stm_expand__OutGoal_16 = base;
#line 2294 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_19));
#line 2294 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_22));
#line 2294 "stm_expand.m"
    }
#line 2294 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23;
#line 2287 "stm_expand.m"
  }
#line 2282 "stm_expand.m"
}

#line 2256 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredProcID_9,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Args_10,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ArgModes_12,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
#line 2256 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2256 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2256 "stm_expand.m"
{
#line 2261 "stm_expand.m"
  {
#line 2261 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ShroudPredProcID_16;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureType_17;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureCons_18;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignGoal0_19;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDelta_21;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignExpr_22;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo0_23;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo_24;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 2261 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;

#line 2262 "stm_expand.m"
    {
#line 2262 "stm_expand.m"
      transform_hlds__stm_expand__ShroudPredProcID_16 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__stm_expand__PredProcID_9);
    }
#line 2263 "stm_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2263 "stm_expand.m"
    {
#line 2263 "stm_expand.m"
      parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, transform_hlds__stm_expand__ArgTypes_11, &transform_hlds__stm_expand__ClosureType_17);
    }
#line 2265 "stm_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2265 "stm_expand.m"
    {
#line 2265 "stm_expand.m"
      transform_hlds__stm_expand__ClosureCons_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2265 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 1) = ((MR_Box) (transform_hlds__stm_expand__ShroudPredProcID_16));
#line 2265 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 2) = NULL;
#line 2265 "stm_expand.m"
    }
#line 2266 "stm_expand.m"
    {
#line 2266 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ClosureType_17, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[24]), transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
    }
#line 2267 "stm_expand.m"
    {
#line 2267 "stm_expand.m"
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__ClosureCons_18, transform_hlds__stm_expand__Args_10, &transform_hlds__stm_expand__ClosureAssignGoal0_19);
    }
#line 2270 "stm_expand.m"
    {
#line 2270 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (*transform_hlds__stm_expand__ClosureVar_13));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2270 "stm_expand.m"
    }
#line 2270 "stm_expand.m"
    {
#line 2270 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) ((MR_Integer) 0));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__ArgModes_12));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2270 "stm_expand.m"
    }
#line 2270 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__stm_expand__V_39_39);
#line 2270 "stm_expand.m"
    {
#line 2270 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2270 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 2) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 2270 "stm_expand.m"
    }
#line 2271 "stm_expand.m"
    {
#line 2271 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__V_36_36));
#line 2271 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2271 "stm_expand.m"
    }
#line 2269 "stm_expand.m"
    {
#line 2269 "stm_expand.m"
      transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_35_35);
    }
#line 2272 "stm_expand.m"
    {
#line 2272 "stm_expand.m"
      transform_hlds__stm_expand__ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20);
    }
#line 2275 "stm_expand.m"
    transform_hlds__stm_expand__ClosureAssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 0)));
#line 2275 "stm_expand.m"
    transform_hlds__stm_expand__ClosureAssignInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 1)));
#line 2276 "stm_expand.m"
    {
#line 2276 "stm_expand.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__stm_expand__ClosureAssignInstmapDelta_21, transform_hlds__stm_expand__ClosureAssignInfo0_23, &transform_hlds__stm_expand__ClosureAssignInfo_24);
    }
#line 2278 "stm_expand.m"
    {
#line 2278 "stm_expand.m"
      MR_Word base;
#line 2278 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2278 "stm_expand.m"
      *transform_hlds__stm_expand__ClosureAssignGoal_14 = base;
#line 2278 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignExpr_22));
#line 2278 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignInfo_24));
#line 2278 "stm_expand.m"
    }
#line 2261 "stm_expand.m"
  }
#line 2256 "stm_expand.m"
}

#line 2241 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleName_13,
#line 2241 "stm_expand.m"
  MR_String transform_hlds__stm_expand__ProcName_14,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Mode_16,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Detism_17,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Purity_18,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVars_19,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
#line 2241 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_22,
#line 2241 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2241 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
#line 2241 "stm_expand.m"
{
#line 2247 "stm_expand.m"
  {
#line 2247 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2247 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 5)));
#line 2247 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 0)));
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 1)));
#line 2248 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 2)));
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 3)));
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 4)));
#line 2248 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 6)));

#line 2250 "stm_expand.m"
    {
#line 2250 "stm_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__ModuleName_13, transform_hlds__stm_expand__ProcName_14, transform_hlds__stm_expand__PredOrFunc_15, transform_hlds__stm_expand__Mode_16, transform_hlds__stm_expand__Detism_17, transform_hlds__stm_expand__Purity_18, transform_hlds__stm_expand__ProgVars_19, transform_hlds__stm_expand__GoalFeatures_20, transform_hlds__stm_expand__InstmapDelta_21, transform_hlds__stm_expand__ModuleInfo_25, transform_hlds__stm_expand__Context_24, transform_hlds__stm_expand__Goal_22);
    }
#line 2250 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
#line 2247 "stm_expand.m"
  }
#line 2241 "stm_expand.m"
}

#line 2215 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2215 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2215 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2215 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2215 "stm_expand.m"
{
#line 2218 "stm_expand.m"
  {
#line 2218 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2218 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2219 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
#line 2219 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
#line 2219 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
#line 2219 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
#line 2219 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

#line 2222 "stm_expand.m"
    {
#line 2222 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2222 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2222 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2222 "stm_expand.m"
    }
#line 2223 "stm_expand.m"
    {
#line 2223 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2223 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2223 "stm_expand.m"
    }
#line 2225 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2225 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2227 "stm_expand.m"
    }
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2227 "stm_expand.m"
    }
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2227 "stm_expand.m"
    }
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2227 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2227 "stm_expand.m"
    }
#line 2227 "stm_expand.m"
    {
#line 2227 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2229 "stm_expand.m"
    {
#line 2229 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2229 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2229 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2229 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2229 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2229 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2229 "stm_expand.m"
    }
#line 2231 "stm_expand.m"
    {
#line 2231 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2234 "stm_expand.m"
    {
#line 2234 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2236 "stm_expand.m"
    {
#line 2236 "stm_expand.m"
      MR_Word base;
#line 2236 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2236 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2236 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2236 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2236 "stm_expand.m"
    }
#line 2236 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
#line 2218 "stm_expand.m"
  }
#line 2215 "stm_expand.m"
}

#line 2190 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2190 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2190 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
#line 2190 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
#line 2190 "stm_expand.m"
{
#line 2193 "stm_expand.m"
  {
#line 2193 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 0)));
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2193 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 2195 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 1)));
#line 2195 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 2)));
#line 2195 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 3)));
#line 2195 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 4)));
#line 2195 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 5)));
#line 2195 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 6)));

#line 2197 "stm_expand.m"
    {
#line 2197 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2197 "stm_expand.m"
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2197 "stm_expand.m"
    }
#line 2198 "stm_expand.m"
    {
#line 2198 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2198 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2198 "stm_expand.m"
    }
#line 2200 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2200 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2202 "stm_expand.m"
    }
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2202 "stm_expand.m"
    }
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2202 "stm_expand.m"
    }
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2202 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 1) = ((MR_Box) (transform_hlds__stm_expand__V_35_35));
#line 2202 "stm_expand.m"
    }
#line 2202 "stm_expand.m"
    {
#line 2202 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_31_31, transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2204 "stm_expand.m"
    {
#line 2204 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2204 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2204 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2204 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2204 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2204 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2204 "stm_expand.m"
    }
#line 2206 "stm_expand.m"
    {
#line 2206 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2209 "stm_expand.m"
    {
#line 2209 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[6], &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2211 "stm_expand.m"
    {
#line 2211 "stm_expand.m"
      MR_Word base;
#line 2211 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2211 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2211 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2211 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2211 "stm_expand.m"
    }
#line 2211 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25;
#line 2193 "stm_expand.m"
  }
#line 2190 "stm_expand.m"
}

#line 2164 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarLHS_7,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__VarRHS_8,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
#line 2164 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_10,
#line 2164 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 2164 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 2164 "stm_expand.m"
{
#line 2167 "stm_expand.m"
  {
#line 2167 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyType_14;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_21;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 2167 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 2168 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
#line 2168 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
#line 2168 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
#line 2168 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
#line 2168 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

#line 2171 "stm_expand.m"
    {
#line 2171 "stm_expand.m"
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2171 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2171 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 2) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2171 "stm_expand.m"
    }
#line 2172 "stm_expand.m"
    {
#line 2172 "stm_expand.m"
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2172 "stm_expand.m"
    }
#line 2174 "stm_expand.m"
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
#line 2174 "stm_expand.m"
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2176 "stm_expand.m"
    }
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2176 "stm_expand.m"
    }
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2176 "stm_expand.m"
    }
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
#line 2176 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2176 "stm_expand.m"
    }
#line 2176 "stm_expand.m"
    {
#line 2176 "stm_expand.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
#line 2178 "stm_expand.m"
    {
#line 2178 "stm_expand.m"
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
#line 2178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
#line 2178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
#line 2178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
#line 2178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[5]));
#line 2178 "stm_expand.m"
    }
#line 2180 "stm_expand.m"
    {
#line 2180 "stm_expand.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
#line 2183 "stm_expand.m"
    {
#line 2183 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
#line 2185 "stm_expand.m"
    {
#line 2185 "stm_expand.m"
      MR_Word base;
#line 2185 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2185 "stm_expand.m"
      *transform_hlds__stm_expand__Goal_10 = base;
#line 2185 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 2185 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
#line 2185 "stm_expand.m"
    }
#line 2185 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
#line 2167 "stm_expand.m"
  }
#line 2164 "stm_expand.m"
}

#line 2153 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cons_8,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_9,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName_10,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_12,
#line 2153 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 2153 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
#line 2153 "stm_expand.m"
{
#line 2158 "stm_expand.m"
  {
#line 2158 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 2159 "stm_expand.m"
    {
#line 2159 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Type_9, transform_hlds__stm_expand__MaybeName_10, transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
#line 2148 "stm_expand.m"
    {
#line 2148 "stm_expand.m"
      hlds__make_goal__make_const_construction_3_p_0(*transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__Cons_8, transform_hlds__stm_expand__Goal_11);
#line 2148 "stm_expand.m"
      return;
    }
#line 2158 "stm_expand.m"
  }
#line 2153 "stm_expand.m"
}

#line 2124 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2124 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2124 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
#line 2124 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
#line 2124 "stm_expand.m"
{
#line 2127 "stm_expand.m"
  {
#line 2127 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2127 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Cnt0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MaybeName_12;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_14;
#line 2127 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__Cnt_15;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_38_38;
#line 2127 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_39_39;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 2127 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 2128 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2128 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2128 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2128 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2128 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2139 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 2139 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43;

#line 2133 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2132 "stm_expand.m"
      transform_hlds__stm_expand__MaybeName_12 = transform_hlds__stm_expand__MaybeName0_7;
#line 2133 "stm_expand.m"
    else
#line 2134 "stm_expand.m"
      {
#line 2134 "stm_expand.m"
        MR_String transform_hlds__stm_expand__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
#line 2134 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_18_18;
#line 2134 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_19_19;
#line 2134 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_21_21;

#line 2135 "stm_expand.m"
        {
#line 2135 "stm_expand.m"
          transform_hlds__stm_expand__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__stm_expand__Cnt0_11)));
        }
#line 2135 "stm_expand.m"
        {
#line 2135 "stm_expand.m"
          transform_hlds__stm_expand__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", transform_hlds__stm_expand__V_21_21);
        }
#line 2135 "stm_expand.m"
        {
#line 2135 "stm_expand.m"
          transform_hlds__stm_expand__V_18_18 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_13, transform_hlds__stm_expand__V_19_19);
        }
#line 2135 "stm_expand.m"
        {
#line 2135 "stm_expand.m"
          transform_hlds__stm_expand__MaybeName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2135 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_12, 0) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
#line 2135 "stm_expand.m"
        }
#line 2134 "stm_expand.m"
      }
#line 2137 "stm_expand.m"
    {
#line 2137 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_12, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_14);
    }
#line 2138 "stm_expand.m"
    transform_hlds__stm_expand__Cnt_15 = (transform_hlds__stm_expand__Cnt0_11 + (MR_Integer) 1);
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
#line 2139 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
#line 2140 "stm_expand.m"
    {
#line 2140 "stm_expand.m"
      MR_Word base;
#line 2140 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2140 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_14));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 2140 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__Cnt_15));
#line 2140 "stm_expand.m"
    }
#line 2127 "stm_expand.m"
  }
#line 2124 "stm_expand.m"
}

#line 2107 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Type_6,
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
#line 2107 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Var_8,
#line 2107 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
#line 2107 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15)
#line 2107 "stm_expand.m"
{
#line 2110 "stm_expand.m"
  {
#line 2110 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2110 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
#line 2110 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MaybeName_11;
#line 2110 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_13;
#line 2111 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
#line 2111 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
#line 2111 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
#line 2111 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
#line 2111 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
#line 2111 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
#line 2120 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 2120 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 2120 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_27_27;
#line 2120 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 2120 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 2120 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_31_31;
#line 2120 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28;

#line 2115 "stm_expand.m"
    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2114 "stm_expand.m"
      transform_hlds__stm_expand__MaybeName_11 = transform_hlds__stm_expand__MaybeName0_7;
#line 2115 "stm_expand.m"
    else
#line 2116 "stm_expand.m"
      {
#line 2116 "stm_expand.m"
        MR_String transform_hlds__stm_expand__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
#line 2116 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_16_16;

#line 2117 "stm_expand.m"
        {
#line 2117 "stm_expand.m"
          transform_hlds__stm_expand__V_16_16 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_12, (MR_String) "_Aux_STM");
        }
#line 2117 "stm_expand.m"
        {
#line 2117 "stm_expand.m"
          transform_hlds__stm_expand__MaybeName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_11, 0) = ((MR_Box) (transform_hlds__stm_expand__V_16_16));
#line 2117 "stm_expand.m"
        }
#line 2116 "stm_expand.m"
      }
#line 2119 "stm_expand.m"
    {
#line 2119 "stm_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_11, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_13);
    }
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
#line 2120 "stm_expand.m"
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
#line 2120 "stm_expand.m"
    {
#line 2120 "stm_expand.m"
      MR_Word base;
#line 2120 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2120 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15 = base;
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_13));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 2120 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
#line 2120 "stm_expand.m"
    }
#line 2110 "stm_expand.m"
  }
#line 2107 "stm_expand.m"
}

#line 2077 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
#line 2077 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 2077 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 2077 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 2077 "stm_expand.m"
{
#line 2077 "stm_expand.m"
  {
#line 2077 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 2077 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__4_36;

#line 2077 "stm_expand.m"
    {
#line 2077 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2080__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__4_36);
    }
#line 2077 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__4_36));
#line 2077 "stm_expand.m"
  }
#line 2077 "stm_expand.m"
}

#line 2060 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
#line 2060 "stm_expand.m"
  MR_String transform_hlds__stm_expand__Name_9,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
#line 2060 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
#line 2060 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34)
#line 2060 "stm_expand.m"
{
#line 2065 "stm_expand.m"
  {
#line 2065 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_54_54;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_55_55;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_16;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_17;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewHeadVars0_18;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet1_19;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes1_20;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet_21;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_22;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping_23;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MapLambda_24;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewHeadVars_27;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo1_28;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo2_29;
#line 2065 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_30;
#line 2066 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
#line 2066 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
#line 2066 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
#line 2066 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
#line 2066 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
#line 2066 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
#line 2090 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 2090 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 2090 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_49_49;
#line 2090 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 2090 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 2090 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_53_53;
#line 2090 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;

#line 2067 "stm_expand.m"
    {
#line 2067 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarSet0_16);
    }
#line 2068 "stm_expand.m"
    {
#line 2068 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarTypes0_17);
    }
#line 2069 "stm_expand.m"
    {
#line 2069 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewHeadVars0_18);
    }
#line 8578 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2070 "stm_expand.m"
    {
#line 2070 "stm_expand.m"
      mercury__varset__delete_var_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarSet0_16, &transform_hlds__stm_expand__NewPredVarSet1_19);
    }
#line 2071 "stm_expand.m"
    {
#line 2071 "stm_expand.m"
      parse_tree__prog_data__delete_var_type_3_p_0(transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarTypes0_17, &transform_hlds__stm_expand__NewPredVarTypes1_20);
    }
#line 2073 "stm_expand.m"
    {
#line 2073 "stm_expand.m"
      mercury__varset__new_named_var_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__Name_9, transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__NewPredVarSet1_19, &transform_hlds__stm_expand__NewPredVarSet_21);
    }
#line 2074 "stm_expand.m"
    {
#line 2074 "stm_expand.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__NewPredVarTypes1_20, &transform_hlds__stm_expand__NewPredVarTypes_22);
    }
#line 8600 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_55_55 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 2075 "stm_expand.m"
    {
#line 2075 "stm_expand.m"
      transform_hlds__stm_expand__VarMapping_23 = mercury__map__singleton_2_f_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)), ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12)));
    }
#line 2077 "stm_expand.m"
    {
#line 2077 "stm_expand.m"
      transform_hlds__stm_expand__MapLambda_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2077 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2]));
#line 2077 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
#line 2077 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2077 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 3) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10));
#line 2077 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 4) = ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12));
#line 2077 "stm_expand.m"
    }
#line 2084 "stm_expand.m"
    {
#line 2084 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__MapLambda_24, transform_hlds__stm_expand__NewHeadVars0_18, &transform_hlds__stm_expand__NewHeadVars_27);
    }
#line 2086 "stm_expand.m"
    {
#line 2086 "stm_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_23, transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33, transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);
    }
#line 2087 "stm_expand.m"
    {
#line 2087 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_21, transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewProcInfo1_28);
    }
#line 2088 "stm_expand.m"
    {
#line 2088 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_22, transform_hlds__stm_expand__NewProcInfo1_28, &transform_hlds__stm_expand__NewProcInfo2_29);
    }
#line 2089 "stm_expand.m"
    {
#line 2089 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_27, transform_hlds__stm_expand__NewProcInfo2_29, &transform_hlds__stm_expand__NewProcInfo_30);
    }
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
#line 2090 "stm_expand.m"
    transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
#line 2090 "stm_expand.m"
    {
#line 2090 "stm_expand.m"
      MR_Word base;
#line 2090 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2090 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32 = base;
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_30));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 2090 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 2090 "stm_expand.m"
    }
#line 2065 "stm_expand.m"
  }
#line 2060 "stm_expand.m"
}

#line 2028 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_9,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_10,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_11,
#line 2028 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 2028 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 2028 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
#line 2028 "stm_expand.m"
{
#line 2033 "stm_expand.m"
  {
#line 2033 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_84;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_15;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_61;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_62;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_63;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_64;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_74;
#line 2033 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_75;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 2563 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_67_67;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_70_70;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__InputSet_46);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__OutputSet_47);
    }
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 0)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 1)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 2)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 3)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 4)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 5)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 6)));
#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_61, &transform_hlds__stm_expand__VarTypes_62);
    }
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 8806 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_63 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__InputSet_74);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__OutputSet_75);
    }
#line 2577 "stm_expand.m"
    {
#line 2577 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__InputVars_63, &transform_hlds__stm_expand__V_16_16);
    }
#line 2578 "stm_expand.m"
    {
#line 2578 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__OutputVars_64, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 2042 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2037 "stm_expand.m"
      {
#line 2037 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_18;
#line 2037 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_36_36;

#line 2040 "stm_expand.m"
        {
#line 2040 "stm_expand.m"
          transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
        }
#line 2148 "stm_expand.m"
        {
#line 2148 "stm_expand.m"
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__Goal_18);
        }
#line 2041 "stm_expand.m"
        {
#line 2041 "stm_expand.m"
          MR_Word base;
#line 2041 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 2041 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_18));
#line 2041 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2041 "stm_expand.m"
        }
#line 2041 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
#line 2037 "stm_expand.m"
      }
#line 2042 "stm_expand.m"
    else
#line 2042 "stm_expand.m"
      {
#line 2042 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 2043 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 2042 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2043 "stm_expand.m"
          {
#line 2043 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutVar_20;
#line 2043 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_31_31;
#line 2043 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_33_33;
#line 2043 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_34_34;
#line 2043 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal_38;
#line 2046 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

#line 2046 "stm_expand.m"
            {
#line 2046 "stm_expand.m"
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__OutputVars_15);
            }
#line 2046 "stm_expand.m"
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
#line 2047 "stm_expand.m"
            {
#line 2047 "stm_expand.m"
              transform_hlds__stm_expand__V_33_33 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 2047 "stm_expand.m"
            {
#line 2047 "stm_expand.m"
              transform_hlds__stm_expand__V_34_34 = parse_tree__prog_mode__in_mode_0_f_0();
            }
#line 2047 "stm_expand.m"
            {
#line 2047 "stm_expand.m"
              transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2047 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
#line 2047 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
#line 2047 "stm_expand.m"
            }
#line 2047 "stm_expand.m"
            {
#line 2047 "stm_expand.m"
              transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutVar_20, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__Goal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
#line 2049 "stm_expand.m"
            {
#line 2049 "stm_expand.m"
              MR_Word base;
#line 2049 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "stm_expand.m"
              *transform_hlds__stm_expand__Goals_12 = base;
#line 2049 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_38));
#line 2049 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2049 "stm_expand.m"
            }
#line 2043 "stm_expand.m"
          }
#line 2042 "stm_expand.m"
        else
#line 2051 "stm_expand.m"
          {
#line 2051 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__MakeType_25;
#line 2051 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal_39;
#line 2053 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_24_24;

#line 2053 "stm_expand.m"
            {
#line 2053 "stm_expand.m"
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ResultType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
#line 2054 "stm_expand.m"
            {
#line 2054 "stm_expand.m"
              hlds__make_goal__construct_tuple_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__Goal_39);
            }
#line 2055 "stm_expand.m"
            {
#line 2055 "stm_expand.m"
              MR_Word base;
#line 2055 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "stm_expand.m"
              *transform_hlds__stm_expand__Goals_12 = base;
#line 2055 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_39));
#line 2055 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
#line 2055 "stm_expand.m"
            }
#line 2051 "stm_expand.m"
          }
#line 2042 "stm_expand.m"
      }
#line 2033 "stm_expand.m"
  }
#line 2028 "stm_expand.m"
}

#line 1984 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_9,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
#line 1984 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_11,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_12,
#line 1984 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1984 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1984 "stm_expand.m"
{
#line 1989 "stm_expand.m"
  {
#line 1989 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_95;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_15;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_72;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarTypes_73;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_74;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_75;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_85;
#line 1989 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_86;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 2563 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_14_14;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_78_78;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2573 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 2573 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_81_81;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_89_89;
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_90_90;
#line 2577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__InputSet_57);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__OutputSet_58);
    }
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 0)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 1)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 2)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 3)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 4)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 5)));
#line 2573 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 6)));
#line 2574 "stm_expand.m"
    {
#line 2574 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_72, &transform_hlds__stm_expand__VarTypes_73);
    }
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__InputSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    transform_hlds__stm_expand__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
#line 9098 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_74 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__InputSet_85);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__OutputSet_86);
    }
#line 2577 "stm_expand.m"
    {
#line 2577 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__InputVars_74, &transform_hlds__stm_expand__V_16_16);
    }
#line 2578 "stm_expand.m"
    {
#line 2578 "stm_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__OutputVars_75, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 2002 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1994 "stm_expand.m"
      {
#line 1994 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SuccessResultVar_18;
#line 1994 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_47_47;
#line 1994 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_48_48;

#line 1998 "stm_expand.m"
        {
#line 1998 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[22]), &transform_hlds__stm_expand__SuccessResultVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
        }
#line 2000 "stm_expand.m"
        {
#line 2000 "stm_expand.m"
          transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        }
#line 2001 "stm_expand.m"
        {
#line 2001 "stm_expand.m"
          transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_18));
#line 2001 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2001 "stm_expand.m"
        }
#line 2000 "stm_expand.m"
        {
#line 2000 "stm_expand.m"
          hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_47_47, transform_hlds__stm_expand__V_48_48, transform_hlds__stm_expand__Goal_11);
#line 2000 "stm_expand.m"
          return;
        }
#line 1994 "stm_expand.m"
      }
#line 2002 "stm_expand.m"
    else
#line 2002 "stm_expand.m"
      {
#line 2002 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 2003 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 2002 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2003 "stm_expand.m"
          {
#line 2003 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutVar_20;
#line 2003 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_41_41;
#line 2003 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_42_42;
#line 2006 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

#line 2006 "stm_expand.m"
            {
#line 2006 "stm_expand.m"
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__OutputVars_15);
            }
#line 2006 "stm_expand.m"
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
#line 2007 "stm_expand.m"
            {
#line 2007 "stm_expand.m"
              transform_hlds__stm_expand__V_41_41 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
#line 2008 "stm_expand.m"
            {
#line 2008 "stm_expand.m"
              transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__OutVar_20));
#line 2008 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2008 "stm_expand.m"
            }
#line 2007 "stm_expand.m"
            {
#line 2007 "stm_expand.m"
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_41_41, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__Goal_11);
            }
#line 2007 "stm_expand.m"
            *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28;
#line 2003 "stm_expand.m"
          }
#line 2002 "stm_expand.m"
        else
#line 2010 "stm_expand.m"
          {
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__MakeType_25;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__DeconstructGoal_26;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__UnifyOutputGoal_27;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_35_35;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_36_36;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_38_38;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_39_39;
#line 2010 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__SuccessResultVar_50;
#line 2012 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_24_24;

#line 2012 "stm_expand.m"
            {
#line 2012 "stm_expand.m"
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
            }
#line 2013 "stm_expand.m"
            {
#line 2013 "stm_expand.m"
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[23]), &transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
            }
#line 2015 "stm_expand.m"
            {
#line 2015 "stm_expand.m"
              transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
#line 2016 "stm_expand.m"
            {
#line 2016 "stm_expand.m"
              transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_50));
#line 2016 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2016 "stm_expand.m"
            }
#line 2015 "stm_expand.m"
            {
#line 2015 "stm_expand.m"
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__DeconstructGoal_26);
            }
#line 2017 "stm_expand.m"
            {
#line 2017 "stm_expand.m"
              hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__UnifyOutputGoal_27);
            }
#line 2019 "stm_expand.m"
            {
#line 2019 "stm_expand.m"
              transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__UnifyOutputGoal_27));
#line 2019 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
#line 2019 "stm_expand.m"
            }
#line 2019 "stm_expand.m"
            {
#line 2019 "stm_expand.m"
              transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_26));
#line 2019 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 1) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
#line 2019 "stm_expand.m"
            }
#line 2019 "stm_expand.m"
            {
#line 2019 "stm_expand.m"
              transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_38_38, transform_hlds__stm_expand__Goal_11);
#line 2019 "stm_expand.m"
              return;
            }
#line 2010 "stm_expand.m"
          }
#line 2002 "stm_expand.m"
      }
#line 1989 "stm_expand.m"
  }
#line 1984 "stm_expand.m"
}

#line 1968 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
#line 1968 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Types_3,
#line 1968 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__ReturnType_4)
#line 1968 "stm_expand.m"
{
#line 1972 "stm_expand.m"
  {
#line 1972 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1972 "stm_expand.m"
    if ((transform_hlds__stm_expand__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        *transform_hlds__stm_expand__ReturnType_4 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1972 "stm_expand.m"
    else
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 1)));
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 0)));

#line 1972 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "stm_expand.m"
          *transform_hlds__stm_expand__ReturnType_4 = transform_hlds__stm_expand__V_12_12;
#line 1972 "stm_expand.m"
        else
#line 1977 "stm_expand.m"
          {
#line 1978 "stm_expand.m"
            {
#line 1978 "stm_expand.m"
              MR_Word base;
#line 1978 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "stm_expand.m"
              *transform_hlds__stm_expand__ReturnType_4 = base;
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Types_3));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1978 "stm_expand.m"
            }
#line 1977 "stm_expand.m"
          }
#line 1972 "stm_expand.m"
      }
#line 1972 "stm_expand.m"
  }
#line 1968 "stm_expand.m"
}

#line 1870 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_21,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
#line 1870 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1870 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
#line 1870 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50)
#line 1870 "stm_expand.m"
{
#line 1877 "stm_expand.m"
  {
#line 1877 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_26;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_28;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_30;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerSTM0Var_32;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_34;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssign_35;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateNestedLogCall_36;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TryStmCall_37;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructGoal_38;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeNestedLogsCall_39;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__SuccessBranch_40;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DiscardCall_41;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RethrowCall_42;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_43;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructException_44;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NotRetryBranch_45;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IfRetryGoal_46;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptionBranch_47;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_48;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_88_88;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_89_89;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_102_102;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_104_104;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_107_107;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_108_108;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_109_109;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_110_110;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_112_112;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_113_113;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_117_117;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_118_118;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_122_122;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_126_126;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_131_131;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_141_141;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_143_143;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_145_145;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_146_146;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_148_148;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_149_149;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_153_153;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_158_158;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_159_159;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_162_162;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_163_163;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_165_165;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_173_173;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_176_176;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_182_182;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_188_188;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_190_190;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_192_192;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_197_197;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_201_201;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_202_202;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_204_204;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_205_205;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_207_207;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_209_209;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_210_210;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_212_212;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_216_216;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_217_217;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_219_219;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_220_220;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_221_221;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_224_224;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_225_225;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_226_226;
#line 1877 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_227_227;
#line 1878 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1879 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;
#line 1880 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;

#line 1878 "stm_expand.m"
    {
#line 1878 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputVars_26, &transform_hlds__stm_expand__V_27_27);
    }
#line 1879 "stm_expand.m"
    {
#line 1879 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__StmInfo_24, &transform_hlds__stm_expand__InputTypes_28, &transform_hlds__stm_expand__V_29_29);
    }
#line 1880 "stm_expand.m"
    {
#line 1880 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputModes_30, &transform_hlds__stm_expand__V_31_31);
    }
#line 1882 "stm_expand.m"
    {
#line 1882 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1882 "stm_expand.m"
    {
#line 1882 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_51_51, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[20]), &transform_hlds__stm_expand__InnerSTM0Var_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53);
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_15);
    }
#line 1884 "stm_expand.m"
    {
#line 1884 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[21]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57);
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_66_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1888 "stm_expand.m"
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 1888 "stm_expand.m"
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_15));
#line 1888 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 1888 "stm_expand.m"
    }
#line 1888 "stm_expand.m"
    {
#line 1888 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_28, transform_hlds__stm_expand__V_62_62);
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1889 "stm_expand.m"
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1889 "stm_expand.m"
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 1889 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
#line 1889 "stm_expand.m"
    }
#line 1889 "stm_expand.m"
    {
#line 1889 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_30, transform_hlds__stm_expand__V_68_68);
    }
#line 1887 "stm_expand.m"
    {
#line 1887 "stm_expand.m"
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_21, transform_hlds__stm_expand__InputVars_26, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicClosureVar_34, &transform_hlds__stm_expand__ClosureAssign_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61);
    }
#line 1892 "stm_expand.m"
    {
#line 1892 "stm_expand.m"
      transform_hlds__stm_expand__V_75_75 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1895 "stm_expand.m"
    {
#line 1895 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1895 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1895 "stm_expand.m"
    }
#line 1895 "stm_expand.m"
    {
#line 1895 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1895 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 1895 "stm_expand.m"
    }
#line 1896 "stm_expand.m"
    transform_hlds__stm_expand__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1896 "stm_expand.m"
    {
#line 1896 "stm_expand.m"
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1896 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1896 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1896 "stm_expand.m"
    }
#line 1897 "stm_expand.m"
    {
#line 1897 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1897 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1897 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1897 "stm_expand.m"
    }
#line 1897 "stm_expand.m"
    {
#line 1897 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1897 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1897 "stm_expand.m"
    }
#line 1896 "stm_expand.m"
    {
#line 1896 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1896 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1896 "stm_expand.m"
    }
#line 1896 "stm_expand.m"
    {
#line 1896 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
#line 1892 "stm_expand.m"
    {
#line 1892 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_75_75, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__CreateNestedLogCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
#line 1900 "stm_expand.m"
    {
#line 1900 "stm_expand.m"
      transform_hlds__stm_expand__V_96_96 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1903 "stm_expand.m"
    {
#line 1903 "stm_expand.m"
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1903 "stm_expand.m"
    }
#line 1903 "stm_expand.m"
    {
#line 1903 "stm_expand.m"
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1903 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 1903 "stm_expand.m"
    }
#line 1902 "stm_expand.m"
    {
#line 1902 "stm_expand.m"
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
#line 1902 "stm_expand.m"
    }
#line 1902 "stm_expand.m"
    {
#line 1902 "stm_expand.m"
      transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
#line 1902 "stm_expand.m"
    }
#line 1902 "stm_expand.m"
    {
#line 1902 "stm_expand.m"
      transform_hlds__stm_expand__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1902 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 1) = ((MR_Box) (transform_hlds__stm_expand__V_107_107));
#line 1902 "stm_expand.m"
    }
#line 1906 "stm_expand.m"
    transform_hlds__stm_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 1906 "stm_expand.m"
    {
#line 1906 "stm_expand.m"
      transform_hlds__stm_expand__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 1906 "stm_expand.m"
    }
#line 1907 "stm_expand.m"
    {
#line 1907 "stm_expand.m"
      transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
#line 1907 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
#line 1907 "stm_expand.m"
    }
#line 1908 "stm_expand.m"
    {
#line 1908 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1908 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1908 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1908 "stm_expand.m"
    }
#line 1909 "stm_expand.m"
    {
#line 1909 "stm_expand.m"
      transform_hlds__stm_expand__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
#line 1909 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1909 "stm_expand.m"
    }
#line 1910 "stm_expand.m"
    {
#line 1910 "stm_expand.m"
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1910 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1910 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "stm_expand.m"
    }
#line 1910 "stm_expand.m"
    {
#line 1910 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1910 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
#line 1910 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "stm_expand.m"
    }
#line 1909 "stm_expand.m"
    {
#line 1909 "stm_expand.m"
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
#line 1909 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
#line 1909 "stm_expand.m"
    }
#line 1908 "stm_expand.m"
    {
#line 1908 "stm_expand.m"
      transform_hlds__stm_expand__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 0) = ((MR_Box) (transform_hlds__stm_expand__V_123_123));
#line 1908 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 1908 "stm_expand.m"
    }
#line 1907 "stm_expand.m"
    {
#line 1907 "stm_expand.m"
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
#line 1907 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_122_122));
#line 1907 "stm_expand.m"
    }
#line 1906 "stm_expand.m"
    {
#line 1906 "stm_expand.m"
      transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_113_113));
#line 1906 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 1906 "stm_expand.m"
    }
#line 1905 "stm_expand.m"
    {
#line 1905 "stm_expand.m"
      transform_hlds__stm_expand__V_104_104 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_112_112);
    }
#line 1900 "stm_expand.m"
    {
#line 1900 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_96_96, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_102_102, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_104_104, &transform_hlds__stm_expand__TryStmCall_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105);
    }
#line 1914 "stm_expand.m"
    {
#line 1914 "stm_expand.m"
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__DeconstructGoal_38, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134);
    }
#line 1916 "stm_expand.m"
    {
#line 1916 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1918 "stm_expand.m"
    {
#line 1918 "stm_expand.m"
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1918 "stm_expand.m"
    }
#line 1918 "stm_expand.m"
    {
#line 1918 "stm_expand.m"
      transform_hlds__stm_expand__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
#line 1918 "stm_expand.m"
    }
#line 1918 "stm_expand.m"
    {
#line 1918 "stm_expand.m"
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1918 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (transform_hlds__stm_expand__V_145_145));
#line 1918 "stm_expand.m"
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
#line 1919 "stm_expand.m"
    }
#line 1920 "stm_expand.m"
    {
#line 1920 "stm_expand.m"
      transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1920 "stm_expand.m"
    }
#line 1920 "stm_expand.m"
    {
#line 1920 "stm_expand.m"
      transform_hlds__stm_expand__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 0) = ((MR_Box) (transform_hlds__stm_expand__V_159_159));
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1920 "stm_expand.m"
    }
#line 1920 "stm_expand.m"
    {
#line 1920 "stm_expand.m"
      transform_hlds__stm_expand__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1920 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 1) = ((MR_Box) (transform_hlds__stm_expand__V_158_158));
#line 1920 "stm_expand.m"
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
#line 1919 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 1) = ((MR_Box) (transform_hlds__stm_expand__V_153_153));
#line 1919 "stm_expand.m"
    }
#line 1919 "stm_expand.m"
    {
#line 1919 "stm_expand.m"
      transform_hlds__stm_expand__V_143_143 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_148_148);
    }
#line 1916 "stm_expand.m"
    {
#line 1916 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_135_135, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_141_141, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_143_143, &transform_hlds__stm_expand__MergeNestedLogsCall_39, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144);
    }
#line 1923 "stm_expand.m"
    {
#line 1923 "stm_expand.m"
      transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__MergeNestedLogsCall_39));
#line 1923 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1923 "stm_expand.m"
    }
#line 1923 "stm_expand.m"
    {
#line 1923 "stm_expand.m"
      transform_hlds__stm_expand__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_38));
#line 1923 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 1) = ((MR_Box) (transform_hlds__stm_expand__V_163_163));
#line 1923 "stm_expand.m"
    }
#line 1923 "stm_expand.m"
    {
#line 1923 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_162_162, &transform_hlds__stm_expand__SuccessBranch_40);
    }
#line 1926 "stm_expand.m"
    {
#line 1926 "stm_expand.m"
      transform_hlds__stm_expand__V_165_165 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1929 "stm_expand.m"
    {
#line 1929 "stm_expand.m"
      transform_hlds__stm_expand__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
#line 1929 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1929 "stm_expand.m"
    }
#line 1929 "stm_expand.m"
    {
#line 1929 "stm_expand.m"
      transform_hlds__stm_expand__V_173_173 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_176_176);
    }
#line 1926 "stm_expand.m"
    {
#line 1926 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_165_165, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_110_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_173_173, &transform_hlds__stm_expand__DiscardCall_41, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174);
    }
#line 1931 "stm_expand.m"
    {
#line 1931 "stm_expand.m"
      transform_hlds__stm_expand__V_182_182 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1933 "stm_expand.m"
    {
#line 1933 "stm_expand.m"
      transform_hlds__stm_expand__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1933 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1933 "stm_expand.m"
    }
#line 1933 "stm_expand.m"
    {
#line 1933 "stm_expand.m"
      transform_hlds__stm_expand__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
#line 1933 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 1) = ((MR_Box) (transform_hlds__stm_expand__V_192_192));
#line 1933 "stm_expand.m"
    }
#line 1934 "stm_expand.m"
    {
#line 1934 "stm_expand.m"
      transform_hlds__stm_expand__V_190_190 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_188_188);
    }
#line 1931 "stm_expand.m"
    {
#line 1931 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_182_182, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_188_188, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_190_190, &transform_hlds__stm_expand__RethrowCall_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191);
    }
#line 1938 "stm_expand.m"
    {
#line 1938 "stm_expand.m"
      transform_hlds__stm_expand__V_197_197 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
#line 1938 "stm_expand.m"
    {
#line 1938 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_197_197, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199);
    }
#line 1940 "stm_expand.m"
    {
#line 1940 "stm_expand.m"
      transform_hlds__stm_expand__V_201_201 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1941 "stm_expand.m"
    {
#line 1941 "stm_expand.m"
      transform_hlds__stm_expand__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_43));
#line 1941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1941 "stm_expand.m"
    }
#line 1940 "stm_expand.m"
    {
#line 1940 "stm_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_201_201, transform_hlds__stm_expand__V_202_202, &transform_hlds__stm_expand__DeconstructException_44);
    }
#line 1943 "stm_expand.m"
    {
#line 1943 "stm_expand.m"
      transform_hlds__stm_expand__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 0) = ((MR_Box) (transform_hlds__stm_expand__RethrowCall_42));
#line 1943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1943 "stm_expand.m"
    }
#line 1943 "stm_expand.m"
    {
#line 1943 "stm_expand.m"
      transform_hlds__stm_expand__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 0) = ((MR_Box) (transform_hlds__stm_expand__DiscardCall_41));
#line 1943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 1) = ((MR_Box) (transform_hlds__stm_expand__V_205_205));
#line 1943 "stm_expand.m"
    }
#line 1943 "stm_expand.m"
    {
#line 1943 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_204_204, &transform_hlds__stm_expand__NotRetryBranch_45);
    }
#line 1947 "stm_expand.m"
    {
#line 1947 "stm_expand.m"
      transform_hlds__stm_expand__V_207_207 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1946 "stm_expand.m"
    {
#line 1946 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__V_207_207, transform_hlds__stm_expand__RetryBranch_22, transform_hlds__stm_expand__NotRetryBranch_45, &transform_hlds__stm_expand__IfRetryGoal_46, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208);
    }
#line 1950 "stm_expand.m"
    {
#line 1950 "stm_expand.m"
      transform_hlds__stm_expand__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 0) = ((MR_Box) (transform_hlds__stm_expand__IfRetryGoal_46));
#line 1950 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1950 "stm_expand.m"
    }
#line 1950 "stm_expand.m"
    {
#line 1950 "stm_expand.m"
      transform_hlds__stm_expand__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_44));
#line 1950 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 1) = ((MR_Box) (transform_hlds__stm_expand__V_210_210));
#line 1950 "stm_expand.m"
    }
#line 1950 "stm_expand.m"
    {
#line 1950 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_209_209, &transform_hlds__stm_expand__ExceptionBranch_47);
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_217_217 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 0) = ((MR_Box) (transform_hlds__stm_expand__V_217_217));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 2) = ((MR_Box) (transform_hlds__stm_expand__ExceptionBranch_47));
#line 1952 "stm_expand.m"
    }
#line 1953 "stm_expand.m"
    {
#line 1953 "stm_expand.m"
      transform_hlds__stm_expand__V_221_221 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 1953 "stm_expand.m"
    {
#line 1953 "stm_expand.m"
      transform_hlds__stm_expand__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 0) = ((MR_Box) (transform_hlds__stm_expand__V_221_221));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 2) = ((MR_Box) (transform_hlds__stm_expand__SuccessBranch_40));
#line 1953 "stm_expand.m"
    }
#line 1953 "stm_expand.m"
    {
#line 1953 "stm_expand.m"
      transform_hlds__stm_expand__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 0) = ((MR_Box) (transform_hlds__stm_expand__V_220_220));
#line 1953 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "stm_expand.m"
    }
#line 1952 "stm_expand.m"
    {
#line 1952 "stm_expand.m"
      transform_hlds__stm_expand__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 0) = ((MR_Box) (transform_hlds__stm_expand__V_216_216));
#line 1952 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 1) = ((MR_Box) (transform_hlds__stm_expand__V_219_219));
#line 1952 "stm_expand.m"
    }
#line 1951 "stm_expand.m"
    {
#line 1951 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_212_212, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_48, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);
    }
#line 1957 "stm_expand.m"
    {
#line 1957 "stm_expand.m"
      transform_hlds__stm_expand__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_48));
#line 1957 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1957 "stm_expand.m"
    }
#line 1956 "stm_expand.m"
    {
#line 1956 "stm_expand.m"
      transform_hlds__stm_expand__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 0) = ((MR_Box) (transform_hlds__stm_expand__TryStmCall_37));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 1) = ((MR_Box) (transform_hlds__stm_expand__V_227_227));
#line 1956 "stm_expand.m"
    }
#line 1956 "stm_expand.m"
    {
#line 1956 "stm_expand.m"
      transform_hlds__stm_expand__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_35));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 1) = ((MR_Box) (transform_hlds__stm_expand__V_226_226));
#line 1956 "stm_expand.m"
    }
#line 1956 "stm_expand.m"
    {
#line 1956 "stm_expand.m"
      transform_hlds__stm_expand__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 0) = ((MR_Box) (transform_hlds__stm_expand__CreateNestedLogCall_36));
#line 1956 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 1) = ((MR_Box) (transform_hlds__stm_expand__V_225_225));
#line 1956 "stm_expand.m"
    }
#line 1956 "stm_expand.m"
    {
#line 1956 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_224_224, transform_hlds__stm_expand__Goal_23);
#line 1956 "stm_expand.m"
      return;
    }
#line 1877 "stm_expand.m"
  }
#line 1870 "stm_expand.m"
}

#line 1787 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1787 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 1787 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 1787 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
#line 1787 "stm_expand.m"
{
#line 1787 "stm_expand.m"
  {
#line 1787 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 1787 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__2_42;
#line 1787 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__4_44;

#line 1787 "stm_expand.m"
    {
#line 1787 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1787__1_4_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_HeadVar__2_42, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv0_HeadVar__4_44);
    }
#line 1787 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__2_42));
#line 1787 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__4_44));
#line 1787 "stm_expand.m"
  }
#line 1787 "stm_expand.m"
}

#line 1781 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
#line 1781 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1781 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
#line 1781 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40)
#line 1781 "stm_expand.m"
{
#line 1786 "stm_expand.m"
  {
#line 1786 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_156_156 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmVarsMinusHead_19;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IntermediateStmVars_20;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeStmVarsIn_21;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeStmVarsOut_22;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MergeGoals_28;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnlockCall_29;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignRetryCons_30;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryConsVar_31;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryCall_32;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidGoal_33;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignRollbackCons_34;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackConsVar_35;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ThrowCall_36;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InvalidGoal_37;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goals_38;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_94_94;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_95_95;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_99_99;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_107_107;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_109_109;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_115_115;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_116_116;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_117_117;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_119_119;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_120_120;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_124_124;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_132_132;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_139_139;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_140_140;
#line 1786 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_141_141;
#line 1795 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48;

#line 1794 "stm_expand.m"
    {
#line 1794 "stm_expand.m"
      transform_hlds__stm_expand__StmVarsMinusHead_19 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__StmVars_8);
    }
#line 1795 "stm_expand.m"
    {
#line 1795 "stm_expand.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__TypeInfo_156_156, (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[11], transform_hlds__stm_expand__StmVarsMinusHead_19, &transform_hlds__stm_expand__IntermediateStmVars_20, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39)), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
    }
#line 1795 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48 = ((MR_Word) transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
#line 1798 "stm_expand.m"
    {
#line 1798 "stm_expand.m"
      transform_hlds__stm_expand__MergeStmVarsIn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMDI_9));
#line 1798 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 1) = ((MR_Box) (transform_hlds__stm_expand__IntermediateStmVars_20));
#line 1798 "stm_expand.m"
    }
#line 1799 "stm_expand.m"
    {
#line 1799 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1799 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMUO_10));
#line 1799 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1799 "stm_expand.m"
    }
#line 1799 "stm_expand.m"
    {
#line 1799 "stm_expand.m"
      transform_hlds__stm_expand__MergeStmVarsOut_22 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__IntermediateStmVars_20, transform_hlds__stm_expand__V_49_49);
    }
#line 1813 "stm_expand.m"
    {
#line 1813 "stm_expand.m"
      transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__StmVars_8, transform_hlds__stm_expand__MergeStmVarsIn_21, transform_hlds__stm_expand__MergeStmVarsOut_22, &transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83);
    }
#line 1816 "stm_expand.m"
    {
#line 1816 "stm_expand.m"
      transform_hlds__stm_expand__V_84_84 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1818 "stm_expand.m"
    {
#line 1818 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1816 "stm_expand.m"
    {
#line 1816 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_84_84, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_92_92, &transform_hlds__stm_expand__UnlockCall_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93);
    }
#line 1820 "stm_expand.m"
    {
#line 1820 "stm_expand.m"
      transform_hlds__stm_expand__V_94_94 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1821 "stm_expand.m"
    {
#line 1821 "stm_expand.m"
      transform_hlds__stm_expand__V_95_95 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1820 "stm_expand.m"
    {
#line 1820 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_94_94, transform_hlds__stm_expand__V_95_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[18]), &transform_hlds__stm_expand__AssignRetryCons_30, &transform_hlds__stm_expand__RetryConsVar_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97);
    }
#line 1823 "stm_expand.m"
    {
#line 1823 "stm_expand.m"
      transform_hlds__stm_expand__V_99_99 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1825 "stm_expand.m"
    {
#line 1825 "stm_expand.m"
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryConsVar_31));
#line 1825 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1825 "stm_expand.m"
    }
#line 1825 "stm_expand.m"
    {
#line 1825 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
#line 1825 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
#line 1825 "stm_expand.m"
    }
#line 1826 "stm_expand.m"
    {
#line 1826 "stm_expand.m"
      transform_hlds__stm_expand__V_107_107 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_105_105);
    }
#line 1823 "stm_expand.m"
    {
#line 1823 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_99_99, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_107_107, &transform_hlds__stm_expand__RetryCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108);
    }
#line 1834 "stm_expand.m"
    {
#line 1834 "stm_expand.m"
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryCall_32));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1834 "stm_expand.m"
    }
#line 1834 "stm_expand.m"
    {
#line 1834 "stm_expand.m"
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRetryCons_30));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
#line 1834 "stm_expand.m"
    }
#line 1834 "stm_expand.m"
    {
#line 1834 "stm_expand.m"
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
#line 1834 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
#line 1834 "stm_expand.m"
    }
#line 1834 "stm_expand.m"
    {
#line 1834 "stm_expand.m"
      transform_hlds__stm_expand__V_114_114 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__V_115_115);
    }
#line 1834 "stm_expand.m"
    {
#line 1834 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__ValidGoal_33);
    }
#line 1839 "stm_expand.m"
    {
#line 1839 "stm_expand.m"
      transform_hlds__stm_expand__V_119_119 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1840 "stm_expand.m"
    {
#line 1840 "stm_expand.m"
      transform_hlds__stm_expand__V_120_120 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1839 "stm_expand.m"
    {
#line 1839 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_119_119, transform_hlds__stm_expand__V_120_120, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[19]), &transform_hlds__stm_expand__AssignRollbackCons_34, &transform_hlds__stm_expand__RollbackConsVar_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
#line 1842 "stm_expand.m"
    {
#line 1842 "stm_expand.m"
      transform_hlds__stm_expand__V_124_124 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1844 "stm_expand.m"
    {
#line 1844 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackConsVar_35));
#line 1844 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1844 "stm_expand.m"
    }
#line 1843 "stm_expand.m"
    {
#line 1843 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
#line 1843 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_134_134));
#line 1843 "stm_expand.m"
    }
#line 1845 "stm_expand.m"
    {
#line 1845 "stm_expand.m"
      transform_hlds__stm_expand__V_132_132 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_130_130);
    }
#line 1842 "stm_expand.m"
    {
#line 1842 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_124_124, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_130_130, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_132_132, &transform_hlds__stm_expand__ThrowCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133);
    }
#line 1847 "stm_expand.m"
    {
#line 1847 "stm_expand.m"
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__ThrowCall_36));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1847 "stm_expand.m"
    }
#line 1847 "stm_expand.m"
    {
#line 1847 "stm_expand.m"
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRollbackCons_34));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_141_141));
#line 1847 "stm_expand.m"
    }
#line 1847 "stm_expand.m"
    {
#line 1847 "stm_expand.m"
      transform_hlds__stm_expand__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
#line 1847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 1) = ((MR_Box) (transform_hlds__stm_expand__V_140_140));
#line 1847 "stm_expand.m"
    }
#line 1847 "stm_expand.m"
    {
#line 1847 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_139_139, &transform_hlds__stm_expand__InvalidGoal_37);
    }
#line 1850 "stm_expand.m"
    {
#line 1850 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(transform_hlds__stm_expand__StmVars_8, (MR_Integer) 0, transform_hlds__stm_expand__ValidGoal_33, transform_hlds__stm_expand__InvalidGoal_37, &transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);
    }
#line 1852 "stm_expand.m"
    {
#line 1852 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__Goal_12);
#line 1852 "stm_expand.m"
      return;
    }
#line 1786 "stm_expand.m"
  }
#line 1781 "stm_expand.m"
}

#line 1705 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
#line 1705 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__Count_5,
#line 1705 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Vars_6,
#line 1705 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
#line 1705 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12)
#line 1705 "stm_expand.m"
{
#line 1711 "stm_expand.m"
  {
#line 1711 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 == (MR_Integer) 0);

#line 1711 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1710 "stm_expand.m"
      {
#line 1710 "stm_expand.m"
        *transform_hlds__stm_expand__Vars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1710 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11;
#line 1710 "stm_expand.m"
      }
#line 1711 "stm_expand.m"
    else
#line 1716 "stm_expand.m"
      {
#line 1711 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 > (MR_Integer) 0);
#line 1716 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1712 "stm_expand.m"
          {
#line 1712 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Var_8;
#line 1712 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__Count1_9;
#line 1712 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Vars0_10;
#line 1712 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_14_14;
#line 1712 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16;

#line 1712 "stm_expand.m"
            {
#line 1712 "stm_expand.m"
              transform_hlds__stm_expand__V_14_14 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
            }
#line 1712 "stm_expand.m"
            {
#line 1712 "stm_expand.m"
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[17]), &transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16);
            }
#line 1713 "stm_expand.m"
            transform_hlds__stm_expand__Count1_9 = (transform_hlds__stm_expand__Count_5 - (MR_Integer) 1);
#line 1714 "stm_expand.m"
            {
#line 1714 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__Count1_9, &transform_hlds__stm_expand__Vars0_10, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);
            }
#line 1715 "stm_expand.m"
            {
#line 1715 "stm_expand.m"
              MR_Word base;
#line 1715 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "stm_expand.m"
              *transform_hlds__stm_expand__Vars_6 = base;
#line 1715 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_8));
#line 1715 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars0_10));
#line 1715 "stm_expand.m"
            }
#line 1712 "stm_expand.m"
          }
#line 1716 "stm_expand.m"
        else
#line 1717 "stm_expand.m"
          {
#line 1717 "stm_expand.m"
            {
#line 1717 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
#line 1717 "stm_expand.m"
              return;
            }
#line 1717 "stm_expand.m"
          }
#line 1716 "stm_expand.m"
      }
#line 1711 "stm_expand.m"
  }
#line 1705 "stm_expand.m"
}

#line 1676 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_15,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_19,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__EndBranch_22,
#line 1676 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_23,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_24,
#line 1676 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 1676 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
#line 1676 "stm_expand.m"
{
#line 1690 "stm_expand.m"
  {
#line 1690 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerSTMVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1685 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1685 "stm_expand.m"
      {
#line 1686 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__WrapperIDs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1685 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1687 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__AtomicGoalVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1685 "stm_expand.m"
      }
#line 1690 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1689 "stm_expand.m"
      {
#line 1689 "stm_expand.m"
        *transform_hlds__stm_expand__Goal_23 = transform_hlds__stm_expand__EndBranch_22;
#line 1689 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33;
#line 1689 "stm_expand.m"
      }
#line 1690 "stm_expand.m"
    else
#line 1701 "stm_expand.m"
      {
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AGV_26;
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__AGVs_27;
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InnerVar_28;
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InnerSTMVars0_29;
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__WrapID_30;
#line 1701 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__WrapperIDs0_31;

#line 1691 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__AtomicGoalVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1691 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1691 "stm_expand.m"
          {
#line 1691 "stm_expand.m"
            transform_hlds__stm_expand__AGV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 0)));
#line 1691 "stm_expand.m"
            transform_hlds__stm_expand__AGVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 1)));
#line 1692 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerSTMVars_18)) == (MR_mktag((MR_Integer) 1)));
#line 1692 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 1692 "stm_expand.m"
              {
#line 1692 "stm_expand.m"
                transform_hlds__stm_expand__InnerVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 0)));
#line 1692 "stm_expand.m"
                transform_hlds__stm_expand__InnerSTMVars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 1)));
#line 1693 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__WrapperIDs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1693 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 1693 "stm_expand.m"
                  {
#line 1693 "stm_expand.m"
                    transform_hlds__stm_expand__WrapID_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 0)));
#line 1693 "stm_expand.m"
                    transform_hlds__stm_expand__WrapperIDs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 1)));
#line 1693 "stm_expand.m"
                  }
#line 1692 "stm_expand.m"
              }
#line 1691 "stm_expand.m"
          }
#line 1701 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 1697 "stm_expand.m"
          {
#line 1697 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Goal0_32;
#line 1697 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;

#line 1695 "stm_expand.m"
            {
#line 1695 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AGVs_27, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerSTMVars0_29, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapperIDs0_31, transform_hlds__stm_expand__EndBranch_22, &transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
            }
#line 1698 "stm_expand.m"
            {
#line 1698 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_branch_13_p_0(transform_hlds__stm_expand__AGV_26, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerVar_28, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapID_30, transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__Goal_23, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
#line 1698 "stm_expand.m"
              return;
            }
#line 1697 "stm_expand.m"
          }
#line 1701 "stm_expand.m"
        else
#line 1702 "stm_expand.m"
          {
#line 1702 "stm_expand.m"
            {
#line 1702 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/13", (MR_String) "mismatched lists");
#line 1702 "stm_expand.m"
              return;
            }
#line 1702 "stm_expand.m"
          }
#line 1701 "stm_expand.m"
      }
#line 1690 "stm_expand.m"
  }
#line 1676 "stm_expand.m"
}

#line 1644 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_10,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_11,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_12,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_13,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_14,
#line 1644 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1644 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1644 "stm_expand.m"
{
#line 1649 "stm_expand.m"
  {
#line 1649 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_43_43;
#line 1649 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ClosureCount_16;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerSTMVars_17;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnRttiVar_18;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateRetTypeInfo_19;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRttiVar_20;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateExceptTypeInfo_21;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__EndBranchGoal_22;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal0_23;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_24;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_25;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal1_26;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__MainGoal_27;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_49;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_50;
#line 1649 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_51;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_52;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_53;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_54;
#line 1649 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_55;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_56;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_57;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_58;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_59;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_60;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_66;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_67;
#line 1649 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_68;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_69;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_70;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_71;
#line 1649 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_72;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_73;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_74;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_75;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_76;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_77;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInInfo_82;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NonLocals_83;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstMapDelta_84;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Detism_85;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_87;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_88;
#line 1649 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalOutExpr_90;
#line 2318 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;

#line 1651 "stm_expand.m"
    {
#line 1651 "stm_expand.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__stm_expand__Closures_10, &transform_hlds__stm_expand__ClosureCount_16);
    }
#line 1652 "stm_expand.m"
    {
#line 1652 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__ClosureCount_16, &transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30);
    }
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 0)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 1)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 2)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 3)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 4)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 5)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 6)));
#line 2355 "stm_expand.m"
    {
#line 2355 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_49, transform_hlds__stm_expand__PredInfo0_52, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__PolyInfo0_56);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__Context_54, &transform_hlds__stm_expand__ReturnRttiVar_18, &transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__PolyInfo0_56, &transform_hlds__stm_expand__PolyInfo_57);
    }
#line 2358 "stm_expand.m"
    {
#line 2358 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_57, transform_hlds__stm_expand__PredInfo0_52, &transform_hlds__stm_expand__PredInfo_58, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__ProcInfo_59, &transform_hlds__stm_expand__ModuleInfo_60);
    }
#line 2360 "stm_expand.m"
    {
#line 2360 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_60));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_50));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_51));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_58));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_59));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_54));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_55));
#line 2360 "stm_expand.m"
    }
#line 1656 "stm_expand.m"
    {
#line 1656 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 0)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 1)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 2)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 3)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 4)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__Context_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 5)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 6)));
#line 2355 "stm_expand.m"
    {
#line 2355 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_66, transform_hlds__stm_expand__PredInfo0_69, transform_hlds__stm_expand__ProcInfo0_70, &transform_hlds__stm_expand__PolyInfo0_73);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__Context_71, &transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__PolyInfo0_73, &transform_hlds__stm_expand__PolyInfo_74);
    }
#line 2358 "stm_expand.m"
    {
#line 2358 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_74, transform_hlds__stm_expand__PredInfo0_69, &transform_hlds__stm_expand__PredInfo_75, transform_hlds__stm_expand__ProcInfo0_70, &transform_hlds__stm_expand__ProcInfo_76, &transform_hlds__stm_expand__ModuleInfo_77);
    }
#line 2360 "stm_expand.m"
    {
#line 2360 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_77));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_67));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_68));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_75));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_76));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_71));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_72));
#line 2360 "stm_expand.m"
    }
#line 1659 "stm_expand.m"
    {
#line 1659 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__EndBranchGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 1662 "stm_expand.m"
    {
#line 1662 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__ReturnRttiVar_18, transform_hlds__stm_expand__ExceptRttiVar_20, transform_hlds__stm_expand__Closures_10, transform_hlds__stm_expand__EndBranchGoal_22, &transform_hlds__stm_expand__MainGoal0_23, transform_hlds__stm_expand__StmInfo_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
#line 11315 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1667 "stm_expand.m"
    {
#line 1667 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal0_23));
#line 1667 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1667 "stm_expand.m"
    }
#line 1666 "stm_expand.m"
    {
#line 1666 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__V_37_37);
    }
#line 1666 "stm_expand.m"
    {
#line 1666 "stm_expand.m"
      transform_hlds__stm_expand__TopLevelGoalList0_24 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__V_36_36);
    }
#line 1668 "stm_expand.m"
    {
#line 1668 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_24, &transform_hlds__stm_expand__TopLevelGoalList_25);
    }
#line 1670 "stm_expand.m"
    {
#line 1670 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_25, &transform_hlds__stm_expand__MainGoal1_26);
    }
#line 2318 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal1_26, (MR_Integer) 0)));
#line 2318 "stm_expand.m"
    transform_hlds__stm_expand__GoalInInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal1_26, (MR_Integer) 1)));
#line 2319 "stm_expand.m"
    {
#line 2319 "stm_expand.m"
      transform_hlds__stm_expand__NonLocals_83 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2320 "stm_expand.m"
    {
#line 2320 "stm_expand.m"
      transform_hlds__stm_expand__InstMapDelta_84 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2321 "stm_expand.m"
    {
#line 2321 "stm_expand.m"
      transform_hlds__stm_expand__Detism_85 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2323 "stm_expand.m"
    {
#line 2323 "stm_expand.m"
      transform_hlds__stm_expand__Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInInfo_82);
    }
#line 2324 "stm_expand.m"
    {
#line 2324 "stm_expand.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_83, transform_hlds__stm_expand__InstMapDelta_84, transform_hlds__stm_expand__Detism_85, (MR_Integer) 0, transform_hlds__stm_expand__Context_87, &transform_hlds__stm_expand__GoalInfo_88);
    }
#line 2327 "stm_expand.m"
    {
#line 2327 "stm_expand.m"
      transform_hlds__stm_expand__GoalOutExpr_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__stm_expand_scalar_common_6[16])));
#line 2327 "stm_expand.m"
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_90, 2) = ((MR_Box) (transform_hlds__stm_expand__MainGoal1_26));
#line 2327 "stm_expand.m"
    }
#line 2328 "stm_expand.m"
    {
#line 2328 "stm_expand.m"
      transform_hlds__stm_expand__MainGoal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2328 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal_27, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalOutExpr_90));
#line 2328 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MainGoal_27, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_88));
#line 2328 "stm_expand.m"
    }
#line 1673 "stm_expand.m"
    {
#line 1673 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__MainGoal_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40);
    }
#line 1674 "stm_expand.m"
    {
#line 1674 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
#line 1674 "stm_expand.m"
      return;
    }
#line 1649 "stm_expand.m"
  }
#line 1644 "stm_expand.m"
}

#line 1612 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Closures_11,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_12,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_13,
#line 1612 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1612 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
#line 1612 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32)
#line 1612 "stm_expand.m"
{
#line 1617 "stm_expand.m"
  {
#line 1617 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_67_67;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_68_68;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_69_69;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_16;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_17;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_18;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_19;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_20;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_21;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnType_23;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewStmDI_25;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewStmUO_27;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo3_29;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_30;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 0)));
#line 1617 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 2)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 1)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 3)));
#line 2560 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 4)));

#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__InputSet_73);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__OutputSet_74);
    }
#line 1619 "stm_expand.m"
    {
#line 1619 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__InputTypes_18, &transform_hlds__stm_expand__OutputTypes_19);
    }
#line 1620 "stm_expand.m"
    {
#line 1620 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, &transform_hlds__stm_expand__InputModes_20, &transform_hlds__stm_expand__OutputModes_21);
    }
#line 1972 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        transform_hlds__stm_expand__ReturnType_23 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1972 "stm_expand.m"
    else
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 1)));
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 0)));

#line 1972 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "stm_expand.m"
          transform_hlds__stm_expand__ReturnType_23 = transform_hlds__stm_expand__V_93_93;
#line 1972 "stm_expand.m"
        else
#line 1977 "stm_expand.m"
          {
#line 1978 "stm_expand.m"
            {
#line 1978 "stm_expand.m"
              transform_hlds__stm_expand__ReturnType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_19));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1978 "stm_expand.m"
            }
#line 1977 "stm_expand.m"
          }
#line 1972 "stm_expand.m"
      }
#line 11595 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_67_67 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1626 "stm_expand.m"
    {
#line 1626 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_13));
#line 1626 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1626 "stm_expand.m"
    }
#line 1626 "stm_expand.m"
    {
#line 1626 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__StmDI_12));
#line 1626 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 1626 "stm_expand.m"
    }
#line 1626 "stm_expand.m"
    {
#line 1626 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_40_40);
    }
#line 1626 "stm_expand.m"
    {
#line 1626 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_39_39);
    }
#line 11627 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1627 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1627 "stm_expand.m"
    }
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 1627 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1627 "stm_expand.m"
    }
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__OutputTypes_19, transform_hlds__stm_expand__V_44_44);
    }
#line 1627 "stm_expand.m"
    {
#line 1627 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__InputTypes_18, transform_hlds__stm_expand__V_43_43);
    }
#line 11669 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1628 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1628 "stm_expand.m"
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 1628 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1628 "stm_expand.m"
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__OutputModes_21, transform_hlds__stm_expand__V_50_50);
    }
#line 1628 "stm_expand.m"
    {
#line 1628 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__InputModes_20, transform_hlds__stm_expand__V_49_49);
    }
#line 1629 "stm_expand.m"
    {
#line 1629 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = hlds__make_goal__true_goal_0_f_0();
    }
#line 1626 "stm_expand.m"
    {
#line 1626 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "or_else", transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1632 "stm_expand.m"
    {
#line 1632 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[14]), &transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
#line 1634 "stm_expand.m"
    {
#line 1634 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1634 "stm_expand.m"
    {
#line 1634 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_58_58, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[15]), &transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
#line 1636 "stm_expand.m"
    {
#line 1636 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmUO_27));
#line 1636 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1636 "stm_expand.m"
    }
#line 1636 "stm_expand.m"
    {
#line 1636 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmDI_25));
#line 1636 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 1636 "stm_expand.m"
    }
#line 1636 "stm_expand.m"
    {
#line 1636 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_63_63);
    }
#line 1636 "stm_expand.m"
    {
#line 1636 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_62_62);
    }
#line 1636 "stm_expand.m"
    {
#line 1636 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo3_29);
    }
#line 1639 "stm_expand.m"
    {
#line 1639 "stm_expand.m"
      transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(transform_hlds__stm_expand__BranchGoalVars_10, transform_hlds__stm_expand__Closures_11, transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__ReturnType_23, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__NewPredInfo3_29, &transform_hlds__stm_expand__NewPredInfo_30);
    }
#line 1642 "stm_expand.m"
    {
#line 1642 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_30, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);
#line 1642 "stm_expand.m"
      return;
    }
#line 1617 "stm_expand.m"
  }
#line 1612 "stm_expand.m"
}

#line 1579 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1579 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
#line 1579 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
#line 1579 "stm_expand.m"
{
#line 1585 "stm_expand.m"
  {
#line 1585 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignResult_22;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Call1_23;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Call2_24;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_26;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_27;
#line 1585 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;

#line 1586 "stm_expand.m"
    {
#line 1586 "stm_expand.m"
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 1572 "stm_expand.m"
    transform_hlds__stm_expand__Call1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1572 "stm_expand.m"
    transform_hlds__stm_expand__Call2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1593 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CopySTM_18 == (MR_Integer) 1);
#line 1598 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1595 "stm_expand.m"
      {
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeCtorInfo_48_48;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopySTMAssign_25;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_35_35;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_37_37;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_38_38;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_39_39;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_40_40;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;
#line 1595 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_43_43;

#line 1594 "stm_expand.m"
        {
#line 1594 "stm_expand.m"
          transform_hlds__stm_expand__V_37_37 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 1594 "stm_expand.m"
        {
#line 1594 "stm_expand.m"
          transform_hlds__stm_expand__V_38_38 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 1594 "stm_expand.m"
        {
#line 1594 "stm_expand.m"
          transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1594 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
#line 1594 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
#line 1594 "stm_expand.m"
        }
#line 1594 "stm_expand.m"
        {
#line 1594 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__CopySTMAssign_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
        }
#line 11896 "transform_hlds.stm_expand.c"
        transform_hlds__stm_expand__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1596 "stm_expand.m"
        {
#line 1596 "stm_expand.m"
          transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1596 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1596 "stm_expand.m"
        }
#line 1596 "stm_expand.m"
        {
#line 1596 "stm_expand.m"
          transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_25));
#line 1596 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 1596 "stm_expand.m"
        }
#line 1596 "stm_expand.m"
        {
#line 1596 "stm_expand.m"
          transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
        }
#line 1596 "stm_expand.m"
        {
#line 1596 "stm_expand.m"
          transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__V_40_40, transform_hlds__stm_expand__V_43_43);
        }
#line 1596 "stm_expand.m"
        {
#line 1596 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_39_39);
        }
#line 1595 "stm_expand.m"
      }
#line 1598 "stm_expand.m"
    else
#line 1599 "stm_expand.m"
      {
#line 1599 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1599 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_44_44;
#line 1599 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_45_45;
#line 1599 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_47_47;

#line 1599 "stm_expand.m"
        {
#line 1599 "stm_expand.m"
          transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1599 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1599 "stm_expand.m"
        }
#line 1599 "stm_expand.m"
        {
#line 1599 "stm_expand.m"
          transform_hlds__stm_expand__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
        }
#line 1599 "stm_expand.m"
        {
#line 1599 "stm_expand.m"
          transform_hlds__stm_expand__V_44_44 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__V_45_45, transform_hlds__stm_expand__V_47_47);
        }
#line 1599 "stm_expand.m"
        {
#line 1599 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_44_44);
        }
#line 1599 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1599 "stm_expand.m"
      }
#line 1602 "stm_expand.m"
    {
#line 1602 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_26, &transform_hlds__stm_expand__TopLevelGoalList_27);
    }
#line 1603 "stm_expand.m"
    {
#line 1603 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_27, transform_hlds__stm_expand__Goal_19);
#line 1603 "stm_expand.m"
      return;
    }
#line 1585 "stm_expand.m"
  }
#line 1579 "stm_expand.m"
}

#line 1520 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1520 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1520 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
#line 1520 "stm_expand.m"
{
#line 1525 "stm_expand.m"
  {
#line 1525 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_26;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyStm_27;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_28;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1525 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
#line 1526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
#line 1526 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
#line 1529 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1530 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1531 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1529 "stm_expand.m"
    {
#line 1529 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1530 "stm_expand.m"
    {
#line 1530 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1531 "stm_expand.m"
    {
#line 1531 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 12133 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1533 "stm_expand.m"
    {
#line 1533 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "stm_expand.m"
    }
#line 1533 "stm_expand.m"
    {
#line 1533 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 1533 "stm_expand.m"
    }
#line 1533 "stm_expand.m"
    {
#line 1533 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1533 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 1533 "stm_expand.m"
    }
#line 1533 "stm_expand.m"
    {
#line 1533 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1534 "stm_expand.m"
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1534 "stm_expand.m"
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
#line 1534 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1534 "stm_expand.m"
    }
#line 1534 "stm_expand.m"
    {
#line 1534 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1535 "stm_expand.m"
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1535 "stm_expand.m"
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1535 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1535 "stm_expand.m"
    }
#line 1535 "stm_expand.m"
    {
#line 1535 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1533 "stm_expand.m"
    {
#line 1533 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "simple_wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
#line 1538 "stm_expand.m"
    {
#line 1538 "stm_expand.m"
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
#line 1540 "stm_expand.m"
    {
#line 1540 "stm_expand.m"
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
#line 1548 "stm_expand.m"
    {
#line 1548 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
#line 1552 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1549 "stm_expand.m"
      {
#line 1549 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_64_64;

#line 1549 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
#line 1550 "stm_expand.m"
        {
#line 1550 "stm_expand.m"
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
#line 1550 "stm_expand.m"
        {
#line 1550 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
#line 1549 "stm_expand.m"
      }
#line 1552 "stm_expand.m"
    else
#line 1553 "stm_expand.m"
      {
#line 1553 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
#line 1554 "stm_expand.m"
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
#line 1554 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1553 "stm_expand.m"
      }
#line 1557 "stm_expand.m"
    {
#line 1557 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "stm_expand.m"
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1561 "stm_expand.m"
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar_26));
#line 1561 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1561 "stm_expand.m"
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
#line 1561 "stm_expand.m"
    {
#line 1561 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
#line 1562 "stm_expand.m"
    {
#line 1562 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1563 "stm_expand.m"
    {
#line 1563 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
#line 1564 "stm_expand.m"
    {
#line 1564 "stm_expand.m"
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
#line 1565 "stm_expand.m"
    {
#line 1565 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
#line 1565 "stm_expand.m"
      return;
    }
#line 1525 "stm_expand.m"
  }
#line 1520 "stm_expand.m"
}

#line 1511 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1511 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
#line 1511 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18)
#line 1511 "stm_expand.m"
{
#line 1517 "stm_expand.m"
  {
#line 1517 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1517 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;

#line 1517 "stm_expand.m"
    {
#line 1517 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar0_11, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_16_16, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);
    }
#line 1517 "stm_expand.m"
  }
#line 1511 "stm_expand.m"
}

#line 1426 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_14,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_15,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmDI_16,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmUO_17,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__CopySTM_18,
#line 1426 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_19,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_20,
#line 1426 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
#line 1426 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48)
#line 1426 "stm_expand.m"
{
#line 1432 "stm_expand.m"
  {
#line 1432 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_169_169;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmModuleName_22;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptionModuleName_23;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignResult_24;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVar_25;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidTrueFunctor_26;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidFalseFunctor_27;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackCons_28;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ConstRollbackGoal_29;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackVar_30;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmLock_Call_31;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmUnLock_Call_32;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmValidate_Call_33;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmCommit_Call_34;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoVar_35;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_36;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_38;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_39;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_40;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicTopLevelList_41;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicGoal0_42;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PostAtomicGoal_43;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_45;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_46;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_88_88;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_103_103;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_108_108;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_114_114;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_121_121;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_125_125;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_131_131;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_133_133;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_137_137;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_138_138;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_140_140;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_144_144;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_146_146;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_147_147;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_150_150;
#line 1432 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_151_151;

#line 1433 "stm_expand.m"
    {
#line 1433 "stm_expand.m"
      transform_hlds__stm_expand__StmModuleName_22 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1434 "stm_expand.m"
    {
#line 1434 "stm_expand.m"
      transform_hlds__stm_expand__ExceptionModuleName_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1436 "stm_expand.m"
    {
#line 1436 "stm_expand.m"
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
#line 1438 "stm_expand.m"
    {
#line 1438 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 1438 "stm_expand.m"
    {
#line 1438 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_50_50, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[12]), &transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52);
    }
#line 1441 "stm_expand.m"
    {
#line 1441 "stm_expand.m"
      transform_hlds__stm_expand__ValidTrueFunctor_26 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 1442 "stm_expand.m"
    {
#line 1442 "stm_expand.m"
      transform_hlds__stm_expand__ValidFalseFunctor_27 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
#line 1443 "stm_expand.m"
    {
#line 1443 "stm_expand.m"
      transform_hlds__stm_expand__RollbackCons_28 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1447 "stm_expand.m"
    {
#line 1447 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1447 "stm_expand.m"
    {
#line 1447 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackCons_28, transform_hlds__stm_expand__V_54_54, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[13]), &transform_hlds__stm_expand__ConstRollbackGoal_29, &transform_hlds__stm_expand__RollbackVar_30, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
#line 1451 "stm_expand.m"
    {
#line 1451 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1450 "stm_expand.m"
    {
#line 1450 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, &transform_hlds__stm_expand__Goal_StmLock_Call_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
    }
#line 1454 "stm_expand.m"
    {
#line 1454 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1453 "stm_expand.m"
    {
#line 1453 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_74_74, &transform_hlds__stm_expand__Goal_StmUnLock_Call_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1457 "stm_expand.m"
    {
#line 1457 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
#line 1457 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "stm_expand.m"
    }
#line 1457 "stm_expand.m"
    {
#line 1457 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1457 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 1457 "stm_expand.m"
    }
#line 1458 "stm_expand.m"
    {
#line 1458 "stm_expand.m"
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 1458 "stm_expand.m"
    }
#line 1459 "stm_expand.m"
    {
#line 1459 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4])));
#line 1459 "stm_expand.m"
    }
#line 1459 "stm_expand.m"
    {
#line 1459 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1459 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1459 "stm_expand.m"
    }
#line 1458 "stm_expand.m"
    {
#line 1458 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1458 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1458 "stm_expand.m"
    }
#line 1458 "stm_expand.m"
    {
#line 1458 "stm_expand.m"
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
#line 1456 "stm_expand.m"
    {
#line 1456 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__Goal_StmValidate_Call_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
#line 1462 "stm_expand.m"
    {
#line 1462 "stm_expand.m"
      transform_hlds__stm_expand__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
#line 1462 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "stm_expand.m"
    }
#line 1463 "stm_expand.m"
    {
#line 1463 "stm_expand.m"
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
#line 1463 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1463 "stm_expand.m"
    }
#line 1463 "stm_expand.m"
    {
#line 1463 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_108_108);
    }
#line 1461 "stm_expand.m"
    {
#line 1461 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_103_103, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_105_105, &transform_hlds__stm_expand__Goal_StmCommit_Call_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106);
    }
#line 1466 "stm_expand.m"
    {
#line 1466 "stm_expand.m"
      transform_hlds__stm_expand__V_114_114 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 1466 "stm_expand.m"
    {
#line 1466 "stm_expand.m"
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__TypeInfoVar_35, &transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115);
    }
#line 1470 "stm_expand.m"
    {
#line 1470 "stm_expand.m"
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackVar_30));
#line 1470 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "stm_expand.m"
    }
#line 1470 "stm_expand.m"
    {
#line 1470 "stm_expand.m"
      transform_hlds__stm_expand__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_35));
#line 1470 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
#line 1470 "stm_expand.m"
    }
#line 1471 "stm_expand.m"
    {
#line 1471 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_121_121);
    }
#line 1469 "stm_expand.m"
    {
#line 1469 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_121_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_123_123, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124);
    }
#line 1475 "stm_expand.m"
    {
#line 1475 "stm_expand.m"
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
#line 1475 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1475 "stm_expand.m"
    }
#line 1475 "stm_expand.m"
    {
#line 1475 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCommit_Call_34));
#line 1475 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
#line 1475 "stm_expand.m"
    }
#line 1475 "stm_expand.m"
    {
#line 1475 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_130_130, &transform_hlds__stm_expand__Goal_ValidBranch_38);
    }
#line 12827 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1477 "stm_expand.m"
    {
#line 1477 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ConstRollbackGoal_29));
#line 1477 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1477 "stm_expand.m"
    }
#line 1477 "stm_expand.m"
    {
#line 1477 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
#line 1477 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__V_135_135));
#line 1477 "stm_expand.m"
    }
#line 1478 "stm_expand.m"
    {
#line 1478 "stm_expand.m"
      transform_hlds__stm_expand__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37));
#line 1478 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1478 "stm_expand.m"
    }
#line 1478 "stm_expand.m"
    {
#line 1478 "stm_expand.m"
      transform_hlds__stm_expand__V_137_137 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__V_138_138);
    }
#line 1477 "stm_expand.m"
    {
#line 1477 "stm_expand.m"
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_137_137);
    }
#line 1477 "stm_expand.m"
    {
#line 1477 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal_InvalidBranch_39);
    }
#line 1482 "stm_expand.m"
    {
#line 1482 "stm_expand.m"
      transform_hlds__stm_expand__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidTrueFunctor_26));
#line 1482 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_ValidBranch_38));
#line 1482 "stm_expand.m"
    }
#line 1483 "stm_expand.m"
    {
#line 1483 "stm_expand.m"
      transform_hlds__stm_expand__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidFalseFunctor_27));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_InvalidBranch_39));
#line 1483 "stm_expand.m"
    }
#line 1483 "stm_expand.m"
    {
#line 1483 "stm_expand.m"
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__V_147_147));
#line 1483 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "stm_expand.m"
    }
#line 1482 "stm_expand.m"
    {
#line 1482 "stm_expand.m"
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__V_144_144));
#line 1482 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
#line 1482 "stm_expand.m"
    }
#line 1481 "stm_expand.m"
    {
#line 1481 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__V_140_140, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143);
    }
#line 1488 "stm_expand.m"
    {
#line 1488 "stm_expand.m"
      transform_hlds__stm_expand__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_40));
#line 1488 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "stm_expand.m"
    }
#line 1488 "stm_expand.m"
    {
#line 1488 "stm_expand.m"
      transform_hlds__stm_expand__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmValidate_Call_33));
#line 1488 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 1) = ((MR_Box) (transform_hlds__stm_expand__V_151_151));
#line 1488 "stm_expand.m"
    }
#line 1487 "stm_expand.m"
    {
#line 1487 "stm_expand.m"
      transform_hlds__stm_expand__PostAtomicTopLevelList_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmLock_Call_31));
#line 1487 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_150_150));
#line 1487 "stm_expand.m"
    }
#line 1490 "stm_expand.m"
    {
#line 1490 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__PostAtomicTopLevelList_41, &transform_hlds__stm_expand__PostAtomicGoal0_42);
    }
#line 1491 "stm_expand.m"
    {
#line 1491 "stm_expand.m"
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__PostAtomicGoal0_42, (MR_Integer) 0, &transform_hlds__stm_expand__PostAtomicGoal_43);
    }
#line 1500 "stm_expand.m"
    if ((transform_hlds__stm_expand__CopySTM_18 == (MR_Integer) 0))
#line 1501 "stm_expand.m"
      {
#line 1501 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_154_154;
#line 1501 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_156_156;
#line 1501 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_157_157;

#line 1502 "stm_expand.m"
        {
#line 1502 "stm_expand.m"
          transform_hlds__stm_expand__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1502 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "stm_expand.m"
        }
#line 1503 "stm_expand.m"
        {
#line 1503 "stm_expand.m"
          transform_hlds__stm_expand__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
#line 1503 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1503 "stm_expand.m"
        }
#line 1502 "stm_expand.m"
        {
#line 1502 "stm_expand.m"
          transform_hlds__stm_expand__V_156_156 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_157_157);
        }
#line 1502 "stm_expand.m"
        {
#line 1502 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_154_154, transform_hlds__stm_expand__V_156_156);
        }
#line 1503 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
#line 1501 "stm_expand.m"
      }
#line 1500 "stm_expand.m"
    else
#line 1495 "stm_expand.m"
      {
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__CopySTMAssign_44;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_159_159;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_161_161;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_162_162;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_163_163;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_165_165;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_166_166;
#line 1495 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_167_167;

#line 1496 "stm_expand.m"
        {
#line 1496 "stm_expand.m"
          transform_hlds__stm_expand__V_161_161 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 1496 "stm_expand.m"
        {
#line 1496 "stm_expand.m"
          transform_hlds__stm_expand__V_162_162 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 1496 "stm_expand.m"
        {
#line 1496 "stm_expand.m"
          transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__V_161_161));
#line 1496 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (transform_hlds__stm_expand__V_162_162));
#line 1496 "stm_expand.m"
        }
#line 1496 "stm_expand.m"
        {
#line 1496 "stm_expand.m"
          transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_159_159, &transform_hlds__stm_expand__CopySTMAssign_44, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "stm_expand.m"
        }
#line 1499 "stm_expand.m"
        {
#line 1499 "stm_expand.m"
          transform_hlds__stm_expand__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
#line 1499 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "stm_expand.m"
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_44));
#line 1498 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 1) = ((MR_Box) (transform_hlds__stm_expand__V_167_167));
#line 1498 "stm_expand.m"
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__V_165_165 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_166_166);
        }
#line 1498 "stm_expand.m"
        {
#line 1498 "stm_expand.m"
          transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_163_163, transform_hlds__stm_expand__V_165_165);
        }
#line 1495 "stm_expand.m"
      }
#line 1506 "stm_expand.m"
    {
#line 1506 "stm_expand.m"
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_45, &transform_hlds__stm_expand__TopLevelGoalList_46);
    }
#line 1507 "stm_expand.m"
    {
#line 1507 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_46, transform_hlds__stm_expand__Goal_19);
#line 1507 "stm_expand.m"
      return;
    }
#line 1432 "stm_expand.m"
  }
#line 1426 "stm_expand.m"
}

#line 1374 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_11,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
#line 1374 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
#line 1374 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
#line 1374 "stm_expand.m"
{
#line 1379 "stm_expand.m"
  {
#line 1379 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_26;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyStm_27;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_28;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1379 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
#line 1380 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
#line 1380 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
#line 1380 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
#line 1383 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1384 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1385 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1383 "stm_expand.m"
    {
#line 1383 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1384 "stm_expand.m"
    {
#line 1384 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1385 "stm_expand.m"
    {
#line 1385 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 13252 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1387 "stm_expand.m"
    {
#line 1387 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1387 "stm_expand.m"
    }
#line 1387 "stm_expand.m"
    {
#line 1387 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
#line 1387 "stm_expand.m"
    }
#line 1387 "stm_expand.m"
    {
#line 1387 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1387 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
#line 1387 "stm_expand.m"
    }
#line 1387 "stm_expand.m"
    {
#line 1387 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1388 "stm_expand.m"
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1388 "stm_expand.m"
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
#line 1388 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1388 "stm_expand.m"
    }
#line 1388 "stm_expand.m"
    {
#line 1388 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1389 "stm_expand.m"
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1389 "stm_expand.m"
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1389 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1389 "stm_expand.m"
    }
#line 1389 "stm_expand.m"
    {
#line 1389 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1387 "stm_expand.m"
    {
#line 1387 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
#line 1392 "stm_expand.m"
    {
#line 1392 "stm_expand.m"
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
#line 1394 "stm_expand.m"
    {
#line 1394 "stm_expand.m"
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
#line 1402 "stm_expand.m"
    {
#line 1402 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
#line 1406 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1403 "stm_expand.m"
      {
#line 1403 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_64_64;

#line 1403 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
#line 1404 "stm_expand.m"
        {
#line 1404 "stm_expand.m"
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
#line 1404 "stm_expand.m"
        {
#line 1404 "stm_expand.m"
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
#line 1403 "stm_expand.m"
      }
#line 1406 "stm_expand.m"
    else
#line 1407 "stm_expand.m"
      {
#line 1407 "stm_expand.m"
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
#line 1408 "stm_expand.m"
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
#line 1408 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
#line 1407 "stm_expand.m"
      }
#line 1411 "stm_expand.m"
    {
#line 1411 "stm_expand.m"
      transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1415 "stm_expand.m"
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1415 "stm_expand.m"
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
#line 1415 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1415 "stm_expand.m"
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
#line 1415 "stm_expand.m"
    {
#line 1415 "stm_expand.m"
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
#line 1416 "stm_expand.m"
    {
#line 1416 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
#line 1417 "stm_expand.m"
    {
#line 1417 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
#line 1418 "stm_expand.m"
    {
#line 1418 "stm_expand.m"
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
#line 1419 "stm_expand.m"
    {
#line 1419 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
#line 1419 "stm_expand.m"
      return;
    }
#line 1379 "stm_expand.m"
  }
#line 1374 "stm_expand.m"
}

#line 1320 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultType_10,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ResultVar_11,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_12,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
#line 1320 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
#line 1320 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34)
#line 1320 "stm_expand.m"
{
#line 1327 "stm_expand.m"
  {
#line 1327 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 1327 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "stm_expand.m"
      {
#line 1328 "stm_expand.m"
        {
#line 1328 "stm_expand.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_wrapper_for_goal_list\'/8", (MR_String) "empty list");
#line 1328 "stm_expand.m"
          return;
        }
#line 1327 "stm_expand.m"
      }
#line 1327 "stm_expand.m"
    else
#line 1327 "stm_expand.m"
      {
#line 1327 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 1)));
#line 1327 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 0)));

#line 1327 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1330 "stm_expand.m"
          {
#line 1330 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
#line 1331 "stm_expand.m"
            MR_Box transform_hlds__stm_expand__conv0_AtomicGoalVars_17;
#line 1371 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_79_79;

#line 1331 "stm_expand.m"
            {
#line 1331 "stm_expand.m"
              transform_hlds__stm_expand__conv0_AtomicGoalVars_17 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0, transform_hlds__stm_expand__AtomicGoalVarList_9);
            }
#line 1331 "stm_expand.m"
            transform_hlds__stm_expand__AtomicGoalVars_17 = ((MR_Word) transform_hlds__stm_expand__conv0_AtomicGoalVars_17);
#line 1371 "stm_expand.m"
            {
#line 1371 "stm_expand.m"
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_79_79, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
#line 1330 "stm_expand.m"
          }
#line 1327 "stm_expand.m"
        else
#line 1335 "stm_expand.m"
          {
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__PPIDList_28;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmDI_30;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmUO_31;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__NewAtomicGoal_32;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
#line 1335 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_54;
#line 1353 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_55_55;
#line 1353 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_56_56;
#line 1353 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 1371 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_90_90;

#line 1345 "stm_expand.m"
            {
#line 1345 "stm_expand.m"
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__GoalList_12, transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
            }
#line 1348 "stm_expand.m"
            {
#line 1348 "stm_expand.m"
              transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__AtomicGoalVars_54);
            }
#line 1353 "stm_expand.m"
            transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 0)));
#line 1353 "stm_expand.m"
            transform_hlds__stm_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 1)));
#line 1353 "stm_expand.m"
            transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 2)));
#line 1353 "stm_expand.m"
            transform_hlds__stm_expand__StmDI_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 3)));
#line 1353 "stm_expand.m"
            transform_hlds__stm_expand__StmUO_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 4)));
#line 1356 "stm_expand.m"
            {
#line 1356 "stm_expand.m"
              transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__StmDI_30, transform_hlds__stm_expand__StmUO_31, &transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
            }
#line 1371 "stm_expand.m"
            {
#line 1371 "stm_expand.m"
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_90_90, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
#line 1335 "stm_expand.m"
          }
#line 1327 "stm_expand.m"
      }
#line 1327 "stm_expand.m"
  }
#line 1320 "stm_expand.m"
}

#line 1295 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
#line 1295 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
#line 1295 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11)
#line 1295 "stm_expand.m"
{
#line 1295 "stm_expand.m"
  {
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 1295 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21;
#line 1295 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23;
#line 1295 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25;
#line 1295 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27;
#line 1295 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29;

#line 1295 "stm_expand.m"
    {
#line 1295 "stm_expand.m"
      transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_6), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_8), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_10), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29);
    }
#line 1295 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21));
#line 1295 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23));
#line 1295 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_7 = ((MR_Box) (transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25));
#line 1295 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_9 = ((MR_Box) (transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27));
#line 1295 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_11 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29));
#line 1295 "stm_expand.m"
  }
#line 1295 "stm_expand.m"
}

#line 1279 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDI_13,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUO_14,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
#line 1279 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
#line 1279 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44)
#line 1279 "stm_expand.m"
{
#line 1284 "stm_expand.m"
  {
#line 1284 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_75_75;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_87_87;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_88_88;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_19;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_20;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarSet0_21;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarTypes0_22;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LocalVars_24;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigInnerDI_26;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigInnerUO_27;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LocalVarList_28;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping0_29;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarSet_30;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_31;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarSet_32;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldPredVarTypes_33;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping1_34;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__VarMapping_35;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo1_37;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo1_39;
#line 1284 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OldProcInfo_40;
#line 1285 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
#line 1285 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
#line 1285 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
#line 1285 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
#line 1285 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
#line 1285 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
#line 1286 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
#line 1286 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
#line 1286 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
#line 1286 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
#line 1286 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
#line 1286 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1291 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv9_NewPredVarSet_30;
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv8_NewPredVarTypes_31;
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv7_OldPredVarSet_32;
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv6_OldPredVarTypes_33;
#line 1295 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv5_VarMapping1_34;
#line 1312 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1312 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1312 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_62_62;
#line 1312 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 1312 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1312 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_66_66;
#line 1312 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 1313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1313 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_69_69;
#line 1313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 1313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_72_72;
#line 1313 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_73_73;
#line 1313 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;

#line 1287 "stm_expand.m"
    {
#line 1287 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarSet0_19);
    }
#line 1288 "stm_expand.m"
    {
#line 1288 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarTypes0_20);
    }
#line 1289 "stm_expand.m"
    {
#line 1289 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarSet0_21);
    }
#line 1290 "stm_expand.m"
    {
#line 1290 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarTypes0_22);
    }
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 0)));
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__LocalVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 1)));
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 2)));
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__OrigInnerDI_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 3)));
#line 1291 "stm_expand.m"
    transform_hlds__stm_expand__OrigInnerUO_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 4)));
#line 1292 "stm_expand.m"
    {
#line 1292 "stm_expand.m"
      transform_hlds__stm_expand__LocalVarList_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__LocalVars_24);
    }
#line 13889 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_75_75 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1294 "stm_expand.m"
    {
#line 1294 "stm_expand.m"
      transform_hlds__stm_expand__VarMapping0_29 = mercury__map__init_0_f_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75);
    }
#line 13896 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_87_87 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[3];
#line 13898 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1295 "stm_expand.m"
    {
#line 1295 "stm_expand.m"
      mercury__list__foldl5_12_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeCtorInfo_88_88, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeCtorInfo_88_88, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[10], transform_hlds__stm_expand__LocalVarList_28, ((MR_Box) (transform_hlds__stm_expand__NewPredVarSet0_19)), &transform_hlds__stm_expand__conv9_NewPredVarSet_30, ((MR_Box) (transform_hlds__stm_expand__NewPredVarTypes0_20)), &transform_hlds__stm_expand__conv8_NewPredVarTypes_31, ((MR_Box) (transform_hlds__stm_expand__OldPredVarSet0_21)), &transform_hlds__stm_expand__conv7_OldPredVarSet_32, ((MR_Box) (transform_hlds__stm_expand__OldPredVarTypes0_22)), &transform_hlds__stm_expand__conv6_OldPredVarTypes_33, ((MR_Box) (transform_hlds__stm_expand__VarMapping0_29)), &transform_hlds__stm_expand__conv5_VarMapping1_34);
    }
#line 1295 "stm_expand.m"
    transform_hlds__stm_expand__NewPredVarSet_30 = ((MR_Word) transform_hlds__stm_expand__conv9_NewPredVarSet_30);
#line 1295 "stm_expand.m"
    transform_hlds__stm_expand__NewPredVarTypes_31 = ((MR_Word) transform_hlds__stm_expand__conv8_NewPredVarTypes_31);
#line 1295 "stm_expand.m"
    transform_hlds__stm_expand__OldPredVarSet_32 = ((MR_Word) transform_hlds__stm_expand__conv7_OldPredVarSet_32);
#line 1295 "stm_expand.m"
    transform_hlds__stm_expand__OldPredVarTypes_33 = ((MR_Word) transform_hlds__stm_expand__conv6_OldPredVarTypes_33);
#line 1295 "stm_expand.m"
    transform_hlds__stm_expand__VarMapping1_34 = ((MR_Word) transform_hlds__stm_expand__conv5_VarMapping1_34);
#line 1300 "stm_expand.m"
    {
#line 1300 "stm_expand.m"
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)));
    }
#line 1302 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 1301 "stm_expand.m"
      {
#line 1301 "stm_expand.m"
        mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping_35);
      }
#line 1302 "stm_expand.m"
    else
#line 1303 "stm_expand.m"
      {
#line 1303 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__VarMapping2_36;

#line 1303 "stm_expand.m"
        {
#line 1303 "stm_expand.m"
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping2_36);
        }
#line 1304 "stm_expand.m"
        {
#line 1304 "stm_expand.m"
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)), ((MR_Box) (transform_hlds__stm_expand__InnerUO_14)), transform_hlds__stm_expand__VarMapping2_36, &transform_hlds__stm_expand__VarMapping_35);
        }
#line 1303 "stm_expand.m"
      }
#line 1307 "stm_expand.m"
    {
#line 1307 "stm_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_35, transform_hlds__stm_expand__AtomicGoal0_10, transform_hlds__stm_expand__AtomicGoal_11);
    }
#line 1308 "stm_expand.m"
    {
#line 1308 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_30, transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewProcInfo1_37);
    }
#line 1309 "stm_expand.m"
    {
#line 1309 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_31, transform_hlds__stm_expand__NewProcInfo1_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
#line 1310 "stm_expand.m"
    {
#line 1310 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__OldPredVarSet_32, transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldProcInfo1_39);
    }
#line 1311 "stm_expand.m"
    {
#line 1311 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__OldPredVarTypes_33, transform_hlds__stm_expand__OldProcInfo1_39, &transform_hlds__stm_expand__OldProcInfo_40);
    }
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
#line 1312 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
#line 1312 "stm_expand.m"
    {
#line 1312 "stm_expand.m"
      MR_Word base;
#line 1312 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42 = base;
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 1312 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 1312 "stm_expand.m"
    }
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
#line 1313 "stm_expand.m"
    transform_hlds__stm_expand__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
#line 1313 "stm_expand.m"
    {
#line 1313 "stm_expand.m"
      MR_Word base;
#line 1313 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44 = base;
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OldProcInfo_40));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
#line 1313 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 1313 "stm_expand.m"
    }
#line 1284 "stm_expand.m"
  }
#line 1279 "stm_expand.m"
}

#line 1261 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ProgVar_12,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
#line 1261 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
#line 1261 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29)
#line 1261 "stm_expand.m"
{
#line 1267 "stm_expand.m"
  {
#line 1267 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1267 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_34_34;
#line 1267 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProgType_18;
#line 1267 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProgVar_19;

#line 1268 "stm_expand.m"
    {
#line 1268 "stm_expand.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26, transform_hlds__stm_expand__ProgVar_12, &transform_hlds__stm_expand__ProgType_18);
    }
#line 1271 "stm_expand.m"
    {
#line 1271 "stm_expand.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21);
    }
#line 1272 "stm_expand.m"
    {
#line 1272 "stm_expand.m"
      parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__ProgType_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23);
    }
#line 14105 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_34_34 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 1273 "stm_expand.m"
    {
#line 1273 "stm_expand.m"
      mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_34_34, transform_hlds__stm_expand__TypeInfo_34_34, ((MR_Box) (transform_hlds__stm_expand__ProgVar_12)), ((MR_Box) (transform_hlds__stm_expand__NewProgVar_19)), transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28, transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);
    }
#line 1273 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26;
#line 1273 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24;
#line 1267 "stm_expand.m"
  }
#line 1261 "stm_expand.m"
}

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 578 "stm_expand.m"
{
#line 578 "stm_expand.m"
  {
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 578 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 578 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 578 "stm_expand.m"
  }
#line 578 "stm_expand.m"
}

#line 1222 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
#line 1222 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
#line 1222 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
#line 1222 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29)
#line 1222 "stm_expand.m"
{
#line 1227 "stm_expand.m"
  {
#line 1227 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_69 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_15;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultType_18;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ResultVar_19;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerDI_20;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InnerUO_21;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcessGoalList_22;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperID_23;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackGoal_25;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_37_37;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_53;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_54;
#line 1227 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_55;
#line 582 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_55;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_66_66;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_67_67;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1230 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 1241 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;

#line 580 "stm_expand.m"
    {
#line 580 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[9], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_53);
    }
#line 581 "stm_expand.m"
    {
#line 581 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_54 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_53);
    }
#line 582 "stm_expand.m"
    {
#line 582 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_55 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
#line 582 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_55 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_55);
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 0)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 1)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 2)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 3)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 4)));
#line 583 "stm_expand.m"
    {
#line 583 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_54));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 2) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 3) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 4) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 583 "stm_expand.m"
    }
#line 1230 "stm_expand.m"
    {
#line 1230 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__V_16_16, &transform_hlds__stm_expand__OutputTypes_17);
    }
#line 1972 "stm_expand.m"
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        transform_hlds__stm_expand__ResultType_18 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
#line 1972 "stm_expand.m"
    else
#line 1972 "stm_expand.m"
      {
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
#line 1972 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

#line 1972 "stm_expand.m"
        if ((transform_hlds__stm_expand__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "stm_expand.m"
          transform_hlds__stm_expand__ResultType_18 = transform_hlds__stm_expand__V_81_81;
#line 1972 "stm_expand.m"
        else
#line 1977 "stm_expand.m"
          {
#line 1978 "stm_expand.m"
            {
#line 1978 "stm_expand.m"
              transform_hlds__stm_expand__ResultType_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_17));
#line 1978 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1978 "stm_expand.m"
            }
#line 1977 "stm_expand.m"
          }
#line 1972 "stm_expand.m"
      }
#line 1232 "stm_expand.m"
    {
#line 1232 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ResultType_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[8]), &transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
    }
#line 1233 "stm_expand.m"
    {
#line 1233 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1233 "stm_expand.m"
    {
#line 1233 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[9]), &transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
#line 1234 "stm_expand.m"
    {
#line 1234 "stm_expand.m"
      transform_hlds__stm_expand__V_37_37 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1234 "stm_expand.m"
    {
#line 1234 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[10]), &transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39);
    }
#line 1238 "stm_expand.m"
    {
#line 1238 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
    }
#line 1240 "stm_expand.m"
    {
#line 1240 "stm_expand.m"
      transform_hlds__stm_expand__ProcessGoalList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_11));
#line 1240 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_12));
#line 1240 "stm_expand.m"
    }
#line 1241 "stm_expand.m"
    {
#line 1241 "stm_expand.m"
      transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__ProcessGoalList_22, &transform_hlds__stm_expand__WrapperID_23, &transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
    }
#line 1245 "stm_expand.m"
    {
#line 1245 "stm_expand.m"
      transform_hlds__stm_expand__update_new_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43);
    }
#line 1247 "stm_expand.m"
    {
#line 1247 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__WrapperID_23, transform_hlds__stm_expand__RecCallGoal_10, &transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1249 "stm_expand.m"
    {
#line 1249 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45);
    }
#line 1250 "stm_expand.m"
    {
#line 1250 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
    }
#line 1251 "stm_expand.m"
    {
#line 1251 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);
#line 1251 "stm_expand.m"
      return;
    }
#line 1227 "stm_expand.m"
  }
#line 1222 "stm_expand.m"
}

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 578 "stm_expand.m"
{
#line 578 "stm_expand.m"
  {
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 578 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 578 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 578 "stm_expand.m"
  }
#line 578 "stm_expand.m"
}

#line 1204 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
#line 1204 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
#line 1204 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
#line 1204 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22)
#line 1204 "stm_expand.m"
{
#line 1208 "stm_expand.m"
  {
#line 1208 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_55 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_71;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_12;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_13;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_14;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_15;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_16;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_17;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_18;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_19;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_20;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_39;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_41;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputSet_61;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputSet_62;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredId_76;
#line 1208 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__OrigProcId_77;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigProcInfo_78;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OrigPredInfo_79;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmExpanded_80;
#line 1208 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ExpandNum_81;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_82;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredId_83;
#line 1208 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__NewProcId_84;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_85;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewProcInfo_86;
#line 1208 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredModuleInfo_89;
#line 582 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_41;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 2484 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_75;
#line 2487 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 2487 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_88_88;

#line 580 "stm_expand.m"
    {
#line 580 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[8], transform_hlds__stm_expand__AtomicGoalVarList_7, &transform_hlds__stm_expand__InputVarList_39);
    }
#line 581 "stm_expand.m"
    {
#line 581 "stm_expand.m"
      transform_hlds__stm_expand__InputSet_61 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_39);
    }
#line 582 "stm_expand.m"
    {
#line 582 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_41 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, transform_hlds__stm_expand__AtomicGoalVarList_7);
    }
#line 582 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_41 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_41);
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 0)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 1)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__OutputSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 2)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 3)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 4)));
#line 583 "stm_expand.m"
    {
#line 583 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 0) = ((MR_Box) (transform_hlds__stm_expand__InputSet_61));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputSet_62));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 3) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 4) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 583 "stm_expand.m"
    }
#line 14579 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_17_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2563 "stm_expand.m"
    {
#line 2563 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__InputSet_61);
    }
#line 2564 "stm_expand.m"
    {
#line 2564 "stm_expand.m"
      transform_hlds__stm_expand__OutputVars_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__OutputSet_62);
    }
#line 1211 "stm_expand.m"
    {
#line 1211 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__InputTypes_15, &transform_hlds__stm_expand__OutputTypes_16);
    }
#line 1212 "stm_expand.m"
    {
#line 1212 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, &transform_hlds__stm_expand__InputModes_17, &transform_hlds__stm_expand__OutputModes_18);
    }
#line 1214 "stm_expand.m"
    {
#line 1214 "stm_expand.m"
      transform_hlds__stm_expand__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], transform_hlds__stm_expand__InputVars_13, transform_hlds__stm_expand__OutputVars_14);
    }
#line 1214 "stm_expand.m"
    {
#line 1214 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_15, transform_hlds__stm_expand__OutputTypes_16);
    }
#line 1215 "stm_expand.m"
    {
#line 1215 "stm_expand.m"
      transform_hlds__stm_expand__V_25_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_17, transform_hlds__stm_expand__OutputModes_18);
    }
#line 1214 "stm_expand.m"
    {
#line 1214 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__V_25_25, (MR_String) "rollback", transform_hlds__stm_expand__AtomicGoal_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_19, transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28);
    }
#line 1218 "stm_expand.m"
    {
#line 1218 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_7, *transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__AtomicGoal_9, transform_hlds__stm_expand__OrElseGoals_10, transform_hlds__stm_expand__NewPredInfo0_19, &transform_hlds__stm_expand__NewPredInfo_20, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29);
    }
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand___StmModuleInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 0)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__OrigPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 1)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__OrigProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 2)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__OrigProcInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 3)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__OrigPredInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 4)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__StmExpanded_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 5)));
#line 2484 "stm_expand.m"
    transform_hlds__stm_expand__ExpandNum_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 6)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__PredModuleInfo0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 0)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__NewPredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 1)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__NewProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 2)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__NewPredInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 3)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__NewProcInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 4)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 5)));
#line 2487 "stm_expand.m"
    transform_hlds__stm_expand__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 6)));
#line 2489 "stm_expand.m"
    {
#line 2489 "stm_expand.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_83, transform_hlds__stm_expand__NewProcId_84, transform_hlds__stm_expand__NewPredInfo_85, transform_hlds__stm_expand__NewProcInfo_86, transform_hlds__stm_expand__PredModuleInfo0_82, &transform_hlds__stm_expand__PredModuleInfo_89);
    }
#line 2491 "stm_expand.m"
    {
#line 2491 "stm_expand.m"
      MR_Word base;
#line 2491 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2491 "stm_expand.m"
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22 = base;
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_89));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_76));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_77));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_78));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_79));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_80));
#line 2491 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_81));
#line 2491 "stm_expand.m"
    }
#line 1208 "stm_expand.m"
  }
#line 1204 "stm_expand.m"
}

#line 1135 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_12,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__WrapperID_15,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_16,
#line 1135 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_17,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmInfo_18,
#line 1135 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
#line 1135 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41)
#line 1135 "stm_expand.m"
{
#line 1141 "stm_expand.m"
  {
#line 1141 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_20;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_22;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_24;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_26;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ClosureAssign_27;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RttiTypeVar_28;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RttiTypeVarAssign_29;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Exception_Result_Type_30;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRes_Success_Functor_31;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptRes_Failure_Functor_32;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_StmCreate_34;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_TryStm_35;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Branch_AtomicSuccess_36;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Branch_AtomicException_37;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_38;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal0_39;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_68_68;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_70_70;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_75_75;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_87_87;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_90_90;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_91_91;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_92_92;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_93_93;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_95_95;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_96_96;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_97_97;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_100_100;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_101_101;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_105_105;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_106_106;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_110_110;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_111_111;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_115_115;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_116_116;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_123_123;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_127_127;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_129_129;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_130_130;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_133_133;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_134_134;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_135_135;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_136_136;
#line 1141 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_137_137;
#line 1142 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 1143 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 1144 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;

#line 1142 "stm_expand.m"
    {
#line 1142 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
#line 1143 "stm_expand.m"
    {
#line 1143 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__StmInfo_18, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
#line 1144 "stm_expand.m"
    {
#line 1144 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "stm_expand.m"
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 1147 "stm_expand.m"
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_12));
#line 1147 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 1147 "stm_expand.m"
    }
#line 1147 "stm_expand.m"
    {
#line 1147 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "stm_expand.m"
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 1148 "stm_expand.m"
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 1148 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1148 "stm_expand.m"
    }
#line 1148 "stm_expand.m"
    {
#line 1148 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
#line 1146 "stm_expand.m"
    {
#line 1146 "stm_expand.m"
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_15, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__AtomicClosureVar_26, &transform_hlds__stm_expand__ClosureAssign_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1151 "stm_expand.m"
    {
#line 1151 "stm_expand.m"
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_12, &transform_hlds__stm_expand__RttiTypeVar_28, &transform_hlds__stm_expand__RttiTypeVarAssign_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
#line 1156 "stm_expand.m"
    {
#line 1156 "stm_expand.m"
      transform_hlds__stm_expand__Exception_Result_Type_30 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_12);
    }
#line 1157 "stm_expand.m"
    {
#line 1157 "stm_expand.m"
      transform_hlds__stm_expand__ExceptRes_Success_Functor_31 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 1158 "stm_expand.m"
    {
#line 1158 "stm_expand.m"
      transform_hlds__stm_expand__ExceptRes_Failure_Functor_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1160 "stm_expand.m"
    {
#line 1160 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Exception_Result_Type_30, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[6]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60);
    }
#line 1163 "stm_expand.m"
    {
#line 1163 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1165 "stm_expand.m"
    {
#line 1165 "stm_expand.m"
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1165 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1165 "stm_expand.m"
    }
#line 1166 "stm_expand.m"
    transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
#line 1166 "stm_expand.m"
    {
#line 1166 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1166 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1166 "stm_expand.m"
    }
#line 1166 "stm_expand.m"
    {
#line 1166 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 1166 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "stm_expand.m"
    }
#line 1166 "stm_expand.m"
    {
#line 1166 "stm_expand.m"
      transform_hlds__stm_expand__V_70_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_73_73);
    }
#line 1163 "stm_expand.m"
    {
#line 1163 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_62_62, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_68_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_70_70, &transform_hlds__stm_expand__Goal_StmCreate_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71);
    }
#line 1172 "stm_expand.m"
    {
#line 1172 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
#line 1174 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1174 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 1) = ((MR_Box) (transform_hlds__stm_expand__V_91_91));
#line 1174 "stm_expand.m"
    }
#line 1174 "stm_expand.m"
    {
#line 1174 "stm_expand.m"
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
#line 1174 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (transform_hlds__stm_expand__V_90_90));
#line 1174 "stm_expand.m"
    }
#line 1177 "stm_expand.m"
    transform_hlds__stm_expand__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 1177 "stm_expand.m"
    {
#line 1177 "stm_expand.m"
      transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1177 "stm_expand.m"
    }
#line 1178 "stm_expand.m"
    {
#line 1178 "stm_expand.m"
      transform_hlds__stm_expand__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
#line 1178 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1178 "stm_expand.m"
    }
#line 1179 "stm_expand.m"
    {
#line 1179 "stm_expand.m"
      transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1179 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
#line 1179 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
#line 1179 "stm_expand.m"
    }
#line 1180 "stm_expand.m"
    {
#line 1180 "stm_expand.m"
      transform_hlds__stm_expand__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
#line 1180 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1180 "stm_expand.m"
    }
#line 1181 "stm_expand.m"
    {
#line 1181 "stm_expand.m"
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
#line 1181 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
#line 1181 "stm_expand.m"
    }
#line 1181 "stm_expand.m"
    {
#line 1181 "stm_expand.m"
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
#line 1181 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1181 "stm_expand.m"
    }
#line 1180 "stm_expand.m"
    {
#line 1180 "stm_expand.m"
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
#line 1180 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
#line 1180 "stm_expand.m"
    }
#line 1179 "stm_expand.m"
    {
#line 1179 "stm_expand.m"
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 1179 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
#line 1179 "stm_expand.m"
    }
#line 1178 "stm_expand.m"
    {
#line 1178 "stm_expand.m"
      transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_101_101));
#line 1178 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
#line 1178 "stm_expand.m"
    }
#line 1177 "stm_expand.m"
    {
#line 1177 "stm_expand.m"
      transform_hlds__stm_expand__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 0) = ((MR_Box) (transform_hlds__stm_expand__V_96_96));
#line 1177 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 1) = ((MR_Box) (transform_hlds__stm_expand__V_100_100));
#line 1177 "stm_expand.m"
    }
#line 1176 "stm_expand.m"
    {
#line 1176 "stm_expand.m"
      transform_hlds__stm_expand__V_87_87 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_95_95);
    }
#line 1172 "stm_expand.m"
    {
#line 1172 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_79_79, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_87_87, &transform_hlds__stm_expand__Goal_TryStm_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88);
    }
#line 1185 "stm_expand.m"
    {
#line 1185 "stm_expand.m"
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__Branch_AtomicSuccess_36, transform_hlds__stm_expand__StmInfo_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121);
    }
#line 1187 "stm_expand.m"
    {
#line 1187 "stm_expand.m"
      transform_hlds__stm_expand__create_test_on_exception_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__StmVarUO_14, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__RecCall_16, &transform_hlds__stm_expand__Branch_AtomicException_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
#line 1191 "stm_expand.m"
    {
#line 1191 "stm_expand.m"
      transform_hlds__stm_expand__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Failure_Functor_32));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicException_37));
#line 1191 "stm_expand.m"
    }
#line 1192 "stm_expand.m"
    {
#line 1192 "stm_expand.m"
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Success_Functor_31));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicSuccess_36));
#line 1192 "stm_expand.m"
    }
#line 1192 "stm_expand.m"
    {
#line 1192 "stm_expand.m"
      transform_hlds__stm_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 0) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
#line 1192 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "stm_expand.m"
    }
#line 1191 "stm_expand.m"
    {
#line 1191 "stm_expand.m"
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
#line 1191 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
#line 1191 "stm_expand.m"
    }
#line 1190 "stm_expand.m"
    {
#line 1190 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_123_123, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);
    }
#line 1195 "stm_expand.m"
    {
#line 1195 "stm_expand.m"
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCreate_34));
#line 1195 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVarAssign_29));
#line 1195 "stm_expand.m"
    }
#line 1196 "stm_expand.m"
    {
#line 1196 "stm_expand.m"
      transform_hlds__stm_expand__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_38));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "stm_expand.m"
    }
#line 1196 "stm_expand.m"
    {
#line 1196 "stm_expand.m"
      transform_hlds__stm_expand__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_TryStm_35));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 1) = ((MR_Box) (transform_hlds__stm_expand__V_137_137));
#line 1196 "stm_expand.m"
    }
#line 1196 "stm_expand.m"
    {
#line 1196 "stm_expand.m"
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_27));
#line 1196 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (transform_hlds__stm_expand__V_136_136));
#line 1196 "stm_expand.m"
    }
#line 1195 "stm_expand.m"
    {
#line 1195 "stm_expand.m"
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_135_135);
    }
#line 1195 "stm_expand.m"
    {
#line 1195 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal0_39);
    }
#line 1197 "stm_expand.m"
    {
#line 1197 "stm_expand.m"
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__Goal0_39, (MR_Integer) 0, transform_hlds__stm_expand__Goal_17);
#line 1197 "stm_expand.m"
      return;
    }
#line 1141 "stm_expand.m"
  }
#line 1135 "stm_expand.m"
}

#line 1097 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_9,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_11,
#line 1097 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1097 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
#line 1097 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25)
#line 1097 "stm_expand.m"
{
#line 1102 "stm_expand.m"
  {
#line 1102 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_67_67;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_14;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DeconstructException_15;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackVar_16;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackAssign_17;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateGoal_18;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TrueGoal_19;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RethrowBranch_20;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RetryBranch_21;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__FalseGoal_22;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IfThenElseGoal_23;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_26_26;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_62_62;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_73;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_74;
#line 1102 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_75;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_76;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_77;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_78;
#line 1102 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_79;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_80;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_81;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_82;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_83;
#line 1102 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_84;

#line 1103 "stm_expand.m"
    {
#line 1103 "stm_expand.m"
      transform_hlds__stm_expand__V_26_26 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
#line 1103 "stm_expand.m"
    {
#line 1103 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28);
    }
#line 1105 "stm_expand.m"
    {
#line 1105 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 1106 "stm_expand.m"
    {
#line 1106 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_14));
#line 1106 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "stm_expand.m"
    }
#line 1105 "stm_expand.m"
    {
#line 1105 "stm_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__DeconstructException_15);
    }
#line 1107 "stm_expand.m"
    {
#line 1107 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 0)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 1)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 2)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 3)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 4)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 5)));
#line 2353 "stm_expand.m"
    transform_hlds__stm_expand__VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 6)));
#line 2355 "stm_expand.m"
    {
#line 2355 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_73, transform_hlds__stm_expand__PredInfo0_76, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__PolyInfo0_80);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__Context_78, &transform_hlds__stm_expand__TypeInfoRollbackVar_16, &transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__PolyInfo0_80, &transform_hlds__stm_expand__PolyInfo_81);
    }
#line 2358 "stm_expand.m"
    {
#line 2358 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_81, transform_hlds__stm_expand__PredInfo0_76, &transform_hlds__stm_expand__PredInfo_82, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__ProcInfo_83, &transform_hlds__stm_expand__ModuleInfo_84);
    }
#line 2360 "stm_expand.m"
    {
#line 2360 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_84));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_74));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_75));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_82));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_83));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_78));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_79));
#line 2360 "stm_expand.m"
    }
#line 1109 "stm_expand.m"
    {
#line 1109 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1111 "stm_expand.m"
    {
#line 1111 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
#line 1111 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "stm_expand.m"
    }
#line 1112 "stm_expand.m"
    {
#line 1112 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
#line 1112 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1112 "stm_expand.m"
    }
#line 1112 "stm_expand.m"
    {
#line 1112 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 1112 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "stm_expand.m"
    }
#line 1112 "stm_expand.m"
    {
#line 1112 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_46_46);
    }
#line 1109 "stm_expand.m"
    {
#line 1109 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__DropStateGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 1115 "stm_expand.m"
    {
#line 1115 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_11));
#line 1115 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "stm_expand.m"
    }
#line 1115 "stm_expand.m"
    {
#line 1115 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateGoal_18));
#line 1115 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 1115 "stm_expand.m"
    }
#line 1115 "stm_expand.m"
    {
#line 1115 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_52_52, &transform_hlds__stm_expand__TrueGoal_19);
    }
#line 1116 "stm_expand.m"
    {
#line 1116 "stm_expand.m"
      transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RethrowBranch_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55);
    }
#line 1119 "stm_expand.m"
    {
#line 1119 "stm_expand.m"
      transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
#line 1122 "stm_expand.m"
    {
#line 1122 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
#line 1121 "stm_expand.m"
    {
#line 1121 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__RethrowBranch_20, &transform_hlds__stm_expand__FalseGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
#line 1125 "stm_expand.m"
    {
#line 1125 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
#line 1124 "stm_expand.m"
    {
#line 1124 "stm_expand.m"
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__TrueGoal_19, transform_hlds__stm_expand__FalseGoal_22, &transform_hlds__stm_expand__IfThenElseGoal_23, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);
    }
#line 15639 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1127 "stm_expand.m"
    {
#line 1127 "stm_expand.m"
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_15));
#line 1127 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "stm_expand.m"
    }
#line 1128 "stm_expand.m"
    {
#line 1128 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__IfThenElseGoal_23));
#line 1128 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "stm_expand.m"
    }
#line 1127 "stm_expand.m"
    {
#line 1127 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__V_65_65);
    }
#line 1127 "stm_expand.m"
    {
#line 1127 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__V_62_62, transform_hlds__stm_expand__V_64_64);
    }
#line 1127 "stm_expand.m"
    {
#line 1127 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__Goal_12);
#line 1127 "stm_expand.m"
      return;
    }
#line 1102 "stm_expand.m"
  }
#line 1097 "stm_expand.m"
}

#line 1072 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_6,
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecCall_7,
#line 1072 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 1072 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
#line 1072 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
#line 1072 "stm_expand.m"
{
#line 1075 "stm_expand.m"
  {
#line 1075 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__BlockGoal_10;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnlockGoal_11;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockAndValidateGoals_12;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateCall_13;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_16_16;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_74;
#line 1075 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_75;
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_77_77;
#line 2248 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_78_78;
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 2248 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 2248 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_81_81;

#line 1076 "stm_expand.m"
    {
#line 1076 "stm_expand.m"
      transform_hlds__stm_expand__V_16_16 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1077 "stm_expand.m"
    {
#line 1077 "stm_expand.m"
      transform_hlds__stm_expand__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
#line 1077 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "stm_expand.m"
    }
#line 1078 "stm_expand.m"
    {
#line 1078 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__stm_expand__StmVar_6);
    }
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__ModuleInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 0)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 1)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 2)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 3)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 4)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 5)));
#line 2248 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 6)));
#line 2250 "stm_expand.m"
    {
#line 2250 "stm_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__V_16_16, (MR_String) "stm_block", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__ModuleInfo_75, transform_hlds__stm_expand__Context_74, &transform_hlds__stm_expand__BlockGoal_10);
    }
#line 1079 "stm_expand.m"
    {
#line 1079 "stm_expand.m"
      transform_hlds__stm_expand__V_27_27 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1081 "stm_expand.m"
    {
#line 1081 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1079 "stm_expand.m"
    {
#line 1079 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_27_27, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__UnlockGoal_11, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36);
    }
#line 1082 "stm_expand.m"
    {
#line 1082 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_6, (MR_Integer) 0, transform_hlds__stm_expand__BlockGoal_10, transform_hlds__stm_expand__UnlockGoal_11, &transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
#line 1084 "stm_expand.m"
    {
#line 1084 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1087 "stm_expand.m"
    {
#line 1087 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
#line 1087 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1087 "stm_expand.m"
    }
#line 1087 "stm_expand.m"
    {
#line 1087 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 1087 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "stm_expand.m"
    }
#line 1087 "stm_expand.m"
    {
#line 1087 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_50_50);
    }
#line 1084 "stm_expand.m"
    {
#line 1084 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_39_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_47_47, &transform_hlds__stm_expand__DropStateCall_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
#line 1089 "stm_expand.m"
    {
#line 1089 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_7));
#line 1089 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "stm_expand.m"
    }
#line 1089 "stm_expand.m"
    {
#line 1089 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_13));
#line 1089 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__V_58_58));
#line 1089 "stm_expand.m"
    }
#line 1089 "stm_expand.m"
    {
#line 1089 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__V_57_57);
    }
#line 1089 "stm_expand.m"
    {
#line 1089 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_56_56, transform_hlds__stm_expand__Goal_8);
#line 1089 "stm_expand.m"
      return;
    }
#line 1075 "stm_expand.m"
  }
#line 1072 "stm_expand.m"
}

#line 1044 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ReturnType_10,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
#line 1044 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_12,
#line 1044 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
#line 1044 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22)
#line 1044 "stm_expand.m"
{
#line 1049 "stm_expand.m"
  {
#line 1049 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfoVar_14;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_15;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_17;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DropStateCall_18;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_19;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goals_20;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_24_24;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_30_30;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_32_32;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_42_42;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 0)));
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 1)));
#line 1049 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 2)));
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 3)));
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 4)));
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Context_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 5)));
#line 1049 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__VarCnt_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 6)));
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo0_77;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PolyInfo_78;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_79;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_80;
#line 1049 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ModuleInfo_81;

#line 2355 "stm_expand.m"
    {
#line 2355 "stm_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_70, transform_hlds__stm_expand__PredInfo0_73, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__PolyInfo0_77);
    }
#line 2356 "stm_expand.m"
    {
#line 2356 "stm_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__Context_75, &transform_hlds__stm_expand__TypeInfoVar_14, &transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__PolyInfo0_77, &transform_hlds__stm_expand__PolyInfo_78);
    }
#line 2358 "stm_expand.m"
    {
#line 2358 "stm_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__stm_expand__PolyInfo_78, transform_hlds__stm_expand__PredInfo0_73, &transform_hlds__stm_expand__PredInfo_79, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__ProcInfo_80, &transform_hlds__stm_expand__ModuleInfo_81);
    }
#line 2360 "stm_expand.m"
    {
#line 2360 "stm_expand.m"
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_81));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_71));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_72));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_79));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_80));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_75));
#line 2360 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_76));
#line 2360 "stm_expand.m"
    }
#line 1051 "stm_expand.m"
    {
#line 1051 "stm_expand.m"
      transform_hlds__stm_expand__V_24_24 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1052 "stm_expand.m"
    {
#line 1052 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionVar_9));
#line 1052 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "stm_expand.m"
    }
#line 1052 "stm_expand.m"
    {
#line 1052 "stm_expand.m"
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_14));
#line 1052 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
#line 1052 "stm_expand.m"
    }
#line 1053 "stm_expand.m"
    {
#line 1053 "stm_expand.m"
      transform_hlds__stm_expand__V_32_32 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_30_30);
    }
#line 1051 "stm_expand.m"
    {
#line 1051 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_24_24, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_32_32, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
#line 1055 "stm_expand.m"
    {
#line 1055 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16));
#line 1055 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "stm_expand.m"
    }
#line 1055 "stm_expand.m"
    {
#line 1055 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__V_40_40);
    }
#line 1055 "stm_expand.m"
    {
#line 1055 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_39_39, &transform_hlds__stm_expand__Goal_ValidBranch_17);
    }
#line 1057 "stm_expand.m"
    {
#line 1057 "stm_expand.m"
      transform_hlds__stm_expand__V_42_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1059 "stm_expand.m"
    {
#line 1059 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 1059 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "stm_expand.m"
    }
#line 1060 "stm_expand.m"
    {
#line 1060 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 1060 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[7])));
#line 1060 "stm_expand.m"
    }
#line 1060 "stm_expand.m"
    {
#line 1060 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 1060 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "stm_expand.m"
    }
#line 1060 "stm_expand.m"
    {
#line 1060 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_53_53);
    }
#line 1057 "stm_expand.m"
    {
#line 1057 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_42_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_48_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_50_50, &transform_hlds__stm_expand__DropStateCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51);
    }
#line 1062 "stm_expand.m"
    {
#line 1062 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__RecursiveCall_11));
#line 1062 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "stm_expand.m"
    }
#line 1062 "stm_expand.m"
    {
#line 1062 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_18));
#line 1062 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 1062 "stm_expand.m"
    }
#line 1062 "stm_expand.m"
    {
#line 1062 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_59_59, &transform_hlds__stm_expand__Goal_InvalidBranch_19);
    }
#line 1063 "stm_expand.m"
    {
#line 1063 "stm_expand.m"
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_8, (MR_Integer) 1, transform_hlds__stm_expand__Goal_ValidBranch_17, transform_hlds__stm_expand__Goal_InvalidBranch_19, &transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);
    }
#line 1065 "stm_expand.m"
    {
#line 1065 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__Goal_12);
#line 1065 "stm_expand.m"
      return;
    }
#line 1049 "stm_expand.m"
  }
#line 1044 "stm_expand.m"
}

#line 993 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 993 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 993 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
#line 993 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
#line 993 "stm_expand.m"
{
#line 993 "stm_expand.m"
  {
#line 993 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 993 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv5_HeadVar__3_80;
#line 993 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv4_HeadVar__5_82;

#line 993 "stm_expand.m"
    {
#line 993 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__993__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv5_HeadVar__3_80, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv4_HeadVar__5_82);
    }
#line 993 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv5_HeadVar__3_80));
#line 993 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv4_HeadVar__5_82));
#line 993 "stm_expand.m"
  }
#line 993 "stm_expand.m"
}

#line 979 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
#line 979 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
#line 979 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5)
#line 979 "stm_expand.m"
{
#line 979 "stm_expand.m"
  {
#line 979 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv2_HeadVar__2_51;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__3_52;
#line 979 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__5_54;

#line 979 "stm_expand.m"
    {
#line 979 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__979__1_5_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv2_HeadVar__2_51, &transform_hlds__stm_expand__conv1_HeadVar__3_52, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv0_HeadVar__5_54);
    }
#line 979 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv2_HeadVar__2_51));
#line 979 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__3_52));
#line 979 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__5_54));
#line 979 "stm_expand.m"
  }
#line 979 "stm_expand.m"
}

#line 963 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVars_8,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 963 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 963 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
#line 963 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
#line 963 "stm_expand.m"
{
#line 968 "stm_expand.m"
  {
#line 968 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_119_119;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_120_120;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_121_121;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignValidConst_14;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidConstVar_15;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockCall_16;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidCalls_24;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVars_25;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CreateValidTests_26;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestValidGoals_29;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestValidCond_30;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ITEGoal_31;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_36_36;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86;
#line 968 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
#line 990 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78;
#line 999 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86;

#line 969 "stm_expand.m"
    {
#line 969 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 970 "stm_expand.m"
    {
#line 970 "stm_expand.m"
      transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 969 "stm_expand.m"
    {
#line 969 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[4]), &transform_hlds__stm_expand__AssignValidConst_14, &transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
#line 973 "stm_expand.m"
    {
#line 973 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 975 "stm_expand.m"
    {
#line 975 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 973 "stm_expand.m"
    {
#line 973 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_40_40, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_48_48, &transform_hlds__stm_expand__LockCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
#line 16337 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_119_119 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 16339 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 16341 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
#line 990 "stm_expand.m"
    {
#line 990 "stm_expand.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_121_121, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[6], transform_hlds__stm_expand__StmVars_8, &transform_hlds__stm_expand__ValidCalls_24, &transform_hlds__stm_expand__IsValidVars_25, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49)), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
    }
#line 990 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78 = ((MR_Word) transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
#line 993 "stm_expand.m"
    {
#line 993 "stm_expand.m"
      transform_hlds__stm_expand__CreateValidTests_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 993 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[1]));
#line 993 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2));
#line 993 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 993 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 3) = ((MR_Box) (transform_hlds__stm_expand__IsValidConstVar_15));
#line 993 "stm_expand.m"
    }
#line 999 "stm_expand.m"
    {
#line 999 "stm_expand.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeCtorInfo_121_121, transform_hlds__stm_expand__CreateValidTests_26, transform_hlds__stm_expand__IsValidVars_25, &transform_hlds__stm_expand__TestValidGoals_29, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78)), &transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
    }
#line 999 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86 = ((MR_Word) transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
#line 1001 "stm_expand.m"
    {
#line 1001 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TestValidGoals_29, &transform_hlds__stm_expand__TestValidCond_30);
    }
#line 1003 "stm_expand.m"
    {
#line 1003 "stm_expand.m"
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__TestValidCond_30, transform_hlds__stm_expand__ValidGoal_10, transform_hlds__stm_expand__InvalidGoal_11, (MR_Integer) 4, (MR_Integer) 2, &transform_hlds__stm_expand__ITEGoal_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90);
    }
#line 1013 "stm_expand.m"
    if ((transform_hlds__stm_expand__UnlockAfterwards_9 == (MR_Integer) 0))
#line 1014 "stm_expand.m"
      {
#line 1014 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_91_91;
#line 1014 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_92_92;
#line 1014 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_93_93;

#line 1015 "stm_expand.m"
        {
#line 1015 "stm_expand.m"
          transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
#line 1015 "stm_expand.m"
        }
#line 1015 "stm_expand.m"
        {
#line 1015 "stm_expand.m"
          transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
#line 1015 "stm_expand.m"
        }
#line 1015 "stm_expand.m"
        {
#line 1015 "stm_expand.m"
          transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
#line 1015 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "stm_expand.m"
        }
#line 1015 "stm_expand.m"
        {
#line 1015 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_91_91, transform_hlds__stm_expand__V_93_93);
        }
#line 1015 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
#line 1014 "stm_expand.m"
      }
#line 1013 "stm_expand.m"
    else
#line 1007 "stm_expand.m"
      {
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__UnlockCall_32;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_95_95;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_103_103;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_105_105;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_106_106;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_107_107;
#line 1007 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_108_108;

#line 1008 "stm_expand.m"
        {
#line 1008 "stm_expand.m"
          transform_hlds__stm_expand__V_95_95 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
        }
#line 1010 "stm_expand.m"
        {
#line 1010 "stm_expand.m"
          transform_hlds__stm_expand__V_103_103 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 1008 "stm_expand.m"
        {
#line 1008 "stm_expand.m"
          transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_95_95, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_103_103, &transform_hlds__stm_expand__UnlockCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
#line 1011 "stm_expand.m"
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
#line 1011 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
#line 1011 "stm_expand.m"
        }
#line 1012 "stm_expand.m"
        {
#line 1012 "stm_expand.m"
          transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
#line 1012 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "stm_expand.m"
        }
#line 1012 "stm_expand.m"
        {
#line 1012 "stm_expand.m"
          transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_32));
#line 1012 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
#line 1012 "stm_expand.m"
        }
#line 1011 "stm_expand.m"
        {
#line 1011 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_105_105, transform_hlds__stm_expand__V_107_107);
        }
#line 1007 "stm_expand.m"
      }
#line 968 "stm_expand.m"
  }
#line 963 "stm_expand.m"
}

#line 928 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__StmVar_8,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
#line 928 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goals_12,
#line 928 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
#line 928 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
#line 928 "stm_expand.m"
{
#line 933 "stm_expand.m"
  {
#line 933 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__IsValidVar_14;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__LockCall_15;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ValidCall_16;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__DisjGoal_17;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_25_25;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_48_48;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_61_61;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_64_64;
#line 933 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_65_65;

#line 934 "stm_expand.m"
    {
#line 934 "stm_expand.m"
      transform_hlds__stm_expand__V_21_21 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
#line 934 "stm_expand.m"
    {
#line 934 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_21_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), &transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23);
    }
#line 936 "stm_expand.m"
    {
#line 936 "stm_expand.m"
      transform_hlds__stm_expand__V_25_25 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 938 "stm_expand.m"
    {
#line 938 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 936 "stm_expand.m"
    {
#line 936 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_25_25, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_33_33, &transform_hlds__stm_expand__LockCall_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
#line 939 "stm_expand.m"
    {
#line 939 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 941 "stm_expand.m"
    {
#line 941 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
#line 941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "stm_expand.m"
    }
#line 941 "stm_expand.m"
    {
#line 941 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 941 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 941 "stm_expand.m"
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
#line 942 "stm_expand.m"
    }
#line 943 "stm_expand.m"
    {
#line 943 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "stm_expand.m"
    }
#line 943 "stm_expand.m"
    {
#line 943 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 943 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "stm_expand.m"
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
#line 942 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 942 "stm_expand.m"
    }
#line 942 "stm_expand.m"
    {
#line 942 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_47_47);
    }
#line 939 "stm_expand.m"
    {
#line 939 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__ValidCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 946 "stm_expand.m"
    {
#line 946 "stm_expand.m"
      transform_hlds__stm_expand__V_61_61 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
#line 946 "stm_expand.m"
    {
#line 946 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 946 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
#line 946 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 2) = ((MR_Box) (transform_hlds__stm_expand__ValidGoal_10));
#line 946 "stm_expand.m"
    }
#line 947 "stm_expand.m"
    {
#line 947 "stm_expand.m"
      transform_hlds__stm_expand__V_65_65 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
#line 947 "stm_expand.m"
    {
#line 947 "stm_expand.m"
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 947 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
#line 947 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 2) = ((MR_Box) (transform_hlds__stm_expand__InvalidGoal_11));
#line 947 "stm_expand.m"
    }
#line 947 "stm_expand.m"
    {
#line 947 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
#line 947 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "stm_expand.m"
    }
#line 946 "stm_expand.m"
    {
#line 946 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 946 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
#line 946 "stm_expand.m"
    }
#line 945 "stm_expand.m"
    {
#line 945 "stm_expand.m"
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__V_56_56, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59);
    }
#line 955 "stm_expand.m"
    if ((transform_hlds__stm_expand__UnlockAfterwards_9 == (MR_Integer) 0))
#line 956 "stm_expand.m"
      {
#line 956 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_68_68;
#line 956 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_69_69;

#line 957 "stm_expand.m"
        {
#line 957 "stm_expand.m"
          transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "stm_expand.m"
        }
#line 957 "stm_expand.m"
        {
#line 957 "stm_expand.m"
          transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
#line 957 "stm_expand.m"
        }
#line 957 "stm_expand.m"
        {
#line 957 "stm_expand.m"
          MR_Word base;
#line 957 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
#line 957 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
#line 957 "stm_expand.m"
        }
#line 957 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
#line 956 "stm_expand.m"
      }
#line 955 "stm_expand.m"
    else
#line 950 "stm_expand.m"
      {
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__UnlockCall_18;
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_71_71;
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_79_79;
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_81_81;
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_82_82;
#line 950 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_83_83;

#line 951 "stm_expand.m"
        {
#line 951 "stm_expand.m"
          transform_hlds__stm_expand__V_71_71 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
        }
#line 953 "stm_expand.m"
        {
#line 953 "stm_expand.m"
          transform_hlds__stm_expand__V_79_79 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 951 "stm_expand.m"
        {
#line 951 "stm_expand.m"
          transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_71_71, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__UnlockCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);
        }
#line 954 "stm_expand.m"
        {
#line 954 "stm_expand.m"
          transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "stm_expand.m"
        }
#line 954 "stm_expand.m"
        {
#line 954 "stm_expand.m"
          transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_18));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
#line 954 "stm_expand.m"
        }
#line 954 "stm_expand.m"
        {
#line 954 "stm_expand.m"
          transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 954 "stm_expand.m"
        }
#line 954 "stm_expand.m"
        {
#line 954 "stm_expand.m"
          MR_Word base;
#line 954 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "stm_expand.m"
          *transform_hlds__stm_expand__Goals_12 = base;
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
#line 954 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
#line 954 "stm_expand.m"
        }
#line 950 "stm_expand.m"
      }
#line 933 "stm_expand.m"
  }
#line 928 "stm_expand.m"
}

#line 879 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RttiVar_9,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
#line 879 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 879 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
#line 879 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
#line 879 "stm_expand.m"
{
#line 884 "stm_expand.m"
  {
#line 884 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnivPayloadVar_16;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AssignGoal_17;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RollbackExceptVar_18;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__UnivCall_19;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TestGoal_21;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondGoal_22;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_27_27;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_31_31;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_54_54;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_60_60;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_63_63;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_69_69;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_71_71;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_73_73;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_74_74;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_76_76;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_78_78;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_79_79;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_80_80;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;
#line 884 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_82_82;
#line 896 "stm_expand.m"
    MR_Word transform_hlds__stm_expand___UnifyCall_20;

#line 885 "stm_expand.m"
    {
#line 885 "stm_expand.m"
      transform_hlds__stm_expand__V_27_27 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 885 "stm_expand.m"
    {
#line 885 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_27_27, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[0]), &transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29);
    }
#line 888 "stm_expand.m"
    {
#line 888 "stm_expand.m"
      transform_hlds__stm_expand__V_31_31 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
#line 887 "stm_expand.m"
    {
#line 887 "stm_expand.m"
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackExceptCons_11, transform_hlds__stm_expand__V_31_31, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[1]), &transform_hlds__stm_expand__AssignGoal_17, &transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    }
#line 892 "stm_expand.m"
    {
#line 892 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "stm_expand.m"
    }
#line 892 "stm_expand.m"
    {
#line 892 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 892 "stm_expand.m"
    }
#line 892 "stm_expand.m"
    {
#line 892 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 892 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 892 "stm_expand.m"
    }
#line 893 "stm_expand.m"
    transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[4]);
#line 893 "stm_expand.m"
    {
#line 893 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 893 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 893 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 894 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "stm_expand.m"
    }
#line 894 "stm_expand.m"
    {
#line 894 "stm_expand.m"
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 894 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
#line 894 "stm_expand.m"
    }
#line 893 "stm_expand.m"
    {
#line 893 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
#line 893 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
#line 893 "stm_expand.m"
    }
#line 893 "stm_expand.m"
    {
#line 893 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_49_49);
    }
#line 890 "stm_expand.m"
    {
#line 890 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "type_to_univ", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[2]), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__UnivCall_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__V_63_63 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 898 "stm_expand.m"
    {
#line 898 "stm_expand.m"
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "stm_expand.m"
    }
#line 898 "stm_expand.m"
    {
#line 898 "stm_expand.m"
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackExceptVar_18));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
#line 898 "stm_expand.m"
    }
#line 898 "stm_expand.m"
    {
#line 898 "stm_expand.m"
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
#line 898 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
#line 898 "stm_expand.m"
    }
#line 899 "stm_expand.m"
    {
#line 899 "stm_expand.m"
      transform_hlds__stm_expand__V_71_71 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 896 "stm_expand.m"
    {
#line 896 "stm_expand.m"
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_63_63, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_69_69, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand___UnifyCall_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72);
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_78_78 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_79_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
#line 900 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 1) = ((MR_Box) (transform_hlds__stm_expand__V_79_79));
#line 900 "stm_expand.m"
    }
#line 900 "stm_expand.m"
    {
#line 900 "stm_expand.m"
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__V_76_76, &transform_hlds__stm_expand__TestGoal_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77);
    }
#line 904 "stm_expand.m"
    {
#line 904 "stm_expand.m"
      transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__TestGoal_21));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "stm_expand.m"
    }
#line 904 "stm_expand.m"
    {
#line 904 "stm_expand.m"
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivCall_19));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 904 "stm_expand.m"
    }
#line 904 "stm_expand.m"
    {
#line 904 "stm_expand.m"
      transform_hlds__stm_expand__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignGoal_17));
#line 904 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
#line 904 "stm_expand.m"
    }
#line 904 "stm_expand.m"
    {
#line 904 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_80_80, &transform_hlds__stm_expand__CondGoal_22);
    }
#line 909 "stm_expand.m"
    {
#line 909 "stm_expand.m"
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__CondGoal_22, transform_hlds__stm_expand__TrueGoal_12, transform_hlds__stm_expand__FalseGoal_13, (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
#line 909 "stm_expand.m"
      return;
    }
#line 884 "stm_expand.m"
  }
#line 879 "stm_expand.m"
}

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 578 "stm_expand.m"
{
#line 578 "stm_expand.m"
  {
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 578 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 578 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 578 "stm_expand.m"
  }
#line 578 "stm_expand.m"
}

#line 833 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterDI_10,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OuterUO_11,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
#line 833 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_14,
#line 833 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
#line 833 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31)
#line 833 "stm_expand.m"
{
#line 838 "stm_expand.m"
  {
#line 838 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeInfo_62_62;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_63_63;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_64_64;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_86;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__WrapperCall_16;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_18;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputVars_19;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputTypes_20;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputTypes_21;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputModes_22;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__OutputModes_23;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CopyIOAssign_25;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TopLevelGoal_27;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__NewPredInfo_29;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_33_33;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_34_34;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_35_35;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_39_39;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_40_40;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_41_41;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_44_44;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_45_45;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_46_46;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_47_47;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_49_49;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_50_50;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_51_51;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_52_52;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_53_53;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_55_55;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_56_56;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_57_57;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_58_58;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_59_59;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_70;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_71;
#line 838 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_72;
#line 582 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_72;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_82_82;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_83_83;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_84_84;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_85_85;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_81_81;

#line 839 "stm_expand.m"
    {
#line 839 "stm_expand.m"
      transform_hlds__stm_expand__create_rollback_pred_6_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__WrapperCall_16, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__OrElseGoals_13, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32);
    }
#line 17385 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_24_86 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 580 "stm_expand.m"
    {
#line 580 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[3], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_70);
    }
#line 581 "stm_expand.m"
    {
#line 581 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_71 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_70);
    }
#line 582 "stm_expand.m"
    {
#line 582 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_72 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
#line 582 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_72 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_72);
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 0)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 1)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 2)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 3)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 4)));
#line 583 "stm_expand.m"
    {
#line 583 "stm_expand.m"
      transform_hlds__stm_expand__AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_71));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 2) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 3) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 4) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
#line 583 "stm_expand.m"
    }
#line 843 "stm_expand.m"
    {
#line 843 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputVars_18, &transform_hlds__stm_expand__OutputVars_19);
    }
#line 844 "stm_expand.m"
    {
#line 844 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__InputTypes_20, &transform_hlds__stm_expand__OutputTypes_21);
    }
#line 845 "stm_expand.m"
    {
#line 845 "stm_expand.m"
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputModes_22, &transform_hlds__stm_expand__OutputModes_23);
    }
#line 17445 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeInfo_62_62 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
#line 847 "stm_expand.m"
    {
#line 847 "stm_expand.m"
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_11));
#line 847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "stm_expand.m"
    }
#line 847 "stm_expand.m"
    {
#line 847 "stm_expand.m"
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_10));
#line 847 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
#line 847 "stm_expand.m"
    }
#line 847 "stm_expand.m"
    {
#line 847 "stm_expand.m"
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__OutputVars_19, transform_hlds__stm_expand__V_40_40);
    }
#line 847 "stm_expand.m"
    {
#line 847 "stm_expand.m"
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__InputVars_18, transform_hlds__stm_expand__V_39_39);
    }
#line 17477 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "stm_expand.m"
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
#line 848 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
#line 848 "stm_expand.m"
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__OutputTypes_21, transform_hlds__stm_expand__V_44_44);
    }
#line 848 "stm_expand.m"
    {
#line 848 "stm_expand.m"
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__InputTypes_20, transform_hlds__stm_expand__V_43_43);
    }
#line 17519 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
#line 849 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "stm_expand.m"
    }
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
#line 849 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
#line 849 "stm_expand.m"
    }
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__OutputModes_23, transform_hlds__stm_expand__V_50_50);
    }
#line 849 "stm_expand.m"
    {
#line 849 "stm_expand.m"
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__InputModes_22, transform_hlds__stm_expand__V_49_49);
    }
#line 847 "stm_expand.m"
    {
#line 847 "stm_expand.m"
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "toplevel", transform_hlds__stm_expand__AtomicGoal_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
#line 852 "stm_expand.m"
    {
#line 852 "stm_expand.m"
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
#line 852 "stm_expand.m"
    {
#line 852 "stm_expand.m"
      transform_hlds__stm_expand__V_57_57 = parse_tree__prog_mode__di_mode_0_f_0();
    }
#line 852 "stm_expand.m"
    {
#line 852 "stm_expand.m"
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 852 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_57_57));
#line 852 "stm_expand.m"
    }
#line 852 "stm_expand.m"
    {
#line 852 "stm_expand.m"
      transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__OuterUO_11, transform_hlds__stm_expand__OuterDI_10, transform_hlds__stm_expand__V_55_55, &transform_hlds__stm_expand__CopyIOAssign_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
#line 854 "stm_expand.m"
    {
#line 854 "stm_expand.m"
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyIOAssign_25));
#line 854 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "stm_expand.m"
    }
#line 854 "stm_expand.m"
    {
#line 854 "stm_expand.m"
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__WrapperCall_16));
#line 854 "stm_expand.m"
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
#line 854 "stm_expand.m"
    }
#line 854 "stm_expand.m"
    {
#line 854 "stm_expand.m"
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__TopLevelGoal_27);
    }
#line 856 "stm_expand.m"
    {
#line 856 "stm_expand.m"
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__TopLevelGoal_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
#line 857 "stm_expand.m"
    {
#line 857 "stm_expand.m"
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo_29);
    }
#line 858 "stm_expand.m"
    {
#line 858 "stm_expand.m"
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);
#line 858 "stm_expand.m"
      return;
    }
#line 838 "stm_expand.m"
  }
#line 833 "stm_expand.m"
}

#line 694 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
#line 694 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
#line 694 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmInUO_12)
#line 694 "stm_expand.m"
{
#line 725 "stm_expand.m"
  {
#line 725 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 725 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalList0_13;
#line 725 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));
#line 699 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
#line 699 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_29_29;

#line 699 "stm_expand.m"
    transform_hlds__stm_expand__succeeded = ((((MR_tag((MR_Word) transform_hlds__stm_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 699 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 699 "stm_expand.m"
      {
#line 699 "stm_expand.m"
        transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 1)));
#line 699 "stm_expand.m"
        transform_hlds__stm_expand__GoalList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 2)));
#line 699 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_29_29 == (MR_Integer) 0);
#line 699 "stm_expand.m"
      }
#line 725 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 703 "stm_expand.m"
      if ((transform_hlds__stm_expand__GoalList0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "stm_expand.m"
        {
#line 702 "stm_expand.m"
          {
#line 702 "stm_expand.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "empty conjunction");
#line 702 "stm_expand.m"
            return;
          }
#line 701 "stm_expand.m"
        }
#line 703 "stm_expand.m"
      else
#line 704 "stm_expand.m"
        {
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__TypeInfo_41_41;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__GoalList_17;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutVarPair_18;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInVarPair_19;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInDI_20;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeInUO_21;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutDI_22;
#line 704 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__MaybeOutUO_23;
#line 706 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv0_MaybeInDI_20;
#line 707 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv1_MaybeInUO_21;
#line 708 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv2_MaybeOutDI_22;
#line 709 "stm_expand.m"
          MR_Box transform_hlds__stm_expand__conv3_MaybeOutUO_23;
#line 721 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmInDI0_24;
#line 721 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmInUO0_25;
#line 721 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmOutDI0_26;
#line 721 "stm_expand.m"
          MR_Word transform_hlds__stm_expand__StmOutUO0_27;

#line 705 "stm_expand.m"
          {
#line 705 "stm_expand.m"
            transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__GoalList0_13, &transform_hlds__stm_expand__GoalList_17, &transform_hlds__stm_expand__MaybeOutVarPair_18, &transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 17739 "transform_hlds.stm_expand.c"
          transform_hlds__stm_expand__TypeInfo_41_41 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[2];
#line 706 "stm_expand.m"
          {
#line 706 "stm_expand.m"
            transform_hlds__stm_expand__conv0_MaybeInDI_20 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 706 "stm_expand.m"
          transform_hlds__stm_expand__MaybeInDI_20 = ((MR_Word) transform_hlds__stm_expand__conv0_MaybeInDI_20);
#line 707 "stm_expand.m"
          {
#line 707 "stm_expand.m"
            transform_hlds__stm_expand__conv1_MaybeInUO_21 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
#line 707 "stm_expand.m"
          transform_hlds__stm_expand__MaybeInUO_21 = ((MR_Word) transform_hlds__stm_expand__conv1_MaybeInUO_21);
#line 708 "stm_expand.m"
          {
#line 708 "stm_expand.m"
            transform_hlds__stm_expand__conv2_MaybeOutDI_22 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
#line 708 "stm_expand.m"
          transform_hlds__stm_expand__MaybeOutDI_22 = ((MR_Word) transform_hlds__stm_expand__conv2_MaybeOutDI_22);
#line 709 "stm_expand.m"
          {
#line 709 "stm_expand.m"
            transform_hlds__stm_expand__conv3_MaybeOutUO_23 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
#line 709 "stm_expand.m"
          transform_hlds__stm_expand__MaybeOutUO_23 = ((MR_Word) transform_hlds__stm_expand__conv3_MaybeOutUO_23);
#line 711 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInDI_20)) == (MR_mktag((MR_Integer) 1)));
#line 711 "stm_expand.m"
          if (transform_hlds__stm_expand__succeeded)
#line 711 "stm_expand.m"
            {
#line 711 "stm_expand.m"
              transform_hlds__stm_expand__StmInDI0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_20, (MR_Integer) 0)));
#line 712 "stm_expand.m"
              transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInUO_21)) == (MR_mktag((MR_Integer) 1)));
#line 712 "stm_expand.m"
              if (transform_hlds__stm_expand__succeeded)
#line 712 "stm_expand.m"
                {
#line 712 "stm_expand.m"
                  transform_hlds__stm_expand__StmInUO0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_21, (MR_Integer) 0)));
#line 713 "stm_expand.m"
                  transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutDI_22)) == (MR_mktag((MR_Integer) 1)));
#line 713 "stm_expand.m"
                  if (transform_hlds__stm_expand__succeeded)
#line 713 "stm_expand.m"
                    {
#line 713 "stm_expand.m"
                      transform_hlds__stm_expand__StmOutDI0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_22, (MR_Integer) 0)));
#line 714 "stm_expand.m"
                      transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutUO_23)) == (MR_mktag((MR_Integer) 1)));
#line 714 "stm_expand.m"
                      if (transform_hlds__stm_expand__succeeded)
#line 714 "stm_expand.m"
                        transform_hlds__stm_expand__StmOutUO0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_23, (MR_Integer) 0)));
#line 713 "stm_expand.m"
                    }
#line 712 "stm_expand.m"
                }
#line 711 "stm_expand.m"
            }
#line 721 "stm_expand.m"
          if (transform_hlds__stm_expand__succeeded)
#line 716 "stm_expand.m"
            {
#line 716 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__V_30_30;

#line 716 "stm_expand.m"
              *transform_hlds__stm_expand__StmInDI_11 = transform_hlds__stm_expand__StmInDI0_24;
#line 717 "stm_expand.m"
              *transform_hlds__stm_expand__StmInUO_12 = transform_hlds__stm_expand__StmInUO0_25;
#line 718 "stm_expand.m"
              *transform_hlds__stm_expand__StmOutDI_9 = transform_hlds__stm_expand__StmOutDI0_26;
#line 719 "stm_expand.m"
              *transform_hlds__stm_expand__StmOutUO_10 = transform_hlds__stm_expand__StmOutUO0_27;
#line 720 "stm_expand.m"
              {
#line 720 "stm_expand.m"
                transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 720 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 720 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 720 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalList_17));
#line 720 "stm_expand.m"
              }
#line 720 "stm_expand.m"
              {
#line 720 "stm_expand.m"
                MR_Word base;
#line 720 "stm_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "stm_expand.m"
                *transform_hlds__stm_expand__Goal_8 = base;
#line 720 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
#line 720 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
#line 720 "stm_expand.m"
              }
#line 716 "stm_expand.m"
            }
#line 721 "stm_expand.m"
          else
#line 722 "stm_expand.m"
            {
#line 722 "stm_expand.m"
              {
#line 722 "stm_expand.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "Vars not extracted");
#line 722 "stm_expand.m"
                return;
              }
#line 722 "stm_expand.m"
            }
#line 704 "stm_expand.m"
        }
#line 725 "stm_expand.m"
    else
#line 726 "stm_expand.m"
      {
#line 726 "stm_expand.m"
        {
#line 726 "stm_expand.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "atomic_goal not a conj");
#line 726 "stm_expand.m"
          return;
        }
#line 726 "stm_expand.m"
      }
#line 725 "stm_expand.m"
  }
#line 694 "stm_expand.m"
}

#line 663 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
#line 663 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 663 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4)
#line 663 "stm_expand.m"
{
#line 667 "stm_expand.m"
  {
#line 667 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 667 "stm_expand.m"
    if ((transform_hlds__stm_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "stm_expand.m"
      {
#line 667 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[4];
#line 667 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__4_4 = *transform_hlds__stm_expand__HeadVar__3_3;
#line 667 "stm_expand.m"
      }
#line 667 "stm_expand.m"
    else
#line 668 "stm_expand.m"
      {
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__G_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Gs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutDI_12;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutUO_13;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInDI_14;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInUO_15;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_16;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutDI0_17;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeOutUO0_18;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInDI0_19;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MaybeInUO0_20;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_35_35;
#line 668 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_36_36;
#line 677 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__X_24;
#line 677 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_25;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_37_37;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_38_38;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_39_39;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_40_40;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_41_41;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_42_42;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_51_51;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_55_55;
#line 671 "stm_expand.m"
        MR_String transform_hlds__stm_expand__V_56_56;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_28_28;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_21_21;
#line 671 "stm_expand.m"
        MR_Integer transform_hlds__stm_expand__V_22_22;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_26_26;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_27_27;
#line 671 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_23_23;

#line 669 "stm_expand.m"
        {
#line 669 "stm_expand.m"
          transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__Gs_10, &transform_hlds__stm_expand__Goals0_16, &transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__V_36_36);
        }
#line 669 "stm_expand.m"
        transform_hlds__stm_expand__MaybeOutDI0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 0)));
#line 669 "stm_expand.m"
        transform_hlds__stm_expand__MaybeOutUO0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 1)));
#line 670 "stm_expand.m"
        transform_hlds__stm_expand__MaybeInDI0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 0)));
#line 670 "stm_expand.m"
        transform_hlds__stm_expand__MaybeInUO0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 1)));
#line 671 "stm_expand.m"
        transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 0)));
#line 671 "stm_expand.m"
        transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 1)));
#line 671 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_37_37)) == (MR_mktag((MR_Integer) 2)));
#line 671 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 671 "stm_expand.m"
          {
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 0)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 1)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 2)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 3)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 4)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_37_37, (MR_Integer) 5)));
#line 671 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 671 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 671 "stm_expand.m"
              {
#line 671 "stm_expand.m"
                transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 0)));
#line 671 "stm_expand.m"
                transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 1)));
#line 671 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 671 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 671 "stm_expand.m"
                  {
#line 671 "stm_expand.m"
                    transform_hlds__stm_expand__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 0)));
#line 671 "stm_expand.m"
                    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 1)));
#line 671 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 671 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 671 "stm_expand.m"
                      {
#line 671 "stm_expand.m"
                        transform_hlds__stm_expand__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, (MR_Integer) 0)));
#line 671 "stm_expand.m"
                        transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, (MR_Integer) 1)));
#line 671 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 671 "stm_expand.m"
                          {
#line 2608 "stm_expand.m"
                            {
#line 2608 "stm_expand.m"
                              transform_hlds__stm_expand__V_55_55 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                            }
#line 2608 "stm_expand.m"
                            transform_hlds__stm_expand__V_56_56 = (MR_String) "stm_from_outer_to_inner";
#line 2608 "stm_expand.m"
                            {
#line 2608 "stm_expand.m"
                              transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2608 "stm_expand.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
#line 2608 "stm_expand.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
#line 2608 "stm_expand.m"
                            }
#line 671 "stm_expand.m"
                            {
#line 671 "stm_expand.m"
                              transform_hlds__stm_expand__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__V_51_51);
                            }
#line 671 "stm_expand.m"
                          }
#line 671 "stm_expand.m"
                      }
#line 671 "stm_expand.m"
                  }
#line 671 "stm_expand.m"
              }
#line 671 "stm_expand.m"
          }
#line 677 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 672 "stm_expand.m"
          {
#line 672 "stm_expand.m"
            {
#line 672 "stm_expand.m"
              transform_hlds__stm_expand__MaybeInDI_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_14, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25));
#line 672 "stm_expand.m"
            }
#line 673 "stm_expand.m"
            transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
#line 674 "stm_expand.m"
            {
#line 674 "stm_expand.m"
              transform_hlds__stm_expand__MaybeOutDI_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_12, 0) = ((MR_Box) (transform_hlds__stm_expand__X_24));
#line 674 "stm_expand.m"
            }
#line 675 "stm_expand.m"
            transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
#line 676 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__Goals0_16;
#line 672 "stm_expand.m"
          }
#line 677 "stm_expand.m"
        else
#line 683 "stm_expand.m"
          {
#line 683 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__X_49;
#line 683 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_50;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 0)));
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_44_44;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_45_45;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_46_46;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_47_47;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_48_48;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_52_52;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 677 "stm_expand.m"
            MR_String transform_hlds__stm_expand__V_58_58;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__G_9, (MR_Integer) 1)));
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_29_29;
#line 677 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_30_30;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_32_32;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_33_33;
#line 677 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_31_31;

#line 677 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_43_43)) == (MR_mktag((MR_Integer) 2)));
#line 677 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 677 "stm_expand.m"
              {
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 0)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 1)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 2)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 3)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 4)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__V_43_43, (MR_Integer) 5)));
#line 677 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 677 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 677 "stm_expand.m"
                  {
#line 677 "stm_expand.m"
                    transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 0)));
#line 677 "stm_expand.m"
                    transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 1)));
#line 677 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 677 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 677 "stm_expand.m"
                      {
#line 677 "stm_expand.m"
                        transform_hlds__stm_expand__V_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, (MR_Integer) 0)));
#line 677 "stm_expand.m"
                        transform_hlds__stm_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, (MR_Integer) 1)));
#line 677 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 677 "stm_expand.m"
                        if (transform_hlds__stm_expand__succeeded)
#line 677 "stm_expand.m"
                          {
#line 677 "stm_expand.m"
                            transform_hlds__stm_expand__X_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, (MR_Integer) 0)));
#line 677 "stm_expand.m"
                            transform_hlds__stm_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, (MR_Integer) 1)));
#line 677 "stm_expand.m"
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "stm_expand.m"
                            if (transform_hlds__stm_expand__succeeded)
#line 677 "stm_expand.m"
                              {
#line 2606 "stm_expand.m"
                                {
#line 2606 "stm_expand.m"
                                  transform_hlds__stm_expand__V_57_57 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                                }
#line 2606 "stm_expand.m"
                                transform_hlds__stm_expand__V_58_58 = (MR_String) "stm_from_inner_to_outer";
#line 2606 "stm_expand.m"
                                {
#line 2606 "stm_expand.m"
                                  transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2606 "stm_expand.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_57_57));
#line 2606 "stm_expand.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (transform_hlds__stm_expand__V_58_58));
#line 2606 "stm_expand.m"
                                }
#line 677 "stm_expand.m"
                                {
#line 677 "stm_expand.m"
                                  transform_hlds__stm_expand__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__stm_expand__V_48_48, transform_hlds__stm_expand__V_52_52);
                                }
#line 677 "stm_expand.m"
                              }
#line 677 "stm_expand.m"
                          }
#line 677 "stm_expand.m"
                      }
#line 677 "stm_expand.m"
                  }
#line 677 "stm_expand.m"
              }
#line 683 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 678 "stm_expand.m"
              {
#line 678 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
#line 679 "stm_expand.m"
                {
#line 679 "stm_expand.m"
                  transform_hlds__stm_expand__MaybeInUO_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_15, 0) = ((MR_Box) (transform_hlds__stm_expand__V_50));
#line 679 "stm_expand.m"
                }
#line 680 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
#line 681 "stm_expand.m"
                {
#line 681 "stm_expand.m"
                  transform_hlds__stm_expand__MaybeOutUO_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 681 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_13, 0) = ((MR_Box) (transform_hlds__stm_expand__X_49));
#line 681 "stm_expand.m"
                }
#line 682 "stm_expand.m"
                *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__Goals0_16;
#line 678 "stm_expand.m"
              }
#line 683 "stm_expand.m"
            else
#line 684 "stm_expand.m"
              {
#line 684 "stm_expand.m"
                {
#line 684 "stm_expand.m"
                  MR_Word base;
#line 684 "stm_expand.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "stm_expand.m"
                  *transform_hlds__stm_expand__HeadVar__2_2 = base;
#line 684 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__G_9));
#line 684 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals0_16));
#line 684 "stm_expand.m"
                }
#line 685 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
#line 686 "stm_expand.m"
                transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
#line 687 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
#line 688 "stm_expand.m"
                transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
#line 684 "stm_expand.m"
              }
#line 683 "stm_expand.m"
          }
#line 668 "stm_expand.m"
        {
#line 668 "stm_expand.m"
          MR_Word base;
#line 668 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
#line 668 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutDI_12));
#line 668 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutUO_13));
#line 668 "stm_expand.m"
        }
#line 668 "stm_expand.m"
        {
#line 668 "stm_expand.m"
          MR_Word base;
#line 668 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__4_4 = base;
#line 668 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeInDI_14));
#line 668 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeInUO_15));
#line 668 "stm_expand.m"
        }
#line 668 "stm_expand.m"
      }
#line 667 "stm_expand.m"
  }
#line 663 "stm_expand.m"
}

#line 593 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goals_12,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
#line 593 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
#line 593 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
#line 593 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28)
#line 593 "stm_expand.m"
{
#line 605 "stm_expand.m"
  {
#line 605 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 600 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 600 "stm_expand.m"
      {
#line 601 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerDIs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 602 "stm_expand.m"
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerUOs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "stm_expand.m"
      }
#line 605 "stm_expand.m"
    if (transform_hlds__stm_expand__succeeded)
#line 604 "stm_expand.m"
      {
#line 604 "stm_expand.m"
        *transform_hlds__stm_expand__StmGoalVarList_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27;
#line 604 "stm_expand.m"
      }
#line 605 "stm_expand.m"
    else
#line 618 "stm_expand.m"
      {
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadGoal_18;
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailGoals_19;
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadInnerDI_20;
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailInnerDIs_21;
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__HeadInnerUO_22;
#line 618 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__TailInnerUOs_23;

#line 606 "stm_expand.m"
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Goals_12)) == (MR_mktag((MR_Integer) 1)));
#line 606 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 606 "stm_expand.m"
          {
#line 606 "stm_expand.m"
            transform_hlds__stm_expand__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 0)));
#line 606 "stm_expand.m"
            transform_hlds__stm_expand__TailGoals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 1)));
#line 607 "stm_expand.m"
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerDIs_13)) == (MR_mktag((MR_Integer) 1)));
#line 607 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 607 "stm_expand.m"
              {
#line 607 "stm_expand.m"
                transform_hlds__stm_expand__HeadInnerDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 0)));
#line 607 "stm_expand.m"
                transform_hlds__stm_expand__TailInnerDIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 1)));
#line 608 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerUOs_14)) == (MR_mktag((MR_Integer) 1)));
#line 608 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 608 "stm_expand.m"
                  {
#line 608 "stm_expand.m"
                    transform_hlds__stm_expand__HeadInnerUO_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 0)));
#line 608 "stm_expand.m"
                    transform_hlds__stm_expand__TailInnerUOs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 1)));
#line 608 "stm_expand.m"
                  }
#line 607 "stm_expand.m"
              }
#line 606 "stm_expand.m"
          }
#line 618 "stm_expand.m"
        if (transform_hlds__stm_expand__succeeded)
#line 610 "stm_expand.m"
          {
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__TypeCtorInfo_44_69;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__IgnoreVarList_24;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmGoalVar_25;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__StmGoalVarList0_26;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_29_29;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__ModuleInfo_45;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVars0_46;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVars_47;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalVarList_48;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalInfo_50;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet0_51;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet_52;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalNonLocals_53;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__LocalVarsList_54;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InputVarsList_55;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutputVarsList_59;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__LocalVars_60;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InputVars_61;
#line 610 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__OutputVars_62;
#line 632 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_63_63;
#line 632 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_64_64;
#line 632 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_65_65;
#line 632 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_66_66;
#line 632 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_67_67;
#line 632 "stm_expand.m"
            MR_Integer transform_hlds__stm_expand__V_68_68;
#line 638 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_49_49;
#line 533 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_56_56;
#line 533 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__V_57_57;
#line 533 "stm_expand.m"
            MR_Word transform_hlds__stm_expand___InputVarsList_58;

#line 610 "stm_expand.m"
            {
#line 610 "stm_expand.m"
              transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
#line 610 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__IgnoreVarList0_15));
#line 610 "stm_expand.m"
            }
#line 610 "stm_expand.m"
            {
#line 610 "stm_expand.m"
              transform_hlds__stm_expand__IgnoreVarList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
#line 610 "stm_expand.m"
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 1) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
#line 610 "stm_expand.m"
            }
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__ModuleInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 0)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 1)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 2)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 3)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 4)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 5)));
#line 632 "stm_expand.m"
            transform_hlds__stm_expand__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 6)));
#line 634 "stm_expand.m"
            {
#line 634 "stm_expand.m"
              hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__HeadGoal_18, &transform_hlds__stm_expand__GoalVars0_46);
            }
#line 18530 "transform_hlds.stm_expand.c"
            transform_hlds__stm_expand__TypeCtorInfo_44_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 635 "stm_expand.m"
            {
#line 635 "stm_expand.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalVars0_46, &transform_hlds__stm_expand__GoalVars_47);
            }
#line 636 "stm_expand.m"
            {
#line 636 "stm_expand.m"
              transform_hlds__stm_expand__GoalVarList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalVars_47);
            }
#line 638 "stm_expand.m"
            transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 0)));
#line 638 "stm_expand.m"
            transform_hlds__stm_expand__GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 1)));
#line 639 "stm_expand.m"
            {
#line 639 "stm_expand.m"
              transform_hlds__stm_expand__GoalNonLocalSet0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInfo_50);
            }
#line 640 "stm_expand.m"
            {
#line 640 "stm_expand.m"
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalNonLocalSet0_51, &transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
#line 641 "stm_expand.m"
            {
#line 641 "stm_expand.m"
              transform_hlds__stm_expand__GoalNonLocals_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
#line 533 "stm_expand.m"
            {
#line 533 "stm_expand.m"
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalVarList_48, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__LocalVarsList_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__InputVarsList_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_56_56);
            }
#line 533 "stm_expand.m"
            {
#line 533 "stm_expand.m"
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalNonLocals_53, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_57_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand___InputVarsList_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__OutputVarsList_59);
            }
#line 648 "stm_expand.m"
            {
#line 648 "stm_expand.m"
              transform_hlds__stm_expand__LocalVars_60 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__LocalVarsList_54);
            }
#line 649 "stm_expand.m"
            {
#line 649 "stm_expand.m"
              transform_hlds__stm_expand__InputVars_61 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__InputVarsList_55);
            }
#line 650 "stm_expand.m"
            {
#line 650 "stm_expand.m"
              transform_hlds__stm_expand__OutputVars_62 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__OutputVarsList_59);
            }
#line 652 "stm_expand.m"
            {
#line 652 "stm_expand.m"
              transform_hlds__stm_expand__StmGoalVar_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 652 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_61));
#line 652 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 1) = ((MR_Box) (transform_hlds__stm_expand__LocalVars_60));
#line 652 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputVars_62));
#line 652 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 3) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
#line 652 "stm_expand.m"
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 4) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
#line 652 "stm_expand.m"
            }
#line 614 "stm_expand.m"
            {
#line 614 "stm_expand.m"
              transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, transform_hlds__stm_expand__TailGoals_19, transform_hlds__stm_expand__TailInnerDIs_21, transform_hlds__stm_expand__TailInnerUOs_23, transform_hlds__stm_expand__IgnoreVarList_24, &transform_hlds__stm_expand__StmGoalVarList0_26, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);
            }
#line 617 "stm_expand.m"
            {
#line 617 "stm_expand.m"
              MR_Word base;
#line 617 "stm_expand.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "stm_expand.m"
              *transform_hlds__stm_expand__StmGoalVarList_16 = base;
#line 617 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVar_25));
#line 617 "stm_expand.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVarList0_26));
#line 617 "stm_expand.m"
            }
#line 610 "stm_expand.m"
          }
#line 618 "stm_expand.m"
        else
#line 619 "stm_expand.m"
          {
#line 619 "stm_expand.m"
            {
#line 619 "stm_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/9", (MR_String) "lengths mismatch");
#line 619 "stm_expand.m"
              return;
            }
#line 619 "stm_expand.m"
          }
#line 618 "stm_expand.m"
      }
#line 605 "stm_expand.m"
  }
#line 593 "stm_expand.m"
}

#line 578 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 578 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 578 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
#line 578 "stm_expand.m"
{
#line 578 "stm_expand.m"
  {
#line 578 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 578 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__2_12;

#line 578 "stm_expand.m"
    {
#line 578 "stm_expand.m"
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__579__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__2_12);
    }
#line 578 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__2_12));
#line 578 "stm_expand.m"
  }
#line 578 "stm_expand.m"
}

#line 574 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
#line 574 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList_3,
#line 574 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalVar_4)
#line 574 "stm_expand.m"
{
#line 577 "stm_expand.m"
  {
#line 577 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
#line 577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVarList_8;
#line 577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InputVars_9;
#line 577 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalVar0_10;
#line 582 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_10;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_20_20;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_21_21;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_22_22;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_23_23;
#line 583 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_19_19;

#line 580 "stm_expand.m"
    {
#line 580 "stm_expand.m"
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[2], transform_hlds__stm_expand__GoalList_3, &transform_hlds__stm_expand__InputVarList_8);
    }
#line 581 "stm_expand.m"
    {
#line 581 "stm_expand.m"
      transform_hlds__stm_expand__InputVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_8);
    }
#line 582 "stm_expand.m"
    {
#line 582 "stm_expand.m"
      transform_hlds__stm_expand__conv1_GoalVar0_10 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__GoalList_3);
    }
#line 582 "stm_expand.m"
    transform_hlds__stm_expand__GoalVar0_10 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_10);
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 0)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 1)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 2)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 3)));
#line 583 "stm_expand.m"
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 4)));
#line 583 "stm_expand.m"
    {
#line 583 "stm_expand.m"
      MR_Word base;
#line 583 "stm_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "stm_expand.m"
      *transform_hlds__stm_expand__GoalVar_4 = base;
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_9));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
#line 583 "stm_expand.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
#line 583 "stm_expand.m"
    }
#line 577 "stm_expand.m"
  }
#line 574 "stm_expand.m"
}

#line 536 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
#line 536 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
#line 536 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10)
#line 536 "stm_expand.m"
{
#line 541 "stm_expand.m"
  while (MR_TRUE)
#line 541 "stm_expand.m"
    {
#line 541 "stm_expand.m"
      /* tailcall optimized into a loop */
#line 541 "stm_expand.m"
      {
#line 541 "stm_expand.m"
        MR_bool transform_hlds__stm_expand__succeeded;

#line 541 "stm_expand.m"
        if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "stm_expand.m"
          {
#line 541 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__10_10 = transform_hlds__stm_expand__HeadVar__9_9;
#line 541 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__8_8 = transform_hlds__stm_expand__HeadVar__7_7;
#line 541 "stm_expand.m"
            *transform_hlds__stm_expand__HeadVar__6_6 = transform_hlds__stm_expand__HeadVar__5_5;
#line 541 "stm_expand.m"
          }
#line 541 "stm_expand.m"
        else
#line 543 "stm_expand.m"
          {
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__InitVarInst_31;
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__FinalVarInst_32;
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;
#line 543 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;

#line 544 "stm_expand.m"
            {
#line 544 "stm_expand.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__InitInstmap_3, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__InitVarInst_31);
            }
#line 545 "stm_expand.m"
            {
#line 545 "stm_expand.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__FinalInstmap_4, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__FinalVarInst_32);
            }
#line 547 "stm_expand.m"
            {
#line 547 "stm_expand.m"
              transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
            }
#line 547 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 548 "stm_expand.m"
              {
#line 548 "stm_expand.m"
                transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
              }
#line 551 "stm_expand.m"
            if (transform_hlds__stm_expand__succeeded)
#line 550 "stm_expand.m"
              {
#line 550 "stm_expand.m"
                {
#line 550 "stm_expand.m"
                  transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 550 "stm_expand.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__5_5));
#line 550 "stm_expand.m"
                }
#line 550 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
#line 550 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
#line 550 "stm_expand.m"
              }
#line 551 "stm_expand.m"
            else
#line 556 "stm_expand.m"
              {
#line 552 "stm_expand.m"
                {
#line 552 "stm_expand.m"
                  transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                }
#line 552 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 553 "stm_expand.m"
                  {
#line 553 "stm_expand.m"
                    transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                  }
#line 556 "stm_expand.m"
                if (transform_hlds__stm_expand__succeeded)
#line 555 "stm_expand.m"
                  {
#line 555 "stm_expand.m"
                    {
#line 555 "stm_expand.m"
                      transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "stm_expand.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 555 "stm_expand.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__9_9));
#line 555 "stm_expand.m"
                    }
#line 555 "stm_expand.m"
                    transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
#line 555 "stm_expand.m"
                  }
#line 556 "stm_expand.m"
                else
#line 561 "stm_expand.m"
                  {
#line 557 "stm_expand.m"
                    {
#line 557 "stm_expand.m"
                      transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                    }
#line 557 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 558 "stm_expand.m"
                      {
#line 558 "stm_expand.m"
                        transform_hlds__stm_expand__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                      }
#line 561 "stm_expand.m"
                    if (transform_hlds__stm_expand__succeeded)
#line 560 "stm_expand.m"
                      {
#line 560 "stm_expand.m"
                        transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "stm_expand.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
#line 560 "stm_expand.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__7_7));
#line 560 "stm_expand.m"
                      }
#line 561 "stm_expand.m"
                    else
#line 562 "stm_expand.m"
                      {
#line 562 "stm_expand.m"
                        {
#line 562 "stm_expand.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
#line 562 "stm_expand.m"
                          return;
                        }
#line 562 "stm_expand.m"
                      }
#line 562 "stm_expand.m"
                    transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
#line 561 "stm_expand.m"
                  }
#line 562 "stm_expand.m"
                transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = transform_hlds__stm_expand__HeadVar__5_5;
#line 556 "stm_expand.m"
              }
#line 564 "stm_expand.m"
            /* direct tailcall eliminated */
#line 564 "stm_expand.m"
            {
#line 564 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__2__tmp_copy_2 = transform_hlds__stm_expand__Vars_25;
#line 564 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__5__tmp_copy_5 = transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
#line 564 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__7__tmp_copy_7 = transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;
#line 564 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__HeadVar__9__tmp_copy_9 = transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;

#line 564 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__9_9 = transform_hlds__stm_expand__HeadVar__9__tmp_copy_9;
#line 564 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__7_7 = transform_hlds__stm_expand__HeadVar__7__tmp_copy_7;
#line 564 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__5_5 = transform_hlds__stm_expand__HeadVar__5__tmp_copy_5;
#line 564 "stm_expand.m"
              transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__HeadVar__2__tmp_copy_2;
#line 564 "stm_expand.m"
            }
#line 564 "stm_expand.m"
            continue;
#line 543 "stm_expand.m"
          }
#line 541 "stm_expand.m"
      }
#line 541 "stm_expand.m"
      break;
#line 541 "stm_expand.m"
    }
#line 536 "stm_expand.m"
}

#line 466 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
#line 466 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
#line 466 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
#line 466 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5)
#line 466 "stm_expand.m"
{
#line 469 "stm_expand.m"
  {
#line 469 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 469 "stm_expand.m"
    if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "stm_expand.m"
      {
#line 469 "stm_expand.m"
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_5 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4;
#line 469 "stm_expand.m"
      }
#line 469 "stm_expand.m"
    else
#line 470 "stm_expand.m"
      {
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Case_13;
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Cases_14;
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 0)));
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 1)));
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 2)));
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_19;
#line 470 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22;

#line 472 "stm_expand.m"
        {
#line 472 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Goal0_18, &transform_hlds__stm_expand__Goal_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4, &transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22);
        }
#line 473 "stm_expand.m"
        {
#line 473 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Cases0_12, &transform_hlds__stm_expand__Cases_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_5);
        }
#line 474 "stm_expand.m"
        {
#line 474 "stm_expand.m"
          transform_hlds__stm_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 0) = ((MR_Box) (transform_hlds__stm_expand__MainConsId_16));
#line 474 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 1) = ((MR_Box) (transform_hlds__stm_expand__OtherConsIds_17));
#line 474 "stm_expand.m"
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_19));
#line 474 "stm_expand.m"
        }
#line 470 "stm_expand.m"
        {
#line 470 "stm_expand.m"
          MR_Word base;
#line 470 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "stm_expand.m"
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
#line 470 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Case_13));
#line 470 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Cases_14));
#line 470 "stm_expand.m"
        }
#line 470 "stm_expand.m"
      }
#line 469 "stm_expand.m"
  }
#line 466 "stm_expand.m"
}

#line 446 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_10,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Cond0_11,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Then0_12,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Else0_13,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Cond_14,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Then_15,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Else_16,
#line 446 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
#line 446 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23)
#line 446 "stm_expand.m"
{
#line 451 "stm_expand.m"
  {
#line 451 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 451 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondInfo_19;
#line 451 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__CondInstmapDelta_20;
#line 451 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InstmapAfterCond_21;
#line 451 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24;
#line 451 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25;
#line 460 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_18_18;

#line 452 "stm_expand.m"
    {
#line 452 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Cond0_11, transform_hlds__stm_expand__Cond_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24);
    }
#line 460 "stm_expand.m"
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 0)));
#line 460 "stm_expand.m"
    transform_hlds__stm_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 1)));
#line 461 "stm_expand.m"
    {
#line 461 "stm_expand.m"
      transform_hlds__stm_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__CondInfo_19);
    }
#line 462 "stm_expand.m"
    {
#line 462 "stm_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__CondInstmapDelta_20, &transform_hlds__stm_expand__InstmapAfterCond_21);
    }
#line 463 "stm_expand.m"
    {
#line 463 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InstmapAfterCond_21, transform_hlds__stm_expand__Then0_12, transform_hlds__stm_expand__Then_15, transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24, &transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25);
    }
#line 464 "stm_expand.m"
    {
#line 464 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Else0_13, transform_hlds__stm_expand__Else_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25, transform_hlds__stm_expand__STATE_VARIABLE_Info_23);
#line 464 "stm_expand.m"
      return;
    }
#line 451 "stm_expand.m"
  }
#line 446 "stm_expand.m"
}

#line 432 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 432 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 432 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
#line 432 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15)
#line 432 "stm_expand.m"
{
#line 437 "stm_expand.m"
  {
#line 437 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 437 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "stm_expand.m"
      {
#line 438 "stm_expand.m"
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_15 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14;
#line 437 "stm_expand.m"
      }
#line 437 "stm_expand.m"
    else
#line 440 "stm_expand.m"
      {
#line 440 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
#line 440 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
#line 440 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_12;
#line 440 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals_13;
#line 440 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16;

#line 441 "stm_expand.m"
        {
#line 441 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_12, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16);
        }
#line 442 "stm_expand.m"
        {
#line 442 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_13, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_15);
        }
#line 443 "stm_expand.m"
        {
#line 443 "stm_expand.m"
          MR_Word base;
#line 443 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "stm_expand.m"
          *transform_hlds__stm_expand__GoalList_8 = base;
#line 443 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_12));
#line 443 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_13));
#line 443 "stm_expand.m"
        }
#line 440 "stm_expand.m"
      }
#line 437 "stm_expand.m"
  }
#line 432 "stm_expand.m"
}

#line 413 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap0_6,
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__GoalList0_7,
#line 413 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__GoalList_8,
#line 413 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
#line 413 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19)
#line 413 "stm_expand.m"
{
#line 418 "stm_expand.m"
  {
#line 418 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;

#line 418 "stm_expand.m"
    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "stm_expand.m"
      {
#line 419 "stm_expand.m"
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "stm_expand.m"
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_19 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18;
#line 418 "stm_expand.m"
      }
#line 418 "stm_expand.m"
    else
#line 421 "stm_expand.m"
      {
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__InstmapDelta_12;
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalInfo_13;
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goal_14;
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Instmap_16;
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__Goals_17;
#line 421 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20;
#line 426 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__V_15_15;

#line 424 "stm_expand.m"
        {
#line 424 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20);
        }
#line 426 "stm_expand.m"
        transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 0)));
#line 426 "stm_expand.m"
        transform_hlds__stm_expand__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 1)));
#line 422 "stm_expand.m"
        {
#line 422 "stm_expand.m"
          transform_hlds__stm_expand__InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo_13);
        }
#line 427 "stm_expand.m"
        {
#line 427 "stm_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__InstmapDelta_12, &transform_hlds__stm_expand__Instmap_16);
        }
#line 428 "stm_expand.m"
        {
#line 428 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_16, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_17, transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Info_19);
        }
#line 429 "stm_expand.m"
        {
#line 429 "stm_expand.m"
          MR_Word base;
#line 429 "stm_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "stm_expand.m"
          *transform_hlds__stm_expand__GoalList_8 = base;
#line 429 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_14));
#line 429 "stm_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_17));
#line 429 "stm_expand.m"
        }
#line 421 "stm_expand.m"
      }
#line 418 "stm_expand.m"
  }
#line 413 "stm_expand.m"
}

#line 302 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Instmap_6,
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__Goal0_7,
#line 302 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__Goal_8,
#line 302 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96,
#line 302 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_97)
#line 302 "stm_expand.m"
{
#line 305 "stm_expand.m"
  {
#line 305 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 305 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
#line 305 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));

#line 310 "stm_expand.m"
    if (((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 321 "stm_expand.m"
      {
#line 321 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__stm_expand__GoalExpr0_10), (MR_Integer) 0);
#line 321 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__SubGoal_24;
#line 321 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__GoalExpr_120;

#line 322 "stm_expand.m"
        {
#line 322 "stm_expand.m"
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__SubGoal0_23, &transform_hlds__stm_expand__SubGoal_24, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
        }
#line 323 "stm_expand.m"
        transform_hlds__stm_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__stm_expand__SubGoal_24);
#line 324 "stm_expand.m"
        {
#line 324 "stm_expand.m"
          MR_Word base;
#line 324 "stm_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "stm_expand.m"
          *transform_hlds__stm_expand__Goal_8 = base;
#line 324 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_120));
#line 324 "stm_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 324 "stm_expand.m"
        }
#line 321 "stm_expand.m"
      }
#line 310 "stm_expand.m"
    else
#line 310 "stm_expand.m"
      if (((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 308 "stm_expand.m"
        {
#line 309 "stm_expand.m"
          *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 309 "stm_expand.m"
          *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
#line 308 "stm_expand.m"
        }
#line 310 "stm_expand.m"
      else
#line 310 "stm_expand.m"
        if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 311 "stm_expand.m"
          {
#line 311 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 311 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 311 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__Conjuncts_19;
#line 311 "stm_expand.m"
            MR_Word transform_hlds__stm_expand__GoalExpr_20;

#line 312 "stm_expand.m"
            {
#line 312 "stm_expand.m"
              transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Conjuncts0_18, &transform_hlds__stm_expand__Conjuncts_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
            }
#line 313 "stm_expand.m"
            {
#line 313 "stm_expand.m"
              transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 313 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 313 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjType_17));
#line 313 "stm_expand.m"
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__Conjuncts_19));
#line 313 "stm_expand.m"
            }
#line 314 "stm_expand.m"
            {
#line 314 "stm_expand.m"
              MR_Word base;
#line 314 "stm_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "stm_expand.m"
              *transform_hlds__stm_expand__Goal_8 = base;
#line 314 "stm_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
#line 314 "stm_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 314 "stm_expand.m"
            }
#line 311 "stm_expand.m"
          }
#line 310 "stm_expand.m"
        else
#line 310 "stm_expand.m"
          if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 316 "stm_expand.m"
            {
#line 316 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 316 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__Disjuncts_22;
#line 316 "stm_expand.m"
              MR_Word transform_hlds__stm_expand__GoalExpr_119;

#line 317 "stm_expand.m"
              {
#line 317 "stm_expand.m"
                transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Disjuncts0_21, &transform_hlds__stm_expand__Disjuncts_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
              }
#line 318 "stm_expand.m"
              {
#line 318 "stm_expand.m"
                transform_hlds__stm_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 318 "stm_expand.m"
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 1) = ((MR_Box) (transform_hlds__stm_expand__Disjuncts_22));
#line 318 "stm_expand.m"
              }
#line 319 "stm_expand.m"
              {
#line 319 "stm_expand.m"
                MR_Word base;
#line 319 "stm_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "stm_expand.m"
                *transform_hlds__stm_expand__Goal_8 = base;
#line 319 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_119));
#line 319 "stm_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 319 "stm_expand.m"
              }
#line 316 "stm_expand.m"
            }
#line 310 "stm_expand.m"
          else
#line 310 "stm_expand.m"
            if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 371 "stm_expand.m"
              {
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Cond_56;
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Then_57;
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__Else_58;
#line 371 "stm_expand.m"
                MR_Word transform_hlds__stm_expand__GoalExpr_129;

#line 372 "stm_expand.m"
                {
#line 372 "stm_expand.m"
                  transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cond0_53, transform_hlds__stm_expand__Then0_54, transform_hlds__stm_expand__Else0_55, &transform_hlds__stm_expand__Cond_56, &transform_hlds__stm_expand__Then_57, &transform_hlds__stm_expand__Else_58, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                }
#line 374 "stm_expand.m"
                {
#line 374 "stm_expand.m"
                  transform_hlds__stm_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 374 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 374 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars_52));
#line 374 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_56));
#line 374 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_57));
#line 374 "stm_expand.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_58));
#line 374 "stm_expand.m"
                }
#line 375 "stm_expand.m"
                {
#line 375 "stm_expand.m"
                  MR_Word base;
#line 375 "stm_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "stm_expand.m"
                  *transform_hlds__stm_expand__Goal_8 = base;
#line 375 "stm_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_129));
#line 375 "stm_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 375 "stm_expand.m"
                }
#line 371 "stm_expand.m"
              }
#line 310 "stm_expand.m"
            else
#line 310 "stm_expand.m"
              if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 331 "stm_expand.m"
                {
#line 331 "stm_expand.m"
                  MR_Word transform_hlds__stm_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 331 "stm_expand.m"
                  MR_Word transform_hlds__stm_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 350 "stm_expand.m"
                  if (((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 333 "stm_expand.m"
                    {
#line 333 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 2)));
#line 333 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 1)));

#line 340 "stm_expand.m"
                      if ((transform_hlds__stm_expand__FGT_32 == (MR_Integer) 0))
#line 346 "stm_expand.m"
                        {
#line 348 "stm_expand.m"
                          {
#line 348 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
#line 348 "stm_expand.m"
                            return;
                          }
#line 346 "stm_expand.m"
                        }
#line 340 "stm_expand.m"
                      else
#line 340 "stm_expand.m"
                        if ((transform_hlds__stm_expand__FGT_32 == (MR_Integer) 3))
#line 341 "stm_expand.m"
                          {
#line 341 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__InnerGoal_33;
#line 341 "stm_expand.m"
                            MR_Word transform_hlds__stm_expand__GoalExpr_122;

#line 342 "stm_expand.m"
                            {
#line 342 "stm_expand.m"
                              transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_33, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                            }
#line 343 "stm_expand.m"
                            {
#line 343 "stm_expand.m"
                              transform_hlds__stm_expand__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 343 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
#line 343 "stm_expand.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_33));
#line 343 "stm_expand.m"
                            }
#line 344 "stm_expand.m"
                            {
#line 344 "stm_expand.m"
                              MR_Word base;
#line 344 "stm_expand.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "stm_expand.m"
                              *transform_hlds__stm_expand__Goal_8 = base;
#line 344 "stm_expand.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_122));
#line 344 "stm_expand.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 344 "stm_expand.m"
                            }
#line 341 "stm_expand.m"
                          }
#line 340 "stm_expand.m"
                        else
#line 337 "stm_expand.m"
                          {
#line 339 "stm_expand.m"
                            *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 339 "stm_expand.m"
                            *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
#line 337 "stm_expand.m"
                          }
#line 333 "stm_expand.m"
                    }
#line 350 "stm_expand.m"
                  else
#line 350 "stm_expand.m"
                    if (((((((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 366 "stm_expand.m"
                      {
#line 368 "stm_expand.m"
                        {
#line 368 "stm_expand.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
#line 368 "stm_expand.m"
                          return;
                        }
#line 366 "stm_expand.m"
                      }
#line 350 "stm_expand.m"
                    else
#line 358 "stm_expand.m"
                      {
#line 358 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalExpr_125;
#line 358 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__InnerGoal_126;

#line 359 "stm_expand.m"
                        {
#line 359 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_126, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                        }
#line 360 "stm_expand.m"
                        {
#line 360 "stm_expand.m"
                          transform_hlds__stm_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 360 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 360 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
#line 360 "stm_expand.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_126));
#line 360 "stm_expand.m"
                        }
#line 361 "stm_expand.m"
                        {
#line 361 "stm_expand.m"
                          MR_Word base;
#line 361 "stm_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "stm_expand.m"
                          *transform_hlds__stm_expand__Goal_8 = base;
#line 361 "stm_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_125));
#line 361 "stm_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 361 "stm_expand.m"
                        }
#line 358 "stm_expand.m"
                      }
#line 331 "stm_expand.m"
                }
#line 310 "stm_expand.m"
              else
#line 310 "stm_expand.m"
                if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 384 "stm_expand.m"
                  {
#line 384 "stm_expand.m"
                    MR_Word transform_hlds__stm_expand__ShortHand0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 404 "stm_expand.m"
                    if (((MR_tag((MR_Word) transform_hlds__stm_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 1))))
#line 388 "stm_expand.m"
                      {
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__TypeCtorInfo_130_130;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalType_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 0)));
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Outer_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 1)));
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__GoalDisj_86;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__MainGoal_87;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__OrElseGoals_88;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__InstmapDelta_89;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__FinalInstmap_90;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goal0_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 4)));
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goals0_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 5)));
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goal_139;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Goals_140;
#line 388 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141;
#line 387 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand__Inner_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 2)));
#line 387 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand___MaybeOutputVars_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 3)));
#line 387 "stm_expand.m"
                        MR_Word transform_hlds__stm_expand___OrElseInners_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 6)));
#line 392 "stm_expand.m"
                        MR_Box transform_hlds__stm_expand__conv0_MainGoal_87;

#line 441 "stm_expand.m"
                        {
#line 441 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_137, &transform_hlds__stm_expand__Goal_139, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141);
                        }
#line 442 "stm_expand.m"
                        {
#line 442 "stm_expand.m"
                          transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_138, &transform_hlds__stm_expand__Goals_140, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141, &transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104);
                        }
#line 443 "stm_expand.m"
                        {
#line 443 "stm_expand.m"
                          transform_hlds__stm_expand__GoalDisj_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "stm_expand.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_86, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_139));
#line 443 "stm_expand.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_86, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_140));
#line 443 "stm_expand.m"
                        }
#line 19773 "transform_hlds.stm_expand.c"
                        transform_hlds__stm_expand__TypeCtorInfo_130_130 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 392 "stm_expand.m"
                        {
#line 392 "stm_expand.m"
                          transform_hlds__stm_expand__conv0_MainGoal_87 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_130_130, transform_hlds__stm_expand__GoalDisj_86);
                        }
#line 392 "stm_expand.m"
                        transform_hlds__stm_expand__MainGoal_87 = ((MR_Word) transform_hlds__stm_expand__conv0_MainGoal_87);
#line 393 "stm_expand.m"
                        {
#line 393 "stm_expand.m"
                          transform_hlds__stm_expand__OrElseGoals_88 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_130_130, transform_hlds__stm_expand__GoalDisj_86);
                        }
#line 395 "stm_expand.m"
                        {
#line 395 "stm_expand.m"
                          transform_hlds__stm_expand__InstmapDelta_89 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo0_11);
                        }
#line 396 "stm_expand.m"
                        {
#line 396 "stm_expand.m"
                          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InstmapDelta_89, &transform_hlds__stm_expand__FinalInstmap_90);
                        }
#line 402 "stm_expand.m"
                        {
#line 402 "stm_expand.m"
                          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(transform_hlds__stm_expand__GoalType_78, transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__FinalInstmap_90, transform_hlds__stm_expand__Outer_79, transform_hlds__stm_expand__MainGoal_87, transform_hlds__stm_expand__OrElseGoals_88, transform_hlds__stm_expand__Goal_8, transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
#line 402 "stm_expand.m"
                          return;
                        }
#line 388 "stm_expand.m"
                      }
#line 404 "stm_expand.m"
                    else
#line 404 "stm_expand.m"
                      if (((MR_tag((MR_Word) transform_hlds__stm_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 0))))
#line 408 "stm_expand.m"
                        {
#line 409 "stm_expand.m"
                          {
#line 409 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
#line 409 "stm_expand.m"
                            return;
                          }
#line 408 "stm_expand.m"
                        }
#line 404 "stm_expand.m"
                      else
#line 405 "stm_expand.m"
                        {
#line 406 "stm_expand.m"
                          {
#line 406 "stm_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "try_goal");
#line 406 "stm_expand.m"
                            return;
                          }
#line 405 "stm_expand.m"
                        }
#line 384 "stm_expand.m"
                  }
#line 310 "stm_expand.m"
                else
#line 310 "stm_expand.m"
                  if (((((MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 326 "stm_expand.m"
                    {
#line 326 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 326 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 326 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 326 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__Cases_28;
#line 326 "stm_expand.m"
                      MR_Word transform_hlds__stm_expand__GoalExpr_121;

#line 327 "stm_expand.m"
                      {
#line 327 "stm_expand.m"
                        transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cases0_27, &transform_hlds__stm_expand__Cases_28, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                      }
#line 328 "stm_expand.m"
                      {
#line 328 "stm_expand.m"
                        transform_hlds__stm_expand__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 328 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 328 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__stm_expand__Var_25));
#line 328 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__stm_expand__CanFail_26));
#line 328 "stm_expand.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_28));
#line 328 "stm_expand.m"
                      }
#line 329 "stm_expand.m"
                      {
#line 329 "stm_expand.m"
                        MR_Word base;
#line 329 "stm_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "stm_expand.m"
                        *transform_hlds__stm_expand__Goal_8 = base;
#line 329 "stm_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_121));
#line 329 "stm_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
#line 329 "stm_expand.m"
                      }
#line 326 "stm_expand.m"
                    }
#line 310 "stm_expand.m"
                  else
#line 380 "stm_expand.m"
                    {
#line 381 "stm_expand.m"
                      *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
#line 381 "stm_expand.m"
                      *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
#line 380 "stm_expand.m"
                    }
#line 305 "stm_expand.m"
  }
#line 302 "stm_expand.m"
}

#line 260 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
#line 260 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_5,
#line 260 "stm_expand.m"
  MR_Integer transform_hlds__stm_expand__ProcId_6,
#line 260 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 260 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20)
#line 260 "stm_expand.m"
{
#line 263 "stm_expand.m"
  {
#line 263 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_23_23;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_25_25;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_26_26;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable0_8;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo0_9;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable0_10;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo0_11;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcInfo_12;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo1_13;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable1_14;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcTable_15;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_16;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable1_17;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredTable_18;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal0_38;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__InitInstmap_39;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmInfo0_40;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__Goal_41;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__StmInfo_42;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__RecalcInfo_45;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50;
#line 263 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
#line 265 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv0_PredInfo0_9;
#line 267 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_ProcInfo0_11;
#line 289 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_43_43;
#line 289 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_44_44;
#line 289 "stm_expand.m"
    MR_Integer transform_hlds__stm_expand__V_46_46;

#line 264 "stm_expand.m"
    {
#line 264 "stm_expand.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__PredTable0_8);
    }
#line 19986 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 19988 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 265 "stm_expand.m"
    {
#line 265 "stm_expand.m"
      mercury__map__lookup_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__PredTable0_8, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), &transform_hlds__stm_expand__conv0_PredInfo0_9);
    }
#line 265 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo0_9 = ((MR_Word) transform_hlds__stm_expand__conv0_PredInfo0_9);
#line 266 "stm_expand.m"
    {
#line 266 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__stm_expand__PredInfo0_9, &transform_hlds__stm_expand__ProcTable0_10);
    }
#line 20002 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 20004 "transform_hlds.stm_expand.c"
    transform_hlds__stm_expand__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 267 "stm_expand.m"
    {
#line 267 "stm_expand.m"
      mercury__map__lookup_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_25_25, transform_hlds__stm_expand__TypeCtorInfo_26_26, transform_hlds__stm_expand__ProcTable0_10, ((MR_Box) (transform_hlds__stm_expand__ProcId_6)), &transform_hlds__stm_expand__conv1_ProcInfo0_11);
    }
#line 267 "stm_expand.m"
    transform_hlds__stm_expand__ProcInfo0_11 = ((MR_Word) transform_hlds__stm_expand__conv1_ProcInfo0_11);
#line 284 "stm_expand.m"
    {
#line 284 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo0_11, &transform_hlds__stm_expand__Goal0_38);
    }
#line 285 "stm_expand.m"
    {
#line 285 "stm_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__stm_expand__ProcInfo0_11, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__InitInstmap_39);
    }
#line 286 "stm_expand.m"
    {
#line 286 "stm_expand.m"
      transform_hlds__stm_expand__StmInfo0_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 0) = ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo0_11));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 4) = ((MR_Box) (transform_hlds__stm_expand__PredInfo0_9));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 5) = ((MR_Box) ((MR_Integer) 0));
#line 286 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 6) = ((MR_Box) ((MR_Integer) 0));
#line 286 "stm_expand.m"
    }
#line 288 "stm_expand.m"
    {
#line 288 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InitInstmap_39, transform_hlds__stm_expand__Goal0_38, &transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__StmInfo0_40, &transform_hlds__stm_expand__StmInfo_42);
    }
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 0)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 1)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 2)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 3)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__PredInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 4)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__RecalcInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 5)));
#line 289 "stm_expand.m"
    transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 6)));
#line 291 "stm_expand.m"
    {
#line 291 "stm_expand.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52);
    }
#line 298 "stm_expand.m"
    if ((transform_hlds__stm_expand__RecalcInfo_45 == (MR_Integer) 0))
#line 299 "stm_expand.m"
      {
#line 299 "stm_expand.m"
        transform_hlds__stm_expand__ProcInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
#line 299 "stm_expand.m"
        transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21 = transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
#line 299 "stm_expand.m"
      }
#line 298 "stm_expand.m"
    else
#line 294 "stm_expand.m"
      {
#line 294 "stm_expand.m"
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54;

#line 295 "stm_expand.m"
        {
#line 295 "stm_expand.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54);
        }
#line 296 "stm_expand.m"
        {
#line 296 "stm_expand.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54, &transform_hlds__stm_expand__ProcInfo_12, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49, &transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 294 "stm_expand.m"
      }
#line 272 "stm_expand.m"
    {
#line 272 "stm_expand.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__ProcTable1_14);
    }
#line 273 "stm_expand.m"
    {
#line 273 "stm_expand.m"
      mercury__map__det_update_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_25_25, transform_hlds__stm_expand__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__stm_expand__ProcId_6)), ((MR_Box) (transform_hlds__stm_expand__ProcInfo_12)), transform_hlds__stm_expand__ProcTable1_14, &transform_hlds__stm_expand__ProcTable_15);
    }
#line 274 "stm_expand.m"
    {
#line 274 "stm_expand.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__stm_expand__ProcTable_15, transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__PredInfo_16);
    }
#line 275 "stm_expand.m"
    {
#line 275 "stm_expand.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__stm_expand__PredTable1_17);
    }
#line 276 "stm_expand.m"
    {
#line 276 "stm_expand.m"
      mercury__map__det_update_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), ((MR_Box) (transform_hlds__stm_expand__PredInfo_16)), transform_hlds__stm_expand__PredTable1_17, &transform_hlds__stm_expand__PredTable_18);
    }
#line 277 "stm_expand.m"
    {
#line 277 "stm_expand.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__stm_expand__PredTable_18, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);
#line 277 "stm_expand.m"
      return;
    }
#line 263 "stm_expand.m"
  }
#line 260 "stm_expand.m"
}

#line 258 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 258 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 258 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
#line 258 "stm_expand.m"
{
#line 258 "stm_expand.m"
  {
#line 258 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 258 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20;

#line 258 "stm_expand.m"
    {
#line 258 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
#line 258 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20));
#line 258 "stm_expand.m"
  }
#line 258 "stm_expand.m"
}

#line 252 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
#line 252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__PredId_4,
#line 252 "stm_expand.m"
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
#line 252 "stm_expand.m"
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9)
#line 252 "stm_expand.m"
{
#line 255 "stm_expand.m"
  {
#line 255 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 255 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredInfo_6;
#line 255 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__ProcIds_7;
#line 255 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__V_10_10;
#line 258 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 256 "stm_expand.m"
    {
#line 256 "stm_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__stm_expand__PredId_4, &transform_hlds__stm_expand__PredInfo_6);
    }
#line 257 "stm_expand.m"
    {
#line 257 "stm_expand.m"
      transform_hlds__stm_expand__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__stm_expand__PredInfo_6);
    }
#line 258 "stm_expand.m"
    {
#line 258 "stm_expand.m"
      transform_hlds__stm_expand__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 258 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0]));
#line 258 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
#line 258 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 258 "stm_expand.m"
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 3) = ((MR_Box) (transform_hlds__stm_expand__PredId_4));
#line 258 "stm_expand.m"
    }
#line 258 "stm_expand.m"
    {
#line 258 "stm_expand.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__ProcIds_7, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 258 "stm_expand.m"
    *transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 255 "stm_expand.m"
  }
#line 252 "stm_expand.m"
}

#line 249 "stm_expand.m"
static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__closure_arg,
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
#line 249 "stm_expand.m"
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
#line 249 "stm_expand.m"
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
#line 249 "stm_expand.m"
{
#line 249 "stm_expand.m"
  {
#line 249 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
#line 249 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 249 "stm_expand.m"
    {
#line 249 "stm_expand.m"
      transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 249 "stm_expand.m"
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 249 "stm_expand.m"
  }
#line 249 "stm_expand.m"
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
#line 247 "stm_expand.m"
  {
#line 247 "stm_expand.m"
    MR_bool transform_hlds__stm_expand__succeeded;
#line 247 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__PredIds_4;
#line 247 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7;
#line 247 "stm_expand.m"
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9;
#line 249 "stm_expand.m"
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9;

#line 248 "stm_expand.m"
    {
#line 248 "stm_expand.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__stm_expand__PredIds_4, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7);
    }
#line 249 "stm_expand.m"
    {
#line 249 "stm_expand.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[1], transform_hlds__stm_expand__PredIds_4, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_7_7)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 249 "stm_expand.m"
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9_9);
#line 250 "stm_expand.m"
    {
#line 250 "stm_expand.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9_9, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_6);
#line 250 "stm_expand.m"
      return;
    }
#line 247 "stm_expand.m"
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
