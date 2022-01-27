/*
** Automatically generated from `size_prof.m'
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
#include "hlds.make_goal.mih"
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
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 154 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 160 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

#line 169 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

#line 172 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2];

#line 175 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

#line 178 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

#line 181 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 190 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 193 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 196 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "transform_hlds.size_prof.c"
static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_info_0_0[11];

#line 202 "transform_hlds.size_prof.c"
static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_info_0_0[11];

#line 205 "transform_hlds.size_prof.c"
static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0;

#line 208 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1];

#line 211 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1];

#line 214 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1];

#line 217 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1];

#line 220 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 223 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 225 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 228 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 231 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 233 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 235 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 238 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 241 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 243 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 246 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 249 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 251 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 253 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 256 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 259 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 261 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 264 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 267 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 269 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 271 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 274 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 277 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 279 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 282 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 285 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 287 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 289 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 292 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 295 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 297 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 300 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 303 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 305 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 307 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 310 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 313 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 315 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 318 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 321 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 323 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 325 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 328 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 331 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 333 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

#line 336 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 339 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 341 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 343 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 591 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_53_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 550 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_54_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 436 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 1301 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1301 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1301 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3);

#line 1187 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1187 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1187 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1187 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3);

#line 718 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 718 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 703 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 703 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 703 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50);

#line 1092 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1092__1_3_p_0(
#line 1092 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1092 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1092 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46);

#line 761 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__761__1_2_p_0(
#line 761 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 761 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56);

#line 718 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__718__1_2_p_0(
#line 718 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 718 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69);

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__591__1_3_p_0(
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 591 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__550__1_3_p_0(
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 550 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__436__1_3_p_0(
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 436 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

#line 194 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
#line 194 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 194 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 194 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 195 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
#line 195 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 195 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 195 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 196 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 196 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 196 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
#line 197 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 197 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 197 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 198 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 198 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 198 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 200 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 200 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

#line 200 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 1291 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1291 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1291 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

#line 1260 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1260 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1260 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10);

#line 1236 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1236 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);

#line 1232 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1232 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 1226 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 1199 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1199 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4);

#line 1174 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1174 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1174 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12);

#line 1137 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1137 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1130 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1130 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1130 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1130 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1130 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11);

#line 1112 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1112 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

#line 1092 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1092 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1092 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1092 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2);

#line 1085 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1085 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20);

#line 1071 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1071 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1071 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1071 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18);

#line 1036 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1036 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1036 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1036 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1036 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1036 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19);

#line 1008 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22);

#line 969 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26);

#line 927 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5);

#line 921 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43);

#line 852 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39);

#line 820 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 820 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23);

#line 790 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 790 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 790 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

#line 761 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 761 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg);

#line 748 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 748 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 748 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 672 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 672 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 672 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

#line 610 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 610 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 610 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46);

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 591 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 569 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 550 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 531 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

#line 514 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 514 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 514 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8);

#line 495 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 495 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 495 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 495 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 495 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4);

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 436 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 292 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 292 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 292 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1);

#line 272 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 272 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 272 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 272 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 272 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96);

#line 253 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 253 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

#line 226 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
#line 226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
#line 226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);


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



#line 1354 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1362 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1370 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1378 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1386 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1395 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1404 "transform_hlds.size_prof.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1413 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  (MR_Integer) 0
};

#line 1419 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  (MR_Integer) 1
};

#line 1425 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

#line 1431 "transform_hlds.size_prof.c"
static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

#line 1437 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1443 "transform_hlds.size_prof.c"
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

#line 1464 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1473 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1482 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 1491 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1500 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1509 "transform_hlds.size_prof.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1517 "transform_hlds.size_prof.c"
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

#line 1532 "transform_hlds.size_prof.c"
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

#line 1547 "transform_hlds.size_prof.c"
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

#line 1562 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1567 "transform_hlds.size_prof.c"
static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_info_0_0
  }
};

#line 1576 "transform_hlds.size_prof.c"
static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_info_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_info_0_0
};

#line 1581 "transform_hlds.size_prof.c"
static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_info_0[1] = {
  (MR_Integer) 0
};

#line 1586 "transform_hlds.size_prof.c"
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

#line 1607 "transform_hlds.size_prof.c"
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

#line 1628 "transform_hlds.size_prof.c"
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

#line 1649 "transform_hlds.size_prof.c"
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

#line 1670 "transform_hlds.size_prof.c"
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

#line 1691 "transform_hlds.size_prof.c"
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

#line 1712 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
#line 1715 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1717 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1719 "transform_hlds.size_prof.c"
{
#line 1721 "transform_hlds.size_prof.c"
  {
#line 1723 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1726 "transform_hlds.size_prof.c"
    {
#line 1728 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1731 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1733 "transform_hlds.size_prof.c"
  }
#line 1735 "transform_hlds.size_prof.c"
}

#line 1738 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
#line 1741 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1743 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1745 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1747 "transform_hlds.size_prof.c"
{
#line 1749 "transform_hlds.size_prof.c"
  {
#line 1751 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1754 "transform_hlds.size_prof.c"
    {
#line 1756 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____construct_transform_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1759 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1761 "transform_hlds.size_prof.c"
  }
#line 1763 "transform_hlds.size_prof.c"
}

#line 1766 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0_10001(
#line 1769 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1771 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1773 "transform_hlds.size_prof.c"
{
#line 1775 "transform_hlds.size_prof.c"
  {
#line 1777 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1780 "transform_hlds.size_prof.c"
    {
#line 1782 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____info_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1785 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1787 "transform_hlds.size_prof.c"
  }
#line 1789 "transform_hlds.size_prof.c"
}

#line 1792 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0_10001(
#line 1795 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1797 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1799 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1801 "transform_hlds.size_prof.c"
{
#line 1803 "transform_hlds.size_prof.c"
  {
#line 1805 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1808 "transform_hlds.size_prof.c"
    {
#line 1810 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____info_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1813 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1815 "transform_hlds.size_prof.c"
  }
#line 1817 "transform_hlds.size_prof.c"
}

#line 1820 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
#line 1823 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1825 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1827 "transform_hlds.size_prof.c"
{
#line 1829 "transform_hlds.size_prof.c"
  {
#line 1831 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1834 "transform_hlds.size_prof.c"
    {
#line 1836 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1839 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1841 "transform_hlds.size_prof.c"
  }
#line 1843 "transform_hlds.size_prof.c"
}

#line 1846 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
#line 1849 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1851 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1853 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1855 "transform_hlds.size_prof.c"
{
#line 1857 "transform_hlds.size_prof.c"
  {
#line 1859 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1862 "transform_hlds.size_prof.c"
    {
#line 1864 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____known_size_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1867 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1869 "transform_hlds.size_prof.c"
  }
#line 1871 "transform_hlds.size_prof.c"
}

#line 1874 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
#line 1877 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1879 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1881 "transform_hlds.size_prof.c"
{
#line 1883 "transform_hlds.size_prof.c"
  {
#line 1885 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1888 "transform_hlds.size_prof.c"
    {
#line 1890 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1893 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1895 "transform_hlds.size_prof.c"
  }
#line 1897 "transform_hlds.size_prof.c"
}

#line 1900 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
#line 1903 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1905 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1907 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1909 "transform_hlds.size_prof.c"
{
#line 1911 "transform_hlds.size_prof.c"
  {
#line 1913 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1916 "transform_hlds.size_prof.c"
    {
#line 1918 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1921 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1923 "transform_hlds.size_prof.c"
  }
#line 1925 "transform_hlds.size_prof.c"
}

#line 1928 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
#line 1931 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1933 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1935 "transform_hlds.size_prof.c"
{
#line 1937 "transform_hlds.size_prof.c"
  {
#line 1939 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1942 "transform_hlds.size_prof.c"
    {
#line 1944 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 1947 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 1949 "transform_hlds.size_prof.c"
  }
#line 1951 "transform_hlds.size_prof.c"
}

#line 1954 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
#line 1957 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 1959 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1961 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 1963 "transform_hlds.size_prof.c"
{
#line 1965 "transform_hlds.size_prof.c"
  {
#line 1967 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 1970 "transform_hlds.size_prof.c"
    {
#line 1972 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 1975 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 1977 "transform_hlds.size_prof.c"
  }
#line 1979 "transform_hlds.size_prof.c"
}

#line 1982 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
#line 1985 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1987 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 1989 "transform_hlds.size_prof.c"
{
#line 1991 "transform_hlds.size_prof.c"
  {
#line 1993 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1996 "transform_hlds.size_prof.c"
    {
#line 1998 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 2001 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 2003 "transform_hlds.size_prof.c"
  }
#line 2005 "transform_hlds.size_prof.c"
}

#line 2008 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
#line 2011 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2013 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2015 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2017 "transform_hlds.size_prof.c"
{
#line 2019 "transform_hlds.size_prof.c"
  {
#line 2021 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2024 "transform_hlds.size_prof.c"
    {
#line 2026 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2029 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2031 "transform_hlds.size_prof.c"
  }
#line 2033 "transform_hlds.size_prof.c"
}

#line 2036 "transform_hlds.size_prof.c"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
#line 2039 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 2041 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
#line 2043 "transform_hlds.size_prof.c"
{
#line 2045 "transform_hlds.size_prof.c"
  {
#line 2047 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded;

#line 2050 "transform_hlds.size_prof.c"
    {
#line 2052 "transform_hlds.size_prof.c"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
#line 2055 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 2057 "transform_hlds.size_prof.c"
  }
#line 2059 "transform_hlds.size_prof.c"
}

#line 2062 "transform_hlds.size_prof.c"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
#line 2065 "transform_hlds.size_prof.c"
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
#line 2067 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 2069 "transform_hlds.size_prof.c"
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
#line 2071 "transform_hlds.size_prof.c"
{
#line 2073 "transform_hlds.size_prof.c"
  {
#line 2075 "transform_hlds.size_prof.c"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

#line 2078 "transform_hlds.size_prof.c"
    {
#line 2080 "transform_hlds.size_prof.c"
      transform_hlds__size_prof____Compare____type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
#line 2083 "transform_hlds.size_prof.c"
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
#line 2085 "transform_hlds.size_prof.c"
  }
#line 2087 "transform_hlds.size_prof.c"
}

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 591 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 591 "size_prof.m"
{
#line 591 "size_prof.m"
  {
#line 591 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 591 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 591 "size_prof.m"
    {
#line 591 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_138)), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 591 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_140 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_140);
#line 591 "size_prof.m"
  }
#line 591 "size_prof.m"
}

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_53_48_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 550 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 550 "size_prof.m"
{
#line 550 "size_prof.m"
  {
#line 550 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 550 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 550 "size_prof.m"
    {
#line 550 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_134)), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 550 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_136 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_136);
#line 550 "size_prof.m"
  }
#line 550 "size_prof.m"
}

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_54_95_95_49_95_95_91_50_93_95_48_3_p_0(
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 436 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 436 "size_prof.m"
{
#line 436 "size_prof.m"
  {
#line 436 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 436 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 436 "size_prof.m"
    {
#line 436 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_1037)), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 436 "size_prof.m"
    *transform_hlds__size_prof__HeadVar__3_1039 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_1039);
#line 436 "size_prof.m"
  }
#line 436 "size_prof.m"
}

#line 1301 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 1301 "size_prof.m"
  MR_Box transform_hlds__size_prof__X_4,
#line 1301 "size_prof.m"
  MR_Box * transform_hlds__size_prof__X_3)
#line 1301 "size_prof.m"
{
#line 1303 "size_prof.m"
  {
#line 1303 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1303 "size_prof.m"
    *transform_hlds__size_prof__X_3 = transform_hlds__size_prof__X_4;
#line 1303 "size_prof.m"
  }
#line 1301 "size_prof.m"
}

#line 1187 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
#line 1187 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1187 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
#line 1187 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3)
#line 1187 "size_prof.m"
{
#line 1190 "size_prof.m"
  while (MR_TRUE)
#line 1190 "size_prof.m"
    {
#line 1190 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1190 "size_prof.m"
      {
#line 1190 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1190 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1190 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2;
#line 1190 "size_prof.m"
        else
#line 1191 "size_prof.m"
          {
#line 1191 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_8;
#line 1191 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1191 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1191 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;
#line 1191 "size_prof.m"
            MR_Box transform_hlds__size_prof__V_7_7 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 0));
#line 1194 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_11;
#line 1192 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_11;

#line 1191 "size_prof.m"
            transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_14_14, (MR_Integer) 1)));
#line 1192 "size_prof.m"
            {
#line 1192 "size_prof.m"
              transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (transform_hlds__size_prof__Var_8)), &transform_hlds__size_prof__conv0_Count_11);
            }
#line 1192 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1192 "size_prof.m"
              {
#line 1192 "size_prof.m"
                transform_hlds__size_prof__Count_11 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_11);
#line 1192 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1192 "size_prof.m"
              }
#line 1194 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1193 "size_prof.m"
              {
#line 1193 "size_prof.m"
                MR_Integer transform_hlds__size_prof__V_15_15 = (transform_hlds__size_prof__Count_11 + (MR_Integer) 1);

#line 1193 "size_prof.m"
                {
#line 1193 "size_prof.m"
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__V_15_15)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1193 "size_prof.m"
              }
#line 1194 "size_prof.m"
            else
#line 1195 "size_prof.m"
              {
#line 1195 "size_prof.m"
                {
#line 1195 "size_prof.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) ((MR_Integer) 1)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
#line 1195 "size_prof.m"
              }
#line 1197 "size_prof.m"
            /* direct tailcall eliminated */
#line 1197 "size_prof.m"
            {
#line 1197 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_9;
#line 1197 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;

#line 1197 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0__tmp_copy_2;
#line 1197 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1197 "size_prof.m"
            }
#line 1197 "size_prof.m"
            continue;
#line 1191 "size_prof.m"
          }
#line 1190 "size_prof.m"
      }
#line 1190 "size_prof.m"
      break;
#line 1190 "size_prof.m"
    }
#line 1187 "size_prof.m"
}

#line 718 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
#line 718 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 718 "size_prof.m"
{
#line 718 "size_prof.m"
  {
#line 718 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 718 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 718 "size_prof.m"
    {
#line 718 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__718__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 718 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 718 "size_prof.m"
  }
#line 718 "size_prof.m"
}

#line 703 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_16,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_17,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_18,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_19,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_20,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_22,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_23,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_24,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_25,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_26,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
#line 703 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
#line 703 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
#line 703 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50)
#line 703 "size_prof.m"
{
#line 710 "size_prof.m"
  {
#line 710 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 710 "size_prof.m"
    MR_Integer transform_hlds__size_prof__FunctorSize_30;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_31;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__NonDefinedArgs_32;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_33;
#line 710 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_34;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_35;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_36;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 710 "size_prof.m"
    MR_Word transform_hlds__size_prof__TransformOp_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 8)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 0)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 1)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 2)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 3)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 4)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 5)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 6)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 7)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 9)));
#line 1251 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 10)));

#line 1255 "size_prof.m"
    if ((transform_hlds__size_prof__TransformOp_82 == (MR_Integer) 1))
#line 1254 "size_prof.m"
      transform_hlds__size_prof__FunctorSize_30 = (MR_Integer) 1;
#line 1255 "size_prof.m"
    else
#line 1256 "size_prof.m"
      {
#line 1257 "size_prof.m"
        {
#line 1257 "size_prof.m"
          transform_hlds__size_prof__FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Args_23);
        }
#line 1256 "size_prof.m"
      }
#line 712 "size_prof.m"
    {
#line 712 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_23, transform_hlds__size_prof__ArgModes_24, &transform_hlds__size_prof__DefinedArgs_31, &transform_hlds__size_prof__NonDefinedArgs_32, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49);
    }
#line 713 "size_prof.m"
    {
#line 713 "size_prof.m"
      transform_hlds__size_prof__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
    }
#line 714 "size_prof.m"
    {
#line 714 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_31, transform_hlds__size_prof__FunctorSize_30, &transform_hlds__size_prof__KnownSize_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_35, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__ArgGoals_36, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, &transform_hlds__size_prof__STATE_VARIABLE_Info_52_52);
    }
#line 731 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "size_prof.m"
      {
#line 717 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;
#line 717 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 717 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 717 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 717 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;

#line 718 "size_prof.m"
        {
#line 718 "size_prof.m"
          transform_hlds__size_prof__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 718 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
#line 718 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
#line 718 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 718 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 718 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_65_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "size_prof.m"
        }
#line 718 "size_prof.m"
        {
#line 718 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_65_65, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
        }
#line 722 "size_prof.m"
        if ((transform_hlds__size_prof__NonDefinedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "size_prof.m"
          {
#line 721 "size_prof.m"
            transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_20, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
          }
#line 722 "size_prof.m"
        else
#line 723 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
#line 729 "size_prof.m"
        {
#line 729 "size_prof.m"
          transform_hlds__size_prof__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 729 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_74_74, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSize_34));
#line 729 "size_prof.m"
        }
#line 729 "size_prof.m"
        {
#line 729 "size_prof.m"
          transform_hlds__size_prof__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_73_73, 0) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 729 "size_prof.m"
        }
#line 729 "size_prof.m"
        {
#line 729 "size_prof.m"
          transform_hlds__size_prof__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_71_71, 1) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 729 "size_prof.m"
        }
#line 728 "size_prof.m"
        {
#line 728 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 728 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 728 "size_prof.m"
        }
#line 730 "size_prof.m"
        {
#line 730 "size_prof.m"
          MR_Word base;
#line 730 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 730 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 730 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 730 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 730 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 730 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 730 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 730 "size_prof.m"
        }
#line 717 "size_prof.m"
      }
#line 731 "size_prof.m"
    else
#line 732 "size_prof.m"
      {
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_35, (MR_Integer) 0)));
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_41;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_42;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyExpr_43;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals0_44;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__NonLocals_45;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__GoalInfo_46;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__UnifyGoal_47;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_48;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 732 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_75;

#line 733 "size_prof.m"
        {
#line 733 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_40, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__SizeVar_41, &transform_hlds__size_prof__SizeGoals_42, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
        }
#line 736 "size_prof.m"
        {
#line 736 "size_prof.m"
          transform_hlds__size_prof__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 736 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_57_57, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_41));
#line 736 "size_prof.m"
        }
#line 736 "size_prof.m"
        {
#line 736 "size_prof.m"
          transform_hlds__size_prof__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 736 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_56_56, 0) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 736 "size_prof.m"
        }
#line 736 "size_prof.m"
        {
#line 736 "size_prof.m"
          transform_hlds__size_prof__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_54_54, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 736 "size_prof.m"
        }
#line 735 "size_prof.m"
        {
#line 735 "size_prof.m"
          transform_hlds__size_prof__Unification_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
#line 735 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 6) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 735 "size_prof.m"
        }
#line 737 "size_prof.m"
        {
#line 737 "size_prof.m"
          transform_hlds__size_prof__UnifyExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 737 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
#line 737 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
#line 737 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
#line 737 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_75));
#line 737 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
#line 737 "size_prof.m"
        }
#line 738 "size_prof.m"
        {
#line 738 "size_prof.m"
          transform_hlds__size_prof__NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
        }
#line 739 "size_prof.m"
        {
#line 739 "size_prof.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__size_prof__SizeVar_41, transform_hlds__size_prof__NonLocals0_44, &transform_hlds__size_prof__NonLocals_45);
        }
#line 740 "size_prof.m"
        {
#line 740 "size_prof.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__size_prof__NonLocals_45, transform_hlds__size_prof__GoalInfo0_27, &transform_hlds__size_prof__GoalInfo_46);
        }
#line 741 "size_prof.m"
        {
#line 741 "size_prof.m"
          transform_hlds__size_prof__UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyExpr_43));
#line 741 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo_46));
#line 741 "size_prof.m"
        }
#line 742 "size_prof.m"
        {
#line 742 "size_prof.m"
          transform_hlds__size_prof__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_47));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "size_prof.m"
        }
#line 742 "size_prof.m"
        {
#line 742 "size_prof.m"
          transform_hlds__size_prof__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 0) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "size_prof.m"
        }
#line 742 "size_prof.m"
        {
#line 742 "size_prof.m"
          transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoals_42));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_60_60));
#line 742 "size_prof.m"
        }
#line 742 "size_prof.m"
        {
#line 742 "size_prof.m"
          transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
#line 742 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 742 "size_prof.m"
        }
#line 742 "size_prof.m"
        {
#line 742 "size_prof.m"
          transform_hlds__size_prof__Goals_48 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__V_58_58);
        }
#line 743 "size_prof.m"
        {
#line 743 "size_prof.m"
          MR_Word base;
#line 743 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_28 = base;
#line 743 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 743 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_48));
#line 743 "size_prof.m"
        }
#line 732 "size_prof.m"
      }
#line 710 "size_prof.m"
  }
#line 703 "size_prof.m"
}

#line 1092 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1092__1_3_p_0(
#line 1092 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
#line 1092 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
#line 1092 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_46)
#line 1092 "size_prof.m"
{
#line 1092 "size_prof.m"
  {
#line 1092 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1092 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_46;

#line 1092 "size_prof.m"
    {
#line 1092 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__RevTypeInfoMap0_12, ((MR_Box) (transform_hlds__size_prof__HeadVar__2_45)), &transform_hlds__size_prof__conv0_HeadVar__3_46);
    }
#line 1092 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1092 "size_prof.m"
      {
#line 1092 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__3_46 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_46);
#line 1092 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1092 "size_prof.m"
      }
#line 1092 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1092 "size_prof.m"
  }
#line 1092 "size_prof.m"
}

#line 761 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__761__1_2_p_0(
#line 761 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_21,
#line 761 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_56)
#line 761 "size_prof.m"
{
#line 761 "size_prof.m"
  {
#line 761 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 761 "size_prof.m"
    {
#line 761 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_21)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_56)));
    }
#line 761 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 761 "size_prof.m"
  }
#line 761 "size_prof.m"
}

#line 718 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__718__1_2_p_0(
#line 718 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgGoals_36,
#line 718 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_69)
#line 718 "size_prof.m"
{
#line 718 "size_prof.m"
  {
#line 718 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 718 "size_prof.m"
    {
#line 718 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_36)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_69)));
    }
#line 718 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 718 "size_prof.m"
  }
#line 718 "size_prof.m"
}

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__591__1_3_p_0(
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
#line 591 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
#line 591 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
#line 591 "size_prof.m"
{
#line 591 "size_prof.m"
  {
#line 591 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 591 "size_prof.m"
    {
#line 591 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_53_57_49_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_138, transform_hlds__size_prof__HeadVar__3_140);
#line 591 "size_prof.m"
      return;
    }
#line 591 "size_prof.m"
  }
#line 591 "size_prof.m"
}

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__550__1_3_p_0(
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
#line 550 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
#line 550 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
#line 550 "size_prof.m"
{
#line 550 "size_prof.m"
  {
#line 550 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 550 "size_prof.m"
    {
#line 550 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_53_48_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_134, transform_hlds__size_prof__HeadVar__3_136);
#line 550 "size_prof.m"
      return;
    }
#line 550 "size_prof.m"
  }
#line 550 "size_prof.m"
}

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__436__1_3_p_0(
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
#line 436 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
#line 436 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
#line 436 "size_prof.m"
{
#line 436 "size_prof.m"
  {
#line 436 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 436 "size_prof.m"
    {
#line 436 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_51_54_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_1037, transform_hlds__size_prof__HeadVar__3_1039);
#line 436 "size_prof.m"
      return;
    }
#line 436 "size_prof.m"
  }
#line 436 "size_prof.m"
}

#line 194 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 194 "size_prof.m"
      return;
    }
#line 194 "size_prof.m"
  }
#line 194 "size_prof.m"
}

#line 194 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
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
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 194 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 194 "size_prof.m"
  }
#line 194 "size_prof.m"
}

#line 195 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 195 "size_prof.m"
      return;
    }
#line 195 "size_prof.m"
  }
#line 195 "size_prof.m"
}

#line 195 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
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
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 195 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 195 "size_prof.m"
  }
#line 195 "size_prof.m"
}

#line 196 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
#line 196 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 196 "size_prof.m"
{
#line 196 "size_prof.m"
  {
#line 196 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 196 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 196 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 196 "size_prof.m"
    {
#line 196 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 196 "size_prof.m"
      return;
    }
#line 196 "size_prof.m"
  }
#line 196 "size_prof.m"
}

#line 196 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 196 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 196 "size_prof.m"
{
#line 196 "size_prof.m"
  {
#line 196 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 196 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 196 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 196 "size_prof.m"
    {
#line 196 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 196 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 196 "size_prof.m"
  }
#line 196 "size_prof.m"
}

#line 197 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
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
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 197 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 197 "size_prof.m"
    {
#line 197 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 197 "size_prof.m"
      return;
    }
#line 197 "size_prof.m"
  }
#line 197 "size_prof.m"
}

#line 197 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
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
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 197 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 197 "size_prof.m"
    {
#line 197 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 197 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 197 "size_prof.m"
  }
#line 197 "size_prof.m"
}

#line 198 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
#line 198 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 198 "size_prof.m"
{
#line 198 "size_prof.m"
  {
#line 198 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 198 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
#line 198 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

#line 198 "size_prof.m"
    {
#line 198 "size_prof.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
#line 198 "size_prof.m"
      return;
    }
#line 198 "size_prof.m"
  }
#line 198 "size_prof.m"
}

#line 198 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 198 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 198 "size_prof.m"
{
#line 198 "size_prof.m"
  {
#line 198 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 198 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
#line 198 "size_prof.m"
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

#line 198 "size_prof.m"
    {
#line 198 "size_prof.m"
      return transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
#line 198 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 198 "size_prof.m"
  }
#line 198 "size_prof.m"
}

#line 200 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof____Compare____info_0_0(
#line 200 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
#line 200 "size_prof.m"
{
#line 200 "size_prof.m"
  {
#line 200 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 200 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_36 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
#line 200 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_37 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

#line 200 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_36 == transform_hlds__size_prof__CastY_37);
#line 200 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 3266 "transform_hlds.size_prof.c"
      *transform_hlds__size_prof__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "size_prof.m"
    else
#line 200 "size_prof.m"
      {
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 2)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 3)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 4)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 5)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 6)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 7)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 8)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 9)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 10)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 200 "size_prof.m"
        {
#line 200 "size_prof.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], &transform_hlds__size_prof__V_26_26, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
        }
#line 3324 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_26_26 == (MR_Integer) 0);
#line 200 "size_prof.m"
        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_26_26;
#line 200 "size_prof.m"
        else
#line 200 "size_prof.m"
          {
#line 200 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 200 "size_prof.m"
            {
#line 200 "size_prof.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
            }
#line 3344 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_27_27 == (MR_Integer) 0);
#line 200 "size_prof.m"
            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_27_27;
#line 200 "size_prof.m"
            else
#line 200 "size_prof.m"
              {
#line 200 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_28_28;

#line 200 "size_prof.m"
                {
#line 200 "size_prof.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], &transform_hlds__size_prof__V_28_28, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                }
#line 3364 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_28_28 == (MR_Integer) 0);
#line 200 "size_prof.m"
                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_28_28;
#line 200 "size_prof.m"
                else
#line 200 "size_prof.m"
                  {
#line 200 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_29_29;

#line 200 "size_prof.m"
                    {
#line 200 "size_prof.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__V_29_29, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                    }
#line 3384 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_29_29 == (MR_Integer) 0);
#line 200 "size_prof.m"
                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_29_29;
#line 200 "size_prof.m"
                    else
#line 200 "size_prof.m"
                      {
#line 200 "size_prof.m"
                        MR_Word transform_hlds__size_prof__V_30_30;

#line 200 "size_prof.m"
                        {
#line 200 "size_prof.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__V_30_30, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                        }
#line 3404 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_30_30 == (MR_Integer) 0);
#line 200 "size_prof.m"
                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_30_30;
#line 200 "size_prof.m"
                        else
#line 200 "size_prof.m"
                          {
#line 200 "size_prof.m"
                            MR_Word transform_hlds__size_prof__V_31_31;

#line 200 "size_prof.m"
                            {
#line 200 "size_prof.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], &transform_hlds__size_prof__V_31_31, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                            }
#line 3424 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_31_31 == (MR_Integer) 0);
#line 200 "size_prof.m"
                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_31_31;
#line 200 "size_prof.m"
                            else
#line 200 "size_prof.m"
                              {
#line 200 "size_prof.m"
                                MR_Word transform_hlds__size_prof__V_32_32;

#line 200 "size_prof.m"
                                {
#line 200 "size_prof.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[3], &transform_hlds__size_prof__V_32_32, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                }
#line 3444 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_32_32 == (MR_Integer) 0);
#line 200 "size_prof.m"
                                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_32_32;
#line 200 "size_prof.m"
                                else
#line 200 "size_prof.m"
                                  {
#line 200 "size_prof.m"
                                    MR_Word transform_hlds__size_prof__V_33_33;

#line 200 "size_prof.m"
                                    {
#line 200 "size_prof.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__size_prof__V_33_33, ((MR_Box) (transform_hlds__size_prof__V_11_11)), ((MR_Box) (transform_hlds__size_prof__V_22_22)));
                                    }
#line 3464 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_33_33 == (MR_Integer) 0);
#line 200 "size_prof.m"
                                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_33_33;
#line 200 "size_prof.m"
                                    else
#line 200 "size_prof.m"
                                      {
#line 200 "size_prof.m"
                                        MR_Word transform_hlds__size_prof__V_34_34;
#line 200 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_49_49 = (MR_Integer) transform_hlds__size_prof__V_12_12;
#line 200 "size_prof.m"
                                        MR_Integer transform_hlds__size_prof__V_50_50 = (MR_Integer) transform_hlds__size_prof__V_23_23;

#line 200 "size_prof.m"
                                        {
#line 200 "size_prof.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__size_prof__V_34_34, transform_hlds__size_prof__V_49_49, transform_hlds__size_prof__V_50_50);
                                        }
#line 3488 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_34_34 == (MR_Integer) 0);
#line 200 "size_prof.m"
                                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_34_34;
#line 200 "size_prof.m"
                                        else
#line 200 "size_prof.m"
                                          {
#line 200 "size_prof.m"
                                            MR_Word transform_hlds__size_prof__V_35_35;

#line 200 "size_prof.m"
                                            {
#line 200 "size_prof.m"
                                              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__size_prof__V_35_35, transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                            }
#line 3508 "transform_hlds.size_prof.c"
                                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_35_35 == (MR_Integer) 0);
#line 200 "size_prof.m"
                                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
#line 200 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__V_35_35;
#line 200 "size_prof.m"
                                            else
#line 200 "size_prof.m"
                                              {
#line 200 "size_prof.m"
                                                hlds__hlds_module____Compare____module_info_0_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__V_14_14, transform_hlds__size_prof__V_25_25);
#line 200 "size_prof.m"
                                                return;
                                              }
#line 200 "size_prof.m"
                                          }
#line 200 "size_prof.m"
                                      }
#line 200 "size_prof.m"
                                  }
#line 200 "size_prof.m"
                              }
#line 200 "size_prof.m"
                          }
#line 200 "size_prof.m"
                      }
#line 200 "size_prof.m"
                  }
#line 200 "size_prof.m"
              }
#line 200 "size_prof.m"
          }
#line 200 "size_prof.m"
      }
#line 200 "size_prof.m"
  }
#line 200 "size_prof.m"
}

#line 200 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____info_0_0(
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 200 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 200 "size_prof.m"
{
#line 200 "size_prof.m"
  {
#line 200 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 200 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastX_25 = (MR_Integer) transform_hlds__size_prof__HeadVar__1_1;
#line 200 "size_prof.m"
    MR_Integer transform_hlds__size_prof__CastY_26 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;

#line 200 "size_prof.m"
    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_25 == transform_hlds__size_prof__CastY_26);
#line 200 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
      transform_hlds__size_prof__succeeded = MR_TRUE;
#line 200 "size_prof.m"
    else
#line 200 "size_prof.m"
      {
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_28_28;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_29_29;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_30_30;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_31_31;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_32_32;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_33_33;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_34_34;
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 2)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 3)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 4)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 5)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 6)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 7)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 8)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 9)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 10)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
#line 200 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));

#line 3637 "transform_hlds.size_prof.c"
        {
#line 3639 "transform_hlds.size_prof.c"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__V_3_3)), ((MR_Box) (transform_hlds__size_prof__V_14_14)));
        }
#line 200 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
          {
#line 3646 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_28_28 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3648 "transform_hlds.size_prof.c"
            {
#line 3650 "transform_hlds.size_prof.c"
              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_28_28, ((MR_Box) (transform_hlds__size_prof__V_4_4)), ((MR_Box) (transform_hlds__size_prof__V_15_15)));
            }
#line 200 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
              {
#line 3657 "transform_hlds.size_prof.c"
                transform_hlds__size_prof__TypeInfo_29_29 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[3];
#line 3659 "transform_hlds.size_prof.c"
                {
#line 3661 "transform_hlds.size_prof.c"
                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_29_29, ((MR_Box) (transform_hlds__size_prof__V_5_5)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
                }
#line 200 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                  {
#line 3668 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_30_30 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
#line 3670 "transform_hlds.size_prof.c"
                    {
#line 3672 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_30_30, ((MR_Box) (transform_hlds__size_prof__V_6_6)), ((MR_Box) (transform_hlds__size_prof__V_17_17)));
                    }
#line 200 "size_prof.m"
                    if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                      {
#line 3679 "transform_hlds.size_prof.c"
                        transform_hlds__size_prof__TypeInfo_31_31 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
#line 3681 "transform_hlds.size_prof.c"
                        {
#line 3683 "transform_hlds.size_prof.c"
                          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_31_31, ((MR_Box) (transform_hlds__size_prof__V_7_7)), ((MR_Box) (transform_hlds__size_prof__V_18_18)));
                        }
#line 200 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                          {
#line 3690 "transform_hlds.size_prof.c"
                            transform_hlds__size_prof__TypeInfo_32_32 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[5];
#line 3692 "transform_hlds.size_prof.c"
                            {
#line 3694 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_32_32, ((MR_Box) (transform_hlds__size_prof__V_8_8)), ((MR_Box) (transform_hlds__size_prof__V_19_19)));
                            }
#line 200 "size_prof.m"
                            if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                              {
#line 3701 "transform_hlds.size_prof.c"
                                transform_hlds__size_prof__TypeInfo_33_33 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[3];
#line 3703 "transform_hlds.size_prof.c"
                                {
#line 3705 "transform_hlds.size_prof.c"
                                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_33_33, ((MR_Box) (transform_hlds__size_prof__V_9_9)), ((MR_Box) (transform_hlds__size_prof__V_20_20)));
                                }
#line 200 "size_prof.m"
                                if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                  {
#line 3712 "transform_hlds.size_prof.c"
                                    transform_hlds__size_prof__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3714 "transform_hlds.size_prof.c"
                                    {
#line 3716 "transform_hlds.size_prof.c"
                                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__size_prof__V_10_10)), ((MR_Box) (transform_hlds__size_prof__V_21_21)));
                                    }
#line 200 "size_prof.m"
                                    if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                      {
#line 3723 "transform_hlds.size_prof.c"
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_11_11 == transform_hlds__size_prof__V_22_22);
#line 200 "size_prof.m"
                                        if (transform_hlds__size_prof__succeeded)
#line 200 "size_prof.m"
                                          {
#line 3729 "transform_hlds.size_prof.c"
                                            {
#line 3731 "transform_hlds.size_prof.c"
                                              transform_hlds__size_prof__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__size_prof__V_12_12, transform_hlds__size_prof__V_23_23);
                                            }
#line 200 "size_prof.m"
                                            if (transform_hlds__size_prof__succeeded)
#line 3736 "transform_hlds.size_prof.c"
                                              {
#line 3738 "transform_hlds.size_prof.c"
                                                return transform_hlds__size_prof__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__size_prof__V_13_13, transform_hlds__size_prof__V_24_24);
                                              }
#line 200 "size_prof.m"
                                          }
#line 200 "size_prof.m"
                                      }
#line 200 "size_prof.m"
                                  }
#line 200 "size_prof.m"
                              }
#line 200 "size_prof.m"
                          }
#line 200 "size_prof.m"
                      }
#line 200 "size_prof.m"
                  }
#line 200 "size_prof.m"
              }
#line 200 "size_prof.m"
          }
#line 200 "size_prof.m"
      }
#line 200 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 200 "size_prof.m"
  }
#line 200 "size_prof.m"
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
#line 3809 "transform_hlds.size_prof.c"
  {
#line 3811 "transform_hlds.size_prof.c"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__HeadVar__2_1 == transform_hlds__size_prof__HeadVar__2_2);

#line 3814 "transform_hlds.size_prof.c"
    return transform_hlds__size_prof__succeeded;
#line 3816 "transform_hlds.size_prof.c"
  }
#line 93 "size_prof.m"
}

#line 1291 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
#line 1291 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_3,
#line 1291 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
#line 1291 "size_prof.m"
{
#line 1294 "size_prof.m"
  {
#line 1294 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellInitInst_4;
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof__CellFinalInst_6;
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof__ModuleInfo_8;
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgInitInst_5;
#line 1294 "size_prof.m"
    MR_Word transform_hlds__size_prof___ArgFinalInst_7;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_12_12;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1295 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20;

#line 1294 "size_prof.m"
    transform_hlds__size_prof__CellInitInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_9_9, (MR_Integer) 0)));
#line 1294 "size_prof.m"
    transform_hlds__size_prof___ArgInitInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_9_9, (MR_Integer) 1)));
#line 1294 "size_prof.m"
    transform_hlds__size_prof__CellFinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 0)));
#line 1294 "size_prof.m"
    transform_hlds__size_prof___ArgFinalInst_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, (MR_Integer) 1)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 0)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 1)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 2)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 3)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 4)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 5)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 6)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 7)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 8)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 9)));
#line 1295 "size_prof.m"
    transform_hlds__size_prof__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 10)));
#line 1296 "size_prof.m"
    {
#line 1296 "size_prof.m"
      transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_8, transform_hlds__size_prof__CellInitInst_4);
    }
#line 1294 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1297 "size_prof.m"
      {
#line 1297 "size_prof.m"
        return transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_8, transform_hlds__size_prof__CellFinalInst_6);
      }
#line 1294 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1294 "size_prof.m"
  }
#line 1291 "size_prof.m"
}

#line 1260 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_6,
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Modes_7,
#line 1260 "size_prof.m"
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
#line 1260 "size_prof.m"
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
#line 1260 "size_prof.m"
  MR_Word transform_hlds__size_prof__Info_10)
#line 1260 "size_prof.m"
{
#line 1265 "size_prof.m"
  {
#line 1265 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 1265 "size_prof.m"
    if ((transform_hlds__size_prof__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "size_prof.m"
      if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "size_prof.m"
        {
#line 1267 "size_prof.m"
          *transform_hlds__size_prof__DefinedArgs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1268 "size_prof.m"
          *transform_hlds__size_prof__NonDefinedArgs_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1265 "size_prof.m"
        }
#line 1265 "size_prof.m"
      else
#line 1270 "size_prof.m"
        {
#line 1272 "size_prof.m"
          {
#line 1272 "size_prof.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1272 "size_prof.m"
            return;
          }
#line 1270 "size_prof.m"
        }
#line 1265 "size_prof.m"
    else
#line 1265 "size_prof.m"
      {
#line 1265 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 1)));
#line 1265 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 0)));

#line 1265 "size_prof.m"
        if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1274 "size_prof.m"
          {
#line 1276 "size_prof.m"
            {
#line 1276 "size_prof.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
#line 1276 "size_prof.m"
              return;
            }
#line 1274 "size_prof.m"
          }
#line 1265 "size_prof.m"
        else
#line 1278 "size_prof.m"
          {
#line 1278 "size_prof.m"
            MR_Word transform_hlds__size_prof__FirstMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 0)));
#line 1278 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 1)));
#line 1278 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1278 "size_prof.m"
            MR_Word transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellInitInst_30;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof__CellFinalInst_32;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof__ModuleInfo_34;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_35_35;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_36_36;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgInitInst_31;
#line 1294 "size_prof.m"
            MR_Word transform_hlds__size_prof___ArgFinalInst_33;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_37_37;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_38_38;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_39_39;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_40_40;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_41_41;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_42_42;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_44_44;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_45_45;
#line 1295 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_46_46;

#line 1280 "size_prof.m"
            {
#line 1280 "size_prof.m"
              transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__V_27_27, transform_hlds__size_prof__LaterModes_18, &transform_hlds__size_prof__LaterDefinedArgs_19, &transform_hlds__size_prof__LaterNonDefinedArgs_20, transform_hlds__size_prof__Info_10);
            }
#line 1294 "size_prof.m"
            transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 0)));
#line 1294 "size_prof.m"
            transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 1)));
#line 1294 "size_prof.m"
            transform_hlds__size_prof__CellInitInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_35_35, (MR_Integer) 0)));
#line 1294 "size_prof.m"
            transform_hlds__size_prof___ArgInitInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_35_35, (MR_Integer) 1)));
#line 1294 "size_prof.m"
            transform_hlds__size_prof__CellFinalInst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 0)));
#line 1294 "size_prof.m"
            transform_hlds__size_prof___ArgFinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_36_36, (MR_Integer) 1)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 0)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 1)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 2)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 3)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 4)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 5)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 6)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 7)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 8)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 9)));
#line 1295 "size_prof.m"
            transform_hlds__size_prof__ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 10)));
#line 1296 "size_prof.m"
            {
#line 1296 "size_prof.m"
              transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_34, transform_hlds__size_prof__CellInitInst_30);
            }
#line 1294 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1297 "size_prof.m"
              {
#line 1297 "size_prof.m"
                transform_hlds__size_prof__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_34, transform_hlds__size_prof__CellFinalInst_32);
              }
#line 1285 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1283 "size_prof.m"
              {
#line 1283 "size_prof.m"
                {
#line 1283 "size_prof.m"
                  MR_Word base;
#line 1283 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "size_prof.m"
                  *transform_hlds__size_prof__DefinedArgs_8 = base;
#line 1283 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1283 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterDefinedArgs_19));
#line 1283 "size_prof.m"
                }
#line 1284 "size_prof.m"
                *transform_hlds__size_prof__NonDefinedArgs_9 = transform_hlds__size_prof__LaterNonDefinedArgs_20;
#line 1283 "size_prof.m"
              }
#line 1285 "size_prof.m"
            else
#line 1286 "size_prof.m"
              {
#line 1286 "size_prof.m"
                *transform_hlds__size_prof__DefinedArgs_8 = transform_hlds__size_prof__LaterDefinedArgs_19;
#line 1287 "size_prof.m"
                {
#line 1287 "size_prof.m"
                  MR_Word base;
#line 1287 "size_prof.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "size_prof.m"
                  *transform_hlds__size_prof__NonDefinedArgs_9 = base;
#line 1287 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_28_28));
#line 1287 "size_prof.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterNonDefinedArgs_20));
#line 1287 "size_prof.m"
                }
#line 1286 "size_prof.m"
              }
#line 1278 "size_prof.m"
          }
#line 1265 "size_prof.m"
      }
#line 1265 "size_prof.m"
  }
#line 1260 "size_prof.m"
}

#line 1236 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 1236 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
#line 1236 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10)
#line 1236 "size_prof.m"
{
#line 1239 "size_prof.m"
  {
#line 1239 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1239 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 1239 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 1240 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_17_17;
#line 1240 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1240 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_V_16_16;

#line 1240 "size_prof.m"
    {
#line 1240 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TypeInfoMap_5, ((MR_Box) (transform_hlds__size_prof__Type_6)), &transform_hlds__size_prof__conv0_V_16_16);
    }
#line 1240 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1240 "size_prof.m"
      {
#line 1240 "size_prof.m"
        transform_hlds__size_prof__V_16_16 = ((MR_Word) transform_hlds__size_prof__conv0_V_16_16);
#line 1240 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1240 "size_prof.m"
      }
#line 1240 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1240 "size_prof.m"
      {
#line 4183 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeInfo_17_17 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1240 "size_prof.m"
        {
#line 1240 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_17_17, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), ((MR_Box) (transform_hlds__size_prof__V_16_16)));
        }
#line 1240 "size_prof.m"
      }
#line 1242 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1241 "size_prof.m"
      {
#line 1241 "size_prof.m"
        {
#line 1241 "size_prof.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], ((MR_Box) (transform_hlds__size_prof__Type_6)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9, transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);
#line 1241 "size_prof.m"
          return;
        }
#line 1241 "size_prof.m"
      }
#line 1242 "size_prof.m"
    else
#line 1241 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10 = transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9;
#line 1239 "size_prof.m"
  }
#line 1236 "size_prof.m"
}

#line 1232 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1232 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 1232 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 1232 "size_prof.m"
{
#line 1232 "size_prof.m"
  {
#line 1232 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1232 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

#line 1232 "size_prof.m"
    {
#line 1232 "size_prof.m"
      transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
    }
#line 1232 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
#line 1232 "size_prof.m"
  }
#line 1232 "size_prof.m"
}

#line 1226 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
#line 1226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 1226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 1226 "size_prof.m"
{
#line 1228 "size_prof.m"
  {
#line 1228 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_45_45 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoList_6;
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_7;
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_10_10;
#line 1228 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_11_11;
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1229 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1232 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_TargetTypeInfoMap_7;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1234 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;

#line 1231 "size_prof.m"
    {
#line 1231 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45, transform_hlds__size_prof__TargetTypeInfoMap0_4, &transform_hlds__size_prof__TargetTypeInfoList_6);
    }
#line 1232 "size_prof.m"
    {
#line 1232 "size_prof.m"
      transform_hlds__size_prof__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1]));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_10_10, 3) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_5));
#line 1232 "size_prof.m"
    }
#line 1233 "size_prof.m"
    {
#line 1233 "size_prof.m"
      transform_hlds__size_prof__V_11_11 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45);
    }
#line 1232 "size_prof.m"
    {
#line 1232 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[0], (MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__V_10_10, transform_hlds__size_prof__TargetTypeInfoList_6, ((MR_Box) (transform_hlds__size_prof__V_11_11)), &transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
    }
#line 1232 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_7 = ((MR_Word) transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 1234 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 1234 "size_prof.m"
    {
#line 1234 "size_prof.m"
      MR_Word base;
#line 1234 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = base;
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_34_34));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_35_35));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_36_36));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap_7));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_38_38));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1234 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1234 "size_prof.m"
    }
#line 1228 "size_prof.m"
  }
#line 1226 "size_prof.m"
}

#line 1199 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__VarCounts_2,
#line 1199 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
#line 1199 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4)
#line 1199 "size_prof.m"
{
#line 1203 "size_prof.m"
  while (MR_TRUE)
#line 1203 "size_prof.m"
    {
#line 1203 "size_prof.m"
      /* tailcall optimized into a loop */
#line 1203 "size_prof.m"
      {
#line 1203 "size_prof.m"
        MR_bool transform_hlds__size_prof__succeeded;

#line 1203 "size_prof.m"
        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_RevMap_4 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1203 "size_prof.m"
        else
#line 1204 "size_prof.m"
          {
#line 1204 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeInfo_21_21;
#line 1204 "size_prof.m"
            MR_Box transform_hlds__size_prof__T_9;
#line 1204 "size_prof.m"
            MR_Word transform_hlds__size_prof__Var_10;
#line 1204 "size_prof.m"
            MR_Word transform_hlds__size_prof__AssocList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 1204 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Count_14;
#line 1204 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 1204 "size_prof.m"
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;
#line 1205 "size_prof.m"
            MR_Box transform_hlds__size_prof__conv0_Count_14;

#line 1204 "size_prof.m"
            transform_hlds__size_prof__T_9 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 0));
#line 1204 "size_prof.m"
            transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_17_17, (MR_Integer) 1)));
#line 4463 "transform_hlds.size_prof.c"
            transform_hlds__size_prof__TypeInfo_21_21 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1205 "size_prof.m"
            {
#line 1205 "size_prof.m"
              mercury__map__lookup_3_p_0(transform_hlds__size_prof__TypeInfo_21_21, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__VarCounts_2, ((MR_Box) (transform_hlds__size_prof__Var_10)), &transform_hlds__size_prof__conv0_Count_14);
            }
#line 1205 "size_prof.m"
            transform_hlds__size_prof__Count_14 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_14);
#line 1206 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Count_14 == (MR_Integer) 1);
#line 1208 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 1207 "size_prof.m"
              {
#line 1207 "size_prof.m"
                mercury__map__det_insert_4_p_0(transform_hlds__size_prof__TypeInfo_21_21, transform_hlds__size_prof__TypeInfo_for_T_20, ((MR_Box) (transform_hlds__size_prof__Var_10)), transform_hlds__size_prof__T_9, transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3, &transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18);
              }
#line 1208 "size_prof.m"
            else
#line 1207 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
#line 1211 "size_prof.m"
            /* direct tailcall eliminated */
#line 1211 "size_prof.m"
            {
#line 1211 "size_prof.m"
              MR_Word transform_hlds__size_prof__HeadVar__1__tmp_copy_1 = transform_hlds__size_prof__AssocList_11;
#line 1211 "size_prof.m"
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;

#line 1211 "size_prof.m"
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1211 "size_prof.m"
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__HeadVar__1__tmp_copy_1;
#line 1211 "size_prof.m"
            }
#line 1211 "size_prof.m"
            continue;
#line 1204 "size_prof.m"
          }
#line 1203 "size_prof.m"
      }
#line 1203 "size_prof.m"
      break;
#line 1203 "size_prof.m"
    }
#line 1199 "size_prof.m"
}

#line 1174 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
#line 1174 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
#line 1174 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12)
#line 1174 "size_prof.m"
{
#line 1176 "size_prof.m"
  {
#line 1176 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_62_62 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_63_63;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoList_4;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorList_5;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts0_6;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts1_7;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarCounts_8;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_9;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_10;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1176 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1177 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1178 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1184 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1184 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;

#line 1177 "size_prof.m"
    {
#line 1177 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_13_13, &transform_hlds__size_prof__TypeInfoList_4);
    }
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1178 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 4644 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1178 "size_prof.m"
    {
#line 1178 "size_prof.m"
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__V_14_14, &transform_hlds__size_prof__TypeCtorList_5);
    }
#line 1179 "size_prof.m"
    {
#line 1179 "size_prof.m"
      mercury__map__init_1_p_0(transform_hlds__size_prof__TypeInfo_62_62, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &transform_hlds__size_prof__VarCounts0_6);
    }
#line 1180 "size_prof.m"
    {
#line 1180 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts0_6, &transform_hlds__size_prof__VarCounts1_7);
    }
#line 1181 "size_prof.m"
    {
#line 1181 "size_prof.m"
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts1_7, &transform_hlds__size_prof__VarCounts_8);
    }
#line 1182 "size_prof.m"
    {
#line 1182 "size_prof.m"
      transform_hlds__size_prof__V_15_15 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_61_61);
    }
#line 1182 "size_prof.m"
    {
#line 1182 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_15_15, &transform_hlds__size_prof__RevTypeInfoMap_9);
    }
#line 1183 "size_prof.m"
    {
#line 1183 "size_prof.m"
      transform_hlds__size_prof__V_16_16 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_63_63);
    }
#line 1183 "size_prof.m"
    {
#line 1183 "size_prof.m"
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__V_16_16, &transform_hlds__size_prof__RevTypeCtorMap_10);
    }
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
#line 1184 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
#line 1185 "size_prof.m"
    {
#line 1185 "size_prof.m"
      MR_Word base;
#line 1185 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_12 = base;
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_40_40));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_10));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_9));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1185 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1185 "size_prof.m"
    }
#line 1176 "size_prof.m"
  }
#line 1174 "size_prof.m"
}

#line 1137 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__TVar_6,
#line 1137 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1137 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1137 "size_prof.m"
{
#line 1140 "size_prof.m"
  {
#line 1140 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1140 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoLocn_8;
#line 1140 "size_prof.m"
    MR_Word transform_hlds__size_prof__Type_9;

#line 1141 "size_prof.m"
    {
#line 1141 "size_prof.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__RttiVarMaps_5, transform_hlds__size_prof__TVar_6, &transform_hlds__size_prof__TypeInfoLocn_8);
    }
#line 1144 "size_prof.m"
    {
#line 1144 "size_prof.m"
      transform_hlds__size_prof__Type_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 0) = ((MR_Box) (transform_hlds__size_prof__TVar_6));
#line 1144 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "size_prof.m"
    }
#line 1148 "size_prof.m"
    if (((MR_tag((MR_Word) transform_hlds__size_prof__TypeInfoLocn_8)) == (MR_mktag((MR_Integer) 0))))
#line 1146 "size_prof.m"
      {
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_59_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_60_72 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeInfoLocn_8, (MR_Integer) 0)));
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap_24;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap_26;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 1146 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1116 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1121 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1127 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 1127 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 1118 "size_prof.m"
        {
#line 1118 "size_prof.m"
          mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_71, transform_hlds__size_prof__TypeInfo_60_72, ((MR_Box) (transform_hlds__size_prof__Type_9)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), transform_hlds__size_prof__TypeInfoMap0_23, &transform_hlds__size_prof__TypeInfoMap_24);
        }
#line 1119 "size_prof.m"
        {
#line 1119 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_72, transform_hlds__size_prof__TypeCtorInfo_59_71, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), ((MR_Box) (transform_hlds__size_prof__Type_9)), transform_hlds__size_prof__RevTypeInfoMap0_22, &transform_hlds__size_prof__RevTypeInfoMap1_25);
        }
#line 1121 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1120 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap1_25;
#line 1121 "size_prof.m"
        else
#line 1125 "size_prof.m"
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1127 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1128 "size_prof.m"
        {
#line 1128 "size_prof.m"
          MR_Word base;
#line 1128 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_24));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_26));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_54_54));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_55_55));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 1128 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 1128 "size_prof.m"
        }
#line 1146 "size_prof.m"
      }
#line 1148 "size_prof.m"
    else
#line 1149 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_13;
#line 1140 "size_prof.m"
  }
#line 1137 "size_prof.m"
}

#line 1130 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
#line 1130 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_5,
#line 1130 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_6,
#line 1130 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
#line 1130 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11)
#line 1130 "size_prof.m"
{
#line 1132 "size_prof.m"
  {
#line 1132 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1132 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1132 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap_9;
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1133 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33;
#line 1135 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;

#line 1134 "size_prof.m"
    {
#line 1134 "size_prof.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__KnownSize_6)), transform_hlds__size_prof__KnownSizeMap0_8, &transform_hlds__size_prof__KnownSizeMap_9);
    }
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
#line 1135 "size_prof.m"
    transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
#line 1135 "size_prof.m"
    {
#line 1135 "size_prof.m"
      MR_Word base;
#line 1135 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_11 = base;
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_23_23));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_24_24));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_25_25));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_9));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_32_32));
#line 1135 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_33_33));
#line 1135 "size_prof.m"
    }
#line 1132 "size_prof.m"
  }
#line 1130 "size_prof.m"
}

#line 1112 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_5,
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1112 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
#line 1112 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
#line 1112 "size_prof.m"
{
#line 1115 "size_prof.m"
  {
#line 1115 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_60_60 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap_10;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_12;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1115 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1116 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1121 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1127 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1127 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;

#line 1118 "size_prof.m"
    {
#line 1118 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_59, transform_hlds__size_prof__TypeInfo_60_60, ((MR_Box) (transform_hlds__size_prof__Type_5)), ((MR_Box) (transform_hlds__size_prof__Var_6)), transform_hlds__size_prof__TypeInfoMap0_9, &transform_hlds__size_prof__TypeInfoMap_10);
    }
#line 1119 "size_prof.m"
    {
#line 1119 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_60, transform_hlds__size_prof__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Type_5)), transform_hlds__size_prof__RevTypeInfoMap0_8, &transform_hlds__size_prof__RevTypeInfoMap1_11);
    }
#line 1121 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1120 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap1_11;
#line 1121 "size_prof.m"
    else
#line 1125 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap0_8;
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 1127 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 1128 "size_prof.m"
    {
#line 1128 "size_prof.m"
      MR_Word base;
#line 1128 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_37_37));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_10));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_39_39));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_12));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1128 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1128 "size_prof.m"
    }
#line 1115 "size_prof.m"
  }
#line 1112 "size_prof.m"
}

#line 1092 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
#line 1092 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 1092 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 1092 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2)
#line 1092 "size_prof.m"
{
#line 1092 "size_prof.m"
  {
#line 1092 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1092 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 1092 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_HeadVar__3_46;

#line 1092 "size_prof.m"
    {
#line 1092 "size_prof.m"
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1092__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv1_HeadVar__3_46);
    }
#line 1092 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1092 "size_prof.m"
      {
#line 1092 "size_prof.m"
        *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv1_HeadVar__3_46));
#line 1092 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1092 "size_prof.m"
      }
#line 1092 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 1092 "size_prof.m"
  }
#line 1092 "size_prof.m"
}

#line 1085 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_6,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
#line 1085 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
#line 1085 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20)
#line 1085 "size_prof.m"
{
#line 1088 "size_prof.m"
  {
#line 1088 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1088 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1089 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1102 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor0_11;
#line 1090 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtor0_11;

#line 1090 "size_prof.m"
    {
#line 1090 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__RevTypeCtorMap0_10, ((MR_Box) (transform_hlds__size_prof__TypeCtorInfoVar_7)), &transform_hlds__size_prof__conv0_TypeCtor0_11);
    }
#line 1090 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1090 "size_prof.m"
      {
#line 1090 "size_prof.m"
        transform_hlds__size_prof__TypeCtor0_11 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtor0_11);
#line 1090 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1090 "size_prof.m"
      }
#line 1102 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1091 "size_prof.m"
      {
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
#line 1091 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
#line 1099 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_13;
#line 1092 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 1092 "size_prof.m"
        {
#line 1092 "size_prof.m"
          transform_hlds__size_prof__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
#line 1092 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
#line 1092 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1092 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_21_21, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_12));
#line 1092 "size_prof.m"
        }
#line 1092 "size_prof.m"
        {
#line 1092 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__V_21_21, transform_hlds__size_prof__ArgTypeInfoVars_8, &transform_hlds__size_prof__ArgTypes_13);
        }
#line 1099 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 1093 "size_prof.m"
          {
#line 1093 "size_prof.m"
            MR_Integer transform_hlds__size_prof__Arity_14;
#line 1093 "size_prof.m"
            MR_Word transform_hlds__size_prof__SymName_15;
#line 1093 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor1_17;
#line 1093 "size_prof.m"
            MR_Word transform_hlds__size_prof__Type_18;
#line 1095 "size_prof.m"
            MR_Integer transform_hlds__size_prof___DeclArity_16;

#line 1093 "size_prof.m"
            {
#line 1093 "size_prof.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_14);
            }
#line 1095 "size_prof.m"
            transform_hlds__size_prof__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 0)));
#line 1095 "size_prof.m"
            transform_hlds__size_prof___DeclArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 1)));
#line 1096 "size_prof.m"
            {
#line 1096 "size_prof.m"
              transform_hlds__size_prof__TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 0) = ((MR_Box) (transform_hlds__size_prof__SymName_15));
#line 1096 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 1) = ((MR_Box) (transform_hlds__size_prof__Arity_14));
#line 1096 "size_prof.m"
            }
#line 1097 "size_prof.m"
            {
#line 1097 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor1_17, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Type_18);
            }
#line 1098 "size_prof.m"
            {
#line 1098 "size_prof.m"
              transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_18, transform_hlds__size_prof__Var_6, transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, transform_hlds__size_prof__STATE_VARIABLE_Info_20);
#line 1098 "size_prof.m"
              return;
            }
#line 1093 "size_prof.m"
          }
#line 1099 "size_prof.m"
        else
#line 1098 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1091 "size_prof.m"
      }
#line 1102 "size_prof.m"
    else
#line 1098 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
#line 1088 "size_prof.m"
  }
#line 1085 "size_prof.m"
}

#line 1071 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_7,
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
#line 1071 "size_prof.m"
  MR_String transform_hlds__size_prof__TypeCtorName_9,
#line 1071 "size_prof.m"
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
#line 1071 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
#line 1071 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18)
#line 1071 "size_prof.m"
{
#line 1075 "size_prof.m"
  {
#line 1075 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_65_65;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtor_12;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_13;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_14;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap_15;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_16;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_19_19;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1075 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_28_28;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30;
#line 1078 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31;
#line 1082 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1082 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;

#line 1076 "size_prof.m"
    {
#line 1076 "size_prof.m"
      transform_hlds__size_prof__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorModule_8));
#line 1076 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_19_19, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorName_9));
#line 1076 "size_prof.m"
    }
#line 1076 "size_prof.m"
    {
#line 1076 "size_prof.m"
      transform_hlds__size_prof__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__size_prof__V_19_19));
#line 1076 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorArity_10));
#line 1076 "size_prof.m"
    }
#line 1078 "size_prof.m"
    transform_hlds__size_prof__TypeCtorMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__RevTypeCtorMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1078 "size_prof.m"
    transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 5539 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5541 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_65_65 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 1080 "size_prof.m"
    {
#line 1080 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__TypeInfo_65_65, ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), ((MR_Box) (transform_hlds__size_prof__Var_7)), transform_hlds__size_prof__TypeCtorMap0_13, &transform_hlds__size_prof__TypeCtorMap_15);
    }
#line 1081 "size_prof.m"
    {
#line 1081 "size_prof.m"
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeInfo_65_65, transform_hlds__size_prof__TypeCtorInfo_64_64, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), transform_hlds__size_prof__RevTypeCtorMap0_14, &transform_hlds__size_prof__RevTypeCtorMap_16);
    }
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 1082 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 1083 "size_prof.m"
    {
#line 1083 "size_prof.m"
      MR_Word base;
#line 1083 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_18 = base;
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap_15));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_16));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_48_48));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_49_49));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1083 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1083 "size_prof.m"
    }
#line 1075 "size_prof.m"
  }
#line 1071 "size_prof.m"
}

#line 1036 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
#line 1036 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_6,
#line 1036 "size_prof.m"
  MR_String transform_hlds__size_prof__Prefix_7,
#line 1036 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Var_8,
#line 1036 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
#line 1036 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19)
#line 1036 "size_prof.m"
{
#line 1039 "size_prof.m"
  {
#line 1039 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet1_12;
#line 1039 "size_prof.m"
    MR_Integer transform_hlds__size_prof__VarNum_13;
#line 1039 "size_prof.m"
    MR_String transform_hlds__size_prof__VarNumStr_14;
#line 1039 "size_prof.m"
    MR_String transform_hlds__size_prof__Name_15;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_16;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_17;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51;
#line 1039 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52;
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1040 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1048 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1048 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1042 "size_prof.m"
    {
#line 1042 "size_prof.m"
      mercury__varset__new_var_3_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__Var_8, transform_hlds__size_prof__VarSet0_10, &transform_hlds__size_prof__VarSet1_12);
    }
#line 1043 "size_prof.m"
    {
#line 1043 "size_prof.m"
      mercury__term__var_to_int_2_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, &transform_hlds__size_prof__VarNum_13);
    }
#line 1044 "size_prof.m"
    {
#line 1044 "size_prof.m"
      mercury__string__int_to_string_2_p_0(transform_hlds__size_prof__VarNum_13, &transform_hlds__size_prof__VarNumStr_14);
    }
#line 1045 "size_prof.m"
    {
#line 1045 "size_prof.m"
      mercury__string__append_3_p_2(transform_hlds__size_prof__Prefix_7, transform_hlds__size_prof__VarNumStr_14, &transform_hlds__size_prof__Name_15);
    }
#line 1046 "size_prof.m"
    {
#line 1046 "size_prof.m"
      mercury__varset__name_var_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Name_15, transform_hlds__size_prof__VarSet1_12, &transform_hlds__size_prof__VarSet_16);
    }
#line 1047 "size_prof.m"
    {
#line 1047 "size_prof.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Type_6, transform_hlds__size_prof__VarTypes0_11, &transform_hlds__size_prof__VarTypes_17);
    }
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
#line 1048 "size_prof.m"
    transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
#line 1049 "size_prof.m"
    {
#line 1049 "size_prof.m"
      MR_Word base;
#line 1049 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_19 = base;
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_45_45));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_46_46));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_47_47));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_16));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_17));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_50_50));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_51_51));
#line 1049 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_52_52));
#line 1049 "size_prof.m"
    }
#line 1039 "size_prof.m"
  }
#line 1036 "size_prof.m"
}

#line 1008 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__Arg_10,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_11,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
#line 1008 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
#line 1008 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22)
#line 1008 "size_prof.m"
{
#line 1013 "size_prof.m"
  {
#line 1013 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__SizeVar_16;
#line 1013 "size_prof.m"
    MR_String transform_hlds__size_prof__Pred_18;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__Args_19;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_20;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_23_23;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38;
#line 1013 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_45_45;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48;
#line 1025 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49;

#line 1014 "size_prof.m"
    {
#line 1014 "size_prof.m"
      transform_hlds__size_prof__V_23_23 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1014 "size_prof.m"
    {
#line 1014 "size_prof.m"
      transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_23_23, (MR_String) "SizeVar", &transform_hlds__size_prof__SizeVar_16, transform_hlds__size_prof__STATE_VARIABLE_Info_0_21, transform_hlds__size_prof__STATE_VARIABLE_Info_22);
    }
#line 1019 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeSizeVar0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "size_prof.m"
      {
#line 1020 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;
#line 1020 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_27_27;

#line 1021 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size";
#line 1022 "size_prof.m"
        {
#line 1022 "size_prof.m"
          transform_hlds__size_prof__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "size_prof.m"
        }
#line 1022 "size_prof.m"
        {
#line 1022 "size_prof.m"
          transform_hlds__size_prof__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_26_26, 1) = ((MR_Box) (transform_hlds__size_prof__V_27_27));
#line 1022 "size_prof.m"
        }
#line 1022 "size_prof.m"
        {
#line 1022 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1022 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_26_26));
#line 1022 "size_prof.m"
        }
#line 1020 "size_prof.m"
      }
#line 1019 "size_prof.m"
    else
#line 1016 "size_prof.m"
      {
#line 1016 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeSizeVar0_13, (MR_Integer) 0)));
#line 1016 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_29_29;
#line 1016 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_30_30;
#line 1016 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_31_31;

#line 1017 "size_prof.m"
        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size_acc";
#line 1018 "size_prof.m"
        {
#line 1018 "size_prof.m"
          transform_hlds__size_prof__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "size_prof.m"
        }
#line 1018 "size_prof.m"
        {
#line 1018 "size_prof.m"
          transform_hlds__size_prof__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_17));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_31_31));
#line 1018 "size_prof.m"
        }
#line 1018 "size_prof.m"
        {
#line 1018 "size_prof.m"
          transform_hlds__size_prof__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_29_29, 1) = ((MR_Box) (transform_hlds__size_prof__V_30_30));
#line 1018 "size_prof.m"
        }
#line 1018 "size_prof.m"
        {
#line 1018 "size_prof.m"
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
#line 1018 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__V_29_29));
#line 1018 "size_prof.m"
        }
#line 1016 "size_prof.m"
      }
#line 1024 "size_prof.m"
    {
#line 1024 "size_prof.m"
      transform_hlds__size_prof__TermSizeProfBuiltin_20 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 1027 "size_prof.m"
    {
#line 1027 "size_prof.m"
      transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__size_prof__SizeVar_16);
    }
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 1)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
#line 1025 "size_prof.m"
    transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
#line 1025 "size_prof.m"
    {
#line 1025 "size_prof.m"
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_20, transform_hlds__size_prof__Pred_18, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Args_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_11, transform_hlds__size_prof__SizeGoal_12);
    }
#line 1029 "size_prof.m"
    {
#line 1029 "size_prof.m"
      MR_Word base;
#line 1029 "size_prof.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "size_prof.m"
      *transform_hlds__size_prof__MaybeSizeVar_14 = base;
#line 1029 "size_prof.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
#line 1029 "size_prof.m"
    }
#line 1013 "size_prof.m"
  }
#line 1008 "size_prof.m"
}

#line 969 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_7,
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeArgs_8,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
#line 969 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
#line 969 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26)
#line 969 "size_prof.m"
{
#line 976 "size_prof.m"
  {
#line 976 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 976 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 973 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 973 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeCtorVarPrime_12;

#line 973 "size_prof.m"
    {
#line 973 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_27_27, ((MR_Box) (transform_hlds__size_prof__TypeCtor_7)), &transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
    }
#line 973 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 973 "size_prof.m"
      {
#line 973 "size_prof.m"
        transform_hlds__size_prof__TypeCtorVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
#line 973 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 973 "size_prof.m"
      }
#line 976 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 974 "size_prof.m"
      {
#line 974 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorVar_9 = transform_hlds__size_prof__TypeCtorVarPrime_12;
#line 975 "size_prof.m"
        *transform_hlds__size_prof__TypeCtorGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_25;
#line 974 "size_prof.m"
      }
#line 976 "size_prof.m"
    else
#line 984 "size_prof.m"
      {
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_16;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_17;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_18;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps0_19;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorGoal_21;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet_22;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes_23;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__RttiVarMaps_24;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_77_77;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_78_78;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_81_81;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_83_83;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_84_84;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_85_85;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_86_86;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_87_87;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 984 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__Purity_13;
#line 982 "size_prof.m"
        MR_Word transform_hlds__size_prof__PredOrFunc_14;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50;
#line 985 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;
#line 988 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 992 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_79_79;
#line 992 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_80_80;
#line 992 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_82_82;

#line 978 "size_prof.m"
        {
#line 978 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(transform_hlds__size_prof__TypeCtor_7, &transform_hlds__size_prof__Purity_13, &transform_hlds__size_prof__PredOrFunc_14);
        }
#line 982 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 980 "size_prof.m"
          {
#line 980 "size_prof.m"
            parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__size_prof__Purity_13, transform_hlds__size_prof__PredOrFunc_14, transform_hlds__size_prof__TypeArgs_8, &transform_hlds__size_prof__Type_16);
          }
#line 982 "size_prof.m"
        else
#line 983 "size_prof.m"
          {
#line 983 "size_prof.m"
            {
#line 983 "size_prof.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__Type_16);
            }
#line 983 "size_prof.m"
          }
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__RttiVarMaps0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 985 "size_prof.m"
        transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 988 "size_prof.m"
        {
#line 988 "size_prof.m"
          check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(transform_hlds__size_prof__Type_16, transform_hlds__size_prof__TypeCtor_7, transform_hlds__size_prof__TypeCtorVar_9, &transform_hlds__size_prof__V_20_20, &transform_hlds__size_prof__TypeCtorGoal_21, transform_hlds__size_prof__VarSet0_17, &transform_hlds__size_prof__VarSet_22, transform_hlds__size_prof__VarTypes0_18, &transform_hlds__size_prof__VarTypes_23, transform_hlds__size_prof__RttiVarMaps0_19, &transform_hlds__size_prof__RttiVarMaps_24);
        }
#line 991 "size_prof.m"
        {
#line 991 "size_prof.m"
          MR_Word base;
#line 991 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "size_prof.m"
          *transform_hlds__size_prof__TypeCtorGoals_10 = base;
#line 991 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorGoal_21));
#line 991 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "size_prof.m"
        }
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
#line 992 "size_prof.m"
        transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__VarSet_22;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 993 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 994 "size_prof.m"
        {
#line 994 "size_prof.m"
          MR_Word base;
#line 994 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 994 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = base;
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_23));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_24));
#line 994 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 994 "size_prof.m"
        }
#line 984 "size_prof.m"
      }
#line 976 "size_prof.m"
  }
#line 969 "size_prof.m"
}

#line 927 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
#line 927 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
#line 927 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_5)
#line 927 "size_prof.m"
{
#line 927 "size_prof.m"
  {
#line 927 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 927 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv2_TypeInfoVar_9;
#line 927 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv1_TypeInfoGoals_10;
#line 927 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39;

#line 927 "size_prof.m"
    {
#line 927 "size_prof.m"
      transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv2_TypeInfoVar_9, &transform_hlds__size_prof__conv1_TypeInfoGoals_10, ((MR_Word) transform_hlds__size_prof__wrapper_arg_4), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39);
    }
#line 927 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv2_TypeInfoVar_9));
#line 927 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv1_TypeInfoGoals_10));
#line 927 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_5 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39));
#line 927 "size_prof.m"
  }
#line 927 "size_prof.m"
}

#line 921 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_11,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtor_12,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgTypes_13,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
#line 921 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
#line 921 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43)
#line 921 "size_prof.m"
{
#line 926 "size_prof.m"
  {
#line 926 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_180_180;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_181_181;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_184_184;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoVars_18;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoalLists_19;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoals_20;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorVar_21;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorGoals_22;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__FrontGoals_30;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgVars_31;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet2_32;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes2_33;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_34;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_35;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybePreferredVar_37;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoGoal_38;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_39;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_40;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_41;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_45_45;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_142_142;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_143_143;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_144_144;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_145_145;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_146_146;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_147_147;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_150_150;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_152_152;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_153_153;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_154_154;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_155_155;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_156_156;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_157_157;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_158_158;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_159_159;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_161_161;
#line 926 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_163_163;
#line 927 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_102_102;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 947 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 953 "size_prof.m"
    MR_Word transform_hlds__size_prof__PrefTIVar_36;
#line 951 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv4_PrefTIVar_36;
#line 959 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_148_148;
#line 959 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_149_149;
#line 959 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_151_151;

#line 927 "size_prof.m"
    {
#line 927 "size_prof.m"
      transform_hlds__size_prof__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 927 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_7[0]));
#line 927 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
#line 927 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 927 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 3) = ((MR_Box) (transform_hlds__size_prof__Context_10));
#line 927 "size_prof.m"
    }
#line 6500 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 6502 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_181_181 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 927 "size_prof.m"
    {
#line 927 "size_prof.m"
      mercury__list__map2_foldl_6_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, (MR_Word) &transform_hlds__size_prof_scalar_common_1[2], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_44_44, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__ArgTypeInfoVars_18, &transform_hlds__size_prof__ArgTypeInfoGoalLists_19, ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_42)), &transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
    }
#line 927 "size_prof.m"
    transform_hlds__size_prof__STATE_VARIABLE_Info_45_45 = ((MR_Word) transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
#line 6511 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 929 "size_prof.m"
    {
#line 929 "size_prof.m"
      transform_hlds__size_prof__ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoalLists_19);
    }
#line 930 "size_prof.m"
    {
#line 930 "size_prof.m"
      transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_12, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__TypeCtorVar_21, &transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__STATE_VARIABLE_Info_45_45, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
    }
#line 942 "size_prof.m"
    if ((transform_hlds__size_prof__CtorIsVarArity_14 == (MR_Integer) 0))
#line 943 "size_prof.m"
      {
#line 944 "size_prof.m"
        transform_hlds__size_prof__FrontGoals_30 = transform_hlds__size_prof__TypeCtorGoals_22;
#line 945 "size_prof.m"
        {
#line 945 "size_prof.m"
          transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 945 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 945 "size_prof.m"
        }
#line 945 "size_prof.m"
        transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 943 "size_prof.m"
      }
#line 942 "size_prof.m"
    else
#line 932 "size_prof.m"
      {
#line 932 "size_prof.m"
        MR_Integer transform_hlds__size_prof__Arity_23;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_24;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_25;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArityGoal_26;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArityVar_27;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet1_28;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_80_80;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_81_81;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_82_82;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_83_83;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_84_84;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_85_85;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 932 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 934 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 938 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_86_86;
#line 938 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_87_87;

#line 933 "size_prof.m"
        {
#line 933 "size_prof.m"
          mercury__list__length_2_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_23);
        }
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__VarTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 934 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 936 "size_prof.m"
        {
#line 936 "size_prof.m"
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Arity_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[3]), &transform_hlds__size_prof__ArityGoal_26, &transform_hlds__size_prof__ArityVar_27, transform_hlds__size_prof__VarSet0_24, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_25, &transform_hlds__size_prof__VarTypes1_29);
        }
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
#line 938 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
#line 939 "size_prof.m"
        {
#line 939 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_80_80));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_83_83));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_28));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_29));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 939 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 939 "size_prof.m"
        }
#line 940 "size_prof.m"
        {
#line 940 "size_prof.m"
          transform_hlds__size_prof__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 0) = ((MR_Box) (transform_hlds__size_prof__ArityGoal_26));
#line 940 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "size_prof.m"
        }
#line 940 "size_prof.m"
        {
#line 940 "size_prof.m"
          transform_hlds__size_prof__FrontGoals_30 = mercury__list__append_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__V_51_51);
        }
#line 941 "size_prof.m"
        {
#line 941 "size_prof.m"
          transform_hlds__size_prof__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__ArityVar_27));
#line 941 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
#line 941 "size_prof.m"
        }
#line 941 "size_prof.m"
        {
#line 941 "size_prof.m"
          transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
#line 941 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__V_53_53));
#line 941 "size_prof.m"
        }
#line 932 "size_prof.m"
      }
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__TargetTypeInfoMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__VarSet2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__VarTypes2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__RttiVarMaps0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 947 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 951 "size_prof.m"
    {
#line 951 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, transform_hlds__size_prof__TargetTypeInfoMap_35, ((MR_Box) (transform_hlds__size_prof__Type_11)), &transform_hlds__size_prof__conv4_PrefTIVar_36);
    }
#line 951 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 951 "size_prof.m"
      {
#line 951 "size_prof.m"
        transform_hlds__size_prof__PrefTIVar_36 = ((MR_Word) transform_hlds__size_prof__conv4_PrefTIVar_36);
#line 951 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 951 "size_prof.m"
      }
#line 953 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 952 "size_prof.m"
      {
#line 952 "size_prof.m"
        transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "size_prof.m"
        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybePreferredVar_37, 0) = ((MR_Box) (transform_hlds__size_prof__PrefTIVar_36));
#line 952 "size_prof.m"
      }
#line 953 "size_prof.m"
    else
#line 954 "size_prof.m"
      transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "size_prof.m"
    {
#line 956 "size_prof.m"
      check_hlds__polymorphism__init_type_info_var_11_p_0(transform_hlds__size_prof__Type_11, transform_hlds__size_prof__ArgVars_31, transform_hlds__size_prof__MaybePreferredVar_37, transform_hlds__size_prof__TypeInfoVar_15, &transform_hlds__size_prof__TypeInfoGoal_38, transform_hlds__size_prof__VarSet2_32, &transform_hlds__size_prof__VarSet_39, transform_hlds__size_prof__VarTypes2_33, &transform_hlds__size_prof__VarTypes_40, transform_hlds__size_prof__RttiVarMaps0_34, &transform_hlds__size_prof__RttiVarMaps_41);
    }
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
#line 959 "size_prof.m"
    transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_153_153 = transform_hlds__size_prof__V_142_142;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_154_154 = transform_hlds__size_prof__V_143_143;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_155_155 = transform_hlds__size_prof__V_144_144;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_156_156 = transform_hlds__size_prof__V_145_145;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_157_157 = transform_hlds__size_prof__V_146_146;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_158_158 = transform_hlds__size_prof__V_147_147;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_159_159 = transform_hlds__size_prof__VarSet_39;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_161_161 = transform_hlds__size_prof__V_150_150;
#line 960 "size_prof.m"
    transform_hlds__size_prof__V_163_163 = transform_hlds__size_prof__V_152_152;
#line 961 "size_prof.m"
    {
#line 961 "size_prof.m"
      MR_Word base;
#line 961 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 961 "size_prof.m"
      *transform_hlds__size_prof__STATE_VARIABLE_Info_43 = base;
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_156_156));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_157_157));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_158_158));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_159_159));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_40));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_161_161));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_41));
#line 961 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 961 "size_prof.m"
    }
#line 962 "size_prof.m"
    {
#line 962 "size_prof.m"
      transform_hlds__size_prof__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoGoal_38));
#line 962 "size_prof.m"
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "size_prof.m"
    }
#line 962 "size_prof.m"
    {
#line 962 "size_prof.m"
      transform_hlds__size_prof__V_57_57 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__FrontGoals_30, transform_hlds__size_prof__V_58_58);
    }
#line 962 "size_prof.m"
    {
#line 962 "size_prof.m"
      *transform_hlds__size_prof__TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoals_20, transform_hlds__size_prof__V_57_57);
    }
#line 926 "size_prof.m"
  }
#line 921 "size_prof.m"
}

#line 852 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_7,
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__Type_8,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
#line 852 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
#line 852 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39)
#line 852 "size_prof.m"
{
#line 859 "size_prof.m"
  {
#line 859 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 859 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 856 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 856 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv0_TypeInfoVarPrime_12;

#line 856 "size_prof.m"
    {
#line 856 "size_prof.m"
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__V_40_40, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
    }
#line 856 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 856 "size_prof.m"
      {
#line 856 "size_prof.m"
        transform_hlds__size_prof__TypeInfoVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
#line 856 "size_prof.m"
        transform_hlds__size_prof__succeeded = MR_TRUE;
#line 856 "size_prof.m"
      }
#line 859 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 857 "size_prof.m"
      {
#line 857 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TypeInfoVarPrime_12;
#line 858 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 858 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 857 "size_prof.m"
      }
#line 859 "size_prof.m"
    else
#line 862 "size_prof.m"
      {
#line 862 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtor_13;
#line 862 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgTypes_14;

#line 859 "size_prof.m"
        {
#line 859 "size_prof.m"
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_13, &transform_hlds__size_prof__ArgTypes_14);
        }
#line 862 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 860 "size_prof.m"
          {
#line 860 "size_prof.m"
            {
#line 860 "size_prof.m"
              transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_13, transform_hlds__size_prof__ArgTypes_14, (MR_Integer) 1, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 860 "size_prof.m"
              return;
            }
#line 860 "size_prof.m"
          }
#line 862 "size_prof.m"
        else
#line 874 "size_prof.m"
          {
#line 874 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtor_72;
#line 874 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypes_73;

#line 862 "size_prof.m"
            {
#line 862 "size_prof.m"
              transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_72, &transform_hlds__size_prof__ArgTypes_73);
            }
#line 874 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 869 "size_prof.m"
              if ((transform_hlds__size_prof__ArgTypes_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "size_prof.m"
                {
#line 865 "size_prof.m"
                  {
#line 865 "size_prof.m"
                    transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 865 "size_prof.m"
                    return;
                  }
#line 864 "size_prof.m"
                }
#line 869 "size_prof.m"
              else
#line 870 "size_prof.m"
                {
#line 871 "size_prof.m"
                  {
#line 871 "size_prof.m"
                    transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_72, transform_hlds__size_prof__ArgTypes_73, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
#line 871 "size_prof.m"
                    return;
                  }
#line 870 "size_prof.m"
                }
#line 874 "size_prof.m"
            else
#line 909 "size_prof.m"
              {
#line 909 "size_prof.m"
                MR_Word transform_hlds__size_prof__TVar_19;
#line 874 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_20_20;

#line 874 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Type_8)) == (MR_mktag((MR_Integer) 0)));
#line 874 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 874 "size_prof.m"
                  {
#line 874 "size_prof.m"
                    transform_hlds__size_prof__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 0)));
#line 874 "size_prof.m"
                    transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 1)));
#line 875 "size_prof.m"
                    {
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TVarLocn_21;
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 875 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));

#line 875 "size_prof.m"
                      {
#line 875 "size_prof.m"
                        hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__TVar_19, &transform_hlds__size_prof__TVarLocn_21);
                      }
#line 879 "size_prof.m"
                      if (((MR_tag((MR_Word) transform_hlds__size_prof__TVarLocn_21)) == (MR_mktag((MR_Integer) 0))))
#line 877 "size_prof.m"
                        {
#line 877 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 878 "size_prof.m"
                          *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "size_prof.m"
                          *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 877 "size_prof.m"
                        }
#line 879 "size_prof.m"
                      else
#line 880 "size_prof.m"
                        {
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TypeClassInfoVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
#line 880 "size_prof.m"
                          MR_Integer transform_hlds__size_prof__Slot_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 1)));
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetTypeInfoMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet1_28;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes1_29;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotGoal_32;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SlotVar_33;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarSet_34;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__VarTypes_35;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__PrivateBuiltin_36;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__ExtractGoal_37;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_49_49;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_53_53;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_59_59;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_61_61;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_62_62;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_63_63;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_64_64;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_67_67;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_145_145;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_146_146;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_147_147;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_148_148;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_149_149;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_150_150;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_153_153;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_154_154;
#line 880 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_155_155;
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 881 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 888 "size_prof.m"
                          MR_Word transform_hlds__size_prof__TargetVar_27;
#line 884 "size_prof.m"
                          MR_Box transform_hlds__size_prof__conv1_TargetVar_27;
#line 897 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_151_151;
#line 897 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_152_152;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_167_167;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_168_168;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_169_169;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_170_170;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_171_171;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_172_172;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_173_173;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_174_174;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_175_175;
#line 900 "size_prof.m"
                          MR_Word transform_hlds__size_prof__V_176_176;

#line 884 "size_prof.m"
                          {
#line 884 "size_prof.m"
                            transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TargetTypeInfoMap_24, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv1_TargetVar_27);
                          }
#line 884 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 884 "size_prof.m"
                            {
#line 884 "size_prof.m"
                              transform_hlds__size_prof__TargetVar_27 = ((MR_Word) transform_hlds__size_prof__conv1_TargetVar_27);
#line 884 "size_prof.m"
                              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 884 "size_prof.m"
                            }
#line 888 "size_prof.m"
                          if (transform_hlds__size_prof__succeeded)
#line 885 "size_prof.m"
                            {
#line 885 "size_prof.m"
                              *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TargetVar_27;
#line 886 "size_prof.m"
                              transform_hlds__size_prof__VarSet1_28 = transform_hlds__size_prof__VarSet0_25;
#line 887 "size_prof.m"
                              transform_hlds__size_prof__VarTypes1_29 = transform_hlds__size_prof__VarTypes0_26;
#line 887 "size_prof.m"
                              transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
#line 885 "size_prof.m"
                            }
#line 888 "size_prof.m"
                          else
#line 889 "size_prof.m"
                            {
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RttiVarMaps_31;
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 889 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_134_134;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_135_135;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_136_136;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_137_137;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_138_138;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_139_139;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_140_140;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_141_141;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_142_142;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_144_144;
#line 893 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_143_143;

#line 890 "size_prof.m"
                              {
#line 890 "size_prof.m"
                                check_hlds__polymorphism__new_type_info_var_raw_9_p_0(transform_hlds__size_prof__Type_8, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__VarSet0_25, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_26, &transform_hlds__size_prof__VarTypes1_29, transform_hlds__size_prof__RttiVarMaps0_30, &transform_hlds__size_prof__RttiVarMaps_31);
                              }
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
#line 893 "size_prof.m"
                              transform_hlds__size_prof__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
#line 893 "size_prof.m"
                              {
#line 893 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (transform_hlds__size_prof__V_138_138));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (transform_hlds__size_prof__V_139_139));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (transform_hlds__size_prof__V_141_141));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_31));
#line 893 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (transform_hlds__size_prof__V_144_144));
#line 893 "size_prof.m"
                              }
#line 889 "size_prof.m"
                            }
#line 895 "size_prof.m"
                          {
#line 895 "size_prof.m"
                            hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Slot_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[2]), &transform_hlds__size_prof__SlotGoal_32, &transform_hlds__size_prof__SlotVar_33, transform_hlds__size_prof__VarSet1_28, &transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__VarTypes1_29, &transform_hlds__size_prof__VarTypes_35);
                          }
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
#line 897 "size_prof.m"
                          transform_hlds__size_prof__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
#line 898 "size_prof.m"
                          {
#line 898 "size_prof.m"
                            transform_hlds__size_prof__STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__V_145_145));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__V_146_146));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (transform_hlds__size_prof__V_147_147));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (transform_hlds__size_prof__V_148_148));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (transform_hlds__size_prof__V_149_149));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (transform_hlds__size_prof__V_150_150));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_34));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_35));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (transform_hlds__size_prof__V_153_153));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 898 "size_prof.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (transform_hlds__size_prof__V_155_155));
#line 898 "size_prof.m"
                          }
#line 899 "size_prof.m"
                          {
#line 899 "size_prof.m"
                            transform_hlds__size_prof__PrivateBuiltin_36 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                          }
#line 903 "size_prof.m"
                          {
#line 903 "size_prof.m"
                            transform_hlds__size_prof__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 0) = ((MR_Box) (*transform_hlds__size_prof__TypeInfoVar_9));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "size_prof.m"
                          }
#line 903 "size_prof.m"
                          {
#line 903 "size_prof.m"
                            transform_hlds__size_prof__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 0) = ((MR_Box) (transform_hlds__size_prof__SlotVar_33));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_63_63, 1) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 903 "size_prof.m"
                          }
#line 903 "size_prof.m"
                          {
#line 903 "size_prof.m"
                            transform_hlds__size_prof__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 0) = ((MR_Box) (transform_hlds__size_prof__TypeClassInfoVar_22));
#line 903 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_59_59, 1) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 903 "size_prof.m"
                          }
#line 904 "size_prof.m"
                          {
#line 904 "size_prof.m"
                            transform_hlds__size_prof__V_61_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__TypeInfoVar_9);
                          }
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 900 "size_prof.m"
                          transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 900 "size_prof.m"
                          {
#line 900 "size_prof.m"
                            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__PrivateBuiltin_36, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_59_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_61_61, transform_hlds__size_prof__V_62_62, transform_hlds__size_prof__Context_7, &transform_hlds__size_prof__ExtractGoal_37);
                          }
#line 906 "size_prof.m"
                          {
#line 906 "size_prof.m"
                            transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_8, *transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                          }
#line 907 "size_prof.m"
                          {
#line 907 "size_prof.m"
                            transform_hlds__size_prof__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 0) = ((MR_Box) (transform_hlds__size_prof__ExtractGoal_37));
#line 907 "size_prof.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "size_prof.m"
                          }
#line 907 "size_prof.m"
                          {
#line 907 "size_prof.m"
                            MR_Word base;
#line 907 "size_prof.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "size_prof.m"
                            *transform_hlds__size_prof__TypeInfoGoals_10 = base;
#line 907 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SlotGoal_32));
#line 907 "size_prof.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 907 "size_prof.m"
                          }
#line 880 "size_prof.m"
                        }
#line 875 "size_prof.m"
                    }
#line 874 "size_prof.m"
                  }
#line 874 "size_prof.m"
                else
#line 913 "size_prof.m"
                  {
#line 913 "size_prof.m"
                    {
#line 913 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
#line 913 "size_prof.m"
                      return;
                    }
#line 913 "size_prof.m"
                  }
#line 909 "size_prof.m"
              }
#line 874 "size_prof.m"
          }
#line 862 "size_prof.m"
      }
#line 859 "size_prof.m"
  }
#line 852 "size_prof.m"
}

#line 820 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__SizeVar0_8,
#line 820 "size_prof.m"
  MR_Integer transform_hlds__size_prof__KnownSize_9,
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_10,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__SizeVar_11,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goals_12,
#line 820 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
#line 820 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23)
#line 820 "size_prof.m"
{
#line 827 "size_prof.m"
  {
#line 827 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__KnownSize_9 == (MR_Integer) 0);

#line 827 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 825 "size_prof.m"
      {
#line 825 "size_prof.m"
        *transform_hlds__size_prof__SizeVar_11 = transform_hlds__size_prof__SizeVar0_8;
#line 826 "size_prof.m"
        *transform_hlds__size_prof__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_23 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_22;
#line 825 "size_prof.m"
      }
#line 827 "size_prof.m"
    else
#line 828 "size_prof.m"
      {
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeGoal_16;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeVar_17;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarSet1_18;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__VarTypes1_19;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfModule_20;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__AddGoal_21;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_27_27;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_28_28;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_74_74;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_75_75;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_76_76;
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 828 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 833 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_72_72;
#line 833 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_73_73;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_88_88;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_89_89;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_90_90;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_91_91;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_92_92;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_93_93;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_94_94;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_95_95;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_96_96;
#line 837 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_97_97;

#line 830 "size_prof.m"
        {
#line 830 "size_prof.m"
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__KnownSize_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[0]), &transform_hlds__size_prof__KnownSizeGoal_16, &transform_hlds__size_prof__KnownSizeVar_17, transform_hlds__size_prof__VarSet0_14, &transform_hlds__size_prof__VarSet1_18, transform_hlds__size_prof__VarTypes0_15, &transform_hlds__size_prof__VarTypes1_19);
        }
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 833 "size_prof.m"
        transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 834 "size_prof.m"
        {
#line 834 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__V_66_66));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_18));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_19));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 8) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 9) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 834 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 10) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 834 "size_prof.m"
        }
#line 835 "size_prof.m"
        {
#line 835 "size_prof.m"
          transform_hlds__size_prof__V_28_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 835 "size_prof.m"
        {
#line 835 "size_prof.m"
          transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__V_28_28, (MR_String) "FinalSizeVar", transform_hlds__size_prof__SizeVar_11, transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, transform_hlds__size_prof__STATE_VARIABLE_Info_23);
        }
#line 836 "size_prof.m"
        {
#line 836 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfModule_20 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 839 "size_prof.m"
        {
#line 839 "size_prof.m"
          transform_hlds__size_prof__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 0) = ((MR_Box) (*transform_hlds__size_prof__SizeVar_11));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "size_prof.m"
        }
#line 839 "size_prof.m"
        {
#line 839 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeVar_17));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_41_41, 1) = ((MR_Box) (transform_hlds__size_prof__V_42_42));
#line 839 "size_prof.m"
        }
#line 839 "size_prof.m"
        {
#line 839 "size_prof.m"
          transform_hlds__size_prof__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_8));
#line 839 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_36_36, 1) = ((MR_Box) (transform_hlds__size_prof__V_41_41));
#line 839 "size_prof.m"
        }
#line 840 "size_prof.m"
        {
#line 840 "size_prof.m"
          transform_hlds__size_prof__V_38_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__SizeVar_11);
        }
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 0)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 1)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 2)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 3)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 4)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 5)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 6)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 7)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 8)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 9)));
#line 837 "size_prof.m"
        transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 10)));
#line 837 "size_prof.m"
        {
#line 837 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfModule_20, (MR_String) "term_size_plus", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_6[1]), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__V_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_38_38, transform_hlds__size_prof__V_39_39, transform_hlds__size_prof__Context_10, &transform_hlds__size_prof__AddGoal_21);
        }
#line 842 "size_prof.m"
        {
#line 842 "size_prof.m"
          transform_hlds__size_prof__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (transform_hlds__size_prof__AddGoal_21));
#line 842 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "size_prof.m"
        }
#line 842 "size_prof.m"
        {
#line 842 "size_prof.m"
          MR_Word base;
#line 842 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "size_prof.m"
          *transform_hlds__size_prof__Goals_12 = base;
#line 842 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeGoal_16));
#line 842 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_44_44));
#line 842 "size_prof.m"
        }
#line 828 "size_prof.m"
      }
#line 827 "size_prof.m"
  }
#line 820 "size_prof.m"
}

#line 790 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 790 "size_prof.m"
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
#line 790 "size_prof.m"
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__Context_6,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
#line 790 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
#line 790 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
#line 790 "size_prof.m"
{
#line 794 "size_prof.m"
  {
#line 794 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 794 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "size_prof.m"
      {
#line 794 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 794 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 794 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 794 "size_prof.m"
      }
#line 794 "size_prof.m"
    else
#line 796 "size_prof.m"
      {
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__Type_27;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__ArgGoals_29;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterGoals_33;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 796 "size_prof.m"
        MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45;
#line 796 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 797 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 801 "size_prof.m"
        MR_Integer transform_hlds__size_prof__ArgSize_28;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_67_67;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_68_68;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_69_69;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_70_70;
#line 798 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_71_71;
#line 798 "size_prof.m"
        MR_Box transform_hlds__size_prof__conv0_ArgSize_28;

#line 797 "size_prof.m"
        {
#line 797 "size_prof.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_40_40, transform_hlds__size_prof__Arg_20, &transform_hlds__size_prof__Type_27);
        }
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
#line 798 "size_prof.m"
        transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 798 "size_prof.m"
        {
#line 798 "size_prof.m"
          transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__V_41_41, ((MR_Box) (transform_hlds__size_prof__Arg_20)), &transform_hlds__size_prof__conv0_ArgSize_28);
        }
#line 798 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 798 "size_prof.m"
          {
#line 798 "size_prof.m"
            transform_hlds__size_prof__ArgSize_28 = ((MR_Integer) transform_hlds__size_prof__conv0_ArgSize_28);
#line 798 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 798 "size_prof.m"
          }
#line 801 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 799 "size_prof.m"
          {
#line 799 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = (transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2 + transform_hlds__size_prof__ArgSize_28);
#line 800 "size_prof.m"
            transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 800 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 799 "size_prof.m"
          }
#line 801 "size_prof.m"
        else
#line 803 "size_prof.m"
          {
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
#line 801 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));

#line 801 "size_prof.m"
            {
#line 801 "size_prof.m"
              transform_hlds__size_prof__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__size_prof__V_43_43, transform_hlds__size_prof__Type_27);
            }
#line 803 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 802 "size_prof.m"
              {
#line 802 "size_prof.m"
                transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 802 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
#line 802 "size_prof.m"
                transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
#line 802 "size_prof.m"
              }
#line 803 "size_prof.m"
            else
#line 804 "size_prof.m"
              {
#line 804 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoVar_30;
#line 804 "size_prof.m"
                MR_Word transform_hlds__size_prof__TypeInfoGoals_31;
#line 804 "size_prof.m"
                MR_Word transform_hlds__size_prof__SizeGoal_32;
#line 804 "size_prof.m"
                MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 804 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_47_47;

#line 804 "size_prof.m"
                {
#line 804 "size_prof.m"
                  transform_hlds__size_prof__make_type_info_6_p_0(transform_hlds__size_prof__Context_6, transform_hlds__size_prof__Type_27, &transform_hlds__size_prof__TypeInfoVar_30, &transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
                }
#line 805 "size_prof.m"
                {
#line 805 "size_prof.m"
                  transform_hlds__size_prof__make_size_goal_8_p_0(transform_hlds__size_prof__TypeInfoVar_30, transform_hlds__size_prof__Arg_20, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__SizeGoal_32, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4, &transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
                }
#line 807 "size_prof.m"
                {
#line 807 "size_prof.m"
                  transform_hlds__size_prof__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoal_32));
#line 807 "size_prof.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "size_prof.m"
                }
#line 807 "size_prof.m"
                {
#line 807 "size_prof.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__V_47_47, &transform_hlds__size_prof__ArgGoals_29);
                }
#line 804 "size_prof.m"
              }
#line 807 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
#line 803 "size_prof.m"
          }
#line 809 "size_prof.m"
        {
#line 809 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__Args_21, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__LaterGoals_33, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_9);
        }
#line 811 "size_prof.m"
        {
#line 811 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__ArgGoals_29, transform_hlds__size_prof__LaterGoals_33);
        }
#line 796 "size_prof.m"
      }
#line 794 "size_prof.m"
  }
#line 790 "size_prof.m"
}

#line 761 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
#line 761 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg)
#line 761 "size_prof.m"
{
#line 761 "size_prof.m"
  {
#line 761 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 761 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 761 "size_prof.m"
    {
#line 761 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__761__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
#line 761 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 761 "size_prof.m"
  }
#line 761 "size_prof.m"
}

#line 748 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_8,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_9,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_10,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
#line 748 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
#line 748 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 748 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 748 "size_prof.m"
{
#line 753 "size_prof.m"
  {
#line 753 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__DefinedArgs_14;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_16;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_17;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__Context_18;
#line 753 "size_prof.m"
    MR_Integer transform_hlds__size_prof__KnownSize_19;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_20;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__ArgGoals_21;
#line 753 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 754 "size_prof.m"
    MR_Word transform_hlds__size_prof___NonDefArgs_15;

#line 754 "size_prof.m"
    {
#line 754 "size_prof.m"
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_9, transform_hlds__size_prof__ArgModes_10, &transform_hlds__size_prof__DefinedArgs_14, &transform_hlds__size_prof___NonDefArgs_15, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28);
    }
#line 755 "size_prof.m"
    transform_hlds__size_prof__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 0)));
#line 755 "size_prof.m"
    transform_hlds__size_prof__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 1)));
#line 756 "size_prof.m"
    {
#line 756 "size_prof.m"
      transform_hlds__size_prof__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_17);
    }
#line 757 "size_prof.m"
    {
#line 757 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_14, (MR_Integer) 0, &transform_hlds__size_prof__KnownSize_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_20, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, &transform_hlds__size_prof__STATE_VARIABLE_Info_32_32);
    }
#line 763 "size_prof.m"
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "size_prof.m"
      {
#line 760 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52;

#line 761 "size_prof.m"
        {
#line 761 "size_prof.m"
          transform_hlds__size_prof__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 761 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
#line 761 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1));
#line 761 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 761 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_21));
#line 761 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_52_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "size_prof.m"
        }
#line 761 "size_prof.m"
        {
#line 761 "size_prof.m"
          mercury__require__expect_4_p_0(transform_hlds__size_prof__V_52_52, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
        }
#line 762 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_12 = transform_hlds__size_prof__GoalExpr0_16;
#line 762 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
#line 760 "size_prof.m"
      }
#line 763 "size_prof.m"
    else
#line 764 "size_prof.m"
      {
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_68_68;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_20, (MR_Integer) 0)));
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeVar_23;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__SizeGoals_24;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_25;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__UpdateGoal_26;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_27;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_45_45;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48;
#line 764 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_49_49;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_60_60;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65;
#line 770 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_66_66;

#line 765 "size_prof.m"
        {
#line 765 "size_prof.m"
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_22, transform_hlds__size_prof__KnownSize_19, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__SizeVar_23, &transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__STATE_VARIABLE_Info_32_32, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
        }
#line 769 "size_prof.m"
        {
#line 769 "size_prof.m"
          transform_hlds__size_prof__TermSizeProfBuiltin_25 = mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_f_0();
        }
#line 772 "size_prof.m"
        {
#line 772 "size_prof.m"
          transform_hlds__size_prof__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_23));
#line 772 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "size_prof.m"
        }
#line 772 "size_prof.m"
        {
#line 772 "size_prof.m"
          transform_hlds__size_prof__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_8));
#line 772 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_39_39, 1) = ((MR_Box) (transform_hlds__size_prof__V_43_43));
#line 772 "size_prof.m"
        }
#line 772 "size_prof.m"
        {
#line 772 "size_prof.m"
          transform_hlds__size_prof__V_41_41 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 0)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 1)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 2)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 3)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 4)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 5)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 6)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 7)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 8)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 9)));
#line 770 "size_prof.m"
        transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 10)));
#line 770 "size_prof.m"
        {
#line 770 "size_prof.m"
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_25, (MR_String) "increment_size", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__size_prof__V_39_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__V_41_41, transform_hlds__size_prof__V_42_42, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__UpdateGoal_26);
        }
#line 8320 "transform_hlds.size_prof.c"
        transform_hlds__size_prof__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_11));
#line 775 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "size_prof.m"
        }
#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__UpdateGoal_26));
#line 775 "size_prof.m"
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "size_prof.m"
        }
#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__V_48_48 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__V_49_49);
        }
#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__V_48_48);
        }
#line 775 "size_prof.m"
        {
#line 775 "size_prof.m"
          transform_hlds__size_prof__Goals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__V_45_45, transform_hlds__size_prof__V_47_47);
        }
#line 776 "size_prof.m"
        {
#line 776 "size_prof.m"
          MR_Word base;
#line 776 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 776 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_12 = base;
#line 776 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 776 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 776 "size_prof.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_27));
#line 776 "size_prof.m"
        }
#line 764 "size_prof.m"
      }
#line 753 "size_prof.m"
  }
#line 748 "size_prof.m"
}

#line 672 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_9,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_10,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_11,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_12,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_13,
#line 672 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
#line 672 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
#line 672 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
#line 672 "size_prof.m"
{
#line 677 "size_prof.m"
  {
#line 677 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 677 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_16;
#line 677 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_17;
#line 677 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_18;
#line 677 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_19;
#line 677 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 678 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 680 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_20_20;
#line 1309 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47;

#line 678 "size_prof.m"
    {
#line 678 "size_prof.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_30_30, transform_hlds__size_prof__Var_9, &transform_hlds__size_prof__VarType_16);
    }
#line 679 "size_prof.m"
    {
#line 679 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_16, &transform_hlds__size_prof__VarTypeCtor_17);
    }
#line 680 "size_prof.m"
    {
#line 680 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_17, &transform_hlds__size_prof__VarTypeCtorModule_18, &transform_hlds__size_prof__VarTypeCtorName_19, &transform_hlds__size_prof__V_20_20);
    }
#line 1310 "size_prof.m"
    {
#line 1310 "size_prof.m"
      transform_hlds__size_prof__V_47_47 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 1310 "size_prof.m"
    {
#line 1310 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_18, transform_hlds__size_prof__V_47_47);
    }
#line 1309 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1312 "size_prof.m"
      {
#line 1312 "size_prof.m"
        if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "type_info") == 0))
#line 1311 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
        else
#line 1312 "size_prof.m"
          if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "type_ctor_info") == 0))
#line 1312 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
          else
#line 1312 "size_prof.m"
            if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "typeclass_info") == 0))
#line 1313 "size_prof.m"
              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
            else
#line 1312 "size_prof.m"
              if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_19, (MR_String) "base_typeclass_info") == 0))
#line 1314 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
              else
#line 1312 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1312 "size_prof.m"
      }
#line 686 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 685 "size_prof.m"
      {
#line 685 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;

#line 685 "size_prof.m"
        *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 685 "size_prof.m"
        transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 685 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_28;
#line 685 "size_prof.m"
      }
#line 686 "size_prof.m"
    else
#line 694 "size_prof.m"
      {
#line 690 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_25_25;
#line 690 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_26_26;

#line 688 "size_prof.m"
        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 687 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 688 "size_prof.m"
        else
#line 688 "size_prof.m"
          if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 688 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 688 "size_prof.m"
          else
#line 688 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_FALSE;
#line 689 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 689 "size_prof.m"
          {
#line 690 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_11)) == (MR_mktag((MR_Integer) 1)));
#line 690 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 690 "size_prof.m"
              {
#line 690 "size_prof.m"
                transform_hlds__size_prof__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 0)));
#line 690 "size_prof.m"
                transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 1)));
#line 690 "size_prof.m"
              }
#line 689 "size_prof.m"
          }
#line 694 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 692 "size_prof.m"
          {
#line 692 "size_prof.m"
            transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(transform_hlds__size_prof__Var_9, transform_hlds__size_prof__Args_11, transform_hlds__size_prof__ArgModes_12, transform_hlds__size_prof__Goal0_13, transform_hlds__size_prof__GoalExpr_14, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
#line 692 "size_prof.m"
            return;
          }
#line 694 "size_prof.m"
        else
#line 697 "size_prof.m"
          {
#line 697 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 697 "size_prof.m"
            MR_Word transform_hlds__size_prof__KnownSizeMap_55;
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1133 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_67_67;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_68_68;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_69_69;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_70_70;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_71_71;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_73_73;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_74_74;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_75_75;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_76_76;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_77_77;
#line 1135 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_72_72;
#line 698 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_27_27;

#line 1134 "size_prof.m"
            {
#line 1134 "size_prof.m"
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__size_prof__KnownSizeMap0_54, &transform_hlds__size_prof__KnownSizeMap_55);
            }
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
#line 1135 "size_prof.m"
            transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
#line 1135 "size_prof.m"
            {
#line 1135 "size_prof.m"
              MR_Word base;
#line 1135 "size_prof.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = base;
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_67_67));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_68_68));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_69_69));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_70_70));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_71_71));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_55));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_73_73));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_74_74));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_75_75));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_76_76));
#line 1135 "size_prof.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_77_77));
#line 1135 "size_prof.m"
            }
#line 698 "size_prof.m"
            *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
#line 698 "size_prof.m"
            transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
#line 697 "size_prof.m"
          }
#line 694 "size_prof.m"
      }
#line 677 "size_prof.m"
  }
#line 672 "size_prof.m"
}

#line 610 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__LHS_15,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__RHS_16,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__UniMode_17,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__UnifyContext_18,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Var_19,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__ConsId_20,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Args_21,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__ArgModes_22,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__How_23,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__Unique_24,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__GoalInfo_25,
#line 610 "size_prof.m"
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
#line 610 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
#line 610 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46)
#line 610 "size_prof.m"
{
#line 617 "size_prof.m"
  {
#line 617 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 617 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarType_28;
#line 617 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtor_29;
#line 617 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_30;
#line 617 "size_prof.m"
    MR_String transform_hlds__size_prof__VarTypeCtorName_31;
#line 617 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 7)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 0)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 1)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 2)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 3)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 4)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 5)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 6)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 8)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 9)));
#line 618 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 10)));
#line 620 "size_prof.m"
    MR_Integer transform_hlds__size_prof__V_32_32;
#line 1309 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83;

#line 618 "size_prof.m"
    {
#line 618 "size_prof.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__size_prof__V_47_47, transform_hlds__size_prof__Var_19, &transform_hlds__size_prof__VarType_28);
    }
#line 619 "size_prof.m"
    {
#line 619 "size_prof.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_28, &transform_hlds__size_prof__VarTypeCtor_29);
    }
#line 620 "size_prof.m"
    {
#line 620 "size_prof.m"
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_29, &transform_hlds__size_prof__VarTypeCtorModule_30, &transform_hlds__size_prof__VarTypeCtorName_31, &transform_hlds__size_prof__V_32_32);
    }
#line 1310 "size_prof.m"
    {
#line 1310 "size_prof.m"
      transform_hlds__size_prof__V_83_83 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 1310 "size_prof.m"
    {
#line 1310 "size_prof.m"
      transform_hlds__size_prof__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_30, transform_hlds__size_prof__V_83_83);
    }
#line 1309 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 1312 "size_prof.m"
      {
#line 1312 "size_prof.m"
        if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0))
#line 1311 "size_prof.m"
          transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
        else
#line 1312 "size_prof.m"
          if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0))
#line 1312 "size_prof.m"
            transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
          else
#line 1312 "size_prof.m"
            if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "typeclass_info") == 0))
#line 1313 "size_prof.m"
              transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
            else
#line 1312 "size_prof.m"
              if ((strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "base_typeclass_info") == 0))
#line 1314 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_TRUE;
#line 1312 "size_prof.m"
              else
#line 1312 "size_prof.m"
                transform_hlds__size_prof__succeeded = MR_FALSE;
#line 1312 "size_prof.m"
      }
#line 654 "size_prof.m"
    if (transform_hlds__size_prof__succeeded)
#line 650 "size_prof.m"
      {
#line 650 "size_prof.m"
        MR_Word transform_hlds__size_prof__Unification_39;

#line 625 "size_prof.m"
        transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0);
#line 642 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 632 "size_prof.m"
          {
#line 632 "size_prof.m"
            MR_Word transform_hlds__size_prof__TypeCtorInfoVar_34;
#line 632 "size_prof.m"
            MR_Word transform_hlds__size_prof__ArgTypeInfoVars_35;
#line 627 "size_prof.m"
            MR_Word transform_hlds__size_prof__V_33_33;

#line 627 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 1)));
#line 627 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 627 "size_prof.m"
              {
#line 627 "size_prof.m"
                transform_hlds__size_prof__V_33_33 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__ConsId_20), (MR_Integer) 1);
#line 628 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 628 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 628 "size_prof.m"
                  {
#line 628 "size_prof.m"
                    transform_hlds__size_prof__TypeCtorInfoVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 628 "size_prof.m"
                    transform_hlds__size_prof__ArgTypeInfoVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 628 "size_prof.m"
                  }
#line 627 "size_prof.m"
              }
#line 632 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 630 "size_prof.m"
              {
#line 630 "size_prof.m"
                transform_hlds__size_prof__record_known_type_info_5_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__TypeCtorInfoVar_34, transform_hlds__size_prof__ArgTypeInfoVars_35, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
              }
#line 632 "size_prof.m"
            else
#line 639 "size_prof.m"
              {
#line 639 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_36;
#line 639 "size_prof.m"
                MR_String transform_hlds__size_prof__N_37;
#line 639 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_38;

#line 633 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 633 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 633 "size_prof.m"
                  {
#line 633 "size_prof.m"
                    transform_hlds__size_prof__M_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 633 "size_prof.m"
                    transform_hlds__size_prof__N_37 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 633 "size_prof.m"
                    transform_hlds__size_prof__A_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 638 "size_prof.m"
                    {
#line 638 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_36, transform_hlds__size_prof__N_37, transform_hlds__size_prof__A_38, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 633 "size_prof.m"
                  }
#line 633 "size_prof.m"
                else
#line 640 "size_prof.m"
                  {
#line 640 "size_prof.m"
                    {
#line 640 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
#line 640 "size_prof.m"
                      return;
                    }
#line 640 "size_prof.m"
                  }
#line 639 "size_prof.m"
              }
#line 632 "size_prof.m"
          }
#line 642 "size_prof.m"
        else
#line 648 "size_prof.m"
          {
#line 642 "size_prof.m"
            transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0);
#line 648 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 645 "size_prof.m"
              {
#line 645 "size_prof.m"
                MR_Word transform_hlds__size_prof__M_63;
#line 645 "size_prof.m"
                MR_String transform_hlds__size_prof__N_64;
#line 645 "size_prof.m"
                MR_Integer transform_hlds__size_prof__A_65;

#line 643 "size_prof.m"
                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 643 "size_prof.m"
                if (transform_hlds__size_prof__succeeded)
#line 643 "size_prof.m"
                  {
#line 643 "size_prof.m"
                    transform_hlds__size_prof__M_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 643 "size_prof.m"
                    transform_hlds__size_prof__N_64 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 643 "size_prof.m"
                    transform_hlds__size_prof__A_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 644 "size_prof.m"
                    {
#line 644 "size_prof.m"
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_63, transform_hlds__size_prof__N_64, transform_hlds__size_prof__A_65, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
#line 643 "size_prof.m"
                  }
#line 643 "size_prof.m"
                else
#line 646 "size_prof.m"
                  {
#line 646 "size_prof.m"
                    {
#line 646 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
#line 646 "size_prof.m"
                      return;
                    }
#line 646 "size_prof.m"
                  }
#line 645 "size_prof.m"
              }
#line 648 "size_prof.m"
            else
#line 649 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_45;
#line 648 "size_prof.m"
          }
#line 651 "size_prof.m"
        {
#line 651 "size_prof.m"
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 651 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "size_prof.m"
        }
#line 653 "size_prof.m"
        {
#line 653 "size_prof.m"
          MR_Word base;
#line 653 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 653 "size_prof.m"
          *transform_hlds__size_prof__GoalExpr_26 = base;
#line 653 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 653 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 653 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 653 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
#line 653 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 653 "size_prof.m"
        }
#line 650 "size_prof.m"
      }
#line 654 "size_prof.m"
    else
#line 661 "size_prof.m"
      {
#line 655 "size_prof.m"
        MR_Word transform_hlds__size_prof___Name_40;
#line 655 "size_prof.m"
        MR_Integer transform_hlds__size_prof___Arity_41;
#line 655 "size_prof.m"
        MR_Word transform_hlds__size_prof___TypeCtor_42;
#line 656 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43;
#line 656 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_44_44;

#line 655 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 655 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 655 "size_prof.m"
          {
#line 655 "size_prof.m"
            transform_hlds__size_prof___Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
#line 655 "size_prof.m"
            transform_hlds__size_prof___Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
#line 655 "size_prof.m"
            transform_hlds__size_prof___TypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
#line 656 "size_prof.m"
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
#line 656 "size_prof.m"
            if (transform_hlds__size_prof__succeeded)
#line 656 "size_prof.m"
              {
#line 656 "size_prof.m"
                transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
#line 656 "size_prof.m"
                transform_hlds__size_prof__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
#line 656 "size_prof.m"
              }
#line 655 "size_prof.m"
          }
#line 661 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 658 "size_prof.m"
          {
#line 658 "size_prof.m"
            transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(transform_hlds__size_prof__LHS_15, transform_hlds__size_prof__RHS_16, transform_hlds__size_prof__UniMode_17, transform_hlds__size_prof__UnifyContext_18, transform_hlds__size_prof__Var_19, transform_hlds__size_prof__ConsId_20, transform_hlds__size_prof__Args_21, transform_hlds__size_prof__ArgModes_22, transform_hlds__size_prof__How_23, transform_hlds__size_prof__Unique_24, transform_hlds__size_prof__GoalInfo_25, transform_hlds__size_prof__GoalExpr_26, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
#line 658 "size_prof.m"
            return;
          }
#line 661 "size_prof.m"
        else
#line 664 "size_prof.m"
          {
#line 664 "size_prof.m"
            MR_Word transform_hlds__size_prof__Unification_69;

#line 664 "size_prof.m"
            {
#line 664 "size_prof.m"
              transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_19, (MR_Integer) 0, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
            }
#line 665 "size_prof.m"
            {
#line 665 "size_prof.m"
              transform_hlds__size_prof__Unification_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
#line 665 "size_prof.m"
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "size_prof.m"
            }
#line 667 "size_prof.m"
            {
#line 667 "size_prof.m"
              MR_Word base;
#line 667 "size_prof.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 667 "size_prof.m"
              *transform_hlds__size_prof__GoalExpr_26 = base;
#line 667 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
#line 667 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
#line 667 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
#line 667 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_69));
#line 667 "size_prof.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
#line 667 "size_prof.m"
            }
#line 664 "size_prof.m"
          }
#line 661 "size_prof.m"
      }
#line 617 "size_prof.m"
  }
#line 610 "size_prof.m"
}

#line 591 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 591 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 591 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 591 "size_prof.m"
{
#line 591 "size_prof.m"
  {
#line 591 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 591 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_140;

#line 591 "size_prof.m"
    {
#line 591 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__591__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
#line 591 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_140));
#line 591 "size_prof.m"
  }
#line 591 "size_prof.m"
}

#line 569 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 569 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 569 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 569 "size_prof.m"
{
#line 578 "size_prof.m"
  {
#line 578 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstMainConsId_28;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstOtherConsIds_29;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal0_30;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__FirstGoal_31;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_47_47;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 6)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 7)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 8)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 9)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 10)));
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_70_70 = transform_hlds__size_prof__V_59_59;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_72_72 = transform_hlds__size_prof__V_61_61;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__V_62_62;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_75_75 = transform_hlds__size_prof__V_64_64;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__V_70_70;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_83_83 = transform_hlds__size_prof__V_72_72;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_86_86 = transform_hlds__size_prof__V_75_75;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_92_92 = transform_hlds__size_prof__V_81_81;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_93_93 = transform_hlds__size_prof__V_82_82;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_94_94 = transform_hlds__size_prof__V_83_83;
#line 578 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_95_95 = transform_hlds__size_prof__V_84_84;
#line 579 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 579 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 579 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 579 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 579 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 5)));
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_107_107;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_113_113;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_114_114;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_115_115;
#line 586 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_116_116;

#line 583 "size_prof.m"
    {
#line 583 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (transform_hlds__size_prof__V_86_86));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (transform_hlds__size_prof__V_92_92));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 8) = ((MR_Box) (transform_hlds__size_prof__V_93_93));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (transform_hlds__size_prof__V_94_94));
#line 583 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 10) = ((MR_Box) (transform_hlds__size_prof__V_95_95));
#line 583 "size_prof.m"
    }
#line 584 "size_prof.m"
    transform_hlds__size_prof__FirstMainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 0)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__FirstOtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 1)));
#line 584 "size_prof.m"
    transform_hlds__size_prof__FirstGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 2)));
#line 585 "size_prof.m"
    {
#line 585 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__FirstGoal0_30, &transform_hlds__size_prof__FirstGoal_31, transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, &transform_hlds__size_prof__STATE_VARIABLE_Info_48_48);
    }
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 586 "size_prof.m"
    transform_hlds__size_prof__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 588 "size_prof.m"
    {
#line 588 "size_prof.m"
      MR_Word base;
#line 588 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 588 "size_prof.m"
      *transform_hlds__size_prof__First_16 = base;
#line 588 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__FirstMainConsId_28));
#line 588 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__FirstOtherConsIds_29));
#line 588 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__FirstGoal_31));
#line 588 "size_prof.m"
    }
#line 601 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "size_prof.m"
      {
#line 603 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_32;
#line 605 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_33;
#line 605 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_42 = transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
#line 602 "size_prof.m"
      }
#line 601 "size_prof.m"
    else
#line 590 "size_prof.m"
      {
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_142_142 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_36;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_37;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_38;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_39;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_40;
#line 590 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_134_134;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_135_135;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_136_136;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_137_137;
#line 593 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;

#line 591 "size_prof.m"
        {
#line 591 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeCtorInfo_143_143, (MR_Word) &transform_hlds__size_prof_scalar_common_2[8], transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMapFirst_32, &transform_hlds__size_prof__LaterTargetTypeInfoMap_36);
        }
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 593 "size_prof.m"
        transform_hlds__size_prof__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 593 "size_prof.m"
        {
#line 593 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__V_127_127));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_36));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__V_135_135));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 593 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__V_137_137));
#line 593 "size_prof.m"
        }
#line 594 "size_prof.m"
        {
#line 594 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__Head0_34, &transform_hlds__size_prof__Head_37, transform_hlds__size_prof__Tail0_35, &transform_hlds__size_prof__Tail_38, transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, transform_hlds__size_prof__STATE_VARIABLE_Info_42, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_39, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 598 "size_prof.m"
        {
#line 598 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_143_143, transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeInfoMapFirst_32, transform_hlds__size_prof__TypeInfoMapLater_39);
        }
#line 599 "size_prof.m"
        {
#line 599 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_142_142, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_33, transform_hlds__size_prof__KnownSizeMapLater_40);
        }
#line 600 "size_prof.m"
        {
#line 600 "size_prof.m"
          MR_Word base;
#line 600 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 600 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_37));
#line 600 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_38));
#line 600 "size_prof.m"
        }
#line 590 "size_prof.m"
      }
#line 578 "size_prof.m"
  }
#line 569 "size_prof.m"
}

#line 550 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 550 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 550 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 550 "size_prof.m"
{
#line 550 "size_prof.m"
  {
#line 550 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 550 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_136;

#line 550 "size_prof.m"
    {
#line 550 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__550__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
#line 550 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_136));
#line 550 "size_prof.m"
  }
#line 550 "size_prof.m"
}

#line 531 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__First0_15,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__First_16,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__Later0_17,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Later_18,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
#line 531 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
#line 531 "size_prof.m"
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
#line 531 "size_prof.m"
{
#line 539 "size_prof.m"
  {
#line 539 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_43_43;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 4)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 6)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 7)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 8)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 9)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 10)));
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60 = transform_hlds__size_prof__TypeInfoMap0_21;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_66_66 = transform_hlds__size_prof__V_55_55;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_67_67 = transform_hlds__size_prof__V_56_56;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_68_68 = transform_hlds__size_prof__V_57_57;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_69_69 = transform_hlds__size_prof__V_58_58;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_71_71 = transform_hlds__size_prof__V_60_60;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_73_73 = transform_hlds__size_prof__RevTypeInfoMap0_22;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_74_74 = transform_hlds__size_prof__V_63_63;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_76_76 = transform_hlds__size_prof__V_65_65;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_77_77 = transform_hlds__size_prof__V_66_66;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_78_78 = transform_hlds__size_prof__V_67_67;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_79_79 = transform_hlds__size_prof__V_68_68;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_80_80 = transform_hlds__size_prof__V_69_69;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_81_81 = transform_hlds__size_prof__TypeCtorMap0_23;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_82_82 = transform_hlds__size_prof__V_71_71;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_84_84 = transform_hlds__size_prof__V_73_73;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_85_85 = transform_hlds__size_prof__V_74_74;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_87_87 = transform_hlds__size_prof__V_76_76;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_88_88 = transform_hlds__size_prof__V_77_77;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_89_89 = transform_hlds__size_prof__V_78_78;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_90_90 = transform_hlds__size_prof__V_79_79;
#line 539 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_91_91 = transform_hlds__size_prof__V_80_80;
#line 540 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 540 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 540 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 540 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 540 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 5)));
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_103_103;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_104_104;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_105_105;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_106_106;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_108_108;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_109_109;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_110_110;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_111_111;
#line 546 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_112_112;

#line 544 "size_prof.m"
    {
#line 544 "size_prof.m"
      transform_hlds__size_prof__STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__V_81_81));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (transform_hlds__size_prof__V_82_82));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (transform_hlds__size_prof__V_84_84));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (transform_hlds__size_prof__V_85_85));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (transform_hlds__size_prof__V_87_87));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (transform_hlds__size_prof__V_88_88));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (transform_hlds__size_prof__V_89_89));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (transform_hlds__size_prof__V_90_90));
#line 544 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (transform_hlds__size_prof__V_91_91));
#line 544 "size_prof.m"
    }
#line 545 "size_prof.m"
    {
#line 545 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__First0_15, transform_hlds__size_prof__First_16, transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
    }
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__TypeInfoMapFirst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__KnownSizeMapFirst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 546 "size_prof.m"
    transform_hlds__size_prof__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 560 "size_prof.m"
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "size_prof.m"
      {
#line 562 "size_prof.m"
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "size_prof.m"
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_28;
#line 564 "size_prof.m"
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_29;
#line 564 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_38 = transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
#line 561 "size_prof.m"
      }
#line 560 "size_prof.m"
    else
#line 549 "size_prof.m"
      {
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfo_138_138 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_32;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__Head_33;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__Tail_34;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_35;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_36;
#line 549 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_123_123;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_124_124;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_125_125;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_126_126;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_128_128;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_129_129;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_130_130;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_131_131;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_132_132;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_133_133;
#line 552 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_127_127;

#line 550 "size_prof.m"
        {
#line 550 "size_prof.m"
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeCtorInfo_139_139, (MR_Word) &transform_hlds__size_prof_scalar_common_2[7], transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TargetTypeInfoMap_20, &transform_hlds__size_prof__LaterTargetTypeInfoMap_32);
        }
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
#line 552 "size_prof.m"
        transform_hlds__size_prof__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
#line 552 "size_prof.m"
        {
#line 552 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (transform_hlds__size_prof__V_123_123));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (transform_hlds__size_prof__V_124_124));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (transform_hlds__size_prof__V_126_126));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_32));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (transform_hlds__size_prof__V_128_128));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (transform_hlds__size_prof__V_129_129));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 8) = ((MR_Box) (transform_hlds__size_prof__V_131_131));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 552 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (transform_hlds__size_prof__V_133_133));
#line 552 "size_prof.m"
        }
#line 553 "size_prof.m"
        {
#line 553 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__Head0_30, &transform_hlds__size_prof__Head_33, transform_hlds__size_prof__Tail0_31, &transform_hlds__size_prof__Tail_34, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_38, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_35, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 557 "size_prof.m"
        {
#line 557 "size_prof.m"
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_139_139, transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TypeInfoMapLater_35);
        }
#line 558 "size_prof.m"
        {
#line 558 "size_prof.m"
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_138_138, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_29, transform_hlds__size_prof__KnownSizeMapLater_36);
        }
#line 559 "size_prof.m"
        {
#line 559 "size_prof.m"
          MR_Word base;
#line 559 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "size_prof.m"
          *transform_hlds__size_prof__Later_18 = base;
#line 559 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_33));
#line 559 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_34));
#line 559 "size_prof.m"
        }
#line 549 "size_prof.m"
      }
#line 539 "size_prof.m"
  }
#line 531 "size_prof.m"
}

#line 514 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 514 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 514 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
#line 514 "size_prof.m"
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8)
#line 514 "size_prof.m"
{
#line 518 "size_prof.m"
  {
#line 518 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 518 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "size_prof.m"
      {
#line 518 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 518 "size_prof.m"
      }
#line 518 "size_prof.m"
    else
#line 520 "size_prof.m"
      {
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_18;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_19;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_30_30;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_31_31;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 7)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 8)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 9)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 10)));
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_46_46 = transform_hlds__size_prof__V_35_35;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_47_47 = transform_hlds__size_prof__V_36_36;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_48_48 = transform_hlds__size_prof__TargetTypeInfoMap0_5;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_50_50 = transform_hlds__size_prof__V_39_39;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_51_51 = transform_hlds__size_prof__V_40_40;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_52_52 = transform_hlds__size_prof__V_41_41;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_53_53 = transform_hlds__size_prof__V_42_42;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_54_54 = transform_hlds__size_prof__V_43_43;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_56_56 = transform_hlds__size_prof__TypeInfoMap0_6;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_57_57 = transform_hlds__size_prof__V_46_46;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_58_58 = transform_hlds__size_prof__V_47_47;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_59_59 = transform_hlds__size_prof__V_48_48;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_61_61 = transform_hlds__size_prof__V_50_50;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_62_62 = transform_hlds__size_prof__V_51_51;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_63_63 = transform_hlds__size_prof__V_52_52;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_64_64 = transform_hlds__size_prof__V_53_53;
#line 520 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_65_65 = transform_hlds__size_prof__V_54_54;
#line 521 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 521 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 521 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 521 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));

#line 524 "size_prof.m"
        {
#line 524 "size_prof.m"
          transform_hlds__size_prof__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_7));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__V_56_56));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (transform_hlds__size_prof__V_57_57));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (transform_hlds__size_prof__V_58_58));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (transform_hlds__size_prof__V_59_59));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_8));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (transform_hlds__size_prof__V_61_61));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (transform_hlds__size_prof__V_62_62));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (transform_hlds__size_prof__V_63_63));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (transform_hlds__size_prof__V_64_64));
#line 524 "size_prof.m"
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (transform_hlds__size_prof__V_65_65));
#line 524 "size_prof.m"
        }
#line 525 "size_prof.m"
        {
#line 525 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_16, &transform_hlds__size_prof__Goal_18, transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, &transform_hlds__size_prof__STATE_VARIABLE_Info_31_31);
        }
#line 526 "size_prof.m"
        {
#line 526 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_17, &transform_hlds__size_prof__Goals_19, transform_hlds__size_prof__STATE_VARIABLE_Info_31_31, transform_hlds__size_prof__STATE_VARIABLE_Info_4, transform_hlds__size_prof__TargetTypeInfoMap0_5, transform_hlds__size_prof__TypeInfoMap0_6, transform_hlds__size_prof__TypeCtorMap0_7, transform_hlds__size_prof__KnownSizeMap0_8);
        }
#line 519 "size_prof.m"
        {
#line 519 "size_prof.m"
          MR_Word base;
#line 519 "size_prof.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "size_prof.m"
          *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 519 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_18));
#line 519 "size_prof.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_19));
#line 519 "size_prof.m"
        }
#line 520 "size_prof.m"
      }
#line 518 "size_prof.m"
  }
#line 514 "size_prof.m"
}

#line 495 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
#line 495 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
#line 495 "size_prof.m"
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
#line 495 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
#line 495 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4)
#line 495 "size_prof.m"
{
#line 498 "size_prof.m"
  {
#line 498 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 498 "size_prof.m"
    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "size_prof.m"
      {
#line 498 "size_prof.m"
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "size_prof.m"
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
#line 498 "size_prof.m"
      }
#line 498 "size_prof.m"
    else
#line 499 "size_prof.m"
      {
#line 499 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goal_12;
#line 499 "size_prof.m"
        MR_Word transform_hlds__size_prof__Goals_13;
#line 499 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_18_18;
#line 508 "size_prof.m"
        MR_Word transform_hlds__size_prof__SubConj_14;
#line 502 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_20_20;
#line 502 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_21_21;
#line 502 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_15_15;

#line 500 "size_prof.m"
        {
#line 500 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_8, &transform_hlds__size_prof__Goal_12, transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, &transform_hlds__size_prof__STATE_VARIABLE_Info_18_18);
        }
#line 501 "size_prof.m"
        {
#line 501 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_9, &transform_hlds__size_prof__Goals_13, transform_hlds__size_prof__STATE_VARIABLE_Info_18_18, transform_hlds__size_prof__STATE_VARIABLE_Info_4);
        }
#line 502 "size_prof.m"
        transform_hlds__size_prof__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 0)));
#line 502 "size_prof.m"
        transform_hlds__size_prof__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 1)));
#line 502 "size_prof.m"
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 502 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 502 "size_prof.m"
          {
#line 502 "size_prof.m"
            transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 1)));
#line 502 "size_prof.m"
            transform_hlds__size_prof__SubConj_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__V_20_20, (MR_Integer) 2)));
#line 502 "size_prof.m"
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_21_21 == (MR_Integer) 0);
#line 502 "size_prof.m"
          }
#line 508 "size_prof.m"
        if (transform_hlds__size_prof__succeeded)
#line 507 "size_prof.m"
          {
#line 507 "size_prof.m"
            {
#line 507 "size_prof.m"
              *transform_hlds__size_prof__HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__SubConj_14, transform_hlds__size_prof__Goals_13);
            }
#line 507 "size_prof.m"
          }
#line 508 "size_prof.m"
        else
#line 509 "size_prof.m"
          {
#line 509 "size_prof.m"
            MR_Word base;
#line 509 "size_prof.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "size_prof.m"
            *transform_hlds__size_prof__HeadVar__2_2 = base;
#line 509 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_12));
#line 509 "size_prof.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_13));
#line 509 "size_prof.m"
          }
#line 499 "size_prof.m"
      }
#line 498 "size_prof.m"
  }
#line 495 "size_prof.m"
}

#line 436 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 436 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 436 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 436 "size_prof.m"
{
#line 436 "size_prof.m"
  {
#line 436 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 436 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_1039;

#line 436 "size_prof.m"
    {
#line 436 "size_prof.m"
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__436__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
#line 436 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_1039));
#line 436 "size_prof.m"
  }
#line 436 "size_prof.m"
}

#line 292 "size_prof.m"
static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
#line 292 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 292 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1)
#line 292 "size_prof.m"
{
#line 292 "size_prof.m"
  {
#line 292 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 292 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

#line 292 "size_prof.m"
    {
#line 292 "size_prof.m"
      return transform_hlds__size_prof__succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1));
    }
#line 292 "size_prof.m"
    return transform_hlds__size_prof__succeeded;
#line 292 "size_prof.m"
  }
#line 292 "size_prof.m"
}

#line 272 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
#line 272 "size_prof.m"
  MR_Word transform_hlds__size_prof__Goal0_5,
#line 272 "size_prof.m"
  MR_Word * transform_hlds__size_prof__Goal_6,
#line 272 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
#line 272 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96)
#line 272 "size_prof.m"
{
#line 275 "size_prof.m"
  {
#line 275 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 275 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 0)));
#line 275 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 1)));
#line 275 "size_prof.m"
    MR_Word transform_hlds__size_prof__GoalExpr_22;

#line 311 "size_prof.m"
    if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 457 "size_prof.m"
      {
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__NegGoal0_87 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__GoalExpr0_8), (MR_Integer) 0);
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__NegGoal_88;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_103_103;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeInfoMap0_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__TypeCtorMap0_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__KnownSizeMap0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__RevTypeCtorMap0_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_960_960;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_961_961;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_962_962;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_963_963;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_964_964;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_969_969;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_971_971;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_972_972;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_973_973;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_974_974;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_975_975;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_977_977;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_980_980;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_982_982;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_983_983;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_984_984;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_985_985;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_986_986;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_988_988;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_990_990;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_991_991;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_993_993;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_994_994;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_995_995;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_996_996;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_997_997;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_998_998;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_999_999;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1001_1001;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1002_1002;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1004_1004;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1005_1005;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1006_1006;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1007_1007;
#line 457 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_1008_1008;
#line 458 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_899_899 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 458 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_900_900 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 458 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_901_901 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 458 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_902_902 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 458 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_903_903 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_954_954;
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_955_955;
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_956_956;
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_957_957;
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_958_958;
#line 468 "size_prof.m"
        MR_Word transform_hlds__size_prof__V_959_959;

#line 464 "size_prof.m"
        {
#line 464 "size_prof.m"
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__NegGoal0_87, &transform_hlds__size_prof__NegGoal_88, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_103_103);
        }
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_954_954 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_955_955 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_956_956 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_957_957 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_958_958 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_959_959 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_960_960 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 6)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_961_961 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 7)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_962_962 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 8)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_963_963 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 9)));
#line 468 "size_prof.m"
        transform_hlds__size_prof__V_964_964 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 10)));
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_969_969 = transform_hlds__size_prof__TargetTypeInfoMap0_245;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_971_971 = transform_hlds__size_prof__V_960_960;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_972_972 = transform_hlds__size_prof__V_961_961;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_973_973 = transform_hlds__size_prof__V_962_962;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_974_974 = transform_hlds__size_prof__V_963_963;
#line 469 "size_prof.m"
        transform_hlds__size_prof__V_975_975 = transform_hlds__size_prof__V_964_964;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_977_977 = transform_hlds__size_prof__TypeInfoMap0_246;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_980_980 = transform_hlds__size_prof__V_969_969;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_982_982 = transform_hlds__size_prof__V_971_971;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_983_983 = transform_hlds__size_prof__V_972_972;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_984_984 = transform_hlds__size_prof__V_973_973;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_985_985 = transform_hlds__size_prof__V_974_974;
#line 470 "size_prof.m"
        transform_hlds__size_prof__V_986_986 = transform_hlds__size_prof__V_975_975;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_988_988 = transform_hlds__size_prof__V_977_977;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_990_990 = transform_hlds__size_prof__RevTypeInfoMap0_247;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_991_991 = transform_hlds__size_prof__V_980_980;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_993_993 = transform_hlds__size_prof__V_982_982;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_994_994 = transform_hlds__size_prof__V_983_983;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_995_995 = transform_hlds__size_prof__V_984_984;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_996_996 = transform_hlds__size_prof__V_985_985;
#line 471 "size_prof.m"
        transform_hlds__size_prof__V_997_997 = transform_hlds__size_prof__V_986_986;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_998_998 = transform_hlds__size_prof__TypeCtorMap0_248;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_999_999 = transform_hlds__size_prof__V_988_988;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1001_1001 = transform_hlds__size_prof__V_990_990;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1002_1002 = transform_hlds__size_prof__V_991_991;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1004_1004 = transform_hlds__size_prof__V_993_993;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1005_1005 = transform_hlds__size_prof__V_994_994;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1006_1006 = transform_hlds__size_prof__V_995_995;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1007_1007 = transform_hlds__size_prof__V_996_996;
#line 472 "size_prof.m"
        transform_hlds__size_prof__V_1008_1008 = transform_hlds__size_prof__V_997_997;
#line 473 "size_prof.m"
        {
#line 473 "size_prof.m"
          MR_Word base;
#line 473 "size_prof.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 473 "size_prof.m"
          *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_998_998));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_999_999));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_250));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_1001_1001));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_1002_1002));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_249));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_1004_1004));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_1005_1005));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_1006_1006));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_1007_1007));
#line 473 "size_prof.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_1008_1008));
#line 473 "size_prof.m"
        }
#line 474 "size_prof.m"
        transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__size_prof__NegGoal_88);
#line 457 "size_prof.m"
      }
#line 311 "size_prof.m"
    else
#line 311 "size_prof.m"
      if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 312 "size_prof.m"
        {
#line 312 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeCtorInfo_1022_1022 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 312 "size_prof.m"
          MR_Word transform_hlds__size_prof__TypeInfo_1023_1023 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 312 "size_prof.m"
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_172_172;
#line 312 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_173_173;
#line 312 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_175_175;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_252_252;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_253_253;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_254_254;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_255_255;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_256_256;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_257_257;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_258_258;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_259_259;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_260_260;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_261_261;
#line 316 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_251_251;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_262_262;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_263_263;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_265_265;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_266_266;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_267_267;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_268_268;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_269_269;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_270_270;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_271_271;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_272_272;
#line 317 "size_prof.m"
          MR_Word transform_hlds__size_prof__V_264_264;

#line 316 "size_prof.m"
          {
#line 316 "size_prof.m"
            transform_hlds__size_prof__V_173_173 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1022_1022, transform_hlds__size_prof__TypeInfo_1023_1023);
          }
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 316 "size_prof.m"
          transform_hlds__size_prof__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 316 "size_prof.m"
          {
#line 316 "size_prof.m"
            transform_hlds__size_prof__STATE_VARIABLE_Info_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 0) = ((MR_Box) (transform_hlds__size_prof__V_173_173));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 1) = ((MR_Box) (transform_hlds__size_prof__V_252_252));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 2) = ((MR_Box) (transform_hlds__size_prof__V_253_253));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 3) = ((MR_Box) (transform_hlds__size_prof__V_254_254));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 4) = ((MR_Box) (transform_hlds__size_prof__V_255_255));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 5) = ((MR_Box) (transform_hlds__size_prof__V_256_256));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 6) = ((MR_Box) (transform_hlds__size_prof__V_257_257));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 7) = ((MR_Box) (transform_hlds__size_prof__V_258_258));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 8) = ((MR_Box) (transform_hlds__size_prof__V_259_259));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 9) = ((MR_Box) (transform_hlds__size_prof__V_260_260));
#line 316 "size_prof.m"
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 10) = ((MR_Box) (transform_hlds__size_prof__V_261_261));
#line 316 "size_prof.m"
          }
#line 317 "size_prof.m"
          {
#line 317 "size_prof.m"
            transform_hlds__size_prof__V_175_175 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1023_1023, transform_hlds__size_prof__TypeCtorInfo_1022_1022);
          }
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 0)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 1)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 2)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 3)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 4)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 5)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 6)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 7)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 8)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 9)));
#line 317 "size_prof.m"
          transform_hlds__size_prof__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 10)));
#line 317 "size_prof.m"
          {
#line 317 "size_prof.m"
            MR_Word base;
#line 317 "size_prof.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 317 "size_prof.m"
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_262_262));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_263_263));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_175_175));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_265_265));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_266_266));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_267_267));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_268_268));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_269_269));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_270_270));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_271_271));
#line 317 "size_prof.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_272_272));
#line 317 "size_prof.m"
          }
#line 318 "size_prof.m"
          transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 312 "size_prof.m"
        }
#line 311 "size_prof.m"
      else
#line 311 "size_prof.m"
        if (((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 278 "size_prof.m"
          {
#line 278 "size_prof.m"
            MR_Word transform_hlds__size_prof__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)));
#line 278 "size_prof.m"
            MR_Word transform_hlds__size_prof__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 278 "size_prof.m"
            MR_Word transform_hlds__size_prof__UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 278 "size_prof.m"
            MR_Word transform_hlds__size_prof__Unify0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 278 "size_prof.m"
            MR_Word transform_hlds__size_prof__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));

#line 284 "size_prof.m"
            if (((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 0))))
#line 280 "size_prof.m"
              {
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__How_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__Unique_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 280 "size_prof.m"
                MR_Word transform_hlds__size_prof__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 6)));

#line 281 "size_prof.m"
                {
#line 281 "size_prof.m"
                  transform_hlds__size_prof__size_prof_process_construct_14_p_0(transform_hlds__size_prof__LHS_10, transform_hlds__size_prof__RHS_11, transform_hlds__size_prof__UniMode_12, transform_hlds__size_prof__UnifyContext_14, transform_hlds__size_prof__Var_15, transform_hlds__size_prof__ConsId_16, transform_hlds__size_prof__Args_17, transform_hlds__size_prof__ArgModes_18, transform_hlds__size_prof__How_19, transform_hlds__size_prof__Unique_20, transform_hlds__size_prof__GoalInfo0_9, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                }
#line 280 "size_prof.m"
              }
#line 284 "size_prof.m"
            else
#line 284 "size_prof.m"
              if (((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 1))))
#line 286 "size_prof.m"
                {
#line 286 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
#line 286 "size_prof.m"
                  MR_Word transform_hlds__size_prof__ConsId_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
#line 286 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Args_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
#line 286 "size_prof.m"
                  MR_Word transform_hlds__size_prof__ArgModes_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
#line 285 "size_prof.m"
                  MR_Word transform_hlds__size_prof___CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
#line 285 "size_prof.m"
                  MR_Word transform_hlds__size_prof___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
#line 293 "size_prof.m"
                  MR_Word transform_hlds__size_prof__BindingArgModes_25;
#line 293 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_179_179;
#line 294 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_26_26;
#line 294 "size_prof.m"
                  MR_Word transform_hlds__size_prof__V_27_27;

#line 292 "size_prof.m"
                  {
#line 292 "size_prof.m"
                    transform_hlds__size_prof__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0]));
#line 292 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1));
#line 292 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "size_prof.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_179_179, 3) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_95));
#line 292 "size_prof.m"
                  }
#line 292 "size_prof.m"
                  {
#line 292 "size_prof.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, transform_hlds__size_prof__V_179_179, transform_hlds__size_prof__ArgModes_185, &transform_hlds__size_prof__BindingArgModes_25);
                  }
#line 294 "size_prof.m"
                  transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__BindingArgModes_25)) == (MR_mktag((MR_Integer) 1)));
#line 294 "size_prof.m"
                  if (transform_hlds__size_prof__succeeded)
#line 294 "size_prof.m"
                    {
#line 294 "size_prof.m"
                      transform_hlds__size_prof__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 0)));
#line 294 "size_prof.m"
                      transform_hlds__size_prof__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 1)));
#line 296 "size_prof.m"
                      {
#line 296 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(transform_hlds__size_prof__Var_182, transform_hlds__size_prof__ConsId_183, transform_hlds__size_prof__Args_184, transform_hlds__size_prof__ArgModes_185, transform_hlds__size_prof__Goal0_5, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                      }
#line 294 "size_prof.m"
                    }
#line 294 "size_prof.m"
                  else
#line 299 "size_prof.m"
                    {
#line 299 "size_prof.m"
                      transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 299 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 299 "size_prof.m"
                    }
#line 286 "size_prof.m"
                }
#line 284 "size_prof.m"
              else
#line 284 "size_prof.m"
                if (((((MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 307 "size_prof.m"
                  {
#line 309 "size_prof.m"
                    {
#line 309 "size_prof.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
#line 309 "size_prof.m"
                      return;
                    }
#line 307 "size_prof.m"
                  }
#line 284 "size_prof.m"
                else
#line 304 "size_prof.m"
                  {
#line 305 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 305 "size_prof.m"
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 304 "size_prof.m"
                  }
#line 278 "size_prof.m"
          }
#line 311 "size_prof.m"
        else
#line 311 "size_prof.m"
          if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 328 "size_prof.m"
            {
#line 329 "size_prof.m"
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 329 "size_prof.m"
              *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
#line 328 "size_prof.m"
            }
#line 311 "size_prof.m"
          else
#line 311 "size_prof.m"
            if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 331 "size_prof.m"
              {
#line 331 "size_prof.m"
                MR_Word transform_hlds__size_prof__ConjType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 331 "size_prof.m"
                MR_Word transform_hlds__size_prof__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 331 "size_prof.m"
                MR_Word transform_hlds__size_prof__Goals_55;

#line 335 "size_prof.m"
                if ((transform_hlds__size_prof__ConjType_53 == (MR_Integer) 1))
#line 336 "size_prof.m"
                  {
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1026_1026;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfo_1027_1027;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfoMap0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__KnownSizeMap0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_158_158;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_161_161;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_162_162;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_163_163;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_165_165;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_345_345;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_347_347;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_350_350;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_351_351;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_352_352;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_353_353;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_354_354;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_355_355;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_356_356;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_358_358;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_360_360;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_361_361;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_362_362;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_363_363;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_364_364;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_365_365;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_366_366;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_389_389;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_390_390;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_392_392;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_393_393;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_395_395;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_396_396;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_397_397;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_398_398;
#line 336 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_399_399;
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 341 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 348 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_346_346;
#line 348 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_348_348;
#line 348 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_349_349;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_379_379;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_380_380;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_381_381;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_382_382;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_383_383;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_384_384;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_385_385;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_386_386;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_387_387;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_388_388;
#line 351 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_378_378;
#line 352 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_391_391;
#line 352 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_394_394;

#line 346 "size_prof.m"
                    {
#line 346 "size_prof.m"
                      transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, transform_hlds__size_prof__TargetTypeInfoMap0_56, transform_hlds__size_prof__TypeInfoMap0_57, transform_hlds__size_prof__TypeCtorMap0_59, transform_hlds__size_prof__KnownSizeMap0_60);
                    }
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 0)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 1)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 2)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 3)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 4)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 5)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 6)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 7)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 8)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 9)));
#line 348 "size_prof.m"
                    transform_hlds__size_prof__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 10)));
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_356_356 = transform_hlds__size_prof__V_345_345;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_358_358 = transform_hlds__size_prof__V_347_347;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_360_360 = transform_hlds__size_prof__TargetTypeInfoMap0_56;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_361_361 = transform_hlds__size_prof__V_350_350;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_362_362 = transform_hlds__size_prof__V_351_351;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_363_363 = transform_hlds__size_prof__V_352_352;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_364_364 = transform_hlds__size_prof__V_353_353;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_365_365 = transform_hlds__size_prof__V_354_354;
#line 349 "size_prof.m"
                    transform_hlds__size_prof__V_366_366 = transform_hlds__size_prof__V_355_355;
#line 350 "size_prof.m"
                    {
#line 350 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 0) = ((MR_Box) (transform_hlds__size_prof__V_356_356));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_57));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 2) = ((MR_Box) (transform_hlds__size_prof__V_358_358));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_58));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 4) = ((MR_Box) (transform_hlds__size_prof__V_360_360));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 5) = ((MR_Box) (transform_hlds__size_prof__V_361_361));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 6) = ((MR_Box) (transform_hlds__size_prof__V_362_362));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 7) = ((MR_Box) (transform_hlds__size_prof__V_363_363));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 8) = ((MR_Box) (transform_hlds__size_prof__V_364_364));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 9) = ((MR_Box) (transform_hlds__size_prof__V_365_365));
#line 350 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 10) = ((MR_Box) (transform_hlds__size_prof__V_366_366));
#line 350 "size_prof.m"
                    }
#line 11048 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeCtorInfo_1026_1026 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11050 "transform_hlds.size_prof.c"
                    transform_hlds__size_prof__TypeInfo_1027_1027 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 351 "size_prof.m"
                    {
#line 351 "size_prof.m"
                      transform_hlds__size_prof__V_163_163 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1026_1026, transform_hlds__size_prof__TypeInfo_1027_1027);
                    }
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 0)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 1)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 2)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 3)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 4)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 5)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 6)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 7)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 8)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 9)));
#line 351 "size_prof.m"
                    transform_hlds__size_prof__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 10)));
#line 351 "size_prof.m"
                    {
#line 351 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 0) = ((MR_Box) (transform_hlds__size_prof__V_163_163));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 1) = ((MR_Box) (transform_hlds__size_prof__V_379_379));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 2) = ((MR_Box) (transform_hlds__size_prof__V_380_380));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 3) = ((MR_Box) (transform_hlds__size_prof__V_381_381));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 4) = ((MR_Box) (transform_hlds__size_prof__V_382_382));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 5) = ((MR_Box) (transform_hlds__size_prof__V_383_383));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 6) = ((MR_Box) (transform_hlds__size_prof__V_384_384));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 7) = ((MR_Box) (transform_hlds__size_prof__V_385_385));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 8) = ((MR_Box) (transform_hlds__size_prof__V_386_386));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 9) = ((MR_Box) (transform_hlds__size_prof__V_387_387));
#line 351 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 10) = ((MR_Box) (transform_hlds__size_prof__V_388_388));
#line 351 "size_prof.m"
                    }
#line 352 "size_prof.m"
                    {
#line 352 "size_prof.m"
                      transform_hlds__size_prof__V_165_165 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1027_1027, transform_hlds__size_prof__TypeCtorInfo_1026_1026);
                    }
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 0)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 1)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 2)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 3)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 4)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 5)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 6)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 7)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 8)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 9)));
#line 352 "size_prof.m"
                    transform_hlds__size_prof__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 10)));
#line 353 "size_prof.m"
                    {
#line 353 "size_prof.m"
                      MR_Word base;
#line 353 "size_prof.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 353 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_389_389));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_390_390));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_165_165));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_392_392));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_393_393));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_60));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_395_395));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_396_396));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_397_397));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_398_398));
#line 353 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_399_399));
#line 353 "size_prof.m"
                    }
#line 336 "size_prof.m"
                  }
#line 335 "size_prof.m"
                else
#line 334 "size_prof.m"
                  {
#line 334 "size_prof.m"
                    transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
#line 355 "size_prof.m"
                {
#line 355 "size_prof.m"
                  transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 355 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__ConjType_53));
#line 355 "size_prof.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_55));
#line 355 "size_prof.m"
                }
#line 331 "size_prof.m"
              }
#line 311 "size_prof.m"
            else
#line 311 "size_prof.m"
              if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 386 "size_prof.m"
                {
#line 386 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 386 "size_prof.m"
                  MR_Word transform_hlds__size_prof__Disjuncts_73;
#line 386 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_143_143;
#line 386 "size_prof.m"
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_144_144;

#line 407 "size_prof.m"
                  if ((transform_hlds__size_prof__Disjuncts0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "size_prof.m"
                    {
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1032_1032 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1033_1033 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1034_1034;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_129_129;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_130_130;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_131_131;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_132_132;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_133_133;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_134_134;
#line 408 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_136_136;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_619_619;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_621_621;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_622_622;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_623_623;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_624_624;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_625_625;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_626_626;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_627_627;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_628_628;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_629_629;
#line 410 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_620_620;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_630_630;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_631_631;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_633_633;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_634_634;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_635_635;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_636_636;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_637_637;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_638_638;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_639_639;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_640_640;
#line 411 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_632_632;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_641_641;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_643_643;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_644_644;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_645_645;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_646_646;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_647_647;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_648_648;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_649_649;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_650_650;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_651_651;
#line 412 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_642_642;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_652_652;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_653_653;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_655_655;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_656_656;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_657_657;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_658_658;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_659_659;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_660_660;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_661_661;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_662_662;
#line 413 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_654_654;

#line 410 "size_prof.m"
                      {
#line 410 "size_prof.m"
                        transform_hlds__size_prof__V_130_130 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                      }
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_619_619 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_620_620 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_621_621 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_622_622 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_623_623 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_624_624 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_625_625 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_626_626 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_627_627 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_628_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 410 "size_prof.m"
                      transform_hlds__size_prof__V_629_629 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 410 "size_prof.m"
                      {
#line 410 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 0) = ((MR_Box) (transform_hlds__size_prof__V_619_619));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 1) = ((MR_Box) (transform_hlds__size_prof__V_130_130));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 2) = ((MR_Box) (transform_hlds__size_prof__V_621_621));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 3) = ((MR_Box) (transform_hlds__size_prof__V_622_622));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 4) = ((MR_Box) (transform_hlds__size_prof__V_623_623));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 5) = ((MR_Box) (transform_hlds__size_prof__V_624_624));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 6) = ((MR_Box) (transform_hlds__size_prof__V_625_625));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 7) = ((MR_Box) (transform_hlds__size_prof__V_626_626));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 8) = ((MR_Box) (transform_hlds__size_prof__V_627_627));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 9) = ((MR_Box) (transform_hlds__size_prof__V_628_628));
#line 410 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 10) = ((MR_Box) (transform_hlds__size_prof__V_629_629));
#line 410 "size_prof.m"
                      }
#line 11372 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeCtorInfo_1034_1034 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 411 "size_prof.m"
                      {
#line 411 "size_prof.m"
                        transform_hlds__size_prof__V_132_132 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                      }
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_630_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 0)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_631_631 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 1)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_632_632 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 2)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_633_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 3)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_634_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 4)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_635_635 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 5)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_636_636 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 6)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_637_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 7)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_638_638 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 8)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 9)));
#line 411 "size_prof.m"
                      transform_hlds__size_prof__V_640_640 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 10)));
#line 411 "size_prof.m"
                      {
#line 411 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 0) = ((MR_Box) (transform_hlds__size_prof__V_630_630));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 1) = ((MR_Box) (transform_hlds__size_prof__V_631_631));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 2) = ((MR_Box) (transform_hlds__size_prof__V_132_132));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 3) = ((MR_Box) (transform_hlds__size_prof__V_633_633));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 4) = ((MR_Box) (transform_hlds__size_prof__V_634_634));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 5) = ((MR_Box) (transform_hlds__size_prof__V_635_635));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 6) = ((MR_Box) (transform_hlds__size_prof__V_636_636));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 7) = ((MR_Box) (transform_hlds__size_prof__V_637_637));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 8) = ((MR_Box) (transform_hlds__size_prof__V_638_638));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 9) = ((MR_Box) (transform_hlds__size_prof__V_639_639));
#line 411 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 10) = ((MR_Box) (transform_hlds__size_prof__V_640_640));
#line 411 "size_prof.m"
                      }
#line 412 "size_prof.m"
                      {
#line 412 "size_prof.m"
                        transform_hlds__size_prof__V_134_134 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                      }
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 0)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_642_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 1)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_643_643 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 2)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_644_644 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 3)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_645_645 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 4)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_646_646 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 5)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_647_647 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 6)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_648_648 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 7)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_649_649 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 8)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_650_650 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 9)));
#line 412 "size_prof.m"
                      transform_hlds__size_prof__V_651_651 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 10)));
#line 412 "size_prof.m"
                      {
#line 412 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (transform_hlds__size_prof__V_641_641));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (transform_hlds__size_prof__V_134_134));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (transform_hlds__size_prof__V_643_643));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (transform_hlds__size_prof__V_644_644));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (transform_hlds__size_prof__V_645_645));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (transform_hlds__size_prof__V_646_646));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (transform_hlds__size_prof__V_647_647));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (transform_hlds__size_prof__V_648_648));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 8) = ((MR_Box) (transform_hlds__size_prof__V_649_649));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (transform_hlds__size_prof__V_650_650));
#line 412 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 10) = ((MR_Box) (transform_hlds__size_prof__V_651_651));
#line 412 "size_prof.m"
                      }
#line 413 "size_prof.m"
                      {
#line 413 "size_prof.m"
                        transform_hlds__size_prof__V_136_136 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                      }
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_652_652 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 0)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_653_653 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 1)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_654_654 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 2)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_655_655 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 3)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_656_656 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 4)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_657_657 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 5)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_658_658 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 6)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_659_659 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 7)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_660_660 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 8)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_661_661 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 9)));
#line 413 "size_prof.m"
                      transform_hlds__size_prof__V_662_662 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 10)));
#line 413 "size_prof.m"
                      {
#line 413 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_652_652));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_653_653));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_136_136));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_655_655));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_656_656));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__V_657_657));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_658_658));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_659_659));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_660_660));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_661_661));
#line 413 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_662_662));
#line 413 "size_prof.m"
                      }
#line 414 "size_prof.m"
                      transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 408 "size_prof.m"
                    }
#line 407 "size_prof.m"
                  else
#line 388 "size_prof.m"
                    {
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1030_1030;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1031_1031;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_137_137;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_138_138;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_139_139;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_140_140;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_142_142;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap0_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeInfoMap0_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorMap0_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap0_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__First0_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 0)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Later0_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 1)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeCtorMap0_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__First_209;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Later_210;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap_211;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap_212;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_597_597;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_598_598;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_600_600;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_601_601;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_603_603;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_604_604;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_605_605;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_606_606;
#line 388 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_607_607;
#line 389 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 389 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_521_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 389 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_522_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 389 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_523_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 389 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_575_575;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_577_577;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_578_578;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_579_579;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_580_580;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_581_581;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_582_582;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_583_583;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_584_584;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_585_585;
#line 400 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_576_576;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_587_587;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_588_588;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_589_589;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_590_590;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_591_591;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_592_592;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_593_593;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_594_594;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_595_595;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_596_596;
#line 403 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_586_586;
#line 404 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_599_599;
#line 404 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_602_602;

#line 395 "size_prof.m"
                      {
#line 395 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__First0_206, &transform_hlds__size_prof__First_209, transform_hlds__size_prof__Later0_207, &transform_hlds__size_prof__Later_210, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, transform_hlds__size_prof__TargetTypeInfoMap0_201, transform_hlds__size_prof__TypeInfoMap0_202, transform_hlds__size_prof__RevTypeInfoMap0_203, transform_hlds__size_prof__TypeCtorMap0_204, transform_hlds__size_prof__RevTypeCtorMap0_208, &transform_hlds__size_prof__TypeInfoMap_211, transform_hlds__size_prof__KnownSizeMap0_205, &transform_hlds__size_prof__KnownSizeMap_212);
                      }
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_575_575 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 0)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_576_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 1)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_577_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 2)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_578_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 3)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_579_579 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 4)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_580_580 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 5)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_581_581 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 6)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_582_582 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 7)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_583_583 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 8)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_584_584 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 9)));
#line 400 "size_prof.m"
                      transform_hlds__size_prof__V_585_585 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 10)));
#line 400 "size_prof.m"
                      {
#line 400 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (transform_hlds__size_prof__V_575_575));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_211));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (transform_hlds__size_prof__V_577_577));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (transform_hlds__size_prof__V_578_578));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (transform_hlds__size_prof__V_579_579));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (transform_hlds__size_prof__V_580_580));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (transform_hlds__size_prof__V_581_581));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (transform_hlds__size_prof__V_582_582));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 8) = ((MR_Box) (transform_hlds__size_prof__V_583_583));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (transform_hlds__size_prof__V_584_584));
#line 400 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (transform_hlds__size_prof__V_585_585));
#line 400 "size_prof.m"
                      }
#line 11717 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeCtorInfo_1030_1030 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 11719 "transform_hlds.size_prof.c"
                      transform_hlds__size_prof__TypeInfo_1031_1031 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 403 "size_prof.m"
                      {
#line 403 "size_prof.m"
                        transform_hlds__size_prof__V_140_140 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1030_1030, transform_hlds__size_prof__TypeInfo_1031_1031);
                      }
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_586_586 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 0)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_587_587 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 1)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_588_588 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 2)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_589_589 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 3)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_590_590 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 4)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_591_591 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 5)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_592_592 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 6)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_593_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 7)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_594_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 8)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_595_595 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 9)));
#line 403 "size_prof.m"
                      transform_hlds__size_prof__V_596_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 10)));
#line 403 "size_prof.m"
                      {
#line 403 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 0) = ((MR_Box) (transform_hlds__size_prof__V_140_140));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 1) = ((MR_Box) (transform_hlds__size_prof__V_587_587));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 2) = ((MR_Box) (transform_hlds__size_prof__V_588_588));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 3) = ((MR_Box) (transform_hlds__size_prof__V_589_589));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 4) = ((MR_Box) (transform_hlds__size_prof__V_590_590));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 5) = ((MR_Box) (transform_hlds__size_prof__V_591_591));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 6) = ((MR_Box) (transform_hlds__size_prof__V_592_592));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 7) = ((MR_Box) (transform_hlds__size_prof__V_593_593));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 8) = ((MR_Box) (transform_hlds__size_prof__V_594_594));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 9) = ((MR_Box) (transform_hlds__size_prof__V_595_595));
#line 403 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 10) = ((MR_Box) (transform_hlds__size_prof__V_596_596));
#line 403 "size_prof.m"
                      }
#line 404 "size_prof.m"
                      {
#line 404 "size_prof.m"
                        transform_hlds__size_prof__V_142_142 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1031_1031, transform_hlds__size_prof__TypeCtorInfo_1030_1030);
                      }
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_597_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 0)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 1)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_599_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 2)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_600_600 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 3)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_601_601 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 4)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_602_602 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 5)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_603_603 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 6)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_604_604 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 7)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_605_605 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 8)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_606_606 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 9)));
#line 404 "size_prof.m"
                      transform_hlds__size_prof__V_607_607 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 10)));
#line 405 "size_prof.m"
                      {
#line 405 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__V_597_597));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__V_598_598));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__V_142_142));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__V_600_600));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__V_601_601));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_212));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__V_603_603));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__V_604_604));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__V_605_605));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__V_606_606));
#line 405 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__V_607_607));
#line 405 "size_prof.m"
                      }
#line 406 "size_prof.m"
                      {
#line 406 "size_prof.m"
                        transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "size_prof.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 0) = ((MR_Box) (transform_hlds__size_prof__First_209));
#line 406 "size_prof.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 1) = ((MR_Box) (transform_hlds__size_prof__Later_210));
#line 406 "size_prof.m"
                      }
#line 388 "size_prof.m"
                    }
#line 416 "size_prof.m"
                  {
#line 416 "size_prof.m"
                    transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, &transform_hlds__size_prof__STATE_VARIABLE_Info_144_144);
                  }
#line 417 "size_prof.m"
                  {
#line 417 "size_prof.m"
                    transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_144_144, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
#line 418 "size_prof.m"
                  {
#line 418 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 418 "size_prof.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Disjuncts_73));
#line 418 "size_prof.m"
                  }
#line 386 "size_prof.m"
                }
#line 311 "size_prof.m"
              else
#line 311 "size_prof.m"
                if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 320 "size_prof.m"
                  {
#line 320 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1024_1024 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 320 "size_prof.m"
                    MR_Word transform_hlds__size_prof__TypeInfo_1025_1025 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 320 "size_prof.m"
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_168_168;
#line 320 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_169_169;
#line 320 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_171_171;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_274_274;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_275_275;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_276_276;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_277_277;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_278_278;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_279_279;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_280_280;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_281_281;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_282_282;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_283_283;
#line 324 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_273_273;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_284_284;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_285_285;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_287_287;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_288_288;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_289_289;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_290_290;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_291_291;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_292_292;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_293_293;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_294_294;
#line 325 "size_prof.m"
                    MR_Word transform_hlds__size_prof__V_286_286;

#line 324 "size_prof.m"
                    {
#line 324 "size_prof.m"
                      transform_hlds__size_prof__V_169_169 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1024_1024, transform_hlds__size_prof__TypeInfo_1025_1025);
                    }
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 324 "size_prof.m"
                    transform_hlds__size_prof__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 324 "size_prof.m"
                    {
#line 324 "size_prof.m"
                      transform_hlds__size_prof__STATE_VARIABLE_Info_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 0) = ((MR_Box) (transform_hlds__size_prof__V_169_169));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 1) = ((MR_Box) (transform_hlds__size_prof__V_274_274));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 2) = ((MR_Box) (transform_hlds__size_prof__V_275_275));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 3) = ((MR_Box) (transform_hlds__size_prof__V_276_276));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 4) = ((MR_Box) (transform_hlds__size_prof__V_277_277));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 5) = ((MR_Box) (transform_hlds__size_prof__V_278_278));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 6) = ((MR_Box) (transform_hlds__size_prof__V_279_279));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 7) = ((MR_Box) (transform_hlds__size_prof__V_280_280));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 8) = ((MR_Box) (transform_hlds__size_prof__V_281_281));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 9) = ((MR_Box) (transform_hlds__size_prof__V_282_282));
#line 324 "size_prof.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 10) = ((MR_Box) (transform_hlds__size_prof__V_283_283));
#line 324 "size_prof.m"
                    }
#line 325 "size_prof.m"
                    {
#line 325 "size_prof.m"
                      transform_hlds__size_prof__V_171_171 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1025_1025, transform_hlds__size_prof__TypeCtorInfo_1024_1024);
                    }
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 0)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 1)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 2)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 3)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 4)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 5)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 6)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 7)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 8)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 9)));
#line 325 "size_prof.m"
                    transform_hlds__size_prof__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 10)));
#line 325 "size_prof.m"
                    {
#line 325 "size_prof.m"
                      MR_Word base;
#line 325 "size_prof.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 325 "size_prof.m"
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__V_284_284));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__V_285_285));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__V_171_171));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__V_287_287));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__V_288_288));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__V_289_289));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__V_290_290));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__V_291_291));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__V_292_292));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__V_293_293));
#line 325 "size_prof.m"
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__V_294_294));
#line 325 "size_prof.m"
                    }
#line 326 "size_prof.m"
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
#line 320 "size_prof.m"
                  }
#line 311 "size_prof.m"
                else
#line 311 "size_prof.m"
                  if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 420 "size_prof.m"
                    {
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorInfo_1035_1035 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfo_1036_1036 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Cond_78;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Then_79;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMapThen_80;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMapThen_81;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMapThen_82;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__Else_84;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMapElse_85;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMapElse_86;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_110_110;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_111_111;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_112_112;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_113_113;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_114_114;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_121_121;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_122_122;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_123_123;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_125_125;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_126_126;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_127_127;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap0_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeInfoMap0_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeCtorMap0_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap0_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__RevTypeCtorMap0_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__TypeInfoMap_243;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__KnownSizeMap_244;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_781_781;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_782_782;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_783_783;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_784_784;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_785_785;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_790_790;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_792_792;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_793_793;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_794_794;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_795_795;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_796_796;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_798_798;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_801_801;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_803_803;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_804_804;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_805_805;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_806_806;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_807_807;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_809_809;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_811_811;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_812_812;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_814_814;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_815_815;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_816_816;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_817_817;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_818_818;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_819_819;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_820_820;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_822_822;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_823_823;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_825_825;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_826_826;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_827_827;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_828_828;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_829_829;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_873_873;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_874_874;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_875_875;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_876_876;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_878_878;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_879_879;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_880_880;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_881_881;
#line 420 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_882_882;
#line 421 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_668_668 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 421 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_669_669 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 421 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 421 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 421 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_672_672 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_723_723;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_724_724;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_725_725;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_726_726;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_728_728;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_729_729;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_730_730;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_731_731;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_732_732;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_733_733;
#line 428 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_727_727;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_734_734;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_735_735;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_736_736;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_737_737;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_739_739;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_740_740;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_741_741;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_742_742;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_743_743;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_744_744;
#line 430 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_738_738;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_745_745;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_747_747;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_748_748;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_750_750;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_751_751;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_752_752;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_753_753;
#line 432 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_754_754;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_775_775;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_776_776;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_777_777;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_778_778;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_779_779;
#line 438 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_780_780;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_841_841;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_842_842;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_843_843;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_844_844;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_846_846;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_847_847;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_848_848;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_849_849;
#line 445 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_850_850;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_861_861;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_863_863;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_864_864;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_865_865;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_866_866;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_867_867;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_868_868;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_869_869;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_870_870;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_871_871;
#line 450 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_862_862;
#line 451 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_872_872;
#line 451 "size_prof.m"
                      MR_Word transform_hlds__size_prof__V_877_877;

#line 428 "size_prof.m"
                      {
#line 428 "size_prof.m"
                        transform_hlds__size_prof__V_111_111 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036);
                      }
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_723_723 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_724_724 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_725_725 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_726_726 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_727_727 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_728_728 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_729_729 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_730_730 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_731_731 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_732_732 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 428 "size_prof.m"
                      transform_hlds__size_prof__V_733_733 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 428 "size_prof.m"
                      {
#line 428 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 0) = ((MR_Box) (transform_hlds__size_prof__V_723_723));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 1) = ((MR_Box) (transform_hlds__size_prof__V_724_724));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 2) = ((MR_Box) (transform_hlds__size_prof__V_725_725));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 3) = ((MR_Box) (transform_hlds__size_prof__V_726_726));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 4) = ((MR_Box) (transform_hlds__size_prof__V_111_111));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 5) = ((MR_Box) (transform_hlds__size_prof__V_728_728));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 6) = ((MR_Box) (transform_hlds__size_prof__V_729_729));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 7) = ((MR_Box) (transform_hlds__size_prof__V_730_730));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 8) = ((MR_Box) (transform_hlds__size_prof__V_731_731));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 9) = ((MR_Box) (transform_hlds__size_prof__V_732_732));
#line 428 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 10) = ((MR_Box) (transform_hlds__size_prof__V_733_733));
#line 428 "size_prof.m"
                      }
#line 429 "size_prof.m"
                      {
#line 429 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Cond0_75, &transform_hlds__size_prof__Cond_78, transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, &transform_hlds__size_prof__STATE_VARIABLE_Info_112_112);
                      }
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_734_734 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 0)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_735_735 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 1)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_736_736 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 2)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_737_737 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 3)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_738_738 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 4)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_739_739 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 5)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_740_740 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 6)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_741_741 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 7)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 8)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 9)));
#line 430 "size_prof.m"
                      transform_hlds__size_prof__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 10)));
#line 430 "size_prof.m"
                      {
#line 430 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 0) = ((MR_Box) (transform_hlds__size_prof__V_734_734));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 1) = ((MR_Box) (transform_hlds__size_prof__V_735_735));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 2) = ((MR_Box) (transform_hlds__size_prof__V_736_736));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 3) = ((MR_Box) (transform_hlds__size_prof__V_737_737));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_237));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 5) = ((MR_Box) (transform_hlds__size_prof__V_739_739));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 6) = ((MR_Box) (transform_hlds__size_prof__V_740_740));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 7) = ((MR_Box) (transform_hlds__size_prof__V_741_741));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 8) = ((MR_Box) (transform_hlds__size_prof__V_742_742));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 9) = ((MR_Box) (transform_hlds__size_prof__V_743_743));
#line 430 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 10) = ((MR_Box) (transform_hlds__size_prof__V_744_744));
#line 430 "size_prof.m"
                      }
#line 431 "size_prof.m"
                      {
#line 431 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Then0_76, &transform_hlds__size_prof__Then_79, transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, &transform_hlds__size_prof__STATE_VARIABLE_Info_114_114);
                      }
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__TypeInfoMapThen_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__TargetTypeInfoMapThen_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__KnownSizeMapThen_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_753_753 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 432 "size_prof.m"
                      transform_hlds__size_prof__V_754_754 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 436 "size_prof.m"
                      {
#line 436 "size_prof.m"
                        mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeCtorInfo_1035_1035, (MR_Word) &transform_hlds__size_prof_scalar_common_2[6], transform_hlds__size_prof__TargetTypeInfoMapThen_80, transform_hlds__size_prof__TargetTypeInfoMap0_237, &transform_hlds__size_prof__ElseTargetTypeInfoMap_83);
                      }
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_775_775 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_776_776 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_777_777 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_778_778 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_779_779 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_781_781 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_782_782 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_783_783 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_784_784 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
#line 438 "size_prof.m"
                      transform_hlds__size_prof__V_785_785 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_790_790 = transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_792_792 = transform_hlds__size_prof__V_781_781;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_793_793 = transform_hlds__size_prof__V_782_782;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_794_794 = transform_hlds__size_prof__V_783_783;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_795_795 = transform_hlds__size_prof__V_784_784;
#line 439 "size_prof.m"
                      transform_hlds__size_prof__V_796_796 = transform_hlds__size_prof__V_785_785;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_798_798 = transform_hlds__size_prof__TypeInfoMap0_238;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_801_801 = transform_hlds__size_prof__V_790_790;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_803_803 = transform_hlds__size_prof__V_792_792;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_804_804 = transform_hlds__size_prof__V_793_793;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_805_805 = transform_hlds__size_prof__V_794_794;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_806_806 = transform_hlds__size_prof__V_795_795;
#line 440 "size_prof.m"
                      transform_hlds__size_prof__V_807_807 = transform_hlds__size_prof__V_796_796;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_809_809 = transform_hlds__size_prof__V_798_798;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_811_811 = transform_hlds__size_prof__RevTypeInfoMap0_239;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_812_812 = transform_hlds__size_prof__V_801_801;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_814_814 = transform_hlds__size_prof__V_803_803;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_815_815 = transform_hlds__size_prof__V_804_804;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_816_816 = transform_hlds__size_prof__V_805_805;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_817_817 = transform_hlds__size_prof__V_806_806;
#line 441 "size_prof.m"
                      transform_hlds__size_prof__V_818_818 = transform_hlds__size_prof__V_807_807;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_819_819 = transform_hlds__size_prof__TypeCtorMap0_240;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_820_820 = transform_hlds__size_prof__V_809_809;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_822_822 = transform_hlds__size_prof__V_811_811;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_823_823 = transform_hlds__size_prof__V_812_812;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_825_825 = transform_hlds__size_prof__V_814_814;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_826_826 = transform_hlds__size_prof__V_815_815;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_827_827 = transform_hlds__size_prof__V_816_816;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_828_828 = transform_hlds__size_prof__V_817_817;
#line 442 "size_prof.m"
                      transform_hlds__size_prof__V_829_829 = transform_hlds__size_prof__V_818_818;
#line 443 "size_prof.m"
                      {
#line 443 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (transform_hlds__size_prof__V_819_819));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (transform_hlds__size_prof__V_820_820));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_242));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (transform_hlds__size_prof__V_822_822));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (transform_hlds__size_prof__V_823_823));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_241));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (transform_hlds__size_prof__V_825_825));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (transform_hlds__size_prof__V_826_826));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 8) = ((MR_Box) (transform_hlds__size_prof__V_827_827));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (transform_hlds__size_prof__V_828_828));
#line 443 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 10) = ((MR_Box) (transform_hlds__size_prof__V_829_829));
#line 443 "size_prof.m"
                      }
#line 444 "size_prof.m"
                      {
#line 444 "size_prof.m"
                        transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Else0_77, &transform_hlds__size_prof__Else_84, transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, &transform_hlds__size_prof__STATE_VARIABLE_Info_122_122);
                      }
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_841_841 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__TypeInfoMapElse_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_842_842 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_843_843 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_844_844 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__KnownSizeMapElse_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_846_846 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_847_847 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_848_848 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_849_849 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 445 "size_prof.m"
                      transform_hlds__size_prof__V_850_850 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 448 "size_prof.m"
                      {
#line 448 "size_prof.m"
                        transform_hlds__size_prof__TypeInfoMap_243 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeInfoMapThen_81, transform_hlds__size_prof__TypeInfoMapElse_85);
                      }
#line 449 "size_prof.m"
                      {
#line 449 "size_prof.m"
                        transform_hlds__size_prof__KnownSizeMap_244 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_1036_1036, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapThen_82, transform_hlds__size_prof__KnownSizeMapElse_86);
                      }
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_861_861 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_862_862 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_863_863 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_864_864 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_865_865 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_866_866 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_867_867 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_868_868 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_869_869 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_870_870 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
#line 450 "size_prof.m"
                      transform_hlds__size_prof__V_871_871 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
#line 450 "size_prof.m"
                      {
#line 450 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 0) = ((MR_Box) (transform_hlds__size_prof__V_861_861));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_243));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 2) = ((MR_Box) (transform_hlds__size_prof__V_863_863));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 3) = ((MR_Box) (transform_hlds__size_prof__V_864_864));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 4) = ((MR_Box) (transform_hlds__size_prof__V_865_865));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 5) = ((MR_Box) (transform_hlds__size_prof__V_866_866));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 6) = ((MR_Box) (transform_hlds__size_prof__V_867_867));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 7) = ((MR_Box) (transform_hlds__size_prof__V_868_868));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 8) = ((MR_Box) (transform_hlds__size_prof__V_869_869));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 9) = ((MR_Box) (transform_hlds__size_prof__V_870_870));
#line 450 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 10) = ((MR_Box) (transform_hlds__size_prof__V_871_871));
#line 450 "size_prof.m"
                      }
#line 451 "size_prof.m"
                      {
#line 451 "size_prof.m"
                        transform_hlds__size_prof__V_125_125 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__TypeInfo_1036_1036);
                      }
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_872_872 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 0)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_873_873 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 1)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_874_874 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 2)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_875_875 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 3)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_876_876 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 4)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_877_877 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 5)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_878_878 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 6)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_879_879 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 7)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_880_880 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 8)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_881_881 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 9)));
#line 451 "size_prof.m"
                      transform_hlds__size_prof__V_882_882 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 10)));
#line 452 "size_prof.m"
                      {
#line 452 "size_prof.m"
                        transform_hlds__size_prof__STATE_VARIABLE_Info_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 0) = ((MR_Box) (transform_hlds__size_prof__V_125_125));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 1) = ((MR_Box) (transform_hlds__size_prof__V_873_873));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 2) = ((MR_Box) (transform_hlds__size_prof__V_874_874));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 3) = ((MR_Box) (transform_hlds__size_prof__V_875_875));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 4) = ((MR_Box) (transform_hlds__size_prof__V_876_876));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_244));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 6) = ((MR_Box) (transform_hlds__size_prof__V_878_878));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 7) = ((MR_Box) (transform_hlds__size_prof__V_879_879));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 8) = ((MR_Box) (transform_hlds__size_prof__V_880_880));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 9) = ((MR_Box) (transform_hlds__size_prof__V_881_881));
#line 452 "size_prof.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 10) = ((MR_Box) (transform_hlds__size_prof__V_882_882));
#line 452 "size_prof.m"
                      }
#line 453 "size_prof.m"
                      {
#line 453 "size_prof.m"
                        transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, &transform_hlds__size_prof__STATE_VARIABLE_Info_127_127);
                      }
#line 454 "size_prof.m"
                      {
#line 454 "size_prof.m"
                        transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_127_127, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                      }
#line 455 "size_prof.m"
                      {
#line 455 "size_prof.m"
                        transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 455 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 455 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Quant_74));
#line 455 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Cond_78));
#line 455 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Then_79));
#line 455 "size_prof.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 4) = ((MR_Box) (transform_hlds__size_prof__Else_84));
#line 455 "size_prof.m"
                      }
#line 420 "size_prof.m"
                    }
#line 311 "size_prof.m"
                  else
#line 311 "size_prof.m"
                    if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 476 "size_prof.m"
                      {
#line 476 "size_prof.m"
                        MR_Word transform_hlds__size_prof__Reason0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 476 "size_prof.m"
                        MR_Word transform_hlds__size_prof__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 476 "size_prof.m"
                        MR_Word transform_hlds__size_prof__Reason_92;
#line 476 "size_prof.m"
                        MR_Word transform_hlds__size_prof__SubGoal_93;
#line 482 "size_prof.m"
                        MR_Word transform_hlds__size_prof__TermVar_91;
#line 480 "size_prof.m"
                        MR_Word transform_hlds__size_prof__V_100_100;

#line 480 "size_prof.m"
                        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__Reason0_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 480 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 480 "size_prof.m"
                          {
#line 480 "size_prof.m"
                            transform_hlds__size_prof__TermVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 1)));
#line 480 "size_prof.m"
                            transform_hlds__size_prof__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 2)));
#line 480 "size_prof.m"
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__V_100_100 == (MR_Integer) 1);
#line 480 "size_prof.m"
                          }
#line 482 "size_prof.m"
                        if (transform_hlds__size_prof__succeeded)
#line 481 "size_prof.m"
                          {
#line 481 "size_prof.m"
                            {
#line 481 "size_prof.m"
                              transform_hlds__size_prof__Reason_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 481 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 481 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 1) = ((MR_Box) (transform_hlds__size_prof__TermVar_91));
#line 481 "size_prof.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 2) = ((MR_Box) ((MR_Integer) 3));
#line 481 "size_prof.m"
                            }
#line 481 "size_prof.m"
                          }
#line 482 "size_prof.m"
                        else
#line 483 "size_prof.m"
                          transform_hlds__size_prof__Reason_92 = transform_hlds__size_prof__Reason0_89;
#line 485 "size_prof.m"
                        {
#line 485 "size_prof.m"
                          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__SubGoal0_90, &transform_hlds__size_prof__SubGoal_93, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                        }
#line 486 "size_prof.m"
                        {
#line 486 "size_prof.m"
                          transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 486 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 486 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Reason_92));
#line 486 "size_prof.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__SubGoal_93));
#line 486 "size_prof.m"
                        }
#line 476 "size_prof.m"
                      }
#line 311 "size_prof.m"
                    else
#line 311 "size_prof.m"
                      if (((((MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 488 "size_prof.m"
                        {
#line 489 "size_prof.m"
                          {
#line 489 "size_prof.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
#line 489 "size_prof.m"
                            return;
                          }
#line 488 "size_prof.m"
                        }
#line 311 "size_prof.m"
                      else
#line 357 "size_prof.m"
                        {
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__SwitchVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__Cases_71;
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_155_155;
#line 357 "size_prof.m"
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_156_156;

#line 378 "size_prof.m"
                          if ((transform_hlds__size_prof__Cases0_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "size_prof.m"
                            {
#line 380 "size_prof.m"
                              {
#line 380 "size_prof.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
#line 380 "size_prof.m"
                                return;
                              }
#line 379 "size_prof.m"
                            }
#line 378 "size_prof.m"
                          else
#line 359 "size_prof.m"
                            {
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeCtorInfo_1028_1028;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfo_1029_1029;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__First0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 0)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__Later0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 1)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RevTypeCtorMap0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__First_67;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__Later_68;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfoMap_69;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__KnownSizeMap_70;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_149_149;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_150_150;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_151_151;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_152_152;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_154_154;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeInfoMap0_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__RevTypeInfoMap0_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__TypeCtorMap0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__KnownSizeMap0_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_493_493;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_494_494;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_496_496;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_497_497;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_499_499;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_500_500;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_501_501;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_502_502;
#line 359 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_503_503;
#line 360 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
#line 360 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
#line 360 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
#line 360 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
#line 360 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_471_471;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_473_473;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_474_474;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_475_475;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_476_476;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_477_477;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_478_478;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_479_479;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_480_480;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_481_481;
#line 371 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_472_472;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_483_483;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_484_484;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_485_485;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_486_486;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_487_487;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_488_488;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_489_489;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_490_490;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_491_491;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_492_492;
#line 374 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_482_482;
#line 375 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_495_495;
#line 375 "size_prof.m"
                              MR_Word transform_hlds__size_prof__V_498_498;

#line 366 "size_prof.m"
                              {
#line 366 "size_prof.m"
                                transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__First0_64, &transform_hlds__size_prof__First_67, transform_hlds__size_prof__Later0_65, &transform_hlds__size_prof__Later_68, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, transform_hlds__size_prof__TargetTypeInfoMap0_186, transform_hlds__size_prof__TypeInfoMap0_187, transform_hlds__size_prof__RevTypeInfoMap0_188, transform_hlds__size_prof__TypeCtorMap0_189, transform_hlds__size_prof__RevTypeCtorMap0_66, &transform_hlds__size_prof__TypeInfoMap_69, transform_hlds__size_prof__KnownSizeMap0_190, &transform_hlds__size_prof__KnownSizeMap_70);
                              }
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 0)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 1)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 2)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 3)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 4)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 5)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 6)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 7)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 8)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 9)));
#line 371 "size_prof.m"
                              transform_hlds__size_prof__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 10)));
#line 371 "size_prof.m"
                              {
#line 371 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 0) = ((MR_Box) (transform_hlds__size_prof__V_471_471));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_69));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 2) = ((MR_Box) (transform_hlds__size_prof__V_473_473));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 3) = ((MR_Box) (transform_hlds__size_prof__V_474_474));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 4) = ((MR_Box) (transform_hlds__size_prof__V_475_475));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 5) = ((MR_Box) (transform_hlds__size_prof__V_476_476));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 6) = ((MR_Box) (transform_hlds__size_prof__V_477_477));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 7) = ((MR_Box) (transform_hlds__size_prof__V_478_478));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 8) = ((MR_Box) (transform_hlds__size_prof__V_479_479));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 9) = ((MR_Box) (transform_hlds__size_prof__V_480_480));
#line 371 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 10) = ((MR_Box) (transform_hlds__size_prof__V_481_481));
#line 371 "size_prof.m"
                              }
#line 13048 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__TypeCtorInfo_1028_1028 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 13050 "transform_hlds.size_prof.c"
                              transform_hlds__size_prof__TypeInfo_1029_1029 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 374 "size_prof.m"
                              {
#line 374 "size_prof.m"
                                transform_hlds__size_prof__V_152_152 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1028_1028, transform_hlds__size_prof__TypeInfo_1029_1029);
                              }
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 0)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 1)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 2)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 3)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 4)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 5)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 6)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 7)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_490_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 8)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 9)));
#line 374 "size_prof.m"
                              transform_hlds__size_prof__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 10)));
#line 374 "size_prof.m"
                              {
#line 374 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (transform_hlds__size_prof__V_152_152));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (transform_hlds__size_prof__V_483_483));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (transform_hlds__size_prof__V_484_484));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (transform_hlds__size_prof__V_485_485));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (transform_hlds__size_prof__V_486_486));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (transform_hlds__size_prof__V_487_487));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (transform_hlds__size_prof__V_488_488));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (transform_hlds__size_prof__V_489_489));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 8) = ((MR_Box) (transform_hlds__size_prof__V_490_490));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 9) = ((MR_Box) (transform_hlds__size_prof__V_491_491));
#line 374 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 10) = ((MR_Box) (transform_hlds__size_prof__V_492_492));
#line 374 "size_prof.m"
                              }
#line 375 "size_prof.m"
                              {
#line 375 "size_prof.m"
                                transform_hlds__size_prof__V_154_154 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1029_1029, transform_hlds__size_prof__TypeCtorInfo_1028_1028);
                              }
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 8)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 9)));
#line 375 "size_prof.m"
                              transform_hlds__size_prof__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 10)));
#line 376 "size_prof.m"
                              {
#line 376 "size_prof.m"
                                transform_hlds__size_prof__STATE_VARIABLE_Info_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 0) = ((MR_Box) (transform_hlds__size_prof__V_493_493));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 1) = ((MR_Box) (transform_hlds__size_prof__V_494_494));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 2) = ((MR_Box) (transform_hlds__size_prof__V_154_154));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 3) = ((MR_Box) (transform_hlds__size_prof__V_496_496));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 4) = ((MR_Box) (transform_hlds__size_prof__V_497_497));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_70));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 6) = ((MR_Box) (transform_hlds__size_prof__V_499_499));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 7) = ((MR_Box) (transform_hlds__size_prof__V_500_500));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 8) = ((MR_Box) (transform_hlds__size_prof__V_501_501));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 9) = ((MR_Box) (transform_hlds__size_prof__V_502_502));
#line 376 "size_prof.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 10) = ((MR_Box) (transform_hlds__size_prof__V_503_503));
#line 376 "size_prof.m"
                              }
#line 377 "size_prof.m"
                              {
#line 377 "size_prof.m"
                                transform_hlds__size_prof__Cases_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "size_prof.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 0) = ((MR_Box) (transform_hlds__size_prof__First_67));
#line 377 "size_prof.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 1) = ((MR_Box) (transform_hlds__size_prof__Later_68));
#line 377 "size_prof.m"
                              }
#line 359 "size_prof.m"
                            }
#line 382 "size_prof.m"
                          {
#line 382 "size_prof.m"
                            transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, &transform_hlds__size_prof__STATE_VARIABLE_Info_156_156);
                          }
#line 383 "size_prof.m"
                          {
#line 383 "size_prof.m"
                            transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_156_156, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                          }
#line 384 "size_prof.m"
                          {
#line 384 "size_prof.m"
                            transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 384 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 384 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__SwitchVar_61));
#line 384 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__CanFail_62));
#line 384 "size_prof.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Cases_71));
#line 384 "size_prof.m"
                          }
#line 357 "size_prof.m"
                        }
#line 491 "size_prof.m"
    {
#line 491 "size_prof.m"
      MR_Word base;
#line 491 "size_prof.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "size_prof.m"
      *transform_hlds__size_prof__Goal_6 = base;
#line 491 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__GoalExpr_22));
#line 491 "size_prof.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo0_9));
#line 491 "size_prof.m"
    }
#line 275 "size_prof.m"
  }
#line 272 "size_prof.m"
}

#line 253 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__closure_arg,
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
#line 253 "size_prof.m"
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
#line 253 "size_prof.m"
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
#line 253 "size_prof.m"
{
#line 253 "size_prof.m"
  {
#line 253 "size_prof.m"
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
#line 253 "size_prof.m"
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14;

#line 253 "size_prof.m"
    {
#line 253 "size_prof.m"
      transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14);
    }
#line 253 "size_prof.m"
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14));
#line 253 "size_prof.m"
  }
#line 253 "size_prof.m"
}

#line 226 "size_prof.m"
static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__Transform_7,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
#line 226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
#line 226 "size_prof.m"
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
#line 226 "size_prof.m"
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40)
#line 226 "size_prof.m"
{
#line 231 "size_prof.m"
  {
#line 231 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_85_85;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfo_86_86;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorInfo_87_87;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "size_prof.m"
    MR_Integer transform_hlds__size_prof__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__SimplifyTasks_12;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal0_13;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet0_14;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes0_15;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstMap0_16;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps0_17;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeCtorMap0_18;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TypeInfoMap0_19;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_20;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_21;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_22;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__KnownSizeMap0_23;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info0_24;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__TVars_25;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info1_26;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal1_27;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Info_28;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__HeadVars_29;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__InstVarSet_30;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal2_32;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarSet_33;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__VarTypes_34;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__RttiVarMaps_35;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__Goal_36;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_44_44;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_46_46;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_61_61;
#line 231 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_63_63;
#line 253 "size_prof.m"
    MR_Box transform_hlds__size_prof__conv1_Info1_26;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_55_55;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_56_56;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_57_57;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_58_58;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_59_59;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_60_60;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_62_62;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof__V_64_64;
#line 261 "size_prof.m"
    MR_Word transform_hlds__size_prof___Warnings_31;

#line 232 "size_prof.m"
    {
#line 232 "size_prof.m"
      transform_hlds__size_prof__SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 233 "size_prof.m"
    {
#line 233 "size_prof.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(transform_hlds__size_prof__SimplifyTasks_12, transform_hlds__size_prof__PredId_8, transform_hlds__size_prof__ProcId_9, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 235 "size_prof.m"
    {
#line 235 "size_prof.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__Goal0_13);
    }
#line 236 "size_prof.m"
    {
#line 236 "size_prof.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarSet0_14);
    }
#line 237 "size_prof.m"
    {
#line 237 "size_prof.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarTypes0_15);
    }
#line 238 "size_prof.m"
    {
#line 238 "size_prof.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__size_prof__InstMap0_16);
    }
#line 239 "size_prof.m"
    {
#line 239 "size_prof.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__RttiVarMaps0_17);
    }
#line 13404 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 13406 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeInfo_86_86 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
#line 242 "size_prof.m"
    {
#line 242 "size_prof.m"
      transform_hlds__size_prof__TypeCtorMap0_18 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_85_85, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 13413 "transform_hlds.size_prof.c"
    transform_hlds__size_prof__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 243 "size_prof.m"
    {
#line 243 "size_prof.m"
      transform_hlds__size_prof__TypeInfoMap0_19 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 244 "size_prof.m"
    {
#line 244 "size_prof.m"
      transform_hlds__size_prof__RevTypeCtorMap0_20 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_85_85);
    }
#line 245 "size_prof.m"
    {
#line 245 "size_prof.m"
      transform_hlds__size_prof__RevTypeInfoMap0_21 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_87_87);
    }
#line 246 "size_prof.m"
    {
#line 246 "size_prof.m"
      transform_hlds__size_prof__TargetTypeInfoMap0_22 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
#line 247 "size_prof.m"
    {
#line 247 "size_prof.m"
      transform_hlds__size_prof__KnownSizeMap0_23 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 248 "size_prof.m"
    {
#line 248 "size_prof.m"
      transform_hlds__size_prof__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_18));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_19));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_20));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_21));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_22));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_23));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet0_14));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes0_15));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 8) = ((MR_Box) (transform_hlds__size_prof__Transform_7));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
#line 248 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 10) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42));
#line 248 "size_prof.m"
    }
#line 252 "size_prof.m"
    {
#line 252 "size_prof.m"
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(transform_hlds__size_prof__RttiVarMaps0_17, &transform_hlds__size_prof__TVars_25);
    }
#line 253 "size_prof.m"
    {
#line 253 "size_prof.m"
      transform_hlds__size_prof__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 253 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[0]));
#line 253 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_6_p_0_1));
#line 253 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 253 "size_prof.m"
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__V_44_44, 3) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
#line 253 "size_prof.m"
    }
#line 253 "size_prof.m"
    {
#line 253 "size_prof.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[1], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_info_0, transform_hlds__size_prof__V_44_44, transform_hlds__size_prof__TVars_25, ((MR_Box) (transform_hlds__size_prof__Info0_24)), &transform_hlds__size_prof__conv1_Info1_26);
    }
#line 253 "size_prof.m"
    transform_hlds__size_prof__Info1_26 = ((MR_Word) transform_hlds__size_prof__conv1_Info1_26);
#line 255 "size_prof.m"
    {
#line 255 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_13, &transform_hlds__size_prof__Goal1_27, transform_hlds__size_prof__Info1_26, &transform_hlds__size_prof__Info_28);
    }
#line 259 "size_prof.m"
    {
#line 259 "size_prof.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__HeadVars_29);
    }
#line 260 "size_prof.m"
    {
#line 260 "size_prof.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__InstVarSet_30);
    }
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 0)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 1)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 2)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 3)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 4)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 5)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 6)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 7)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 8)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 9)));
#line 261 "size_prof.m"
    transform_hlds__size_prof__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 10)));
#line 261 "size_prof.m"
    {
#line 261 "size_prof.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__size_prof__HeadVars_29, &transform_hlds__size_prof___Warnings_31, transform_hlds__size_prof__Goal1_27, &transform_hlds__size_prof__Goal2_32, transform_hlds__size_prof__V_46_46, &transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__V_61_61, &transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__V_63_63, &transform_hlds__size_prof__RttiVarMaps_35);
    }
#line 265 "size_prof.m"
    {
#line 265 "size_prof.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__size_prof__Goal2_32, &transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__InstVarSet_30, transform_hlds__size_prof__InstMap0_16, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);
    }
#line 267 "size_prof.m"
    {
#line 267 "size_prof.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51);
    }
#line 268 "size_prof.m"
    {
#line 268 "size_prof.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52);
    }
#line 269 "size_prof.m"
    {
#line 269 "size_prof.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53);
    }
#line 270 "size_prof.m"
    {
#line 270 "size_prof.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__size_prof__RttiVarMaps_35, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38);
#line 270 "size_prof.m"
      return;
    }
#line 231 "size_prof.m"
  }
#line 226 "size_prof.m"
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
#line 215 "size_prof.m"
  {
#line 215 "size_prof.m"
    MR_bool transform_hlds__size_prof__succeeded;

#line 217 "size_prof.m"
    {
#line 217 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Adding typeinfos in ", transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14);
    }
#line 220 "size_prof.m"
    {
#line 220 "size_prof.m"
      transform_hlds__size_prof__size_prof_process_proc_6_p_0(transform_hlds__size_prof__Transform_7, transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
#line 222 "size_prof.m"
    {
#line 222 "size_prof.m"
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "done.\n", transform_hlds__size_prof__PredProcId_8, *transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
#line 222 "size_prof.m"
      return;
    }
#line 215 "size_prof.m"
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
