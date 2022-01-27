/*
** Automatically generated from `size_prof.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module transform_hlds.size_prof. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__size_prof__init
ENDINIT
*/

#include "transform_hlds.size_prof.mih"


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
#include "check_hlds.common.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 151 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

#line 166 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

#line 169 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2];

#line 172 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

#line 175 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

#line 178 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 187 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 193 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "transform_hlds.size_prof.c"
static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_info_0_0[11];

#line 199 "transform_hlds.size_prof.c"
static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_info_0_0[11];

#line 202 "transform_hlds.size_prof.c"
static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0;

#line 205 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1];

#line 208 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1];

#line 211 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1];

#line 214 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1];

#line 217 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 220 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 222 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 225 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 228 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 230 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 232 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 235 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 238 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 240 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 243 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 246 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 248 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 250 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 253 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 256 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 258 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 261 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 264 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 266 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 268 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 271 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 274 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 276 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 279 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 282 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 284 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 286 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 289 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 292 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 294 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 297 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 300 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 302 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 304 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 307 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 310 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 312 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 315 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 318 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 320 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 322 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 325 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 328 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 330 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 333 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 336 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 338 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 340 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_56_57_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 589 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_52_56_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 548 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 434 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 1299 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1299 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1299 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3);

#line 1185 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1185 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1185 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1185 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3);

#line 716 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 716 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 701 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 701 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 701 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50);

#line 1090 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1090__1_3_p_0(
#line 1090 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1090 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1090 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46);

#line 759 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__759__1_2_p_0(
#line 759 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 759 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56);

#line 716 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__716__1_2_p_0(
#line 716 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 716 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69);

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__589__1_3_p_0(
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 589 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__548__1_3_p_0(
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 548 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__434__1_3_p_0(
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 434 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 191 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
#line 191 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 191 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 192 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
#line 192 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 192 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 193 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 193 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 193 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 194 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
#line 194 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 194 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 195 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 195 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 195 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 197 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 197 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 1289 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1289 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1289 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 1258 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1258 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1258 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10);

#line 1234 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);

#line 1230 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1230 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 1224 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1224 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1224 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 1197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1197 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4);

#line 1172 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1172 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1172 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12);

#line 1135 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1135 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1128 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1128 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1128 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1128 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1128 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11);

#line 1110 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1110 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1090 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1090 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1090 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1090 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2);

#line 1083 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1083 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20);

#line 1069 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1069 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1069 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1069 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18);

#line 1034 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1034 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1034 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1034 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1034 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1034 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19);

#line 1006 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22);

#line 967 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26);

#line 925 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5);

#line 919 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43);

#line 850 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39);

#line 818 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 818 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23);

#line 788 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 788 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 788 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 759 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 759 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 746 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 746 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 746 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 670 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 670 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 670 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 608 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 608 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 608 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46);

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 589 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 567 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 548 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 529 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 512 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 512 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 512 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8);

#line 493 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 493 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 493 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 493 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 493 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4);

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 434 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 290 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 290 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 290 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1);

#line 270 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 270 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 270 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 270 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 270 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96);

#line 251 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 251 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 223 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_38,
#line 223 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_39,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_40,
#line 223 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_41);


static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][7];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[4][1];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[1][9];




static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_disj_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_switch_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "KnownSize"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "TypeClassInfoSlot"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "TupleArity"))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0))
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



#line 1351 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1359 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1367 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1375 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1383 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1392 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1401 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1410 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  (MR_Integer) 0
};

#line 1416 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  (MR_Integer) 1
};

#line 1422 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

#line 1428 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

#line 1434 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1440 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__size_prof____Unify____construct_transform_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____construct_transform_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "construct_transform",
  {
    transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0
  },
  {
    transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0
};

#line 1461 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1470 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1479 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 1488 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1497 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1506 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1514 "transform_hlds.size_prof.c"
static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_info_0_0[11] = {
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1529 "transform_hlds.size_prof.c"
static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_info_0_0[11] = {
  (MR_String) "spi_type_ctor_map",
  (MR_String) "spi_type_info_map",
  (MR_String) "spi_rev_type_ctor_map",
  (MR_String) "spi_rev_type_info_map",
  (MR_String) "spi_target_type_info_map",
  (MR_String) "spi_known_size_map",
  (MR_String) "spi_varset",
  (MR_String) "spi_vartypes",
  (MR_String) "spi_transform_op",
  (MR_String) "spi_rtti_varmaps",
  (MR_String) "spi_module_info"
};

#line 1544 "transform_hlds.size_prof.c"
static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0 = {
  (MR_String) "size_prof_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_types_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_names_info_0_0,
  NULL,
  NULL
};

#line 1559 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1564 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0
  }
};

#line 1573 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1578 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1] = {
  (MR_Integer) 0
};

#line 1583 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__size_prof____Unify____info_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____info_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "info",
  {
    transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0
  },
  {
    transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0
};

#line 1604 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____known_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____known_size_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "known_size_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1625 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_ctor_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1646 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_info_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1667 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_ctor_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1688 "transform_hlds.size_prof.c"
const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_info_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1709 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 1712 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1714 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1716 "transform_hlds.size_prof.c"
{
#line 1718 "transform_hlds.size_prof.c"
  {
#line 1720 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1723 "transform_hlds.size_prof.c"
    {
#line 1725 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1728 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1730 "transform_hlds.size_prof.c"
  }
#line 1732 "transform_hlds.size_prof.c"
}

#line 1735 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 1738 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1740 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1742 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1744 "transform_hlds.size_prof.c"
{
#line 1746 "transform_hlds.size_prof.c"
  {
#line 1748 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1751 "transform_hlds.size_prof.c"
    {
#line 1753 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____construct_transform_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1756 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1758 "transform_hlds.size_prof.c"
  }
#line 1760 "transform_hlds.size_prof.c"
}

#line 1763 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 1766 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1768 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1770 "transform_hlds.size_prof.c"
{
#line 1772 "transform_hlds.size_prof.c"
  {
#line 1774 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1777 "transform_hlds.size_prof.c"
    {
#line 1779 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____info_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1782 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1784 "transform_hlds.size_prof.c"
  }
#line 1786 "transform_hlds.size_prof.c"
}

#line 1789 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 1792 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1794 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1796 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1798 "transform_hlds.size_prof.c"
{
#line 1800 "transform_hlds.size_prof.c"
  {
#line 1802 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1805 "transform_hlds.size_prof.c"
    {
#line 1807 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____info_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1810 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1812 "transform_hlds.size_prof.c"
  }
#line 1814 "transform_hlds.size_prof.c"
}

#line 1817 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 1820 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1822 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1824 "transform_hlds.size_prof.c"
{
#line 1826 "transform_hlds.size_prof.c"
  {
#line 1828 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1831 "transform_hlds.size_prof.c"
    {
#line 1833 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1836 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1838 "transform_hlds.size_prof.c"
  }
#line 1840 "transform_hlds.size_prof.c"
}

#line 1843 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 1846 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1848 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1850 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1852 "transform_hlds.size_prof.c"
{
#line 1854 "transform_hlds.size_prof.c"
  {
#line 1856 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1859 "transform_hlds.size_prof.c"
    {
#line 1861 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____known_size_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1864 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1866 "transform_hlds.size_prof.c"
  }
#line 1868 "transform_hlds.size_prof.c"
}

#line 1871 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 1874 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1876 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1878 "transform_hlds.size_prof.c"
{
#line 1880 "transform_hlds.size_prof.c"
  {
#line 1882 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1885 "transform_hlds.size_prof.c"
    {
#line 1887 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1890 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1892 "transform_hlds.size_prof.c"
  }
#line 1894 "transform_hlds.size_prof.c"
}

#line 1897 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 1900 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1902 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1904 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1906 "transform_hlds.size_prof.c"
{
#line 1908 "transform_hlds.size_prof.c"
  {
#line 1910 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1913 "transform_hlds.size_prof.c"
    {
#line 1915 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1918 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1920 "transform_hlds.size_prof.c"
  }
#line 1922 "transform_hlds.size_prof.c"
}

#line 1925 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 1928 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1930 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1932 "transform_hlds.size_prof.c"
{
#line 1934 "transform_hlds.size_prof.c"
  {
#line 1936 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1939 "transform_hlds.size_prof.c"
    {
#line 1941 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1944 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1946 "transform_hlds.size_prof.c"
  }
#line 1948 "transform_hlds.size_prof.c"
}

#line 1951 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 1954 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1956 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1958 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1960 "transform_hlds.size_prof.c"
{
#line 1962 "transform_hlds.size_prof.c"
  {
#line 1964 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1967 "transform_hlds.size_prof.c"
    {
#line 1969 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1972 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1974 "transform_hlds.size_prof.c"
  }
#line 1976 "transform_hlds.size_prof.c"
}

#line 1979 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 1982 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1984 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1986 "transform_hlds.size_prof.c"
{
#line 1988 "transform_hlds.size_prof.c"
  {
#line 1990 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1993 "transform_hlds.size_prof.c"
    {
#line 1995 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1998 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 2000 "transform_hlds.size_prof.c"
  }
#line 2002 "transform_hlds.size_prof.c"
}

#line 2005 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 2008 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2010 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2012 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2014 "transform_hlds.size_prof.c"
{
#line 2016 "transform_hlds.size_prof.c"
  {
#line 2018 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2021 "transform_hlds.size_prof.c"
    {
#line 2023 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2026 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2028 "transform_hlds.size_prof.c"
  }
#line 2030 "transform_hlds.size_prof.c"
}

#line 2033 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 2036 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 2038 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 2040 "transform_hlds.size_prof.c"
{
#line 2042 "transform_hlds.size_prof.c"
  {
#line 2044 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 2047 "transform_hlds.size_prof.c"
    {
#line 2049 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 2052 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 2054 "transform_hlds.size_prof.c"
  }
#line 2056 "transform_hlds.size_prof.c"
}

#line 2059 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 2062 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2064 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2066 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2068 "transform_hlds.size_prof.c"
{
#line 2070 "transform_hlds.size_prof.c"
  {
#line 2072 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2075 "transform_hlds.size_prof.c"
    {
#line 2077 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2080 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2082 "transform_hlds.size_prof.c"
  }
#line 2084 "transform_hlds.size_prof.c"
}

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_56_57_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 589 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 589 "size_prof.m"
{
#line 589 "size_prof.m"
  {
#line 589 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 589 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 589 "size_prof.m"
    {
#line 589 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_138)), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 589 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_140 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_140);
#line 589 "size_prof.m"
  }
#line 589 "size_prof.m"
}

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_52_56_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 548 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 548 "size_prof.m"
{
#line 548 "size_prof.m"
  {
#line 548 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 548 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 548 "size_prof.m"
    {
#line 548 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_134)), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 548 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_136 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_136);
#line 548 "size_prof.m"
  }
#line 548 "size_prof.m"
}

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 434 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 434 "size_prof.m"
{
#line 434 "size_prof.m"
  {
#line 434 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 434 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 434 "size_prof.m"
    {
#line 434 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_1037)), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 434 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_1039 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_1039);
#line 434 "size_prof.m"
  }
#line 434 "size_prof.m"
}

#line 1299 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1299 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1299 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3)
#line 1299 "size_prof.m"
{
#line 1301 "size_prof.m"
  {
#line 1301 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1301 "size_prof.m"
    *transform_hlds__size_prof__X_3 = transform_hlds__size_prof__X_4;
#line 1301 "size_prof.m"
  }
#line 1299 "size_prof.m"
}

#line 1185 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1185 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1185 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1185 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3)
#line 1185 "size_prof.m"
{
#line 1188 "size_prof.m"
  while (MR_TRUE)
#line 1188 "size_prof.m"
    {
#line 1188 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1188 "size_prof.m"
      {
#line 1188 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1188 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2;
#line 1188 "size_prof.m"
        else
#line 1189 "size_prof.m"
          {
#line 1189 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_8;
#line 1189 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1189 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1189 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;
#line 1189 "size_prof.m"
            MR_Box transform_hlds__size_prof__V_7_7 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 0));
#line 1192 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_11;
#line 1190 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_11;

#line 1189 "size_prof.m"
            transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 1)));
#line 1190 "size_prof.m"
            {
#line 1190 "size_prof.m"
              transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (transform_hlds__size_prof__Var_8)), &transform_hlds__size_prof__conv0_Count_11);
            }
#line 1190 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1190 "size_prof.m"
              {
#line 1190 "size_prof.m"
                transform_hlds__size_prof__Count_11 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_11);
#line 1190 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1190 "size_prof.m"
              }
#line 1192 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1191 "size_prof.m"
              {
#line 1191 "size_prof.m"
                MR_Integer transform_hlds__size_prof__V_15_15 = (transform_hlds__size_prof__Count_11 + (MR_Integer) 1);

#line 1191 "size_prof.m"
                {
#line 1191 "size_prof.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__V_15_15)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1191 "size_prof.m"
              }
#line 1192 "size_prof.m"
            else
#line 1193 "size_prof.m"
              {
#line 1193 "size_prof.m"
                {
#line 1193 "size_prof.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) ((MR_Integer) 1)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1193 "size_prof.m"
              }
#line 1195 "size_prof.m"
            /* direct tailcall eliminated */
#line 1195 "size_prof.m"
            {
#line 1195 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_9;
#line 1195 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;

#line 1195 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2;
#line 1195 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1195 "size_prof.m"
            }
#line 1195 "size_prof.m"
            continue;
#line 1189 "size_prof.m"
          }
#line 1188 "size_prof.m"
      }
#line 1188 "size_prof.m"
      break;
#line 1188 "size_prof.m"
    }
#line 1185 "size_prof.m"
}

#line 716 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 716 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 716 "size_prof.m"
{
#line 716 "size_prof.m"
  {
#line 716 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 716 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 716 "size_prof.m"
    {
#line 716 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__716__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 716 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 716 "size_prof.m"
  }
#line 716 "size_prof.m"
}

#line 701 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 701 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 701 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 701 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50)
#line 701 "size_prof.m"
{
#line 708 "size_prof.m"
  {
#line 708 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 708 "size_prof.m"
    MR_Integer transform_hlds__size_prof__FunctorSize_30;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_31;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__NonDefinedArgs_32;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_33;
#line 708 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_34;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_35;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_36;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 708 "size_prof.m"
    MR_Word transform_hlds__size_prof__TransformOp_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 8)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 0)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 1)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 2)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 3)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 4)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 5)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 6)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 7)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 9)));
#line 1249 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 10)));

#line 1253 "size_prof.m"
    if ((transform_hlds__size_prof__TransformOp_82 == (MR_Integer) 1))
#line 1252 "size_prof.m"
      transform_hlds__size_prof__FunctorSize_30 = (MR_Integer) 1;
#line 1253 "size_prof.m"
    else
#line 1254 "size_prof.m"
      {
#line 1255 "size_prof.m"
        {
#line 1255 "size_prof.m"
          transform_hlds__size_prof__FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Args_23);
        }
#line 1254 "size_prof.m"
      }
#line 710 "size_prof.m"
    {
#line 710 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_23, transform_hlds__size_prof__ArgModes_24, &transform_hlds__size_prof__DefinedArgs_31, &transform_hlds__size_prof__NonDefinedArgs_32, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49);
    }
#line 711 "size_prof.m"
    {
#line 711 "size_prof.m"
      transform_hlds__size_prof__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
    }
#line 712 "size_prof.m"
    {
#line 712 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_31, transform_hlds__size_prof__FunctorSize_30, &transform_hlds__size_prof__KnownSize_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_35, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__ArgGoals_36, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, &transform_hlds__size_prof__STATE_VARIABLE_Info_52_52);
    }
#line 729 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "size_prof.m"
      {
#line 715 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;
#line 715 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 715 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 715 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 715 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;

#line 716 "size_prof.m"
        {
#line 716 "size_prof.m"
          transform_hlds__size_prof__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 716 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
#line 716 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
#line 716 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 716 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 716 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "size_prof.m"
        }
#line 716 "size_prof.m"
        {
#line 716 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_65_65, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
        }
#line 720 "size_prof.m"
        if ((transform_hlds__size_prof__NonDefinedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "size_prof.m"
          {
#line 719 "size_prof.m"
            transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_20, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
          }
#line 720 "size_prof.m"
        else
#line 721 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 727 "size_prof.m"
        {
#line 727 "size_prof.m"
          transform_hlds__size_prof__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 727 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_74_74, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSize_34));
#line 727 "size_prof.m"
        }
#line 727 "size_prof.m"
        {
#line 727 "size_prof.m"
          transform_hlds__size_prof__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_73_73, 0) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 727 "size_prof.m"
        }
#line 726 "size_prof.m"
        {
#line 726 "size_prof.m"
          transform_hlds__size_prof__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 1) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 726 "size_prof.m"
        }
#line 726 "size_prof.m"
        {
#line 726 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 726 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 726 "size_prof.m"
        }
#line 728 "size_prof.m"
        {
#line 728 "size_prof.m"
          MR_Word base;
#line 728 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 728 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 728 "size_prof.m"
        }
#line 715 "size_prof.m"
      }
#line 729 "size_prof.m"
    else
#line 730 "size_prof.m"
      {
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_35, (MR_Integer) 0)));
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_41;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_42;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyExpr_43;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals0_44;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals_45;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__GoalInfo_46;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyGoal_47;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_48;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 730 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_75;

#line 731 "size_prof.m"
        {
#line 731 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_40, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__SizeVar_41, &transform_hlds__size_prof__SizeGoals_42, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
        }
#line 734 "size_prof.m"
        {
#line 734 "size_prof.m"
          transform_hlds__size_prof__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_57_57, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_41));
#line 734 "size_prof.m"
        }
#line 734 "size_prof.m"
        {
#line 734 "size_prof.m"
          transform_hlds__size_prof__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_56_56, 0) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 734 "size_prof.m"
        }
#line 733 "size_prof.m"
        {
#line 733 "size_prof.m"
          transform_hlds__size_prof__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 733 "size_prof.m"
        }
#line 733 "size_prof.m"
        {
#line 733 "size_prof.m"
          transform_hlds__size_prof__Unification_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 733 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 6) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 733 "size_prof.m"
        }
#line 735 "size_prof.m"
        {
#line 735 "size_prof.m"
          transform_hlds__size_prof__UnifyExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_75));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 735 "size_prof.m"
        }
#line 736 "size_prof.m"
        {
#line 736 "size_prof.m"
          transform_hlds__size_prof__NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
        }
#line 737 "size_prof.m"
        {
#line 737 "size_prof.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__size_prof__SizeVar_41, transform_hlds__size_prof__NonLocals0_44, &transform_hlds__size_prof__NonLocals_45);
        }
#line 738 "size_prof.m"
        {
#line 738 "size_prof.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__size_prof__NonLocals_45, transform_hlds__size_prof__GoalInfo0_27, &transform_hlds__size_prof__GoalInfo_46);
        }
#line 739 "size_prof.m"
        {
#line 739 "size_prof.m"
          transform_hlds__size_prof__UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyExpr_43));
#line 739 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo_46));
#line 739 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          transform_hlds__size_prof__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_47));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          transform_hlds__size_prof__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 0) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoals_42));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_60_60));
#line 740 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 740 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 740 "size_prof.m"
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          transform_hlds__size_prof__Goals_48 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__V_58_58);
        }
#line 741 "size_prof.m"
        {
#line 741 "size_prof.m"
          MR_Word base;
#line 741 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 741 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 741 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 741 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 741 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_48));
#line 741 "size_prof.m"
        }
#line 730 "size_prof.m"
      }
#line 708 "size_prof.m"
  }
#line 701 "size_prof.m"
}

#line 1090 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1090__1_3_p_0(
#line 1090 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1090 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1090 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46)
#line 1090 "size_prof.m"
{
#line 1090 "size_prof.m"
  {
#line 1090 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1090 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_46;

#line 1090 "size_prof.m"
    {
#line 1090 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__RevTypeInfoMap0_12, ((MR_Box) (transform_hlds__size_prof__HeadVar__2_45)), &transform_hlds__size_prof__conv0_HeadVar__3_46);
    }
#line 1090 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1090 "size_prof.m"
      {
#line 1090 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__3_46 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_46);
#line 1090 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1090 "size_prof.m"
      }
#line 1090 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1090 "size_prof.m"
  }
#line 1090 "size_prof.m"
}

#line 759 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__759__1_2_p_0(
#line 759 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 759 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56)
#line 759 "size_prof.m"
{
#line 759 "size_prof.m"
  {
#line 759 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 759 "size_prof.m"
    {
#line 759 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_21)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_56)));
    }
#line 759 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 759 "size_prof.m"
  }
#line 759 "size_prof.m"
}

#line 716 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__716__1_2_p_0(
#line 716 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 716 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69)
#line 716 "size_prof.m"
{
#line 716 "size_prof.m"
  {
#line 716 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 716 "size_prof.m"
    {
#line 716 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_36)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_69)));
    }
#line 716 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 716 "size_prof.m"
  }
#line 716 "size_prof.m"
}

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__589__1_3_p_0(
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 589 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 589 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 589 "size_prof.m"
{
#line 589 "size_prof.m"
  {
#line 589 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 589 "size_prof.m"
    {
#line 589 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_56_57_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_138, transform_hlds__size_prof__HeadVar__3_140);
#line 589 "size_prof.m"
      return;
    }
#line 589 "size_prof.m"
  }
#line 589 "size_prof.m"
}

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__548__1_3_p_0(
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 548 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 548 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 548 "size_prof.m"
{
#line 548 "size_prof.m"
  {
#line 548 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 548 "size_prof.m"
    {
#line 548 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_52_56_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_134, transform_hlds__size_prof__HeadVar__3_136);
#line 548 "size_prof.m"
      return;
    }
#line 548 "size_prof.m"
  }
#line 548 "size_prof.m"
}

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__434__1_3_p_0(
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 434 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 434 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 434 "size_prof.m"
{
#line 434 "size_prof.m"
  {
#line 434 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 434 "size_prof.m"
    {
#line 434 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_52_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_1037, transform_hlds__size_prof__HeadVar__3_1039);
#line 434 "size_prof.m"
      return;
    }
#line 434 "size_prof.m"
  }
#line 434 "size_prof.m"
}

#line 191 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
#line 191 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 191 "size_prof.m"
{
#line 191 "size_prof.m"
  {
#line 191 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 191 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 191 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 191 "size_prof.m"
    {
#line 191 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 191 "size_prof.m"
      return;
    }
#line 191 "size_prof.m"
  }
#line 191 "size_prof.m"
}

#line 191 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 191 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 191 "size_prof.m"
{
#line 191 "size_prof.m"
  {
#line 191 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 191 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 191 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 191 "size_prof.m"
    {
#line 191 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 191 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 191 "size_prof.m"
  }
#line 191 "size_prof.m"
}

#line 192 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
#line 192 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 192 "size_prof.m"
{
#line 192 "size_prof.m"
  {
#line 192 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 192 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 192 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 192 "size_prof.m"
    {
#line 192 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 192 "size_prof.m"
      return;
    }
#line 192 "size_prof.m"
  }
#line 192 "size_prof.m"
}

#line 192 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 192 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 192 "size_prof.m"
{
#line 192 "size_prof.m"
  {
#line 192 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 192 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 192 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 192 "size_prof.m"
    {
#line 192 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 192 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 192 "size_prof.m"
  }
#line 192 "size_prof.m"
}

#line 193 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 193 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 193 "size_prof.m"
{
#line 193 "size_prof.m"
  {
#line 193 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 193 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 193 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 193 "size_prof.m"
    {
#line 193 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 193 "size_prof.m"
      return;
    }
#line 193 "size_prof.m"
  }
#line 193 "size_prof.m"
}

#line 193 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 193 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 193 "size_prof.m"
{
#line 193 "size_prof.m"
  {
#line 193 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 193 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 193 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 193 "size_prof.m"
    {
#line 193 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 193 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 193 "size_prof.m"
  }
#line 193 "size_prof.m"
}

#line 194 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
#line 194 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 194 "size_prof.m"
{
#line 194 "size_prof.m"
  {
#line 194 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 194 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 194 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 194 "size_prof.m"
    {
#line 194 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 194 "size_prof.m"
      return;
    }
#line 194 "size_prof.m"
  }
#line 194 "size_prof.m"
}

#line 194 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 194 "size_prof.m"
{
#line 194 "size_prof.m"
  {
#line 194 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 194 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 194 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 194 "size_prof.m"
    {
#line 194 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 194 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 194 "size_prof.m"
  }
#line 194 "size_prof.m"
}

#line 195 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 195 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 195 "size_prof.m"
{
#line 195 "size_prof.m"
  {
#line 195 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 195 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 195 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 195 "size_prof.m"
    {
#line 195 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 195 "size_prof.m"
      return;
    }
#line 195 "size_prof.m"
  }
#line 195 "size_prof.m"
}

#line 195 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 195 "size_prof.m"
{
#line 195 "size_prof.m"
  {
#line 195 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 195 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 195 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 195 "size_prof.m"
    {
#line 195 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 195 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 195 "size_prof.m"
  }
#line 195 "size_prof.m"
}

#line 197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 197 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 197 "size_prof.m"
{
#line 197 "size_prof.m"
  {
#line 197 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 197 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_36 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
#line 197 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_37 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

#line 197 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_36 == transform_hlds__size_prof__CastY_37);
#line 197 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 3263 "transform_hlds.size_prof.c"
      *transform_hlds__size_prof__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "size_prof.m"
    else
#line 197 "size_prof.m"
      {
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 3)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 4)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 5)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 6)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 7)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 8)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 9)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 10)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 197 "size_prof.m"
        {
#line 197 "size_prof.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], &transform_hlds__size_prof__V_26_26, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
        }
#line 3321 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_26_26 == (MR_Integer) 0);
#line 197 "size_prof.m"
        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_26_26;
#line 197 "size_prof.m"
        else
#line 197 "size_prof.m"
          {
#line 197 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 197 "size_prof.m"
            {
#line 197 "size_prof.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
            }
#line 3341 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_27_27 == (MR_Integer) 0);
#line 197 "size_prof.m"
            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_27_27;
#line 197 "size_prof.m"
            else
#line 197 "size_prof.m"
              {
#line 197 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_28_28;

#line 197 "size_prof.m"
                {
#line 197 "size_prof.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], &transform_hlds__size_prof__V_28_28, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                }
#line 3361 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_28_28 == (MR_Integer) 0);
#line 197 "size_prof.m"
                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_28_28;
#line 197 "size_prof.m"
                else
#line 197 "size_prof.m"
                  {
#line 197 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_29_29;

#line 197 "size_prof.m"
                    {
#line 197 "size_prof.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__V_29_29, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                    }
#line 3381 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_29_29 == (MR_Integer) 0);
#line 197 "size_prof.m"
                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_29_29;
#line 197 "size_prof.m"
                    else
#line 197 "size_prof.m"
                      {
#line 197 "size_prof.m"
                        MR_Word transform_hlds__size_prof__V_30_30;

#line 197 "size_prof.m"
                        {
#line 197 "size_prof.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_30_30, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                        }
#line 3401 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_30_30 == (MR_Integer) 0);
#line 197 "size_prof.m"
                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_30_30;
#line 197 "size_prof.m"
                        else
#line 197 "size_prof.m"
                          {
#line 197 "size_prof.m"
                            MR_Word transform_hlds__size_prof__V_31_31;

#line 197 "size_prof.m"
                            {
#line 197 "size_prof.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], &transform_hlds__size_prof__V_31_31, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                            }
#line 3421 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_31_31 == (MR_Integer) 0);
#line 197 "size_prof.m"
                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_31_31;
#line 197 "size_prof.m"
                            else
#line 197 "size_prof.m"
                              {
#line 197 "size_prof.m"
                                MR_Word transform_hlds__size_prof__V_32_32;

#line 197 "size_prof.m"
                                {
#line 197 "size_prof.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[3], &transform_hlds__size_prof__V_32_32, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                }
#line 3441 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_32_32 == (MR_Integer) 0);
#line 197 "size_prof.m"
                                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_32_32;
#line 197 "size_prof.m"
                                else
#line 197 "size_prof.m"
                                  {
#line 197 "size_prof.m"
                                    MR_Word transform_hlds__size_prof__V_33_33;

#line 197 "size_prof.m"
                                    {
#line 197 "size_prof.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__size_prof__V_33_33, ((MR_Box) (transform_hlds__size_prof__V_11_11)), ((MR_Box) (transform_hlds__size_prof__V_22_22)));
                                    }
#line 3461 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_33_33 == (MR_Integer) 0);
#line 197 "size_prof.m"
                                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_33_33;
#line 197 "size_prof.m"
                                    else
#line 197 "size_prof.m"
                                      {
#line 197 "size_prof.m"
                                        MR_Word transform_hlds__size_prof__V_34_34;
#line 197 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_49_49 = (MR_Integer) transform_hlds__size_prof__V_12_12;
#line 197 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_50_50 = (MR_Integer) transform_hlds__size_prof__V_23_23;

#line 197 "size_prof.m"
                                        {
#line 197 "size_prof.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__size_prof__V_34_34, transform_hlds__size_prof__V_49_49, transform_hlds__size_prof__V_50_50);
                                        }
#line 3485 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_34_34 == (MR_Integer) 0);
#line 197 "size_prof.m"
                                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_34_34;
#line 197 "size_prof.m"
                                        else
#line 197 "size_prof.m"
                                          {
#line 197 "size_prof.m"
                                            MR_Word transform_hlds__size_prof__V_35_35;

#line 197 "size_prof.m"
                                            {
#line 197 "size_prof.m"
                                              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__size_prof__V_35_35, transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                            }
#line 3505 "transform_hlds.size_prof.c"
                                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_35_35 == (MR_Integer) 0);
#line 197 "size_prof.m"
                                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 197 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_35_35;
#line 197 "size_prof.m"
                                            else
#line 197 "size_prof.m"
                                              {
#line 197 "size_prof.m"
                                                hlds__hlds_module____Compare____module_info_0_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__V_14_14, transform_hlds__size_prof__V_25_25);
#line 197 "size_prof.m"
                                                return;
                                              }
#line 197 "size_prof.m"
                                          }
#line 197 "size_prof.m"
                                      }
#line 197 "size_prof.m"
                                  }
#line 197 "size_prof.m"
                              }
#line 197 "size_prof.m"
                          }
#line 197 "size_prof.m"
                      }
#line 197 "size_prof.m"
                  }
#line 197 "size_prof.m"
              }
#line 197 "size_prof.m"
          }
#line 197 "size_prof.m"
      }
#line 197 "size_prof.m"
  }
#line 197 "size_prof.m"
}

#line 197 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 197 "size_prof.m"
{
#line 197 "size_prof.m"
  {
#line 197 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 197 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_25 = (MR_Integer) transform_hlds__size_prof__HeadVar__1_1;
#line 197 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_26 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;

#line 197 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_25 == transform_hlds__size_prof__CastY_26);
#line 197 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
      transform_hlds__size_prof__succeeded = MR_TRUE;
#line 197 "size_prof.m"
    else
#line 197 "size_prof.m"
      {
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_28_28;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_29_29;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_30_30;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_31_31;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_32_32;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_33_33;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_34_34;
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 3)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 4)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 5)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 6)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 7)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 8)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 9)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 10)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 197 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));

#line 3634 "transform_hlds.size_prof.c"
        {
#line 3636 "transform_hlds.size_prof.c"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__V_3_3)), ((MR_Box) (transform_hlds__size_prof__V_14_14)));
        }
#line 197 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
          {
#line 3643 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_28_28 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3645 "transform_hlds.size_prof.c"
            {
#line 3647 "transform_hlds.size_prof.c"
              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_28_28, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
            }
#line 197 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
              {
#line 3654 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__TypeInfo_29_29 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[3];
#line 3656 "transform_hlds.size_prof.c"
                {
#line 3658 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_29_29, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
                }
#line 197 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                  {
#line 3665 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_30_30 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
#line 3667 "transform_hlds.size_prof.c"
                    {
#line 3669 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_30_30, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                    }
#line 197 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                      {
#line 3676 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__TypeInfo_31_31 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3678 "transform_hlds.size_prof.c"
                        {
#line 3680 "transform_hlds.size_prof.c"
                          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_31_31, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                        }
#line 197 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                          {
#line 3687 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__TypeInfo_32_32 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[5];
#line 3689 "transform_hlds.size_prof.c"
                            {
#line 3691 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_32_32, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                            }
#line 197 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                              {
#line 3698 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__TypeInfo_33_33 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[3];
#line 3700 "transform_hlds.size_prof.c"
                                {
#line 3702 "transform_hlds.size_prof.c"
                                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_33_33, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                                }
#line 197 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                  {
#line 3709 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3711 "transform_hlds.size_prof.c"
                                    {
#line 3713 "transform_hlds.size_prof.c"
                                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                    }
#line 197 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                      {
#line 3720 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_11_11 == transform_hlds__size_prof__V_22_22);
#line 197 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 197 "size_prof.m"
                                          {
#line 3726 "transform_hlds.size_prof.c"
                                            {
#line 3728 "transform_hlds.size_prof.c"
                                              transform_hlds__size_prof__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__size_prof__V_12_12, transform_hlds__size_prof__V_23_23);
                                            }
#line 197 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 3733 "transform_hlds.size_prof.c"
                                              {
#line 3735 "transform_hlds.size_prof.c"
                                                return transform_hlds__size_prof__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                              }
#line 197 "size_prof.m"
                                          }
#line 197 "size_prof.m"
                                      }
#line 197 "size_prof.m"
                                  }
#line 197 "size_prof.m"
                              }
#line 197 "size_prof.m"
                          }
#line 197 "size_prof.m"
                      }
#line 197 "size_prof.m"
                  }
#line 197 "size_prof.m"
              }
#line 197 "size_prof.m"
          }
#line 197 "size_prof.m"
      }
#line 197 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 197 "size_prof.m"
  }
#line 197 "size_prof.m"
}

#line 93 "size_prof.m"
void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0(
#line 93 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 93 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 93 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 93 "size_prof.m"
{
#line 93 "size_prof.m"
  {
#line 93 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 93 "size_prof.m"
    MR_Integer transform_hlds__size_prof__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
#line 93 "size_prof.m"
    MR_Integer transform_hlds__size_prof__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

#line 93 "size_prof.m"
    {
#line 93 "size_prof.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__Cast_HeadVar1_4, transform_hlds__size_prof__Cast_HeadVar2_5);
#line 93 "size_prof.m"
      return;
    }
#line 93 "size_prof.m"
  }
#line 93 "size_prof.m"
}

#line 93 "size_prof.m"
MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0(
#line 93 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1,
#line 93 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 93 "size_prof.m"
{
#line 3806 "transform_hlds.size_prof.c"
  {
#line 3808 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__HeadVar__2_1 == transform_hlds__size_prof__HeadVar__2_2);

#line 3811 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 3813 "transform_hlds.size_prof.c"
  }
#line 93 "size_prof.m"
}

#line 1289 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1289 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1289 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 1289 "size_prof.m"
{
#line 1292 "size_prof.m"
  {
#line 1292 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellInitInst_4;
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellFinalInst_6;
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof__ModuleInfo_8;
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgInitInst_5;
#line 1292 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgFinalInst_7;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_12_12;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1293 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20;

#line 1292 "size_prof.m"
    transform_hlds__size_prof__CellInitInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_9_9, (MR_Integer) 0)));
#line 1292 "size_prof.m"
    transform_hlds__size_prof___ArgInitInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_9_9, (MR_Integer) 1)));
#line 1292 "size_prof.m"
    transform_hlds__size_prof__CellFinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 0)));
#line 1292 "size_prof.m"
    transform_hlds__size_prof___ArgFinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 1)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 0)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 1)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 2)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 3)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 4)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 5)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 6)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 7)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 8)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 9)));
#line 1293 "size_prof.m"
    transform_hlds__size_prof__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 10)));
#line 1294 "size_prof.m"
    {
#line 1294 "size_prof.m"
      transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_8, transform_hlds__size_prof__CellInitInst_4);
    }
#line 1292 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1295 "size_prof.m"
      {
#line 1295 "size_prof.m"
        return transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_8, transform_hlds__size_prof__CellFinalInst_6);
      }
#line 1292 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1292 "size_prof.m"
  }
#line 1289 "size_prof.m"
}

#line 1258 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1258 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1258 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1258 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10)
#line 1258 "size_prof.m"
{
#line 1263 "size_prof.m"
  {
#line 1263 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1263 "size_prof.m"
    if ((transform_hlds__size_prof__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "size_prof.m"
      if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "size_prof.m"
        {
#line 1265 "size_prof.m"
          *transform_hlds__size_prof__DefinedArgs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1266 "size_prof.m"
          *transform_hlds__size_prof__NonDefinedArgs_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "size_prof.m"
        }
#line 1263 "size_prof.m"
      else
#line 1268 "size_prof.m"
        {
#line 1270 "size_prof.m"
          {
#line 1270 "size_prof.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1270 "size_prof.m"
            return;
          }
#line 1268 "size_prof.m"
        }
#line 1263 "size_prof.m"
    else
#line 1263 "size_prof.m"
      {
#line 1263 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 1)));
#line 1263 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 0)));

#line 1263 "size_prof.m"
        if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1272 "size_prof.m"
          {
#line 1274 "size_prof.m"
            {
#line 1274 "size_prof.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1274 "size_prof.m"
              return;
            }
#line 1272 "size_prof.m"
          }
#line 1263 "size_prof.m"
        else
#line 1276 "size_prof.m"
          {
#line 1276 "size_prof.m"
            MR_Word transform_hlds__size_prof__FirstMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 0)));
#line 1276 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 1)));
#line 1276 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1276 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellInitInst_30;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellFinalInst_32;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__ModuleInfo_34;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_35_35;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_36_36;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgInitInst_31;
#line 1292 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgFinalInst_33;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_37_37;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_38_38;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_39_39;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_40_40;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_41_41;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_42_42;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_44_44;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_45_45;
#line 1293 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_46_46;

#line 1278 "size_prof.m"
            {
#line 1278 "size_prof.m"
              transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__V_27_27, transform_hlds__size_prof__LaterModes_18, &transform_hlds__size_prof__LaterDefinedArgs_19, &transform_hlds__size_prof__LaterNonDefinedArgs_20, transform_hlds__size_prof__Info_10);
            }
#line 1292 "size_prof.m"
            transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 0)));
#line 1292 "size_prof.m"
            transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 1)));
#line 1292 "size_prof.m"
            transform_hlds__size_prof__CellInitInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_35_35, (MR_Integer) 0)));
#line 1292 "size_prof.m"
            transform_hlds__size_prof___ArgInitInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_35_35, (MR_Integer) 1)));
#line 1292 "size_prof.m"
            transform_hlds__size_prof__CellFinalInst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 0)));
#line 1292 "size_prof.m"
            transform_hlds__size_prof___ArgFinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 1)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 0)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 1)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 2)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 3)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 4)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 5)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 6)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 7)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 8)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 9)));
#line 1293 "size_prof.m"
            transform_hlds__size_prof__ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 10)));
#line 1294 "size_prof.m"
            {
#line 1294 "size_prof.m"
              transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_34, transform_hlds__size_prof__CellInitInst_30);
            }
#line 1292 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1295 "size_prof.m"
              {
#line 1295 "size_prof.m"
                transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_34, transform_hlds__size_prof__CellFinalInst_32);
              }
#line 1283 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1281 "size_prof.m"
              {
#line 1281 "size_prof.m"
                {
#line 1281 "size_prof.m"
                  MR_Word base;
#line 1281 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "size_prof.m"
                  *transform_hlds__size_prof__DefinedArgs_8 = base;
#line 1281 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1281 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterDefinedArgs_19));
#line 1281 "size_prof.m"
                }
#line 1282 "size_prof.m"
                *transform_hlds__size_prof__NonDefinedArgs_9 = transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1281 "size_prof.m"
              }
#line 1283 "size_prof.m"
            else
#line 1284 "size_prof.m"
              {
#line 1284 "size_prof.m"
                *transform_hlds__size_prof__DefinedArgs_8 = transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1285 "size_prof.m"
                {
#line 1285 "size_prof.m"
                  MR_Word base;
#line 1285 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "size_prof.m"
                  *transform_hlds__size_prof__NonDefinedArgs_9 = base;
#line 1285 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1285 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterNonDefinedArgs_20));
#line 1285 "size_prof.m"
                }
#line 1284 "size_prof.m"
              }
#line 1276 "size_prof.m"
          }
#line 1263 "size_prof.m"
      }
#line 1263 "size_prof.m"
  }
#line 1258 "size_prof.m"
}

#line 1234 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1234 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1234 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10)
#line 1234 "size_prof.m"
{
#line 1237 "size_prof.m"
  {
#line 1237 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1237 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 1237 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 1238 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_17_17;
#line 1238 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1238 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_V_16_16;

#line 1238 "size_prof.m"
    {
#line 1238 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TypeInfoMap_5, ((MR_Box) (transform_hlds__size_prof__Type_6)), &transform_hlds__size_prof__conv0_V_16_16);
    }
#line 1238 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1238 "size_prof.m"
      {
#line 1238 "size_prof.m"
        transform_hlds__size_prof__V_16_16 = ((MR_Word) transform_hlds__size_prof__conv0_V_16_16);
#line 1238 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1238 "size_prof.m"
      }
#line 1238 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1238 "size_prof.m"
      {
#line 4180 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeInfo_17_17 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1238 "size_prof.m"
        {
#line 1238 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_17_17, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
        }
#line 1238 "size_prof.m"
      }
#line 1240 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1239 "size_prof.m"
      {
#line 1239 "size_prof.m"
        {
#line 1239 "size_prof.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], ((MR_Box) (transform_hlds__size_prof__Type_6)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9, transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);
#line 1239 "size_prof.m"
          return;
        }
#line 1239 "size_prof.m"
      }
#line 1240 "size_prof.m"
    else
#line 1239 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10 = transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9;
#line 1237 "size_prof.m"
  }
#line 1234 "size_prof.m"
}

#line 1230 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1230 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1230 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 1230 "size_prof.m"
{
#line 1230 "size_prof.m"
  {
#line 1230 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1230 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

#line 1230 "size_prof.m"
    {
#line 1230 "size_prof.m"
      transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
    }
#line 1230 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
#line 1230 "size_prof.m"
  }
#line 1230 "size_prof.m"
}

#line 1224 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1224 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1224 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 1224 "size_prof.m"
{
#line 1226 "size_prof.m"
  {
#line 1226 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_45_45 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoList_6;
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_7;
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10;
#line 1226 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11;
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1227 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1230 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_TargetTypeInfoMap_7;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;

#line 1229 "size_prof.m"
    {
#line 1229 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45, transform_hlds__size_prof__TargetTypeInfoMap0_4, &transform_hlds__size_prof__TargetTypeInfoList_6);
    }
#line 1230 "size_prof.m"
    {
#line 1230 "size_prof.m"
      transform_hlds__size_prof__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1]));
#line 1230 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
#line 1230 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1230 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 3) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_5));
#line 1230 "size_prof.m"
    }
#line 1230 "size_prof.m"
    {
#line 1230 "size_prof.m"
      transform_hlds__size_prof__V_11_11 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45);
    }
#line 1230 "size_prof.m"
    {
#line 1230 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[0], (MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__V_10_10, transform_hlds__size_prof__TargetTypeInfoList_6, ((MR_Box) (transform_hlds__size_prof__V_11_11)), &transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
    }
#line 1230 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_7 = ((MR_Word) transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1232 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1232 "size_prof.m"
    {
#line 1232 "size_prof.m"
      MR_Word base;
#line 1232 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = base;
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_34_34));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_35_35));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_36_36));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap_7));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_38_38));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1232 "size_prof.m"
    }
#line 1226 "size_prof.m"
  }
#line 1224 "size_prof.m"
}

#line 1197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1197 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1197 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4)
#line 1197 "size_prof.m"
{
#line 1201 "size_prof.m"
  while (MR_TRUE)
#line 1201 "size_prof.m"
    {
#line 1201 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1201 "size_prof.m"
      {
#line 1201 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1201 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_RevMap_4 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1201 "size_prof.m"
        else
#line 1202 "size_prof.m"
          {
#line 1202 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeInfo_21_21;
#line 1202 "size_prof.m"
            MR_Box transform_hlds__size_prof__T_9;
#line 1202 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_10;
#line 1202 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1202 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_14;
#line 1202 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1202 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;
#line 1203 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_14;

#line 1202 "size_prof.m"
            transform_hlds__size_prof__T_9 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 0));
#line 1202 "size_prof.m"
            transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 1)));
#line 4460 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_21_21 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1203 "size_prof.m"
            {
#line 1203 "size_prof.m"
              mercury__map__lookup_3_p_0(transform_hlds__size_prof__TypeInfo_21_21, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__VarCounts_2, ((MR_Box) (transform_hlds__size_prof__Var_10)), &transform_hlds__size_prof__conv0_Count_14);
            }
#line 1203 "size_prof.m"
            transform_hlds__size_prof__Count_14 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_14);
#line 1204 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Count_14 == (MR_Integer) 1);
#line 1206 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1205 "size_prof.m"
              {
#line 1205 "size_prof.m"
                mercury__map__det_insert_4_p_0(transform_hlds__size_prof__TypeInfo_21_21, transform_hlds__size_prof__TypeInfo_for_T_20, ((MR_Box) (transform_hlds__size_prof__Var_10)), transform_hlds__size_prof__T_9, transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3, &transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18);
              }
#line 1206 "size_prof.m"
            else
#line 1205 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1209 "size_prof.m"
            /* direct tailcall eliminated */
#line 1209 "size_prof.m"
            {
#line 1209 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_11;
#line 1209 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;

#line 1209 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1209 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1209 "size_prof.m"
            }
#line 1209 "size_prof.m"
            continue;
#line 1202 "size_prof.m"
          }
#line 1201 "size_prof.m"
      }
#line 1201 "size_prof.m"
      break;
#line 1201 "size_prof.m"
    }
#line 1197 "size_prof.m"
}

#line 1172 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1172 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1172 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12)
#line 1172 "size_prof.m"
{
#line 1174 "size_prof.m"
  {
#line 1174 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_62_62 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_63_63;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoList_4;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorList_5;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts0_6;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts1_7;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts_8;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_9;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_10;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1174 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1175 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1182 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1182 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;

#line 1175 "size_prof.m"
    {
#line 1175 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_13_13, &transform_hlds__size_prof__TypeInfoList_4);
    }
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1176 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 4641 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1176 "size_prof.m"
    {
#line 1176 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_14_14, &transform_hlds__size_prof__TypeCtorList_5);
    }
#line 1177 "size_prof.m"
    {
#line 1177 "size_prof.m"
      mercury__map__init_1_p_0(transform_hlds__size_prof__TypeInfo_62_62, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &transform_hlds__size_prof__VarCounts0_6);
    }
#line 1178 "size_prof.m"
    {
#line 1178 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts0_6, &transform_hlds__size_prof__VarCounts1_7);
    }
#line 1179 "size_prof.m"
    {
#line 1179 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts1_7, &transform_hlds__size_prof__VarCounts_8);
    }
#line 1180 "size_prof.m"
    {
#line 1180 "size_prof.m"
      transform_hlds__size_prof__V_15_15 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_61_61);
    }
#line 1180 "size_prof.m"
    {
#line 1180 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_15_15, &transform_hlds__size_prof__RevTypeInfoMap_9);
    }
#line 1181 "size_prof.m"
    {
#line 1181 "size_prof.m"
      transform_hlds__size_prof__V_16_16 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_63_63);
    }
#line 1181 "size_prof.m"
    {
#line 1181 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_16_16, &transform_hlds__size_prof__RevTypeCtorMap_10);
    }
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1182 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1183 "size_prof.m"
    {
#line 1183 "size_prof.m"
      MR_Word base;
#line 1183 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_12 = base;
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_10));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_9));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1183 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1183 "size_prof.m"
    }
#line 1174 "size_prof.m"
  }
#line 1172 "size_prof.m"
}

#line 1135 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1135 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1135 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1135 "size_prof.m"
{
#line 1138 "size_prof.m"
  {
#line 1138 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1138 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoLocn_8;
#line 1138 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_9;

#line 1139 "size_prof.m"
    {
#line 1139 "size_prof.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__RttiVarMaps_5, transform_hlds__size_prof__TVar_6, &transform_hlds__size_prof__TypeInfoLocn_8);
    }
#line 1142 "size_prof.m"
    {
#line 1142 "size_prof.m"
      transform_hlds__size_prof__Type_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 0) = ((MR_Box) (transform_hlds__size_prof__TVar_6));
#line 1142 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "size_prof.m"
    }
#line 1146 "size_prof.m"
    if (((MR_tag((MR_Word) transform_hlds__size_prof__TypeInfoLocn_8)) == (MR_mktag((MR_Integer) 0))))
#line 1144 "size_prof.m"
      {
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_59_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_60_72 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeInfoLocn_8, (MR_Integer) 0)));
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap_24;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap_26;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 1144 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1114 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1119 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1125 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 1125 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 1116 "size_prof.m"
        {
#line 1116 "size_prof.m"
          mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_71, transform_hlds__size_prof__TypeInfo_60_72, ((MR_Box) (transform_hlds__size_prof__Type_9)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), transform_hlds__size_prof__TypeInfoMap0_23, &transform_hlds__size_prof__TypeInfoMap_24);
        }
#line 1117 "size_prof.m"
        {
#line 1117 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_72, transform_hlds__size_prof__TypeCtorInfo_59_71, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), ((MR_Box) (transform_hlds__size_prof__Type_9)), transform_hlds__size_prof__RevTypeInfoMap0_22, &transform_hlds__size_prof__RevTypeInfoMap1_25);
        }
#line 1119 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1118 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1119 "size_prof.m"
        else
#line 1123 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1125 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1126 "size_prof.m"
        {
#line 1126 "size_prof.m"
          MR_Word base;
#line 1126 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_24));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_26));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_55_55));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 1126 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 1126 "size_prof.m"
        }
#line 1144 "size_prof.m"
      }
#line 1146 "size_prof.m"
    else
#line 1147 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_13;
#line 1138 "size_prof.m"
  }
#line 1135 "size_prof.m"
}

#line 1128 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1128 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1128 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1128 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1128 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11)
#line 1128 "size_prof.m"
{
#line 1130 "size_prof.m"
  {
#line 1130 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1130 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap_9;
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1131 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;

#line 1132 "size_prof.m"
    {
#line 1132 "size_prof.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__KnownSize_6)), transform_hlds__size_prof__KnownSizeMap0_8, &transform_hlds__size_prof__KnownSizeMap_9);
    }
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1133 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1133 "size_prof.m"
    {
#line 1133 "size_prof.m"
      MR_Word base;
#line 1133 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_11 = base;
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_23_23));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_24_24));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_25_25));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_9));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_32_32));
#line 1133 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1133 "size_prof.m"
    }
#line 1130 "size_prof.m"
  }
#line 1128 "size_prof.m"
}

#line 1110 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1110 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1110 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1110 "size_prof.m"
{
#line 1113 "size_prof.m"
  {
#line 1113 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_60_60 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_10;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_12;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1113 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1114 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1119 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1125 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1125 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;

#line 1116 "size_prof.m"
    {
#line 1116 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_59, transform_hlds__size_prof__TypeInfo_60_60, ((MR_Box) (transform_hlds__size_prof__Type_5)), ((MR_Box) (transform_hlds__size_prof__Var_6)), transform_hlds__size_prof__TypeInfoMap0_9, &transform_hlds__size_prof__TypeInfoMap_10);
    }
#line 1117 "size_prof.m"
    {
#line 1117 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_60, transform_hlds__size_prof__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Type_5)), transform_hlds__size_prof__RevTypeInfoMap0_8, &transform_hlds__size_prof__RevTypeInfoMap1_11);
    }
#line 1119 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1118 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1119 "size_prof.m"
    else
#line 1123 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap0_8;
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1125 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1126 "size_prof.m"
    {
#line 1126 "size_prof.m"
      MR_Word base;
#line 1126 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_37_37));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_10));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_12));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1126 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1126 "size_prof.m"
    }
#line 1113 "size_prof.m"
  }
#line 1110 "size_prof.m"
}

#line 1090 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1090 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1090 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1090 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2)
#line 1090 "size_prof.m"
{
#line 1090 "size_prof.m"
  {
#line 1090 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1090 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1090 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_HeadVar__3_46;

#line 1090 "size_prof.m"
    {
#line 1090 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1090__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv1_HeadVar__3_46);
    }
#line 1090 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1090 "size_prof.m"
      {
#line 1090 "size_prof.m"
        *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv1_HeadVar__3_46));
#line 1090 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1090 "size_prof.m"
      }
#line 1090 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1090 "size_prof.m"
  }
#line 1090 "size_prof.m"
}

#line 1083 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1083 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1083 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20)
#line 1083 "size_prof.m"
{
#line 1086 "size_prof.m"
  {
#line 1086 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1086 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1087 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1100 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor0_11;
#line 1088 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtor0_11;

#line 1088 "size_prof.m"
    {
#line 1088 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__RevTypeCtorMap0_10, ((MR_Box) (transform_hlds__size_prof__TypeCtorInfoVar_7)), &transform_hlds__size_prof__conv0_TypeCtor0_11);
    }
#line 1088 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1088 "size_prof.m"
      {
#line 1088 "size_prof.m"
        transform_hlds__size_prof__TypeCtor0_11 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtor0_11);
#line 1088 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1088 "size_prof.m"
      }
#line 1100 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1089 "size_prof.m"
      {
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1089 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1097 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_13;
#line 1090 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 1090 "size_prof.m"
        {
#line 1090 "size_prof.m"
          transform_hlds__size_prof__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
#line 1090 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
#line 1090 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1090 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_12));
#line 1090 "size_prof.m"
        }
#line 1090 "size_prof.m"
        {
#line 1090 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__V_21_21, transform_hlds__size_prof__ArgTypeInfoVars_8, &transform_hlds__size_prof__ArgTypes_13);
        }
#line 1097 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1091 "size_prof.m"
          {
#line 1091 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Arity_14;
#line 1091 "size_prof.m"
            MR_Word transform_hlds__size_prof__SymName_15;
#line 1091 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor1_17;
#line 1091 "size_prof.m"
            MR_Word transform_hlds__size_prof__Type_18;
#line 1093 "size_prof.m"
            MR_Integer transform_hlds__size_prof___DeclArity_16;

#line 1091 "size_prof.m"
            {
#line 1091 "size_prof.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_14);
            }
#line 1093 "size_prof.m"
            transform_hlds__size_prof__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 0)));
#line 1093 "size_prof.m"
            transform_hlds__size_prof___DeclArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 1)));
#line 1094 "size_prof.m"
            {
#line 1094 "size_prof.m"
              transform_hlds__size_prof__TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 0) = ((MR_Box) (transform_hlds__size_prof__SymName_15));
#line 1094 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 1) = ((MR_Box) (transform_hlds__size_prof__Arity_14));
#line 1094 "size_prof.m"
            }
#line 1095 "size_prof.m"
            {
#line 1095 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor1_17, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Type_18);
            }
#line 1096 "size_prof.m"
            {
#line 1096 "size_prof.m"
              transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_18, transform_hlds__size_prof__Var_6, transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, transform_hlds__size_prof__STATE_VARIABLE_Info_20);
#line 1096 "size_prof.m"
              return;
            }
#line 1091 "size_prof.m"
          }
#line 1097 "size_prof.m"
        else
#line 1096 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1089 "size_prof.m"
      }
#line 1100 "size_prof.m"
    else
#line 1096 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1086 "size_prof.m"
  }
#line 1083 "size_prof.m"
}

#line 1069 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1069 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1069 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1069 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1069 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18)
#line 1069 "size_prof.m"
{
#line 1073 "size_prof.m"
  {
#line 1073 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_65_65;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor_12;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_13;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_14;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap_15;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_16;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1073 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1076 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1080 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1080 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;

#line 1074 "size_prof.m"
    {
#line 1074 "size_prof.m"
      transform_hlds__size_prof__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorModule_8));
#line 1074 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorName_9));
#line 1074 "size_prof.m"
    }
#line 1074 "size_prof.m"
    {
#line 1074 "size_prof.m"
      transform_hlds__size_prof__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__size_prof__V_19_19));
#line 1074 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorArity_10));
#line 1074 "size_prof.m"
    }
#line 1076 "size_prof.m"
    transform_hlds__size_prof__TypeCtorMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__RevTypeCtorMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1076 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 5536 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5538 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_65_65 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1078 "size_prof.m"
    {
#line 1078 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__TypeInfo_65_65, ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), ((MR_Box) (transform_hlds__size_prof__Var_7)), transform_hlds__size_prof__TypeCtorMap0_13, &transform_hlds__size_prof__TypeCtorMap_15);
    }
#line 1079 "size_prof.m"
    {
#line 1079 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeInfo_65_65, transform_hlds__size_prof__TypeCtorInfo_64_64, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), transform_hlds__size_prof__RevTypeCtorMap0_14, &transform_hlds__size_prof__RevTypeCtorMap_16);
    }
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1080 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1081 "size_prof.m"
    {
#line 1081 "size_prof.m"
      MR_Word base;
#line 1081 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_18 = base;
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap_15));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_16));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1081 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1081 "size_prof.m"
    }
#line 1073 "size_prof.m"
  }
#line 1069 "size_prof.m"
}

#line 1034 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1034 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1034 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1034 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1034 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1034 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19)
#line 1034 "size_prof.m"
{
#line 1037 "size_prof.m"
  {
#line 1037 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet1_12;
#line 1037 "size_prof.m"
    MR_Integer transform_hlds__size_prof__VarNum_13;
#line 1037 "size_prof.m"
    MR_String transform_hlds__size_prof__VarNumStr_14;
#line 1037 "size_prof.m"
    MR_String transform_hlds__size_prof__Name_15;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_16;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_17;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1037 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1038 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1046 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1046 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1040 "size_prof.m"
    {
#line 1040 "size_prof.m"
      mercury__varset__new_var_3_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__Var_8, transform_hlds__size_prof__VarSet0_10, &transform_hlds__size_prof__VarSet1_12);
    }
#line 1041 "size_prof.m"
    {
#line 1041 "size_prof.m"
      mercury__term__var_to_int_2_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, &transform_hlds__size_prof__VarNum_13);
    }
#line 1042 "size_prof.m"
    {
#line 1042 "size_prof.m"
      mercury__string__int_to_string_2_p_0(transform_hlds__size_prof__VarNum_13, &transform_hlds__size_prof__VarNumStr_14);
    }
#line 1043 "size_prof.m"
    {
#line 1043 "size_prof.m"
      mercury__string__append_3_p_2(transform_hlds__size_prof__Prefix_7, transform_hlds__size_prof__VarNumStr_14, &transform_hlds__size_prof__Name_15);
    }
#line 1044 "size_prof.m"
    {
#line 1044 "size_prof.m"
      mercury__varset__name_var_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Name_15, transform_hlds__size_prof__VarSet1_12, &transform_hlds__size_prof__VarSet_16);
    }
#line 1045 "size_prof.m"
    {
#line 1045 "size_prof.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Type_6, transform_hlds__size_prof__VarTypes0_11, &transform_hlds__size_prof__VarTypes_17);
    }
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1046 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1047 "size_prof.m"
    {
#line 1047 "size_prof.m"
      MR_Word base;
#line 1047 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_19 = base;
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_16));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_17));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1047 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1047 "size_prof.m"
    }
#line 1037 "size_prof.m"
  }
#line 1034 "size_prof.m"
}

#line 1006 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1006 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1006 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22)
#line 1006 "size_prof.m"
{
#line 1011 "size_prof.m"
  {
#line 1011 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__SizeVar_16;
#line 1011 "size_prof.m"
    MR_String transform_hlds__size_prof__Pred_18;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__Args_19;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_20;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1011 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1023 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1012 "size_prof.m"
    {
#line 1012 "size_prof.m"
      transform_hlds__size_prof__V_23_23 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1012 "size_prof.m"
    {
#line 1012 "size_prof.m"
      transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_23_23, (MR_String) "SizeVar", &transform_hlds__size_prof__SizeVar_16, transform_hlds__size_prof__STATE_VARIABLE_Info_0_21, transform_hlds__size_prof__STATE_VARIABLE_Info_22);
    }
#line 1017 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeSizeVar0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "size_prof.m"
      {
#line 1018 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;
#line 1018 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27;

#line 1019 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size";
#line 1020 "size_prof.m"
        {
#line 1020 "size_prof.m"
          transform_hlds__size_prof__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "size_prof.m"
        }
#line 1020 "size_prof.m"
        {
#line 1020 "size_prof.m"
          transform_hlds__size_prof__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 1) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1020 "size_prof.m"
        }
#line 1020 "size_prof.m"
        {
#line 1020 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1020 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1020 "size_prof.m"
        }
#line 1018 "size_prof.m"
      }
#line 1017 "size_prof.m"
    else
#line 1014 "size_prof.m"
      {
#line 1014 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeSizeVar0_13, (MR_Integer) 0)));
#line 1014 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29;
#line 1014 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_30_30;
#line 1014 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31;

#line 1015 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size_acc";
#line 1016 "size_prof.m"
        {
#line 1016 "size_prof.m"
          transform_hlds__size_prof__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "size_prof.m"
        }
#line 1016 "size_prof.m"
        {
#line 1016 "size_prof.m"
          transform_hlds__size_prof__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_17));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1016 "size_prof.m"
        }
#line 1016 "size_prof.m"
        {
#line 1016 "size_prof.m"
          transform_hlds__size_prof__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 1) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1016 "size_prof.m"
        }
#line 1016 "size_prof.m"
        {
#line 1016 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1016 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1016 "size_prof.m"
        }
#line 1014 "size_prof.m"
      }
#line 1022 "size_prof.m"
    {
#line 1022 "size_prof.m"
      transform_hlds__size_prof__TermSizeProfBuiltin_20 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 1023 "size_prof.m"
    {
#line 1023 "size_prof.m"
      transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__size_prof__SizeVar_16);
    }
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 1)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1023 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1023 "size_prof.m"
    {
#line 1023 "size_prof.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_20, transform_hlds__size_prof__Pred_18, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Args_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_11, transform_hlds__size_prof__SizeGoal_12);
    }
#line 1027 "size_prof.m"
    {
#line 1027 "size_prof.m"
      MR_Word base;
#line 1027 "size_prof.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "size_prof.m"
      *transform_hlds__size_prof__MaybeSizeVar_14 = base;
#line 1027 "size_prof.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1027 "size_prof.m"
    }
#line 1011 "size_prof.m"
  }
#line 1006 "size_prof.m"
}

#line 967 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 967 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 967 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26)
#line 967 "size_prof.m"
{
#line 974 "size_prof.m"
  {
#line 974 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 974 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 971 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 971 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtorVarPrime_12;

#line 971 "size_prof.m"
    {
#line 971 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__TypeCtor_7)), &transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
    }
#line 971 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 971 "size_prof.m"
      {
#line 971 "size_prof.m"
        transform_hlds__size_prof__TypeCtorVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
#line 971 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 971 "size_prof.m"
      }
#line 974 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 972 "size_prof.m"
      {
#line 972 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorVar_9 = transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 973 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_25;
#line 972 "size_prof.m"
      }
#line 974 "size_prof.m"
    else
#line 982 "size_prof.m"
      {
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_16;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_17;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_18;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps0_19;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorGoal_21;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet_22;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes_23;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps_24;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_77_77;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_78_78;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_81_81;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_83_83;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_84_84;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_85_85;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_86_86;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_87_87;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 980 "size_prof.m"
        MR_Word transform_hlds__size_prof__Purity_13;
#line 980 "size_prof.m"
        MR_Word transform_hlds__size_prof__PredOrFunc_14;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 983 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;
#line 986 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 990 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_79_79;
#line 990 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_80_80;
#line 990 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_82_82;

#line 976 "size_prof.m"
        {
#line 976 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(transform_hlds__size_prof__TypeCtor_7, &transform_hlds__size_prof__Purity_13, &transform_hlds__size_prof__PredOrFunc_14);
        }
#line 980 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 978 "size_prof.m"
          {
#line 978 "size_prof.m"
            parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__size_prof__Purity_13, transform_hlds__size_prof__PredOrFunc_14, transform_hlds__size_prof__TypeArgs_8, &transform_hlds__size_prof__Type_16);
          }
#line 980 "size_prof.m"
        else
#line 981 "size_prof.m"
          {
#line 981 "size_prof.m"
            {
#line 981 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__Type_16);
            }
#line 981 "size_prof.m"
          }
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__RttiVarMaps0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 983 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 986 "size_prof.m"
        {
#line 986 "size_prof.m"
          check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(transform_hlds__size_prof__Type_16, transform_hlds__size_prof__TypeCtor_7, transform_hlds__size_prof__TypeCtorVar_9, &transform_hlds__size_prof__V_20_20, &transform_hlds__size_prof__TypeCtorGoal_21, transform_hlds__size_prof__VarSet0_17, &transform_hlds__size_prof__VarSet_22, transform_hlds__size_prof__VarTypes0_18, &transform_hlds__size_prof__VarTypes_23, transform_hlds__size_prof__RttiVarMaps0_19, &transform_hlds__size_prof__RttiVarMaps_24);
        }
#line 989 "size_prof.m"
        {
#line 989 "size_prof.m"
          MR_Word base;
#line 989 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "size_prof.m"
          *transform_hlds__size_prof__TypeCtorGoals_10 = base;
#line 989 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorGoal_21));
#line 989 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "size_prof.m"
        }
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 990 "size_prof.m"
        transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__VarSet_22;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 991 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 992 "size_prof.m"
        {
#line 992 "size_prof.m"
          MR_Word base;
#line 992 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 992 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = base;
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_23));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_24));
#line 992 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 992 "size_prof.m"
        }
#line 982 "size_prof.m"
      }
#line 974 "size_prof.m"
  }
#line 967 "size_prof.m"
}

#line 925 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 925 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 925 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5)
#line 925 "size_prof.m"
{
#line 925 "size_prof.m"
  {
#line 925 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 925 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv2_TypeInfoVar_9;
#line 925 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_TypeInfoGoals_10;
#line 925 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39;

#line 925 "size_prof.m"
    {
#line 925 "size_prof.m"
      transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv2_TypeInfoVar_9, &transform_hlds__size_prof__conv1_TypeInfoGoals_10, ((MR_Word) transform_hlds__size_prof__wrapper_arg_4), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39);
    }
#line 925 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv2_TypeInfoVar_9));
#line 925 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv1_TypeInfoGoals_10));
#line 925 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_5 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39));
#line 925 "size_prof.m"
  }
#line 925 "size_prof.m"
}

#line 919 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 919 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 919 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43)
#line 919 "size_prof.m"
{
#line 924 "size_prof.m"
  {
#line 924 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_180_180;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_181_181;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_184_184;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoVars_18;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoalLists_19;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoals_20;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVar_21;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorGoals_22;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__FrontGoals_30;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgVars_31;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet2_32;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes2_33;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_34;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_35;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybePreferredVar_37;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoGoal_38;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_39;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_40;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_41;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_45_45;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_142_142;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_143_143;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_144_144;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_145_145;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_146_146;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_147_147;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_150_150;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_152_152;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_153_153;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_154_154;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_155_155;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_156_156;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_157_157;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_158_158;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_159_159;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_161_161;
#line 924 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_163_163;
#line 925 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_102_102;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 945 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 951 "size_prof.m"
    MR_Word transform_hlds__size_prof__PrefTIVar_36;
#line 949 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv4_PrefTIVar_36;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_148_148;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_149_149;
#line 957 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_151_151;

#line 925 "size_prof.m"
    {
#line 925 "size_prof.m"
      transform_hlds__size_prof__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_7[0]));
#line 925 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
#line 925 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 925 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 3) = ((MR_Box) (transform_hlds__size_prof__Context_10));
#line 925 "size_prof.m"
    }
#line 6497 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 6499 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_181_181 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 925 "size_prof.m"
    {
#line 925 "size_prof.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, (MR_Word) &transform_hlds__size_prof_scalar_common_1[2], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_44_44, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__ArgTypeInfoVars_18, &transform_hlds__size_prof__ArgTypeInfoGoalLists_19, ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_42)), &transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
    }
#line 925 "size_prof.m"
    transform_hlds__size_prof__STATE_VARIABLE_Info_45_45 = ((MR_Word) transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
#line 6508 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 927 "size_prof.m"
    {
#line 927 "size_prof.m"
      transform_hlds__size_prof__ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoalLists_19);
    }
#line 928 "size_prof.m"
    {
#line 928 "size_prof.m"
      transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_12, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__TypeCtorVar_21, &transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__STATE_VARIABLE_Info_45_45, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
    }
#line 940 "size_prof.m"
    if ((transform_hlds__size_prof__CtorIsVarArity_14 == (MR_Integer) 0))
#line 941 "size_prof.m"
      {
#line 942 "size_prof.m"
        transform_hlds__size_prof__FrontGoals_30 = transform_hlds__size_prof__TypeCtorGoals_22;
#line 943 "size_prof.m"
        {
#line 943 "size_prof.m"
          transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 943 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 943 "size_prof.m"
        }
#line 943 "size_prof.m"
        transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 941 "size_prof.m"
      }
#line 940 "size_prof.m"
    else
#line 930 "size_prof.m"
      {
#line 930 "size_prof.m"
        MR_Integer transform_hlds__size_prof__Arity_23;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_24;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_25;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArityGoal_26;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArityVar_27;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet1_28;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_80_80;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_81_81;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_82_82;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_83_83;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_84_84;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_85_85;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 930 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 936 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_86_86;
#line 936 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_87_87;

#line 931 "size_prof.m"
        {
#line 931 "size_prof.m"
          mercury__list__length_2_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_23);
        }
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__VarTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 932 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 934 "size_prof.m"
        {
#line 934 "size_prof.m"
          hlds__hlds_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Arity_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[3]), &transform_hlds__size_prof__ArityGoal_26, &transform_hlds__size_prof__ArityVar_27, transform_hlds__size_prof__VarSet0_24, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_25, &transform_hlds__size_prof__VarTypes1_29);
        }
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 936 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 937 "size_prof.m"
        {
#line 937 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_80_80));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_83_83));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_28));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_29));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 937 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 937 "size_prof.m"
        }
#line 938 "size_prof.m"
        {
#line 938 "size_prof.m"
          transform_hlds__size_prof__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 0) = ((MR_Box) (transform_hlds__size_prof__ArityGoal_26));
#line 938 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "size_prof.m"
        }
#line 938 "size_prof.m"
        {
#line 938 "size_prof.m"
          transform_hlds__size_prof__FrontGoals_30 = mercury__list__append_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__V_51_51);
        }
#line 939 "size_prof.m"
        {
#line 939 "size_prof.m"
          transform_hlds__size_prof__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__ArityVar_27));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 939 "size_prof.m"
        }
#line 939 "size_prof.m"
        {
#line 939 "size_prof.m"
          transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 939 "size_prof.m"
        }
#line 930 "size_prof.m"
      }
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__VarSet2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__VarTypes2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__RttiVarMaps0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 945 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 949 "size_prof.m"
    {
#line 949 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, transform_hlds__size_prof__TargetTypeInfoMap_35, ((MR_Box) (transform_hlds__size_prof__Type_11)), &transform_hlds__size_prof__conv4_PrefTIVar_36);
    }
#line 949 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 949 "size_prof.m"
      {
#line 949 "size_prof.m"
        transform_hlds__size_prof__PrefTIVar_36 = ((MR_Word) transform_hlds__size_prof__conv4_PrefTIVar_36);
#line 949 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 949 "size_prof.m"
      }
#line 951 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 950 "size_prof.m"
      {
#line 950 "size_prof.m"
        transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 950 "size_prof.m"
        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybePreferredVar_37, 0) = ((MR_Box) (transform_hlds__size_prof__PrefTIVar_36));
#line 950 "size_prof.m"
      }
#line 951 "size_prof.m"
    else
#line 952 "size_prof.m"
      transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 954 "size_prof.m"
    {
#line 954 "size_prof.m"
      check_hlds__polymorphism__init_type_info_var_11_p_0(transform_hlds__size_prof__Type_11, transform_hlds__size_prof__ArgVars_31, transform_hlds__size_prof__MaybePreferredVar_37, transform_hlds__size_prof__TypeInfoVar_15, &transform_hlds__size_prof__TypeInfoGoal_38, transform_hlds__size_prof__VarSet2_32, &transform_hlds__size_prof__VarSet_39, transform_hlds__size_prof__VarTypes2_33, &transform_hlds__size_prof__VarTypes_40, transform_hlds__size_prof__RttiVarMaps0_34, &transform_hlds__size_prof__RttiVarMaps_41);
    }
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 957 "size_prof.m"
    transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_153_153 = transform_hlds__size_prof__V_142_142;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_154_154 = transform_hlds__size_prof__V_143_143;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_155_155 = transform_hlds__size_prof__V_144_144;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_156_156 = transform_hlds__size_prof__V_145_145;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_157_157 = transform_hlds__size_prof__V_146_146;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_158_158 = transform_hlds__size_prof__V_147_147;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_159_159 = transform_hlds__size_prof__VarSet_39;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_161_161 = transform_hlds__size_prof__V_150_150;
#line 958 "size_prof.m"
    transform_hlds__size_prof__V_163_163 = transform_hlds__size_prof__V_152_152;
#line 959 "size_prof.m"
    {
#line 959 "size_prof.m"
      MR_Word base;
#line 959 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 959 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_43 = base;
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_156_156));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_157_157));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_158_158));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_159_159));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_40));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_161_161));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_41));
#line 959 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 959 "size_prof.m"
    }
#line 960 "size_prof.m"
    {
#line 960 "size_prof.m"
      transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoGoal_38));
#line 960 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "size_prof.m"
    }
#line 960 "size_prof.m"
    {
#line 960 "size_prof.m"
      transform_hlds__size_prof__V_57_57 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__FrontGoals_30, transform_hlds__size_prof__V_58_58);
    }
#line 960 "size_prof.m"
    {
#line 960 "size_prof.m"
      *transform_hlds__size_prof__TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoals_20, transform_hlds__size_prof__V_57_57);
    }
#line 924 "size_prof.m"
  }
#line 919 "size_prof.m"
}

#line 850 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 850 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 850 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39)
#line 850 "size_prof.m"
{
#line 857 "size_prof.m"
  {
#line 857 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 857 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 854 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 854 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeInfoVarPrime_12;

#line 854 "size_prof.m"
    {
#line 854 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_40_40, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
    }
#line 854 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 854 "size_prof.m"
      {
#line 854 "size_prof.m"
        transform_hlds__size_prof__TypeInfoVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
#line 854 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 854 "size_prof.m"
      }
#line 857 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 855 "size_prof.m"
      {
#line 855 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 856 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 855 "size_prof.m"
      }
#line 857 "size_prof.m"
    else
#line 860 "size_prof.m"
      {
#line 860 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtor_13;
#line 860 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_14;

#line 857 "size_prof.m"
        {
#line 857 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_13, &transform_hlds__size_prof__ArgTypes_14);
        }
#line 860 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 858 "size_prof.m"
          {
#line 858 "size_prof.m"
            {
#line 858 "size_prof.m"
              transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_13, transform_hlds__size_prof__ArgTypes_14, (MR_Integer) 1, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 858 "size_prof.m"
              return;
            }
#line 858 "size_prof.m"
          }
#line 860 "size_prof.m"
        else
#line 872 "size_prof.m"
          {
#line 872 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor_72;
#line 872 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypes_73;

#line 860 "size_prof.m"
            {
#line 860 "size_prof.m"
              transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_72, &transform_hlds__size_prof__ArgTypes_73);
            }
#line 872 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 867 "size_prof.m"
              if ((transform_hlds__size_prof__ArgTypes_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "size_prof.m"
                {
#line 863 "size_prof.m"
                  {
#line 863 "size_prof.m"
                    transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 863 "size_prof.m"
                    return;
                  }
#line 862 "size_prof.m"
                }
#line 867 "size_prof.m"
              else
#line 868 "size_prof.m"
                {
#line 869 "size_prof.m"
                  {
#line 869 "size_prof.m"
                    transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_72, transform_hlds__size_prof__ArgTypes_73, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 869 "size_prof.m"
                    return;
                  }
#line 868 "size_prof.m"
                }
#line 872 "size_prof.m"
            else
#line 907 "size_prof.m"
              {
#line 907 "size_prof.m"
                MR_Word transform_hlds__size_prof__TVar_19;
#line 872 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_20_20;

#line 872 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Type_8)) == (MR_mktag((MR_Integer) 0)));
#line 872 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 872 "size_prof.m"
                  {
#line 872 "size_prof.m"
                    transform_hlds__size_prof__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 0)));
#line 872 "size_prof.m"
                    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 1)));
#line 873 "size_prof.m"
                    {
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TVarLocn_21;
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 873 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));

#line 873 "size_prof.m"
                      {
#line 873 "size_prof.m"
                        hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__TVar_19, &transform_hlds__size_prof__TVarLocn_21);
                      }
#line 877 "size_prof.m"
                      if (((MR_tag((MR_Word) transform_hlds__size_prof__TVarLocn_21)) == (MR_mktag((MR_Integer) 0))))
#line 875 "size_prof.m"
                        {
#line 875 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 876 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 876 "size_prof.m"
                          *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 875 "size_prof.m"
                        }
#line 877 "size_prof.m"
                      else
#line 878 "size_prof.m"
                        {
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TypeClassInfoVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 878 "size_prof.m"
                          MR_Integer transform_hlds__size_prof__Slot_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 1)));
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetTypeInfoMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet1_28;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotGoal_32;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotVar_33;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet_34;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes_35;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__PrivateBuiltin_36;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__ExtractGoal_37;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_49_49;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_53_53;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_59_59;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_61_61;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_62_62;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_63_63;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_64_64;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_67_67;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_145_145;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_146_146;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_147_147;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_148_148;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_149_149;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_150_150;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_153_153;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_154_154;
#line 878 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_155_155;
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 879 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 886 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetVar_27;
#line 882 "size_prof.m"
                          MR_Box transform_hlds__size_prof__conv1_TargetVar_27;
#line 895 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_151_151;
#line 895 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_152_152;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_167_167;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_168_168;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_169_169;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_170_170;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_171_171;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_172_172;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_173_173;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_174_174;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_175_175;
#line 898 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_176_176;

#line 882 "size_prof.m"
                          {
#line 882 "size_prof.m"
                            transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TargetTypeInfoMap_24, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv1_TargetVar_27);
                          }
#line 882 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 882 "size_prof.m"
                            {
#line 882 "size_prof.m"
                              transform_hlds__size_prof__TargetVar_27 = ((MR_Word) transform_hlds__size_prof__conv1_TargetVar_27);
#line 882 "size_prof.m"
                              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 882 "size_prof.m"
                            }
#line 886 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 883 "size_prof.m"
                            {
#line 883 "size_prof.m"
                              *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TargetVar_27;
#line 884 "size_prof.m"
                              transform_hlds__size_prof__VarSet1_28 = transform_hlds__size_prof__VarSet0_25;
#line 885 "size_prof.m"
                              transform_hlds__size_prof__VarTypes1_29 = transform_hlds__size_prof__VarTypes0_26;
#line 885 "size_prof.m"
                              transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 883 "size_prof.m"
                            }
#line 886 "size_prof.m"
                          else
#line 887 "size_prof.m"
                            {
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps_31;
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 887 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_134_134;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_135_135;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_136_136;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_137_137;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_138_138;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_139_139;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_140_140;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_141_141;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_142_142;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_144_144;
#line 891 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_143_143;

#line 888 "size_prof.m"
                              {
#line 888 "size_prof.m"
                                check_hlds__polymorphism__new_type_info_var_raw_9_p_0(transform_hlds__size_prof__Type_8, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__VarSet0_25, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_26, &transform_hlds__size_prof__VarTypes1_29, transform_hlds__size_prof__RttiVarMaps0_30, &transform_hlds__size_prof__RttiVarMaps_31);
                              }
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 891 "size_prof.m"
                              transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 891 "size_prof.m"
                              {
#line 891 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (transform_hlds__size_prof__V_138_138));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (transform_hlds__size_prof__V_139_139));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (transform_hlds__size_prof__V_141_141));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_31));
#line 891 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (transform_hlds__size_prof__V_144_144));
#line 891 "size_prof.m"
                              }
#line 887 "size_prof.m"
                            }
#line 893 "size_prof.m"
                          {
#line 893 "size_prof.m"
                            hlds__hlds_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Slot_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[2]), &transform_hlds__size_prof__SlotGoal_32, &transform_hlds__size_prof__SlotVar_33, transform_hlds__size_prof__VarSet1_28, &transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__VarTypes1_29, &transform_hlds__size_prof__VarTypes_35);
                          }
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
#line 895 "size_prof.m"
                          transform_hlds__size_prof__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
#line 896 "size_prof.m"
                          {
#line 896 "size_prof.m"
                            transform_hlds__size_prof__STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__V_145_145));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__V_146_146));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (transform_hlds__size_prof__V_147_147));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (transform_hlds__size_prof__V_148_148));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (transform_hlds__size_prof__V_149_149));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (transform_hlds__size_prof__V_150_150));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_34));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_35));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 896 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 896 "size_prof.m"
                          }
#line 897 "size_prof.m"
                          {
#line 897 "size_prof.m"
                            transform_hlds__size_prof__PrivateBuiltin_36 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                          }
#line 901 "size_prof.m"
                          {
#line 901 "size_prof.m"
                            transform_hlds__size_prof__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 0) = ((MR_Box) (*transform_hlds__size_prof__TypeInfoVar_9));
#line 901 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "size_prof.m"
                          }
#line 901 "size_prof.m"
                          {
#line 901 "size_prof.m"
                            transform_hlds__size_prof__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 0) = ((MR_Box) (transform_hlds__size_prof__SlotVar_33));
#line 901 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 1) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 901 "size_prof.m"
                          }
#line 898 "size_prof.m"
                          {
#line 898 "size_prof.m"
                            transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__TypeClassInfoVar_22));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 898 "size_prof.m"
                          }
#line 898 "size_prof.m"
                          {
#line 898 "size_prof.m"
                            transform_hlds__size_prof__V_61_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__TypeInfoVar_9);
                          }
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 898 "size_prof.m"
                          transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 898 "size_prof.m"
                          {
#line 898 "size_prof.m"
                            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__PrivateBuiltin_36, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_61_61, transform_hlds__size_prof__V_62_62, transform_hlds__size_prof__Context_7, &transform_hlds__size_prof__ExtractGoal_37);
                          }
#line 904 "size_prof.m"
                          {
#line 904 "size_prof.m"
                            transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_8, *transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                          }
#line 905 "size_prof.m"
                          {
#line 905 "size_prof.m"
                            transform_hlds__size_prof__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 0) = ((MR_Box) (transform_hlds__size_prof__ExtractGoal_37));
#line 905 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "size_prof.m"
                          }
#line 905 "size_prof.m"
                          {
#line 905 "size_prof.m"
                            MR_Word base;
#line 905 "size_prof.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "size_prof.m"
                            *transform_hlds__size_prof__TypeInfoGoals_10 = base;
#line 905 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SlotGoal_32));
#line 905 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 905 "size_prof.m"
                          }
#line 878 "size_prof.m"
                        }
#line 873 "size_prof.m"
                    }
#line 872 "size_prof.m"
                  }
#line 872 "size_prof.m"
                else
#line 911 "size_prof.m"
                  {
#line 911 "size_prof.m"
                    {
#line 911 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
#line 911 "size_prof.m"
                      return;
                    }
#line 911 "size_prof.m"
                  }
#line 907 "size_prof.m"
              }
#line 872 "size_prof.m"
          }
#line 860 "size_prof.m"
      }
#line 857 "size_prof.m"
  }
#line 850 "size_prof.m"
}

#line 818 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 818 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 818 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 818 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23)
#line 818 "size_prof.m"
{
#line 825 "size_prof.m"
  {
#line 825 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__KnownSize_9 == (MR_Integer) 0);

#line 825 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 823 "size_prof.m"
      {
#line 823 "size_prof.m"
        *transform_hlds__size_prof__SizeVar_11 = transform_hlds__size_prof__SizeVar0_8;
#line 824 "size_prof.m"
        *transform_hlds__size_prof__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_23 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_22;
#line 823 "size_prof.m"
      }
#line 825 "size_prof.m"
    else
#line 826 "size_prof.m"
      {
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeGoal_16;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeVar_17;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet1_18;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes1_19;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfModule_20;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__AddGoal_21;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_27_27;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 826 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 831 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_72_72;
#line 831 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_91_91;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_93_93;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_95_95;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_96_96;
#line 835 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_97_97;

#line 828 "size_prof.m"
        {
#line 828 "size_prof.m"
          hlds__hlds_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__KnownSize_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[0]), &transform_hlds__size_prof__KnownSizeGoal_16, &transform_hlds__size_prof__KnownSizeVar_17, transform_hlds__size_prof__VarSet0_14, &transform_hlds__size_prof__VarSet1_18, transform_hlds__size_prof__VarTypes0_15, &transform_hlds__size_prof__VarTypes1_19);
        }
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 831 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 832 "size_prof.m"
        {
#line 832 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__V_66_66));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_18));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_19));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 8) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 9) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 832 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 10) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 832 "size_prof.m"
        }
#line 833 "size_prof.m"
        {
#line 833 "size_prof.m"
          transform_hlds__size_prof__V_28_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 833 "size_prof.m"
        {
#line 833 "size_prof.m"
          transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_28_28, (MR_String) "FinalSizeVar", transform_hlds__size_prof__SizeVar_11, transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, transform_hlds__size_prof__STATE_VARIABLE_Info_23);
        }
#line 834 "size_prof.m"
        {
#line 834 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfModule_20 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 837 "size_prof.m"
        {
#line 837 "size_prof.m"
          transform_hlds__size_prof__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 0) = ((MR_Box) (*transform_hlds__size_prof__SizeVar_11));
#line 837 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "size_prof.m"
        }
#line 837 "size_prof.m"
        {
#line 837 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeVar_17));
#line 837 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 1) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 837 "size_prof.m"
        }
#line 835 "size_prof.m"
        {
#line 835 "size_prof.m"
          transform_hlds__size_prof__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_8));
#line 835 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 1) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 835 "size_prof.m"
        }
#line 835 "size_prof.m"
        {
#line 835 "size_prof.m"
          transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__SizeVar_11);
        }
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 0)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 1)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 2)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 3)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 4)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 5)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 6)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 7)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 8)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 9)));
#line 835 "size_prof.m"
        transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 10)));
#line 835 "size_prof.m"
        {
#line 835 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfModule_20, (MR_String) "term_size_plus", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[1]), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_10, &transform_hlds__size_prof__AddGoal_21);
        }
#line 840 "size_prof.m"
        {
#line 840 "size_prof.m"
          transform_hlds__size_prof__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (transform_hlds__size_prof__AddGoal_21));
#line 840 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "size_prof.m"
        }
#line 840 "size_prof.m"
        {
#line 840 "size_prof.m"
          MR_Word base;
#line 840 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "size_prof.m"
          *transform_hlds__size_prof__Goals_12 = base;
#line 840 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeGoal_16));
#line 840 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 840 "size_prof.m"
        }
#line 826 "size_prof.m"
      }
#line 825 "size_prof.m"
  }
#line 818 "size_prof.m"
}

#line 788 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 788 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 788 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 788 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 788 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 788 "size_prof.m"
{
#line 792 "size_prof.m"
  {
#line 792 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 792 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "size_prof.m"
      {
#line 792 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 792 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 792 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 792 "size_prof.m"
      }
#line 792 "size_prof.m"
    else
#line 794 "size_prof.m"
      {
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_27;
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgGoals_29;
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterGoals_33;
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 794 "size_prof.m"
        MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42;
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45;
#line 794 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 795 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 799 "size_prof.m"
        MR_Integer transform_hlds__size_prof__ArgSize_28;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 796 "size_prof.m"
        MR_Box transform_hlds__size_prof__conv0_ArgSize_28;

#line 795 "size_prof.m"
        {
#line 795 "size_prof.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_40_40, transform_hlds__size_prof__Arg_20, &transform_hlds__size_prof__Type_27);
        }
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 796 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 796 "size_prof.m"
        {
#line 796 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__V_41_41, ((MR_Box) (transform_hlds__size_prof__Arg_20)), &transform_hlds__size_prof__conv0_ArgSize_28);
        }
#line 796 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 796 "size_prof.m"
          {
#line 796 "size_prof.m"
            transform_hlds__size_prof__ArgSize_28 = ((MR_Integer) transform_hlds__size_prof__conv0_ArgSize_28);
#line 796 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 796 "size_prof.m"
          }
#line 799 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 797 "size_prof.m"
          {
#line 797 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = (transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2 + transform_hlds__size_prof__ArgSize_28);
#line 798 "size_prof.m"
            transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 798 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 797 "size_prof.m"
          }
#line 799 "size_prof.m"
        else
#line 801 "size_prof.m"
          {
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 799 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));

#line 799 "size_prof.m"
            {
#line 799 "size_prof.m"
              transform_hlds__size_prof__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__size_prof__V_43_43, transform_hlds__size_prof__Type_27);
            }
#line 801 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 800 "size_prof.m"
              {
#line 800 "size_prof.m"
                transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 800 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 800 "size_prof.m"
              }
#line 801 "size_prof.m"
            else
#line 802 "size_prof.m"
              {
#line 802 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoVar_30;
#line 802 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoGoals_31;
#line 802 "size_prof.m"
                MR_Word transform_hlds__size_prof__SizeGoal_32;
#line 802 "size_prof.m"
                MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 802 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_47_47;

#line 802 "size_prof.m"
                {
#line 802 "size_prof.m"
                  transform_hlds__size_prof__make_type_info_6_p_0(transform_hlds__size_prof__Context_6, transform_hlds__size_prof__Type_27, &transform_hlds__size_prof__TypeInfoVar_30, &transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
                }
#line 803 "size_prof.m"
                {
#line 803 "size_prof.m"
                  transform_hlds__size_prof__make_size_goal_8_p_0(transform_hlds__size_prof__TypeInfoVar_30, transform_hlds__size_prof__Arg_20, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__SizeGoal_32, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4, &transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
                }
#line 805 "size_prof.m"
                {
#line 805 "size_prof.m"
                  transform_hlds__size_prof__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoal_32));
#line 805 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "size_prof.m"
                }
#line 805 "size_prof.m"
                {
#line 805 "size_prof.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__V_47_47, &transform_hlds__size_prof__ArgGoals_29);
                }
#line 802 "size_prof.m"
              }
#line 805 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 801 "size_prof.m"
          }
#line 807 "size_prof.m"
        {
#line 807 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__Args_21, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__LaterGoals_33, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_9);
        }
#line 809 "size_prof.m"
        {
#line 809 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__ArgGoals_29, transform_hlds__size_prof__LaterGoals_33);
        }
#line 794 "size_prof.m"
      }
#line 792 "size_prof.m"
  }
#line 788 "size_prof.m"
}

#line 759 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 759 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 759 "size_prof.m"
{
#line 759 "size_prof.m"
  {
#line 759 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 759 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 759 "size_prof.m"
    {
#line 759 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__759__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 759 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 759 "size_prof.m"
  }
#line 759 "size_prof.m"
}

#line 746 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 746 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 746 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 746 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 746 "size_prof.m"
{
#line 751 "size_prof.m"
  {
#line 751 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_14;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_16;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_17;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_18;
#line 751 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_19;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_20;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_21;
#line 751 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 752 "size_prof.m"
    MR_Word transform_hlds__size_prof___NonDefArgs_15;

#line 752 "size_prof.m"
    {
#line 752 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_9, transform_hlds__size_prof__ArgModes_10, &transform_hlds__size_prof__DefinedArgs_14, &transform_hlds__size_prof___NonDefArgs_15, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28);
    }
#line 753 "size_prof.m"
    transform_hlds__size_prof__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 0)));
#line 753 "size_prof.m"
    transform_hlds__size_prof__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 1)));
#line 754 "size_prof.m"
    {
#line 754 "size_prof.m"
      transform_hlds__size_prof__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_17);
    }
#line 755 "size_prof.m"
    {
#line 755 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_14, (MR_Integer) 0, &transform_hlds__size_prof__KnownSize_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_20, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, &transform_hlds__size_prof__STATE_VARIABLE_Info_32_32);
    }
#line 761 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "size_prof.m"
      {
#line 758 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 759 "size_prof.m"
        {
#line 759 "size_prof.m"
          transform_hlds__size_prof__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 759 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
#line 759 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1));
#line 759 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 759 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_21));
#line 759 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "size_prof.m"
        }
#line 759 "size_prof.m"
        {
#line 759 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_52_52, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
        }
#line 760 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_12 = transform_hlds__size_prof__GoalExpr0_16;
#line 760 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 758 "size_prof.m"
      }
#line 761 "size_prof.m"
    else
#line 762 "size_prof.m"
      {
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_68_68;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_20, (MR_Integer) 0)));
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_23;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_24;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_25;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__UpdateGoal_26;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_27;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 762 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 768 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;

#line 763 "size_prof.m"
        {
#line 763 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_22, transform_hlds__size_prof__KnownSize_19, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__SizeVar_23, &transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__STATE_VARIABLE_Info_32_32, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
        }
#line 767 "size_prof.m"
        {
#line 767 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfBuiltin_25 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 770 "size_prof.m"
        {
#line 770 "size_prof.m"
          transform_hlds__size_prof__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_23));
#line 770 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "size_prof.m"
        }
#line 768 "size_prof.m"
        {
#line 768 "size_prof.m"
          transform_hlds__size_prof__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_8));
#line 768 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 768 "size_prof.m"
        }
#line 768 "size_prof.m"
        {
#line 768 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 0)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 1)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 2)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 3)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 4)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 5)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 6)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 7)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 8)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 9)));
#line 768 "size_prof.m"
        transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 10)));
#line 768 "size_prof.m"
        {
#line 768 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_25, (MR_String) "increment_size", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__size_prof__V_39_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_41_41, transform_hlds__size_prof__V_42_42, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__UpdateGoal_26);
        }
#line 8317 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 773 "size_prof.m"
        {
#line 773 "size_prof.m"
          transform_hlds__size_prof__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_11));
#line 773 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "size_prof.m"
        }
#line 773 "size_prof.m"
        {
#line 773 "size_prof.m"
          transform_hlds__size_prof__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__UpdateGoal_26));
#line 773 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "size_prof.m"
        }
#line 773 "size_prof.m"
        {
#line 773 "size_prof.m"
          transform_hlds__size_prof__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__V_49_49);
        }
#line 773 "size_prof.m"
        {
#line 773 "size_prof.m"
          transform_hlds__size_prof__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__V_48_48);
        }
#line 773 "size_prof.m"
        {
#line 773 "size_prof.m"
          transform_hlds__size_prof__Goals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__V_45_45, transform_hlds__size_prof__V_47_47);
        }
#line 774 "size_prof.m"
        {
#line 774 "size_prof.m"
          MR_Word base;
#line 774 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 774 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_12 = base;
#line 774 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 774 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 774 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_27));
#line 774 "size_prof.m"
        }
#line 762 "size_prof.m"
      }
#line 751 "size_prof.m"
  }
#line 746 "size_prof.m"
}

#line 670 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 670 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 670 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 670 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 670 "size_prof.m"
{
#line 675 "size_prof.m"
  {
#line 675 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 675 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_16;
#line 675 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_17;
#line 675 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_18;
#line 675 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_19;
#line 675 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 676 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 678 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_20_20;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;

#line 676 "size_prof.m"
    {
#line 676 "size_prof.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_30_30, transform_hlds__size_prof__Var_9, &transform_hlds__size_prof__VarType_16);
    }
#line 677 "size_prof.m"
    {
#line 677 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_16, &transform_hlds__size_prof__VarTypeCtor_17);
    }
#line 678 "size_prof.m"
    {
#line 678 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_17, &transform_hlds__size_prof__VarTypeCtorModule_18, &transform_hlds__size_prof__VarTypeCtorName_19, &transform_hlds__size_prof__V_20_20);
    }
#line 1308 "size_prof.m"
    {
#line 1308 "size_prof.m"
      transform_hlds__size_prof__V_47_47 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 1308 "size_prof.m"
    {
#line 1308 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_18, transform_hlds__size_prof__V_47_47);
    }
#line 1307 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1310 "size_prof.m"
      {
#line 1310 "size_prof.m"
        if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "type_info") == 0))
#line 1309 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
        else
#line 1310 "size_prof.m"
          if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "type_ctor_info") == 0))
#line 1310 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
          else
#line 1310 "size_prof.m"
            if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "typeclass_info") == 0))
#line 1311 "size_prof.m"
              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
            else
#line 1310 "size_prof.m"
              if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "base_typeclass_info") == 0))
#line 1312 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
              else
#line 1310 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1310 "size_prof.m"
      }
#line 684 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 683 "size_prof.m"
      {
#line 683 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 683 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 683 "size_prof.m"
        transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 683 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_28;
#line 683 "size_prof.m"
      }
#line 684 "size_prof.m"
    else
#line 692 "size_prof.m"
      {
#line 688 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25;
#line 688 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 686 "size_prof.m"
        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 685 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 686 "size_prof.m"
        else
#line 686 "size_prof.m"
          if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 686 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 686 "size_prof.m"
          else
#line 686 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_FALSE;
#line 687 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 687 "size_prof.m"
          {
#line 688 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_11)) == (MR_mktag((MR_Integer) 1)));
#line 688 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 688 "size_prof.m"
              {
#line 688 "size_prof.m"
                transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 0)));
#line 688 "size_prof.m"
                transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 1)));
#line 688 "size_prof.m"
              }
#line 687 "size_prof.m"
          }
#line 692 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 690 "size_prof.m"
          {
#line 690 "size_prof.m"
            transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(transform_hlds__size_prof__Var_9, transform_hlds__size_prof__Args_11, transform_hlds__size_prof__ArgModes_12, transform_hlds__size_prof__Goal0_13, transform_hlds__size_prof__GoalExpr_14, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
#line 690 "size_prof.m"
            return;
          }
#line 692 "size_prof.m"
        else
#line 695 "size_prof.m"
          {
#line 695 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 695 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap_55;
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1131 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_67_67;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_68_68;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_69_69;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_70_70;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_71_71;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72;
#line 696 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 1132 "size_prof.m"
            {
#line 1132 "size_prof.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__size_prof__KnownSizeMap0_54, &transform_hlds__size_prof__KnownSizeMap_55);
            }
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1133 "size_prof.m"
            transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1133 "size_prof.m"
            {
#line 1133 "size_prof.m"
              MR_Word base;
#line 1133 "size_prof.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = base;
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_55));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 1133 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_77_77));
#line 1133 "size_prof.m"
            }
#line 696 "size_prof.m"
            *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 696 "size_prof.m"
            transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 695 "size_prof.m"
          }
#line 692 "size_prof.m"
      }
#line 675 "size_prof.m"
  }
#line 670 "size_prof.m"
}

#line 608 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 608 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 608 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 608 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46)
#line 608 "size_prof.m"
{
#line 615 "size_prof.m"
  {
#line 615 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 615 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_28;
#line 615 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_29;
#line 615 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_30;
#line 615 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_31;
#line 615 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 7)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 0)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 1)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 2)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 3)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 4)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 5)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 6)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 8)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 9)));
#line 616 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 10)));
#line 618 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_32_32;
#line 1307 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83;

#line 616 "size_prof.m"
    {
#line 616 "size_prof.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__Var_19, &transform_hlds__size_prof__VarType_28);
    }
#line 617 "size_prof.m"
    {
#line 617 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_28, &transform_hlds__size_prof__VarTypeCtor_29);
    }
#line 618 "size_prof.m"
    {
#line 618 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_29, &transform_hlds__size_prof__VarTypeCtorModule_30, &transform_hlds__size_prof__VarTypeCtorName_31, &transform_hlds__size_prof__V_32_32);
    }
#line 1308 "size_prof.m"
    {
#line 1308 "size_prof.m"
      transform_hlds__size_prof__V_83_83 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 1308 "size_prof.m"
    {
#line 1308 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_30, transform_hlds__size_prof__V_83_83);
    }
#line 1307 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1310 "size_prof.m"
      {
#line 1310 "size_prof.m"
        if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0))
#line 1309 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
        else
#line 1310 "size_prof.m"
          if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0))
#line 1310 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
          else
#line 1310 "size_prof.m"
            if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "typeclass_info") == 0))
#line 1311 "size_prof.m"
              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
            else
#line 1310 "size_prof.m"
              if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "base_typeclass_info") == 0))
#line 1312 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1310 "size_prof.m"
              else
#line 1310 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1310 "size_prof.m"
      }
#line 652 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 648 "size_prof.m"
      {
#line 648 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;

#line 623 "size_prof.m"
        transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0);
#line 640 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 630 "size_prof.m"
          {
#line 630 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtorInfoVar_34;
#line 630 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypeInfoVars_35;
#line 625 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_33_33;

#line 625 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 1)));
#line 625 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 625 "size_prof.m"
              {
#line 625 "size_prof.m"
                transform_hlds__size_prof__V_33_33 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__ConsId_20), (MR_Integer) 1);
#line 626 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 626 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 626 "size_prof.m"
                  {
#line 626 "size_prof.m"
                    transform_hlds__size_prof__TypeCtorInfoVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 626 "size_prof.m"
                    transform_hlds__size_prof__ArgTypeInfoVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 626 "size_prof.m"
                  }
#line 625 "size_prof.m"
              }
#line 630 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 628 "size_prof.m"
              {
#line 628 "size_prof.m"
                transform_hlds__size_prof__record_known_type_info_5_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__TypeCtorInfoVar_34, transform_hlds__size_prof__ArgTypeInfoVars_35, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
              }
#line 630 "size_prof.m"
            else
#line 637 "size_prof.m"
              {
#line 637 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_36;
#line 637 "size_prof.m"
                MR_String transform_hlds__size_prof__N_37;
#line 637 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_38;

#line 631 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 631 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 631 "size_prof.m"
                  {
#line 631 "size_prof.m"
                    transform_hlds__size_prof__M_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 631 "size_prof.m"
                    transform_hlds__size_prof__N_37 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 631 "size_prof.m"
                    transform_hlds__size_prof__A_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 636 "size_prof.m"
                    {
#line 636 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_36, transform_hlds__size_prof__N_37, transform_hlds__size_prof__A_38, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 631 "size_prof.m"
                  }
#line 631 "size_prof.m"
                else
#line 638 "size_prof.m"
                  {
#line 638 "size_prof.m"
                    {
#line 638 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
#line 638 "size_prof.m"
                      return;
                    }
#line 638 "size_prof.m"
                  }
#line 637 "size_prof.m"
              }
#line 630 "size_prof.m"
          }
#line 640 "size_prof.m"
        else
#line 646 "size_prof.m"
          {
#line 640 "size_prof.m"
            transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0);
#line 646 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 643 "size_prof.m"
              {
#line 643 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_63;
#line 643 "size_prof.m"
                MR_String transform_hlds__size_prof__N_64;
#line 643 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_65;

#line 641 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 641 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 641 "size_prof.m"
                  {
#line 641 "size_prof.m"
                    transform_hlds__size_prof__M_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 641 "size_prof.m"
                    transform_hlds__size_prof__N_64 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 641 "size_prof.m"
                    transform_hlds__size_prof__A_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 642 "size_prof.m"
                    {
#line 642 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_63, transform_hlds__size_prof__N_64, transform_hlds__size_prof__A_65, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 641 "size_prof.m"
                  }
#line 641 "size_prof.m"
                else
#line 644 "size_prof.m"
                  {
#line 644 "size_prof.m"
                    {
#line 644 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
#line 644 "size_prof.m"
                      return;
                    }
#line 644 "size_prof.m"
                  }
#line 643 "size_prof.m"
              }
#line 646 "size_prof.m"
            else
#line 647 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_45;
#line 646 "size_prof.m"
          }
#line 649 "size_prof.m"
        {
#line 649 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 649 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "size_prof.m"
        }
#line 651 "size_prof.m"
        {
#line 651 "size_prof.m"
          MR_Word base;
#line 651 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 651 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_26 = base;
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 651 "size_prof.m"
        }
#line 648 "size_prof.m"
      }
#line 652 "size_prof.m"
    else
#line 659 "size_prof.m"
      {
#line 653 "size_prof.m"
        MR_Word transform_hlds__size_prof___Name_40;
#line 653 "size_prof.m"
        MR_Integer transform_hlds__size_prof___Arity_41;
#line 653 "size_prof.m"
        MR_Word transform_hlds__size_prof___TypeCtor_42;
#line 654 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 654 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;

#line 653 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 653 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 653 "size_prof.m"
          {
#line 653 "size_prof.m"
            transform_hlds__size_prof___Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 653 "size_prof.m"
            transform_hlds__size_prof___Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 653 "size_prof.m"
            transform_hlds__size_prof___TypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 654 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 654 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 654 "size_prof.m"
              {
#line 654 "size_prof.m"
                transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 654 "size_prof.m"
                transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 654 "size_prof.m"
              }
#line 653 "size_prof.m"
          }
#line 659 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 656 "size_prof.m"
          {
#line 656 "size_prof.m"
            transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(transform_hlds__size_prof__LHS_15, transform_hlds__size_prof__RHS_16, transform_hlds__size_prof__UniMode_17, transform_hlds__size_prof__UnifyContext_18, transform_hlds__size_prof__Var_19, transform_hlds__size_prof__ConsId_20, transform_hlds__size_prof__Args_21, transform_hlds__size_prof__ArgModes_22, transform_hlds__size_prof__How_23, transform_hlds__size_prof__Unique_24, transform_hlds__size_prof__GoalInfo_25, transform_hlds__size_prof__GoalExpr_26, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
#line 656 "size_prof.m"
            return;
          }
#line 659 "size_prof.m"
        else
#line 662 "size_prof.m"
          {
#line 662 "size_prof.m"
            MR_Word transform_hlds__size_prof__Unification_69;

#line 662 "size_prof.m"
            {
#line 662 "size_prof.m"
              transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_19, (MR_Integer) 0, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
            }
#line 663 "size_prof.m"
            {
#line 663 "size_prof.m"
              transform_hlds__size_prof__Unification_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 663 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "size_prof.m"
            }
#line 665 "size_prof.m"
            {
#line 665 "size_prof.m"
              MR_Word base;
#line 665 "size_prof.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 665 "size_prof.m"
              *transform_hlds__size_prof__GoalExpr_26 = base;
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_69));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 665 "size_prof.m"
            }
#line 662 "size_prof.m"
          }
#line 659 "size_prof.m"
      }
#line 615 "size_prof.m"
  }
#line 608 "size_prof.m"
}

#line 589 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 589 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 589 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 589 "size_prof.m"
{
#line 589 "size_prof.m"
  {
#line 589 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 589 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 589 "size_prof.m"
    {
#line 589 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__589__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 589 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_140));
#line 589 "size_prof.m"
  }
#line 589 "size_prof.m"
}

#line 567 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 567 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 567 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 567 "size_prof.m"
{
#line 576 "size_prof.m"
  {
#line 576 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstMainConsId_28;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstOtherConsIds_29;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal0_30;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal_31;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_47_47;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 6)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 7)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 8)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 9)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 10)));
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_70_70 = transform_hlds__size_prof__V_59_59;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = transform_hlds__size_prof__V_61_61;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__V_62_62;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = transform_hlds__size_prof__V_64_64;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__V_70_70;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = transform_hlds__size_prof__V_72_72;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_93_93 = transform_hlds__size_prof__V_82_82;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 576 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_95_95 = transform_hlds__size_prof__V_84_84;
#line 577 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 577 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 577 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 577 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 577 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 5)));
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_113_113;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_114_114;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_115_115;
#line 584 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_116_116;

#line 581 "size_prof.m"
    {
#line 581 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 8) = ((MR_Box) (transform_hlds__size_prof__V_93_93));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 581 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 10) = ((MR_Box) (transform_hlds__size_prof__V_95_95));
#line 581 "size_prof.m"
    }
#line 582 "size_prof.m"
    transform_hlds__size_prof__FirstMainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 0)));
#line 582 "size_prof.m"
    transform_hlds__size_prof__FirstOtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 1)));
#line 582 "size_prof.m"
    transform_hlds__size_prof__FirstGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 2)));
#line 583 "size_prof.m"
    {
#line 583 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__FirstGoal0_30, &transform_hlds__size_prof__FirstGoal_31, transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, &transform_hlds__size_prof__STATE_VARIABLE_Info_48_48);
    }
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 586 "size_prof.m"
    {
#line 586 "size_prof.m"
      MR_Word base;
#line 586 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "size_prof.m"
      *transform_hlds__size_prof__First_16 = base;
#line 586 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__FirstMainConsId_28));
#line 586 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__FirstOtherConsIds_29));
#line 586 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__FirstGoal_31));
#line 586 "size_prof.m"
    }
#line 599 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "size_prof.m"
      {
#line 601 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 603 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 603 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_42 = transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 600 "size_prof.m"
      }
#line 599 "size_prof.m"
    else
#line 588 "size_prof.m"
      {
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_142_142 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_36;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_37;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_38;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_39;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_40;
#line 588 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_134_134;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_135_135;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_136_136;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_137_137;
#line 591 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;

#line 589 "size_prof.m"
        {
#line 589 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeCtorInfo_143_143, (MR_Word) &transform_hlds__size_prof_scalar_common_2[8], transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMapFirst_32, &transform_hlds__size_prof__LaterTargetTypeInfoMap_36);
        }
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 591 "size_prof.m"
        transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 591 "size_prof.m"
        {
#line 591 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_127_127));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_36));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 591 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 591 "size_prof.m"
        }
#line 592 "size_prof.m"
        {
#line 592 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__Head0_34, &transform_hlds__size_prof__Head_37, transform_hlds__size_prof__Tail0_35, &transform_hlds__size_prof__Tail_38, transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, transform_hlds__size_prof__STATE_VARIABLE_Info_42, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_39, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 596 "size_prof.m"
        {
#line 596 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_143_143, transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeInfoMapFirst_32, transform_hlds__size_prof__TypeInfoMapLater_39);
        }
#line 597 "size_prof.m"
        {
#line 597 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_142_142, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_33, transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 598 "size_prof.m"
        {
#line 598 "size_prof.m"
          MR_Word base;
#line 598 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 598 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_37));
#line 598 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_38));
#line 598 "size_prof.m"
        }
#line 588 "size_prof.m"
      }
#line 576 "size_prof.m"
  }
#line 567 "size_prof.m"
}

#line 548 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 548 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 548 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 548 "size_prof.m"
{
#line 548 "size_prof.m"
  {
#line 548 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 548 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 548 "size_prof.m"
    {
#line 548 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__548__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 548 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_136));
#line 548 "size_prof.m"
  }
#line 548 "size_prof.m"
}

#line 529 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 529 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 529 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 529 "size_prof.m"
{
#line 537 "size_prof.m"
  {
#line 537 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_43_43;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 4)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 6)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 7)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 8)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 9)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 10)));
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_66_66 = transform_hlds__size_prof__V_55_55;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_68_68 = transform_hlds__size_prof__V_57_57;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = transform_hlds__size_prof__V_63_63;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = transform_hlds__size_prof__V_65_65;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__V_66_66;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = transform_hlds__size_prof__V_68_68;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__V_79_79;
#line 537 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 538 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 538 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 538 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 538 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 538 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 5)));
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_106_106;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 544 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;

#line 542 "size_prof.m"
    {
#line 542 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 542 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 542 "size_prof.m"
    }
#line 543 "size_prof.m"
    {
#line 543 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__First0_15, transform_hlds__size_prof__First_16, transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
    }
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 544 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 558 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "size_prof.m"
      {
#line 560 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 562 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 562 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_38 = transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 559 "size_prof.m"
      }
#line 558 "size_prof.m"
    else
#line 547 "size_prof.m"
      {
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_138_138 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_32;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_33;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_34;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_35;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_36;
#line 547 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_123_123;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_124_124;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_125_125;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_126_126;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 550 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;

#line 548 "size_prof.m"
        {
#line 548 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeCtorInfo_139_139, (MR_Word) &transform_hlds__size_prof_scalar_common_2[7], transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TargetTypeInfoMap_20, &transform_hlds__size_prof__LaterTargetTypeInfoMap_32);
        }
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 550 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 550 "size_prof.m"
        {
#line 550 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (transform_hlds__size_prof__V_123_123));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (transform_hlds__size_prof__V_124_124));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (transform_hlds__size_prof__V_126_126));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_32));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 8) = ((MR_Box) (transform_hlds__size_prof__V_131_131));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 550 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 550 "size_prof.m"
        }
#line 551 "size_prof.m"
        {
#line 551 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__Head0_30, &transform_hlds__size_prof__Head_33, transform_hlds__size_prof__Tail0_31, &transform_hlds__size_prof__Tail_34, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_38, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_35, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 555 "size_prof.m"
        {
#line 555 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_139_139, transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TypeInfoMapLater_35);
        }
#line 556 "size_prof.m"
        {
#line 556 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_138_138, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_29, transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 557 "size_prof.m"
        {
#line 557 "size_prof.m"
          MR_Word base;
#line 557 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 557 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_33));
#line 557 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_34));
#line 557 "size_prof.m"
        }
#line 547 "size_prof.m"
      }
#line 537 "size_prof.m"
  }
#line 529 "size_prof.m"
}

#line 512 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 512 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 512 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 512 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8)
#line 512 "size_prof.m"
{
#line 516 "size_prof.m"
  {
#line 516 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 516 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "size_prof.m"
      {
#line 516 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 516 "size_prof.m"
      }
#line 516 "size_prof.m"
    else
#line 518 "size_prof.m"
      {
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_18;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_19;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_30_30;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_31_31;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 7)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 8)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 9)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 10)));
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = transform_hlds__size_prof__V_35_35;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = transform_hlds__size_prof__V_36_36;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = transform_hlds__size_prof__TargetTypeInfoMap0_5;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = transform_hlds__size_prof__V_39_39;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = transform_hlds__size_prof__V_40_40;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = transform_hlds__size_prof__V_41_41;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = transform_hlds__size_prof__V_42_42;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = transform_hlds__size_prof__V_43_43;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = transform_hlds__size_prof__TypeInfoMap0_6;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = transform_hlds__size_prof__V_46_46;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = transform_hlds__size_prof__V_47_47;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = transform_hlds__size_prof__V_48_48;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = transform_hlds__size_prof__V_50_50;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62 = transform_hlds__size_prof__V_51_51;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__V_53_53;
#line 518 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 519 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 519 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 519 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 519 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));

#line 522 "size_prof.m"
        {
#line 522 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_7));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_8));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (transform_hlds__size_prof__V_62_62));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 522 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (transform_hlds__size_prof__V_65_65));
#line 522 "size_prof.m"
        }
#line 523 "size_prof.m"
        {
#line 523 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_16, &transform_hlds__size_prof__Goal_18, transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, &transform_hlds__size_prof__STATE_VARIABLE_Info_31_31);
        }
#line 524 "size_prof.m"
        {
#line 524 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_17, &transform_hlds__size_prof__Goals_19, transform_hlds__size_prof__STATE_VARIABLE_Info_31_31, transform_hlds__size_prof__STATE_VARIABLE_Info_4, transform_hlds__size_prof__TargetTypeInfoMap0_5, transform_hlds__size_prof__TypeInfoMap0_6, transform_hlds__size_prof__TypeCtorMap0_7, transform_hlds__size_prof__KnownSizeMap0_8);
        }
#line 518 "size_prof.m"
        {
#line 518 "size_prof.m"
          MR_Word base;
#line 518 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 518 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_18));
#line 518 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_19));
#line 518 "size_prof.m"
        }
#line 518 "size_prof.m"
      }
#line 516 "size_prof.m"
  }
#line 512 "size_prof.m"
}

#line 493 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 493 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 493 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 493 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 493 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4)
#line 493 "size_prof.m"
{
#line 496 "size_prof.m"
  {
#line 496 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 496 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "size_prof.m"
      {
#line 496 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 496 "size_prof.m"
      }
#line 496 "size_prof.m"
    else
#line 497 "size_prof.m"
      {
#line 497 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 497 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_12;
#line 497 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_13;
#line 497 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_18_18;
#line 506 "size_prof.m"
        MR_Word transform_hlds__size_prof__SubConj_14;
#line 500 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 500 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;
#line 500 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15;

#line 498 "size_prof.m"
        {
#line 498 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_8, &transform_hlds__size_prof__Goal_12, transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, &transform_hlds__size_prof__STATE_VARIABLE_Info_18_18);
        }
#line 499 "size_prof.m"
        {
#line 499 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_9, &transform_hlds__size_prof__Goals_13, transform_hlds__size_prof__STATE_VARIABLE_Info_18_18, transform_hlds__size_prof__STATE_VARIABLE_Info_4);
        }
#line 500 "size_prof.m"
        transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 0)));
#line 500 "size_prof.m"
        transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 1)));
#line 500 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 500 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 500 "size_prof.m"
          {
#line 500 "size_prof.m"
            transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 1)));
#line 500 "size_prof.m"
            transform_hlds__size_prof__SubConj_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 2)));
#line 500 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_21_21 == (MR_Integer) 0);
#line 500 "size_prof.m"
          }
#line 506 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 505 "size_prof.m"
          {
#line 505 "size_prof.m"
            {
#line 505 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__SubConj_14, transform_hlds__size_prof__Goals_13);
            }
#line 505 "size_prof.m"
          }
#line 506 "size_prof.m"
        else
#line 507 "size_prof.m"
          {
#line 507 "size_prof.m"
            MR_Word base;
#line 507 "size_prof.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "size_prof.m"
            *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 507 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_12));
#line 507 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_13));
#line 507 "size_prof.m"
          }
#line 497 "size_prof.m"
      }
#line 496 "size_prof.m"
  }
#line 493 "size_prof.m"
}

#line 434 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 434 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 434 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 434 "size_prof.m"
{
#line 434 "size_prof.m"
  {
#line 434 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 434 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 434 "size_prof.m"
    {
#line 434 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__434__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 434 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_1039));
#line 434 "size_prof.m"
  }
#line 434 "size_prof.m"
}

#line 290 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 290 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 290 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1)
#line 290 "size_prof.m"
{
#line 290 "size_prof.m"
  {
#line 290 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 290 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 290 "size_prof.m"
    {
#line 290 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1));
    }
#line 290 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 290 "size_prof.m"
  }
#line 290 "size_prof.m"
}

#line 270 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 270 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 270 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 270 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 270 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96)
#line 270 "size_prof.m"
{
#line 273 "size_prof.m"
  {
#line 273 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 273 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 0)));
#line 273 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 1)));
#line 273 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr_22;

#line 309 "size_prof.m"
    if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 455 "size_prof.m"
      {
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__NegGoal0_87 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__GoalExpr0_8), (MR_Integer) 0);
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__NegGoal_88;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_103_103;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap0_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorMap0_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMap0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeCtorMap0_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_960_960;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_961_961;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_962_962;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_963_963;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_964_964;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_969_969;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_971_971;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_972_972;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_973_973;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_974_974;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_975_975;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_977_977;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_980_980;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_982_982;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_983_983;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_984_984;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_985_985;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_986_986;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_988_988;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_990_990;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_991_991;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_993_993;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_994_994;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_995_995;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_996_996;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_997_997;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_998_998;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_999_999;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1001_1001;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1002_1002;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1004_1004;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1005_1005;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1006_1006;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1007_1007;
#line 455 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1008_1008;
#line 456 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_899_899 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 456 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_900_900 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 456 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_901_901 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 456 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_902_902 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 456 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_903_903 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_954_954;
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_955_955;
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_956_956;
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_957_957;
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_958_958;
#line 466 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_959_959;

#line 462 "size_prof.m"
        {
#line 462 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__NegGoal0_87, &transform_hlds__size_prof__NegGoal_88, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_103_103);
        }
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_954_954 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_955_955 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_956_956 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_957_957 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_958_958 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_959_959 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_960_960 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 6)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_961_961 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 7)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_962_962 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 8)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_963_963 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 9)));
#line 466 "size_prof.m"
        transform_hlds__size_prof__V_964_964 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 10)));
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_969_969 = transform_hlds__size_prof__TargetTypeInfoMap0_245;
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_971_971 = transform_hlds__size_prof__V_960_960;
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_972_972 = transform_hlds__size_prof__V_961_961;
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_973_973 = transform_hlds__size_prof__V_962_962;
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_974_974 = transform_hlds__size_prof__V_963_963;
#line 467 "size_prof.m"
        transform_hlds__size_prof__V_975_975 = transform_hlds__size_prof__V_964_964;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_977_977 = transform_hlds__size_prof__TypeInfoMap0_246;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_980_980 = transform_hlds__size_prof__V_969_969;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_982_982 = transform_hlds__size_prof__V_971_971;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_983_983 = transform_hlds__size_prof__V_972_972;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_984_984 = transform_hlds__size_prof__V_973_973;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_985_985 = transform_hlds__size_prof__V_974_974;
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_986_986 = transform_hlds__size_prof__V_975_975;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_988_988 = transform_hlds__size_prof__V_977_977;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_990_990 = transform_hlds__size_prof__RevTypeInfoMap0_247;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_991_991 = transform_hlds__size_prof__V_980_980;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_993_993 = transform_hlds__size_prof__V_982_982;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_994_994 = transform_hlds__size_prof__V_983_983;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_995_995 = transform_hlds__size_prof__V_984_984;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_996_996 = transform_hlds__size_prof__V_985_985;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_997_997 = transform_hlds__size_prof__V_986_986;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_998_998 = transform_hlds__size_prof__TypeCtorMap0_248;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_999_999 = transform_hlds__size_prof__V_988_988;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1001_1001 = transform_hlds__size_prof__V_990_990;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1002_1002 = transform_hlds__size_prof__V_991_991;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1004_1004 = transform_hlds__size_prof__V_993_993;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1005_1005 = transform_hlds__size_prof__V_994_994;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1006_1006 = transform_hlds__size_prof__V_995_995;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1007_1007 = transform_hlds__size_prof__V_996_996;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_1008_1008 = transform_hlds__size_prof__V_997_997;
#line 471 "size_prof.m"
        {
#line 471 "size_prof.m"
          MR_Word base;
#line 471 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 471 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_998_998));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_999_999));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_250));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_1001_1001));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_1002_1002));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_249));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_1004_1004));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_1005_1005));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_1006_1006));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_1007_1007));
#line 471 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_1008_1008));
#line 471 "size_prof.m"
        }
#line 472 "size_prof.m"
        transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__size_prof__NegGoal_88);
#line 455 "size_prof.m"
      }
#line 309 "size_prof.m"
    else
#line 309 "size_prof.m"
      if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 310 "size_prof.m"
        {
#line 310 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeCtorInfo_1022_1022 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 310 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeInfo_1023_1023 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 310 "size_prof.m"
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_172_172;
#line 310 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_173_173;
#line 310 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_175_175;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_252_252;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_253_253;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_254_254;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_255_255;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_256_256;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_257_257;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_258_258;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_259_259;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_260_260;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_261_261;
#line 314 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_251_251;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_262_262;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_263_263;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_265_265;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_266_266;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_267_267;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_268_268;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_269_269;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_270_270;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_271_271;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_272_272;
#line 315 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_264_264;

#line 314 "size_prof.m"
          {
#line 314 "size_prof.m"
            transform_hlds__size_prof__V_173_173 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1022_1022, transform_hlds__size_prof__TypeInfo_1023_1023);
          }
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 314 "size_prof.m"
          transform_hlds__size_prof__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 314 "size_prof.m"
          {
#line 314 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 0) = ((MR_Box) (transform_hlds__size_prof__V_173_173));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 1) = ((MR_Box) (transform_hlds__size_prof__V_252_252));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 2) = ((MR_Box) (transform_hlds__size_prof__V_253_253));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 3) = ((MR_Box) (transform_hlds__size_prof__V_254_254));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 4) = ((MR_Box) (transform_hlds__size_prof__V_255_255));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 5) = ((MR_Box) (transform_hlds__size_prof__V_256_256));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 6) = ((MR_Box) (transform_hlds__size_prof__V_257_257));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 7) = ((MR_Box) (transform_hlds__size_prof__V_258_258));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 8) = ((MR_Box) (transform_hlds__size_prof__V_259_259));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 9) = ((MR_Box) (transform_hlds__size_prof__V_260_260));
#line 314 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 10) = ((MR_Box) (transform_hlds__size_prof__V_261_261));
#line 314 "size_prof.m"
          }
#line 315 "size_prof.m"
          {
#line 315 "size_prof.m"
            transform_hlds__size_prof__V_175_175 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1023_1023, transform_hlds__size_prof__TypeCtorInfo_1022_1022);
          }
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 0)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 1)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 2)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 3)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 4)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 5)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 6)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 7)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 8)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 9)));
#line 315 "size_prof.m"
          transform_hlds__size_prof__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 10)));
#line 315 "size_prof.m"
          {
#line 315 "size_prof.m"
            MR_Word base;
#line 315 "size_prof.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 315 "size_prof.m"
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_262_262));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_263_263));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_175_175));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_265_265));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_266_266));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_267_267));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_268_268));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_269_269));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_270_270));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_271_271));
#line 315 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_272_272));
#line 315 "size_prof.m"
          }
#line 316 "size_prof.m"
          transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 310 "size_prof.m"
        }
#line 309 "size_prof.m"
      else
#line 309 "size_prof.m"
        if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 276 "size_prof.m"
          {
#line 276 "size_prof.m"
            MR_Word transform_hlds__size_prof__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)));
#line 276 "size_prof.m"
            MR_Word transform_hlds__size_prof__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 276 "size_prof.m"
            MR_Word transform_hlds__size_prof__UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 276 "size_prof.m"
            MR_Word transform_hlds__size_prof__Unify0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 276 "size_prof.m"
            MR_Word transform_hlds__size_prof__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));

#line 282 "size_prof.m"
            if (((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 0))))
#line 278 "size_prof.m"
              {
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__How_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__Unique_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 278 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 6)));

#line 279 "size_prof.m"
                {
#line 279 "size_prof.m"
                  transform_hlds__size_prof__size_prof_process_construct_14_p_0(transform_hlds__size_prof__LHS_10, transform_hlds__size_prof__RHS_11, transform_hlds__size_prof__UniMode_12, transform_hlds__size_prof__UnifyContext_14, transform_hlds__size_prof__Var_15, transform_hlds__size_prof__ConsId_16, transform_hlds__size_prof__Args_17, transform_hlds__size_prof__ArgModes_18, transform_hlds__size_prof__How_19, transform_hlds__size_prof__Unique_20, transform_hlds__size_prof__GoalInfo0_9, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                }
#line 278 "size_prof.m"
              }
#line 282 "size_prof.m"
            else
#line 282 "size_prof.m"
              if (((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 1))))
#line 284 "size_prof.m"
                {
#line 284 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 284 "size_prof.m"
                  MR_Word transform_hlds__size_prof__ConsId_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 284 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Args_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 284 "size_prof.m"
                  MR_Word transform_hlds__size_prof__ArgModes_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 283 "size_prof.m"
                  MR_Word transform_hlds__size_prof___CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 283 "size_prof.m"
                  MR_Word transform_hlds__size_prof___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 291 "size_prof.m"
                  MR_Word transform_hlds__size_prof__BindingArgModes_25;
#line 291 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_179_179;
#line 292 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_26_26;
#line 292 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_27_27;

#line 290 "size_prof.m"
                  {
#line 290 "size_prof.m"
                    transform_hlds__size_prof__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0]));
#line 290 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1));
#line 290 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 3) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_95));
#line 290 "size_prof.m"
                  }
#line 290 "size_prof.m"
                  {
#line 290 "size_prof.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, transform_hlds__size_prof__V_179_179, transform_hlds__size_prof__ArgModes_185, &transform_hlds__size_prof__BindingArgModes_25);
                  }
#line 292 "size_prof.m"
                  transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__BindingArgModes_25)) == (MR_mktag((MR_Integer) 1)));
#line 292 "size_prof.m"
                  if (transform_hlds__size_prof__succeeded)
#line 292 "size_prof.m"
                    {
#line 292 "size_prof.m"
                      transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 0)));
#line 292 "size_prof.m"
                      transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 1)));
#line 294 "size_prof.m"
                      {
#line 294 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(transform_hlds__size_prof__Var_182, transform_hlds__size_prof__ConsId_183, transform_hlds__size_prof__Args_184, transform_hlds__size_prof__ArgModes_185, transform_hlds__size_prof__Goal0_5, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                      }
#line 292 "size_prof.m"
                    }
#line 292 "size_prof.m"
                  else
#line 297 "size_prof.m"
                    {
#line 297 "size_prof.m"
                      transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 297 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 297 "size_prof.m"
                    }
#line 284 "size_prof.m"
                }
#line 282 "size_prof.m"
              else
#line 282 "size_prof.m"
                if (((((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 305 "size_prof.m"
                  {
#line 307 "size_prof.m"
                    {
#line 307 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
#line 307 "size_prof.m"
                      return;
                    }
#line 305 "size_prof.m"
                  }
#line 282 "size_prof.m"
                else
#line 302 "size_prof.m"
                  {
#line 303 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 303 "size_prof.m"
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 302 "size_prof.m"
                  }
#line 276 "size_prof.m"
          }
#line 309 "size_prof.m"
        else
#line 309 "size_prof.m"
          if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 326 "size_prof.m"
            {
#line 327 "size_prof.m"
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 327 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 326 "size_prof.m"
            }
#line 309 "size_prof.m"
          else
#line 309 "size_prof.m"
            if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 329 "size_prof.m"
              {
#line 329 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConjType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 329 "size_prof.m"
                MR_Word transform_hlds__size_prof__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 329 "size_prof.m"
                MR_Word transform_hlds__size_prof__Goals_55;

#line 333 "size_prof.m"
                if ((transform_hlds__size_prof__ConjType_53 == (MR_Integer) 1))
#line 334 "size_prof.m"
                  {
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1026_1026;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfo_1027_1027;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfoMap0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__KnownSizeMap0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_158_158;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_161_161;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_162_162;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_163_163;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_165_165;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_345_345;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_347_347;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_350_350;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_351_351;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_352_352;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_353_353;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_354_354;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_355_355;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_356_356;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_358_358;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_360_360;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_361_361;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_362_362;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_363_363;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_364_364;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_365_365;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_366_366;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_389_389;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_390_390;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_392_392;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_393_393;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_395_395;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_396_396;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_397_397;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_398_398;
#line 334 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_399_399;
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 339 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 346 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_346_346;
#line 346 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_348_348;
#line 346 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_349_349;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_379_379;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_380_380;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_381_381;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_382_382;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_383_383;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_384_384;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_385_385;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_386_386;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_387_387;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_388_388;
#line 349 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_378_378;
#line 350 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_391_391;
#line 350 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_394_394;

#line 344 "size_prof.m"
                    {
#line 344 "size_prof.m"
                      transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, transform_hlds__size_prof__TargetTypeInfoMap0_56, transform_hlds__size_prof__TypeInfoMap0_57, transform_hlds__size_prof__TypeCtorMap0_59, transform_hlds__size_prof__KnownSizeMap0_60);
                    }
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 0)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 1)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 2)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 3)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 4)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 5)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 6)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 7)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 8)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 9)));
#line 346 "size_prof.m"
                    transform_hlds__size_prof__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 10)));
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_356_356 = transform_hlds__size_prof__V_345_345;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_358_358 = transform_hlds__size_prof__V_347_347;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_360_360 = transform_hlds__size_prof__TargetTypeInfoMap0_56;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_361_361 = transform_hlds__size_prof__V_350_350;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_362_362 = transform_hlds__size_prof__V_351_351;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_363_363 = transform_hlds__size_prof__V_352_352;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_364_364 = transform_hlds__size_prof__V_353_353;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_365_365 = transform_hlds__size_prof__V_354_354;
#line 347 "size_prof.m"
                    transform_hlds__size_prof__V_366_366 = transform_hlds__size_prof__V_355_355;
#line 348 "size_prof.m"
                    {
#line 348 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 0) = ((MR_Box) (transform_hlds__size_prof__V_356_356));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_57));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 2) = ((MR_Box) (transform_hlds__size_prof__V_358_358));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_58));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 4) = ((MR_Box) (transform_hlds__size_prof__V_360_360));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 5) = ((MR_Box) (transform_hlds__size_prof__V_361_361));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 6) = ((MR_Box) (transform_hlds__size_prof__V_362_362));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 7) = ((MR_Box) (transform_hlds__size_prof__V_363_363));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 8) = ((MR_Box) (transform_hlds__size_prof__V_364_364));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 9) = ((MR_Box) (transform_hlds__size_prof__V_365_365));
#line 348 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 10) = ((MR_Box) (transform_hlds__size_prof__V_366_366));
#line 348 "size_prof.m"
                    }
#line 11045 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeCtorInfo_1026_1026 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11047 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_1027_1027 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 349 "size_prof.m"
                    {
#line 349 "size_prof.m"
                      transform_hlds__size_prof__V_163_163 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1026_1026, transform_hlds__size_prof__TypeInfo_1027_1027);
                    }
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 0)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 1)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 2)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 3)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 4)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 5)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 6)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 7)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 8)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 9)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 10)));
#line 349 "size_prof.m"
                    {
#line 349 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 0) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 1) = ((MR_Box) (transform_hlds__size_prof__V_379_379));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 2) = ((MR_Box) (transform_hlds__size_prof__V_380_380));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 3) = ((MR_Box) (transform_hlds__size_prof__V_381_381));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 4) = ((MR_Box) (transform_hlds__size_prof__V_382_382));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 5) = ((MR_Box) (transform_hlds__size_prof__V_383_383));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 6) = ((MR_Box) (transform_hlds__size_prof__V_384_384));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 7) = ((MR_Box) (transform_hlds__size_prof__V_385_385));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 8) = ((MR_Box) (transform_hlds__size_prof__V_386_386));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 9) = ((MR_Box) (transform_hlds__size_prof__V_387_387));
#line 349 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 10) = ((MR_Box) (transform_hlds__size_prof__V_388_388));
#line 349 "size_prof.m"
                    }
#line 350 "size_prof.m"
                    {
#line 350 "size_prof.m"
                      transform_hlds__size_prof__V_165_165 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1027_1027, transform_hlds__size_prof__TypeCtorInfo_1026_1026);
                    }
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 0)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 1)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 2)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 3)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 4)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 5)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 6)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 7)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 8)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 9)));
#line 350 "size_prof.m"
                    transform_hlds__size_prof__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 10)));
#line 351 "size_prof.m"
                    {
#line 351 "size_prof.m"
                      MR_Word base;
#line 351 "size_prof.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 351 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_389_389));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_390_390));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_165_165));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_392_392));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_393_393));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_60));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_395_395));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_396_396));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_397_397));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_398_398));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_399_399));
#line 351 "size_prof.m"
                    }
#line 334 "size_prof.m"
                  }
#line 333 "size_prof.m"
                else
#line 332 "size_prof.m"
                  {
#line 332 "size_prof.m"
                    transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
#line 353 "size_prof.m"
                {
#line 353 "size_prof.m"
                  transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 353 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 353 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__ConjType_53));
#line 353 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_55));
#line 353 "size_prof.m"
                }
#line 329 "size_prof.m"
              }
#line 309 "size_prof.m"
            else
#line 309 "size_prof.m"
              if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 384 "size_prof.m"
                {
#line 384 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 384 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Disjuncts_73;
#line 384 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_143_143;
#line 384 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_144_144;

#line 405 "size_prof.m"
                  if ((transform_hlds__size_prof__Disjuncts0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "size_prof.m"
                    {
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1032_1032 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1033_1033 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1034_1034;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_129_129;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_130_130;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_131_131;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_132_132;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_133_133;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_134_134;
#line 406 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_136_136;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_619_619;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_621_621;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_622_622;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_623_623;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_624_624;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_625_625;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_626_626;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_627_627;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_628_628;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_629_629;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_620_620;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_630_630;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_631_631;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_633_633;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_634_634;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_635_635;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_636_636;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_637_637;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_638_638;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_639_639;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_640_640;
#line 409 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_632_632;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_641_641;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_643_643;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_644_644;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_645_645;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_646_646;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_647_647;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_648_648;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_649_649;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_650_650;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_651_651;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_642_642;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_652_652;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_653_653;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_655_655;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_656_656;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_657_657;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_658_658;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_659_659;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_660_660;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_661_661;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_662_662;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_654_654;

#line 408 "size_prof.m"
                      {
#line 408 "size_prof.m"
                        transform_hlds__size_prof__V_130_130 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                      }
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_619_619 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_620_620 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_621_621 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_622_622 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_623_623 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_624_624 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_625_625 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_626_626 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_627_627 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_628_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 408 "size_prof.m"
                      transform_hlds__size_prof__V_629_629 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 408 "size_prof.m"
                      {
#line 408 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 0) = ((MR_Box) (transform_hlds__size_prof__V_619_619));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 1) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 2) = ((MR_Box) (transform_hlds__size_prof__V_621_621));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 3) = ((MR_Box) (transform_hlds__size_prof__V_622_622));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 4) = ((MR_Box) (transform_hlds__size_prof__V_623_623));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 5) = ((MR_Box) (transform_hlds__size_prof__V_624_624));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 6) = ((MR_Box) (transform_hlds__size_prof__V_625_625));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 7) = ((MR_Box) (transform_hlds__size_prof__V_626_626));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 8) = ((MR_Box) (transform_hlds__size_prof__V_627_627));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 9) = ((MR_Box) (transform_hlds__size_prof__V_628_628));
#line 408 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 10) = ((MR_Box) (transform_hlds__size_prof__V_629_629));
#line 408 "size_prof.m"
                      }
#line 11369 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeCtorInfo_1034_1034 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 409 "size_prof.m"
                      {
#line 409 "size_prof.m"
                        transform_hlds__size_prof__V_132_132 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                      }
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_630_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 0)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_631_631 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 1)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_632_632 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 2)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_633_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 3)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_634_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 4)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_635_635 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 5)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_636_636 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 6)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_637_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 7)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_638_638 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 8)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 9)));
#line 409 "size_prof.m"
                      transform_hlds__size_prof__V_640_640 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 10)));
#line 409 "size_prof.m"
                      {
#line 409 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 0) = ((MR_Box) (transform_hlds__size_prof__V_630_630));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 1) = ((MR_Box) (transform_hlds__size_prof__V_631_631));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 2) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 3) = ((MR_Box) (transform_hlds__size_prof__V_633_633));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 4) = ((MR_Box) (transform_hlds__size_prof__V_634_634));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 5) = ((MR_Box) (transform_hlds__size_prof__V_635_635));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 6) = ((MR_Box) (transform_hlds__size_prof__V_636_636));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 7) = ((MR_Box) (transform_hlds__size_prof__V_637_637));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 8) = ((MR_Box) (transform_hlds__size_prof__V_638_638));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 9) = ((MR_Box) (transform_hlds__size_prof__V_639_639));
#line 409 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 10) = ((MR_Box) (transform_hlds__size_prof__V_640_640));
#line 409 "size_prof.m"
                      }
#line 410 "size_prof.m"
                      {
#line 410 "size_prof.m"
                        transform_hlds__size_prof__V_134_134 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                      }
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 0)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_642_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 1)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_643_643 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 2)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_644_644 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 3)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_645_645 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 4)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_646_646 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 5)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_647_647 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 6)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_648_648 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 7)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_649_649 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 8)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_650_650 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 9)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_651_651 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 10)));
#line 410 "size_prof.m"
                      {
#line 410 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (transform_hlds__size_prof__V_641_641));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (transform_hlds__size_prof__V_643_643));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (transform_hlds__size_prof__V_644_644));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (transform_hlds__size_prof__V_645_645));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (transform_hlds__size_prof__V_646_646));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (transform_hlds__size_prof__V_647_647));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (transform_hlds__size_prof__V_648_648));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 8) = ((MR_Box) (transform_hlds__size_prof__V_649_649));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (transform_hlds__size_prof__V_650_650));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 10) = ((MR_Box) (transform_hlds__size_prof__V_651_651));
#line 410 "size_prof.m"
                      }
#line 411 "size_prof.m"
                      {
#line 411 "size_prof.m"
                        transform_hlds__size_prof__V_136_136 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                      }
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_652_652 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 0)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_653_653 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 1)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_654_654 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 2)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_655_655 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 3)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_656_656 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 4)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_657_657 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 5)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_658_658 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 6)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_659_659 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 7)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_660_660 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 8)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_661_661 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 9)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_662_662 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 10)));
#line 411 "size_prof.m"
                      {
#line 411 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_652_652));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_653_653));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_655_655));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_656_656));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__V_657_657));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_658_658));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_659_659));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_660_660));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_661_661));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_662_662));
#line 411 "size_prof.m"
                      }
#line 412 "size_prof.m"
                      transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "size_prof.m"
                    }
#line 405 "size_prof.m"
                  else
#line 386 "size_prof.m"
                    {
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1030_1030;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1031_1031;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_137_137;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_138_138;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_139_139;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_140_140;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_142_142;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap0_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeInfoMap0_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorMap0_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap0_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__First0_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 0)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Later0_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 1)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeCtorMap0_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__First_209;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Later_210;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap_211;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap_212;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_597_597;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_598_598;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_600_600;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_601_601;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_603_603;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_604_604;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_605_605;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_606_606;
#line 386 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_607_607;
#line 387 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 387 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 387 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 387 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 387 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_575_575;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_577_577;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_578_578;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_579_579;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_580_580;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_581_581;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_582_582;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_583_583;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_584_584;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_585_585;
#line 398 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_576_576;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_587_587;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_588_588;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_589_589;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_590_590;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_591_591;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_592_592;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_593_593;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_594_594;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_595_595;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_596_596;
#line 401 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_586_586;
#line 402 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_599_599;
#line 402 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_602_602;

#line 393 "size_prof.m"
                      {
#line 393 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__First0_206, &transform_hlds__size_prof__First_209, transform_hlds__size_prof__Later0_207, &transform_hlds__size_prof__Later_210, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, transform_hlds__size_prof__TargetTypeInfoMap0_201, transform_hlds__size_prof__TypeInfoMap0_202, transform_hlds__size_prof__RevTypeInfoMap0_203, transform_hlds__size_prof__TypeCtorMap0_204, transform_hlds__size_prof__RevTypeCtorMap0_208, &transform_hlds__size_prof__TypeInfoMap_211, transform_hlds__size_prof__KnownSizeMap0_205, &transform_hlds__size_prof__KnownSizeMap_212);
                      }
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_575_575 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 0)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_576_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 1)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_577_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 2)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 3)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_579_579 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 4)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_580_580 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 5)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_581_581 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 6)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_582_582 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 7)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_583_583 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 8)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_584_584 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 9)));
#line 398 "size_prof.m"
                      transform_hlds__size_prof__V_585_585 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 10)));
#line 398 "size_prof.m"
                      {
#line 398 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (transform_hlds__size_prof__V_575_575));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_211));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (transform_hlds__size_prof__V_577_577));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (transform_hlds__size_prof__V_578_578));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (transform_hlds__size_prof__V_579_579));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (transform_hlds__size_prof__V_580_580));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (transform_hlds__size_prof__V_581_581));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (transform_hlds__size_prof__V_582_582));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 8) = ((MR_Box) (transform_hlds__size_prof__V_583_583));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (transform_hlds__size_prof__V_584_584));
#line 398 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (transform_hlds__size_prof__V_585_585));
#line 398 "size_prof.m"
                      }
#line 11714 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeCtorInfo_1030_1030 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11716 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeInfo_1031_1031 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 401 "size_prof.m"
                      {
#line 401 "size_prof.m"
                        transform_hlds__size_prof__V_140_140 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1030_1030, transform_hlds__size_prof__TypeInfo_1031_1031);
                      }
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_586_586 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 0)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_587_587 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 1)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_588_588 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 2)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_589_589 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 3)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_590_590 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 4)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_591_591 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 5)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_592_592 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 6)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_593_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 7)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_594_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 8)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_595_595 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 9)));
#line 401 "size_prof.m"
                      transform_hlds__size_prof__V_596_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 10)));
#line 401 "size_prof.m"
                      {
#line 401 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 0) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 1) = ((MR_Box) (transform_hlds__size_prof__V_587_587));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 2) = ((MR_Box) (transform_hlds__size_prof__V_588_588));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 3) = ((MR_Box) (transform_hlds__size_prof__V_589_589));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 4) = ((MR_Box) (transform_hlds__size_prof__V_590_590));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 5) = ((MR_Box) (transform_hlds__size_prof__V_591_591));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 6) = ((MR_Box) (transform_hlds__size_prof__V_592_592));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 7) = ((MR_Box) (transform_hlds__size_prof__V_593_593));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 8) = ((MR_Box) (transform_hlds__size_prof__V_594_594));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 9) = ((MR_Box) (transform_hlds__size_prof__V_595_595));
#line 401 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 10) = ((MR_Box) (transform_hlds__size_prof__V_596_596));
#line 401 "size_prof.m"
                      }
#line 402 "size_prof.m"
                      {
#line 402 "size_prof.m"
                        transform_hlds__size_prof__V_142_142 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1031_1031, transform_hlds__size_prof__TypeCtorInfo_1030_1030);
                      }
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_597_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 0)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 1)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_599_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 2)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_600_600 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 3)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_601_601 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 4)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_602_602 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 5)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_603_603 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 6)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_604_604 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 7)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_605_605 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 8)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_606_606 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 9)));
#line 402 "size_prof.m"
                      transform_hlds__size_prof__V_607_607 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 10)));
#line 403 "size_prof.m"
                      {
#line 403 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_597_597));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_598_598));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_600_600));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_601_601));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_212));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_603_603));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_604_604));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_605_605));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_606_606));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_607_607));
#line 403 "size_prof.m"
                      }
#line 404 "size_prof.m"
                      {
#line 404 "size_prof.m"
                        transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "size_prof.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 0) = ((MR_Box) (transform_hlds__size_prof__First_209));
#line 404 "size_prof.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 1) = ((MR_Box) (transform_hlds__size_prof__Later_210));
#line 404 "size_prof.m"
                      }
#line 386 "size_prof.m"
                    }
#line 414 "size_prof.m"
                  {
#line 414 "size_prof.m"
                    transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, &transform_hlds__size_prof__STATE_VARIABLE_Info_144_144);
                  }
#line 415 "size_prof.m"
                  {
#line 415 "size_prof.m"
                    transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_144_144, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
#line 416 "size_prof.m"
                  {
#line 416 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 416 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Disjuncts_73));
#line 416 "size_prof.m"
                  }
#line 384 "size_prof.m"
                }
#line 309 "size_prof.m"
              else
#line 309 "size_prof.m"
                if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 318 "size_prof.m"
                  {
#line 318 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1024_1024 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 318 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfo_1025_1025 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 318 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_168_168;
#line 318 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_169_169;
#line 318 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_171_171;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_274_274;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_275_275;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_276_276;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_277_277;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_278_278;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_279_279;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_280_280;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_281_281;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_282_282;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_283_283;
#line 322 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_273_273;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_284_284;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_285_285;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_287_287;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_288_288;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_289_289;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_290_290;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_291_291;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_292_292;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_293_293;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_294_294;
#line 323 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_286_286;

#line 322 "size_prof.m"
                    {
#line 322 "size_prof.m"
                      transform_hlds__size_prof__V_169_169 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1024_1024, transform_hlds__size_prof__TypeInfo_1025_1025);
                    }
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 322 "size_prof.m"
                    transform_hlds__size_prof__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 322 "size_prof.m"
                    {
#line 322 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 0) = ((MR_Box) (transform_hlds__size_prof__V_169_169));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 1) = ((MR_Box) (transform_hlds__size_prof__V_274_274));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 2) = ((MR_Box) (transform_hlds__size_prof__V_275_275));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 3) = ((MR_Box) (transform_hlds__size_prof__V_276_276));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 4) = ((MR_Box) (transform_hlds__size_prof__V_277_277));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 5) = ((MR_Box) (transform_hlds__size_prof__V_278_278));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 6) = ((MR_Box) (transform_hlds__size_prof__V_279_279));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 7) = ((MR_Box) (transform_hlds__size_prof__V_280_280));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 8) = ((MR_Box) (transform_hlds__size_prof__V_281_281));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 9) = ((MR_Box) (transform_hlds__size_prof__V_282_282));
#line 322 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 10) = ((MR_Box) (transform_hlds__size_prof__V_283_283));
#line 322 "size_prof.m"
                    }
#line 323 "size_prof.m"
                    {
#line 323 "size_prof.m"
                      transform_hlds__size_prof__V_171_171 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1025_1025, transform_hlds__size_prof__TypeCtorInfo_1024_1024);
                    }
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 0)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 1)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 2)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 3)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 4)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 5)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 6)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 7)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 8)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 9)));
#line 323 "size_prof.m"
                    transform_hlds__size_prof__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 10)));
#line 323 "size_prof.m"
                    {
#line 323 "size_prof.m"
                      MR_Word base;
#line 323 "size_prof.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 323 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_284_284));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_285_285));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_171_171));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_287_287));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_288_288));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_289_289));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_290_290));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_291_291));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_292_292));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_293_293));
#line 323 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_294_294));
#line 323 "size_prof.m"
                    }
#line 324 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 318 "size_prof.m"
                  }
#line 309 "size_prof.m"
                else
#line 309 "size_prof.m"
                  if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 418 "size_prof.m"
                    {
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1035_1035 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1036_1036 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Cond_78;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Then_79;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMapThen_80;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMapThen_81;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMapThen_82;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Else_84;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMapElse_85;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMapElse_86;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_110_110;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_111_111;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_112_112;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_113_113;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_114_114;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_121_121;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_122_122;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_123_123;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_125_125;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_126_126;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_127_127;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap0_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeInfoMap0_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorMap0_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap0_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeCtorMap0_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap_243;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap_244;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_781_781;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_782_782;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_783_783;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_784_784;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_785_785;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_790_790;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_792_792;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_793_793;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_794_794;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_795_795;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_796_796;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_798_798;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_801_801;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_803_803;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_804_804;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_805_805;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_806_806;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_807_807;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_809_809;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_811_811;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_812_812;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_814_814;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_815_815;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_816_816;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_817_817;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_818_818;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_819_819;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_820_820;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_822_822;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_823_823;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_825_825;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_826_826;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_827_827;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_828_828;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_829_829;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_873_873;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_874_874;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_875_875;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_876_876;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_878_878;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_879_879;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_880_880;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_881_881;
#line 418 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_882_882;
#line 419 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_668_668 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 419 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_669_669 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 419 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 419 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 419 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_672_672 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_723_723;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_724_724;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_725_725;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_726_726;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_728_728;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_729_729;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_730_730;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_731_731;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_732_732;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_733_733;
#line 426 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_727_727;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_734_734;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_735_735;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_736_736;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_737_737;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_739_739;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_740_740;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_741_741;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_742_742;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_743_743;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_744_744;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_738_738;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_745_745;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_747_747;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_748_748;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_750_750;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_751_751;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_752_752;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_753_753;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_754_754;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_775_775;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_776_776;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_777_777;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_778_778;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_779_779;
#line 436 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_780_780;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_841_841;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_842_842;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_843_843;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_844_844;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_846_846;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_847_847;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_848_848;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_849_849;
#line 443 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_850_850;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_861_861;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_863_863;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_864_864;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_865_865;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_866_866;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_867_867;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_868_868;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_869_869;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_870_870;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_871_871;
#line 448 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_862_862;
#line 449 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_872_872;
#line 449 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_877_877;

#line 426 "size_prof.m"
                      {
#line 426 "size_prof.m"
                        transform_hlds__size_prof__V_111_111 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036);
                      }
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_723_723 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_724_724 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_725_725 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_726_726 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_727_727 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_728_728 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_729_729 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_730_730 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_731_731 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_732_732 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 426 "size_prof.m"
                      transform_hlds__size_prof__V_733_733 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 426 "size_prof.m"
                      {
#line 426 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 0) = ((MR_Box) (transform_hlds__size_prof__V_723_723));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 1) = ((MR_Box) (transform_hlds__size_prof__V_724_724));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 2) = ((MR_Box) (transform_hlds__size_prof__V_725_725));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 3) = ((MR_Box) (transform_hlds__size_prof__V_726_726));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 4) = ((MR_Box) (transform_hlds__size_prof__V_111_111));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 5) = ((MR_Box) (transform_hlds__size_prof__V_728_728));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 6) = ((MR_Box) (transform_hlds__size_prof__V_729_729));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 7) = ((MR_Box) (transform_hlds__size_prof__V_730_730));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 8) = ((MR_Box) (transform_hlds__size_prof__V_731_731));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 9) = ((MR_Box) (transform_hlds__size_prof__V_732_732));
#line 426 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 10) = ((MR_Box) (transform_hlds__size_prof__V_733_733));
#line 426 "size_prof.m"
                      }
#line 427 "size_prof.m"
                      {
#line 427 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Cond0_75, &transform_hlds__size_prof__Cond_78, transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, &transform_hlds__size_prof__STATE_VARIABLE_Info_112_112);
                      }
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_734_734 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 0)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_735_735 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 1)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_736_736 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 2)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_737_737 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 3)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_738_738 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 4)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_739_739 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 5)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_740_740 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 6)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_741_741 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 7)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 8)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 9)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 10)));
#line 428 "size_prof.m"
                      {
#line 428 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 0) = ((MR_Box) (transform_hlds__size_prof__V_734_734));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 1) = ((MR_Box) (transform_hlds__size_prof__V_735_735));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 2) = ((MR_Box) (transform_hlds__size_prof__V_736_736));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 3) = ((MR_Box) (transform_hlds__size_prof__V_737_737));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_237));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 5) = ((MR_Box) (transform_hlds__size_prof__V_739_739));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 6) = ((MR_Box) (transform_hlds__size_prof__V_740_740));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 7) = ((MR_Box) (transform_hlds__size_prof__V_741_741));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 8) = ((MR_Box) (transform_hlds__size_prof__V_742_742));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 9) = ((MR_Box) (transform_hlds__size_prof__V_743_743));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 10) = ((MR_Box) (transform_hlds__size_prof__V_744_744));
#line 428 "size_prof.m"
                      }
#line 429 "size_prof.m"
                      {
#line 429 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Then0_76, &transform_hlds__size_prof__Then_79, transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, &transform_hlds__size_prof__STATE_VARIABLE_Info_114_114);
                      }
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__TypeInfoMapThen_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__TargetTypeInfoMapThen_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__KnownSizeMapThen_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_753_753 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_754_754 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 434 "size_prof.m"
                      {
#line 434 "size_prof.m"
                        mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeCtorInfo_1035_1035, (MR_Word) &transform_hlds__size_prof_scalar_common_2[6], transform_hlds__size_prof__TargetTypeInfoMapThen_80, transform_hlds__size_prof__TargetTypeInfoMap0_237, &transform_hlds__size_prof__ElseTargetTypeInfoMap_83);
                      }
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_775_775 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_776_776 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_777_777 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_778_778 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_779_779 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_781_781 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_782_782 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_783_783 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_784_784 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 436 "size_prof.m"
                      transform_hlds__size_prof__V_785_785 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_790_790 = transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_792_792 = transform_hlds__size_prof__V_781_781;
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_793_793 = transform_hlds__size_prof__V_782_782;
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_794_794 = transform_hlds__size_prof__V_783_783;
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_795_795 = transform_hlds__size_prof__V_784_784;
#line 437 "size_prof.m"
                      transform_hlds__size_prof__V_796_796 = transform_hlds__size_prof__V_785_785;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_798_798 = transform_hlds__size_prof__TypeInfoMap0_238;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_801_801 = transform_hlds__size_prof__V_790_790;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_803_803 = transform_hlds__size_prof__V_792_792;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_804_804 = transform_hlds__size_prof__V_793_793;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_805_805 = transform_hlds__size_prof__V_794_794;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_806_806 = transform_hlds__size_prof__V_795_795;
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_807_807 = transform_hlds__size_prof__V_796_796;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_809_809 = transform_hlds__size_prof__V_798_798;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_811_811 = transform_hlds__size_prof__RevTypeInfoMap0_239;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_812_812 = transform_hlds__size_prof__V_801_801;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_814_814 = transform_hlds__size_prof__V_803_803;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_815_815 = transform_hlds__size_prof__V_804_804;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_816_816 = transform_hlds__size_prof__V_805_805;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_817_817 = transform_hlds__size_prof__V_806_806;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_818_818 = transform_hlds__size_prof__V_807_807;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_819_819 = transform_hlds__size_prof__TypeCtorMap0_240;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_820_820 = transform_hlds__size_prof__V_809_809;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_822_822 = transform_hlds__size_prof__V_811_811;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_823_823 = transform_hlds__size_prof__V_812_812;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_825_825 = transform_hlds__size_prof__V_814_814;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_826_826 = transform_hlds__size_prof__V_815_815;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_827_827 = transform_hlds__size_prof__V_816_816;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_828_828 = transform_hlds__size_prof__V_817_817;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_829_829 = transform_hlds__size_prof__V_818_818;
#line 441 "size_prof.m"
                      {
#line 441 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (transform_hlds__size_prof__V_819_819));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (transform_hlds__size_prof__V_820_820));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_242));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (transform_hlds__size_prof__V_822_822));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (transform_hlds__size_prof__V_823_823));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_241));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (transform_hlds__size_prof__V_825_825));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (transform_hlds__size_prof__V_826_826));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 8) = ((MR_Box) (transform_hlds__size_prof__V_827_827));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (transform_hlds__size_prof__V_828_828));
#line 441 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 10) = ((MR_Box) (transform_hlds__size_prof__V_829_829));
#line 441 "size_prof.m"
                      }
#line 442 "size_prof.m"
                      {
#line 442 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Else0_77, &transform_hlds__size_prof__Else_84, transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, &transform_hlds__size_prof__STATE_VARIABLE_Info_122_122);
                      }
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_841_841 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__TypeInfoMapElse_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_842_842 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_843_843 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_844_844 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__KnownSizeMapElse_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_846_846 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_847_847 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_848_848 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_849_849 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 443 "size_prof.m"
                      transform_hlds__size_prof__V_850_850 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 446 "size_prof.m"
                      {
#line 446 "size_prof.m"
                        transform_hlds__size_prof__TypeInfoMap_243 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeInfoMapThen_81, transform_hlds__size_prof__TypeInfoMapElse_85);
                      }
#line 447 "size_prof.m"
                      {
#line 447 "size_prof.m"
                        transform_hlds__size_prof__KnownSizeMap_244 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_1036_1036, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapThen_82, transform_hlds__size_prof__KnownSizeMapElse_86);
                      }
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_861_861 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_862_862 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_863_863 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_864_864 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_865_865 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_866_866 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_867_867 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_868_868 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_869_869 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_870_870 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 448 "size_prof.m"
                      transform_hlds__size_prof__V_871_871 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 448 "size_prof.m"
                      {
#line 448 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 0) = ((MR_Box) (transform_hlds__size_prof__V_861_861));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_243));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 2) = ((MR_Box) (transform_hlds__size_prof__V_863_863));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 3) = ((MR_Box) (transform_hlds__size_prof__V_864_864));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 4) = ((MR_Box) (transform_hlds__size_prof__V_865_865));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 5) = ((MR_Box) (transform_hlds__size_prof__V_866_866));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 6) = ((MR_Box) (transform_hlds__size_prof__V_867_867));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 7) = ((MR_Box) (transform_hlds__size_prof__V_868_868));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 8) = ((MR_Box) (transform_hlds__size_prof__V_869_869));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 9) = ((MR_Box) (transform_hlds__size_prof__V_870_870));
#line 448 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 10) = ((MR_Box) (transform_hlds__size_prof__V_871_871));
#line 448 "size_prof.m"
                      }
#line 449 "size_prof.m"
                      {
#line 449 "size_prof.m"
                        transform_hlds__size_prof__V_125_125 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__TypeInfo_1036_1036);
                      }
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_872_872 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 0)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_873_873 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 1)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_874_874 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 2)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_875_875 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 3)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_876_876 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 4)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_877_877 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 5)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_878_878 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 6)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_879_879 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 7)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_880_880 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 8)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_881_881 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 9)));
#line 449 "size_prof.m"
                      transform_hlds__size_prof__V_882_882 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 10)));
#line 450 "size_prof.m"
                      {
#line 450 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 0) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 1) = ((MR_Box) (transform_hlds__size_prof__V_873_873));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 2) = ((MR_Box) (transform_hlds__size_prof__V_874_874));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 3) = ((MR_Box) (transform_hlds__size_prof__V_875_875));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 4) = ((MR_Box) (transform_hlds__size_prof__V_876_876));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_244));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 6) = ((MR_Box) (transform_hlds__size_prof__V_878_878));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 7) = ((MR_Box) (transform_hlds__size_prof__V_879_879));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 8) = ((MR_Box) (transform_hlds__size_prof__V_880_880));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 9) = ((MR_Box) (transform_hlds__size_prof__V_881_881));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 10) = ((MR_Box) (transform_hlds__size_prof__V_882_882));
#line 450 "size_prof.m"
                      }
#line 451 "size_prof.m"
                      {
#line 451 "size_prof.m"
                        transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, &transform_hlds__size_prof__STATE_VARIABLE_Info_127_127);
                      }
#line 452 "size_prof.m"
                      {
#line 452 "size_prof.m"
                        transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_127_127, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                      }
#line 453 "size_prof.m"
                      {
#line 453 "size_prof.m"
                        transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 453 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 453 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Quant_74));
#line 453 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Cond_78));
#line 453 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Then_79));
#line 453 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 4) = ((MR_Box) (transform_hlds__size_prof__Else_84));
#line 453 "size_prof.m"
                      }
#line 418 "size_prof.m"
                    }
#line 309 "size_prof.m"
                  else
#line 309 "size_prof.m"
                    if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 474 "size_prof.m"
                      {
#line 474 "size_prof.m"
                        MR_Word transform_hlds__size_prof__Reason0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 474 "size_prof.m"
                        MR_Word transform_hlds__size_prof__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 474 "size_prof.m"
                        MR_Word transform_hlds__size_prof__Reason_92;
#line 474 "size_prof.m"
                        MR_Word transform_hlds__size_prof__SubGoal_93;
#line 480 "size_prof.m"
                        MR_Word transform_hlds__size_prof__TermVar_91;
#line 478 "size_prof.m"
                        MR_Word transform_hlds__size_prof__V_100_100;

#line 478 "size_prof.m"
                        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__Reason0_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 478 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 478 "size_prof.m"
                          {
#line 478 "size_prof.m"
                            transform_hlds__size_prof__TermVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 1)));
#line 478 "size_prof.m"
                            transform_hlds__size_prof__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 2)));
#line 478 "size_prof.m"
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_100_100 == (MR_Integer) 1);
#line 478 "size_prof.m"
                          }
#line 480 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 479 "size_prof.m"
                          {
#line 479 "size_prof.m"
                            {
#line 479 "size_prof.m"
                              transform_hlds__size_prof__Reason_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 479 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 479 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 1) = ((MR_Box) (transform_hlds__size_prof__TermVar_91));
#line 479 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 2) = ((MR_Box) ((MR_Integer) 3));
#line 479 "size_prof.m"
                            }
#line 479 "size_prof.m"
                          }
#line 480 "size_prof.m"
                        else
#line 481 "size_prof.m"
                          transform_hlds__size_prof__Reason_92 = transform_hlds__size_prof__Reason0_89;
#line 483 "size_prof.m"
                        {
#line 483 "size_prof.m"
                          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__SubGoal0_90, &transform_hlds__size_prof__SubGoal_93, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                        }
#line 484 "size_prof.m"
                        {
#line 484 "size_prof.m"
                          transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 484 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Reason_92));
#line 484 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__SubGoal_93));
#line 484 "size_prof.m"
                        }
#line 474 "size_prof.m"
                      }
#line 309 "size_prof.m"
                    else
#line 309 "size_prof.m"
                      if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 486 "size_prof.m"
                        {
#line 487 "size_prof.m"
                          {
#line 487 "size_prof.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
#line 487 "size_prof.m"
                            return;
                          }
#line 486 "size_prof.m"
                        }
#line 309 "size_prof.m"
                      else
#line 355 "size_prof.m"
                        {
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SwitchVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__Cases_71;
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_155_155;
#line 355 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_156_156;

#line 376 "size_prof.m"
                          if ((transform_hlds__size_prof__Cases0_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "size_prof.m"
                            {
#line 378 "size_prof.m"
                              {
#line 378 "size_prof.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
#line 378 "size_prof.m"
                                return;
                              }
#line 377 "size_prof.m"
                            }
#line 376 "size_prof.m"
                          else
#line 357 "size_prof.m"
                            {
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeCtorInfo_1028_1028;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfo_1029_1029;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__First0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 0)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__Later0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 1)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RevTypeCtorMap0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__First_67;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__Later_68;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfoMap_69;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__KnownSizeMap_70;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_149_149;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_150_150;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_151_151;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_152_152;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_154_154;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfoMap0_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RevTypeInfoMap0_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeCtorMap0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__KnownSizeMap0_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_493_493;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_494_494;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_496_496;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_497_497;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_499_499;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_500_500;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_501_501;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_502_502;
#line 357 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_503_503;
#line 358 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 358 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 358 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 358 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 358 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_471_471;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_473_473;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_474_474;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_475_475;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_476_476;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_477_477;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_478_478;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_479_479;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_480_480;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_481_481;
#line 369 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_472_472;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_483_483;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_484_484;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_485_485;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_486_486;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_487_487;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_488_488;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_489_489;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_490_490;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_491_491;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_492_492;
#line 372 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_482_482;
#line 373 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_495_495;
#line 373 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_498_498;

#line 364 "size_prof.m"
                              {
#line 364 "size_prof.m"
                                transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__First0_64, &transform_hlds__size_prof__First_67, transform_hlds__size_prof__Later0_65, &transform_hlds__size_prof__Later_68, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, transform_hlds__size_prof__TargetTypeInfoMap0_186, transform_hlds__size_prof__TypeInfoMap0_187, transform_hlds__size_prof__RevTypeInfoMap0_188, transform_hlds__size_prof__TypeCtorMap0_189, transform_hlds__size_prof__RevTypeCtorMap0_66, &transform_hlds__size_prof__TypeInfoMap_69, transform_hlds__size_prof__KnownSizeMap0_190, &transform_hlds__size_prof__KnownSizeMap_70);
                              }
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 0)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 1)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 2)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 3)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 4)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 5)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 6)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 7)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 8)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 9)));
#line 369 "size_prof.m"
                              transform_hlds__size_prof__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 10)));
#line 369 "size_prof.m"
                              {
#line 369 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 0) = ((MR_Box) (transform_hlds__size_prof__V_471_471));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_69));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 2) = ((MR_Box) (transform_hlds__size_prof__V_473_473));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 3) = ((MR_Box) (transform_hlds__size_prof__V_474_474));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 4) = ((MR_Box) (transform_hlds__size_prof__V_475_475));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 5) = ((MR_Box) (transform_hlds__size_prof__V_476_476));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 6) = ((MR_Box) (transform_hlds__size_prof__V_477_477));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 7) = ((MR_Box) (transform_hlds__size_prof__V_478_478));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 8) = ((MR_Box) (transform_hlds__size_prof__V_479_479));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 9) = ((MR_Box) (transform_hlds__size_prof__V_480_480));
#line 369 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 10) = ((MR_Box) (transform_hlds__size_prof__V_481_481));
#line 369 "size_prof.m"
                              }
#line 13045 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__TypeCtorInfo_1028_1028 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 13047 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__TypeInfo_1029_1029 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 372 "size_prof.m"
                              {
#line 372 "size_prof.m"
                                transform_hlds__size_prof__V_152_152 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1028_1028, transform_hlds__size_prof__TypeInfo_1029_1029);
                              }
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 0)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 1)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 2)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 3)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 4)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 5)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 6)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 7)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 8)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 9)));
#line 372 "size_prof.m"
                              transform_hlds__size_prof__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 10)));
#line 372 "size_prof.m"
                              {
#line 372 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (transform_hlds__size_prof__V_152_152));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (transform_hlds__size_prof__V_483_483));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (transform_hlds__size_prof__V_484_484));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (transform_hlds__size_prof__V_485_485));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (transform_hlds__size_prof__V_486_486));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (transform_hlds__size_prof__V_487_487));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (transform_hlds__size_prof__V_488_488));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (transform_hlds__size_prof__V_489_489));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 8) = ((MR_Box) (transform_hlds__size_prof__V_490_490));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 9) = ((MR_Box) (transform_hlds__size_prof__V_491_491));
#line 372 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 10) = ((MR_Box) (transform_hlds__size_prof__V_492_492));
#line 372 "size_prof.m"
                              }
#line 373 "size_prof.m"
                              {
#line 373 "size_prof.m"
                                transform_hlds__size_prof__V_154_154 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1029_1029, transform_hlds__size_prof__TypeCtorInfo_1028_1028);
                              }
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 8)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 9)));
#line 373 "size_prof.m"
                              transform_hlds__size_prof__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 10)));
#line 374 "size_prof.m"
                              {
#line 374 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 0) = ((MR_Box) (transform_hlds__size_prof__V_493_493));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 1) = ((MR_Box) (transform_hlds__size_prof__V_494_494));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 2) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 3) = ((MR_Box) (transform_hlds__size_prof__V_496_496));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 4) = ((MR_Box) (transform_hlds__size_prof__V_497_497));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_70));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 6) = ((MR_Box) (transform_hlds__size_prof__V_499_499));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 7) = ((MR_Box) (transform_hlds__size_prof__V_500_500));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 8) = ((MR_Box) (transform_hlds__size_prof__V_501_501));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 9) = ((MR_Box) (transform_hlds__size_prof__V_502_502));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 10) = ((MR_Box) (transform_hlds__size_prof__V_503_503));
#line 374 "size_prof.m"
                              }
#line 375 "size_prof.m"
                              {
#line 375 "size_prof.m"
                                transform_hlds__size_prof__Cases_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "size_prof.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 0) = ((MR_Box) (transform_hlds__size_prof__First_67));
#line 375 "size_prof.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 1) = ((MR_Box) (transform_hlds__size_prof__Later_68));
#line 375 "size_prof.m"
                              }
#line 357 "size_prof.m"
                            }
#line 380 "size_prof.m"
                          {
#line 380 "size_prof.m"
                            transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, &transform_hlds__size_prof__STATE_VARIABLE_Info_156_156);
                          }
#line 381 "size_prof.m"
                          {
#line 381 "size_prof.m"
                            transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_156_156, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                          }
#line 382 "size_prof.m"
                          {
#line 382 "size_prof.m"
                            transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 382 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 382 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__SwitchVar_61));
#line 382 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__CanFail_62));
#line 382 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Cases_71));
#line 382 "size_prof.m"
                          }
#line 355 "size_prof.m"
                        }
#line 489 "size_prof.m"
    {
#line 489 "size_prof.m"
      MR_Word base;
#line 489 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "size_prof.m"
      *transform_hlds__size_prof__Goal_6 = base;
#line 489 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__GoalExpr_22));
#line 489 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo0_9));
#line 489 "size_prof.m"
    }
#line 273 "size_prof.m"
  }
#line 270 "size_prof.m"
}

#line 251 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 251 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 251 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 251 "size_prof.m"
{
#line 251 "size_prof.m"
  {
#line 251 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 251 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14;

#line 251 "size_prof.m"
    {
#line 251 "size_prof.m"
      transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14);
    }
#line 251 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14));
#line 251 "size_prof.m"
  }
#line 251 "size_prof.m"
}

#line 223 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_38,
#line 223 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_39,
#line 223 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_40,
#line 223 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_41)
#line 223 "size_prof.m"
{
#line 228 "size_prof.m"
  {
#line 228 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_86_86;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_87_87;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_88_88;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "size_prof.m"
    MR_Integer transform_hlds__size_prof__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Simplifications_12;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal0_14;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_15;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_16;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstMap0_17;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_18;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_19;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_20;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_21;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_23;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_24;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info0_25;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TVars_26;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info1_27;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal1_28;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info_29;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__HeadVars_30;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstVarSet_31;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal2_33;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_34;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_35;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_36;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal_37;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_43_43;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_54_54;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62;
#line 228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64;
#line 230 "size_prof.m"
    MR_Word transform_hlds__size_prof___Msgs_13;
#line 251 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_Info1_27;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_65_65;
#line 259 "size_prof.m"
    MR_Word transform_hlds__size_prof___Warnings_32;

#line 229 "size_prof.m"
    {
#line 229 "size_prof.m"
      transform_hlds__size_prof__Simplifications_12 = check_hlds__simplify__list_to_simplifications_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 230 "size_prof.m"
    {
#line 230 "size_prof.m"
      check_hlds__simplify__simplify_proc_return_msgs_8_p_0(transform_hlds__size_prof__Simplifications_12, transform_hlds__size_prof__PredId_8, transform_hlds__size_prof__ProcId_9, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_40, &transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_43_43, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_38, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof___Msgs_13);
    }
#line 233 "size_prof.m"
    {
#line 233 "size_prof.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__Goal0_14);
    }
#line 234 "size_prof.m"
    {
#line 234 "size_prof.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__VarSet0_15);
    }
#line 235 "size_prof.m"
    {
#line 235 "size_prof.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__VarTypes0_16);
    }
#line 236 "size_prof.m"
    {
#line 236 "size_prof.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_43_43, &transform_hlds__size_prof__InstMap0_17);
    }
#line 237 "size_prof.m"
    {
#line 237 "size_prof.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__RttiVarMaps0_18);
    }
#line 13403 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 13405 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_87_87 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 240 "size_prof.m"
    {
#line 240 "size_prof.m"
      transform_hlds__size_prof__TypeCtorMap0_19 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_86_86, transform_hlds__size_prof__TypeInfo_87_87);
    }
#line 13412 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 241 "size_prof.m"
    {
#line 241 "size_prof.m"
      transform_hlds__size_prof__TypeInfoMap0_20 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_88_88, transform_hlds__size_prof__TypeInfo_87_87);
    }
#line 242 "size_prof.m"
    {
#line 242 "size_prof.m"
      transform_hlds__size_prof__RevTypeCtorMap0_21 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_87_87, transform_hlds__size_prof__TypeCtorInfo_86_86);
    }
#line 243 "size_prof.m"
    {
#line 243 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap0_22 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_87_87, transform_hlds__size_prof__TypeCtorInfo_88_88);
    }
#line 244 "size_prof.m"
    {
#line 244 "size_prof.m"
      transform_hlds__size_prof__TargetTypeInfoMap0_23 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_88_88, transform_hlds__size_prof__TypeInfo_87_87);
    }
#line 245 "size_prof.m"
    {
#line 245 "size_prof.m"
      transform_hlds__size_prof__KnownSizeMap0_24 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_87_87, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 246 "size_prof.m"
    {
#line 246 "size_prof.m"
      transform_hlds__size_prof__Info0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_19));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_20));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_21));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_22));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_23));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_24));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet0_15));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes0_16));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 8) = ((MR_Box) (transform_hlds__size_prof__Transform_7));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_18));
#line 246 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_25, 10) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_43_43));
#line 246 "size_prof.m"
    }
#line 250 "size_prof.m"
    {
#line 250 "size_prof.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(transform_hlds__size_prof__RttiVarMaps0_18, &transform_hlds__size_prof__TVars_26);
    }
#line 251 "size_prof.m"
    {
#line 251 "size_prof.m"
      transform_hlds__size_prof__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 251 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_45_45, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[0]));
#line 251 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_45_45, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_6_p_0_1));
#line 251 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 251 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_45_45, 3) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_18));
#line 251 "size_prof.m"
    }
#line 251 "size_prof.m"
    {
#line 251 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[1], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_45_45, transform_hlds__size_prof__TVars_26, ((MR_Box) (transform_hlds__size_prof__Info0_25)), &transform_hlds__size_prof__conv1_Info1_27);
    }
#line 251 "size_prof.m"
    transform_hlds__size_prof__Info1_27 = ((MR_Word) transform_hlds__size_prof__conv1_Info1_27);
#line 253 "size_prof.m"
    {
#line 253 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_14, &transform_hlds__size_prof__Goal1_28, transform_hlds__size_prof__Info1_27, &transform_hlds__size_prof__Info_29);
    }
#line 257 "size_prof.m"
    {
#line 257 "size_prof.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__HeadVars_30);
    }
#line 258 "size_prof.m"
    {
#line 258 "size_prof.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__InstVarSet_31);
    }
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 0)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 1)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 2)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 3)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 4)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 5)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 6)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 7)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 8)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 9)));
#line 259 "size_prof.m"
    transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_29, (MR_Integer) 10)));
#line 259 "size_prof.m"
    {
#line 259 "size_prof.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__size_prof__HeadVars_30, &transform_hlds__size_prof___Warnings_32, transform_hlds__size_prof__Goal1_28, &transform_hlds__size_prof__Goal2_33, transform_hlds__size_prof__V_47_47, &transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__V_62_62, &transform_hlds__size_prof__VarTypes_35, transform_hlds__size_prof__V_64_64, &transform_hlds__size_prof__RttiVarMaps_36);
    }
#line 263 "size_prof.m"
    {
#line 263 "size_prof.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__size_prof__Goal2_33, &transform_hlds__size_prof__Goal_37, transform_hlds__size_prof__VarTypes_35, transform_hlds__size_prof__InstVarSet_31, transform_hlds__size_prof__InstMap0_17, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_43_43, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_41);
    }
#line 265 "size_prof.m"
    {
#line 265 "size_prof.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__size_prof__Goal_37, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 266 "size_prof.m"
    {
#line 266 "size_prof.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 267 "size_prof.m"
    {
#line 267 "size_prof.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__size_prof__VarTypes_35, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_54_54);
    }
#line 268 "size_prof.m"
    {
#line 268 "size_prof.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__size_prof__RttiVarMaps_36, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_39);
#line 268 "size_prof.m"
      return;
    }
#line 228 "size_prof.m"
  }
#line 223 "size_prof.m"
}

#line 99 "size_prof.m"
void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(
#line 99 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 99 "size_prof.m"
  MR_Word transform_hlds__size_prof__PredProcId_8,
#line 99 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12,
#line 99 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13,
#line 99 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14,
#line 99 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15)
#line 99 "size_prof.m"
{
#line 212 "size_prof.m"
  {
#line 212 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 214 "size_prof.m"
    {
#line 214 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Adding typeinfos in ", transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14);
    }
#line 217 "size_prof.m"
    {
#line 217 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_proc_6_p_0(transform_hlds__size_prof__Transform_7, transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
#line 219 "size_prof.m"
    {
#line 219 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "done.\n", transform_hlds__size_prof__PredProcId_8, *transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
#line 219 "size_prof.m"
      return;
    }
#line 212 "size_prof.m"
  }
#line 99 "size_prof.m"
}

void mercury__transform_hlds__size_prof__init(void)
{
}

void mercury__transform_hlds__size_prof__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0);
}

void mercury__transform_hlds__size_prof__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.size_prof. */
